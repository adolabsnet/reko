﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Core.Lib;
using Reko.Core.Machine;
using Reko.Scanning;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Reko.Gui.Windows.Forms
{
    public class JumpTableInteractor
    {
        private JumpTableDialog dlg;

        public void Attach(JumpTableDialog dlg)
        {
            this.dlg = dlg;
            dlg.IsIndirectTable.CheckedChanged += IsIndirectTable_CheckedChanged;
            dlg.Load += Dlg_Load;
            dlg.FormClosing += Dlg_FormClosing;
            dlg.EntryCount.ValueChanged += EntryCount_ValueChanged;
            dlg.Entries.SelectedIndexChanged += Entries_SelectedIndexChanged;
        }

        private void Dlg_Load(object sender, EventArgs e)
        {
            dlg.CaptionLabel.Text = string.Format("Jump table for {0}", dlg.Instruction.Address);
            dlg.InstructionLabel.Text = dlg.Instruction.ToString().Replace('\t', ' ');
            if (dlg.VectorAddress != null)
            {
                dlg.JumpTableStartAddress.Text = dlg.VectorAddress.ToString();
            }
            EnableSegmentedPanel(dlg.Program.SegmentMap.BaseAddress.Selector.HasValue);
            dlg.IndexRegister.DataSource = dlg.Program.Architecture.GetRegisters().ToList();
            dlg.SegmentList.DataSource = dlg.Program.SegmentMap.Segments.Values
                .Select(s => s.Name)
                .OrderBy(s => s)
                .ToList();
        }

        private void Dlg_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (dlg.DialogResult != DialogResult.OK)
                return;
            Address addr;
            if (dlg.Program.Platform.TryParseAddress(dlg.JumpTableStartAddress.Text, out addr))
            {
                dlg.VectorAddress = addr;
            }
        }

        private void EntryCount_ValueChanged(object sender, EventArgs e)
        {
            var vectorBuilder = new VectorBuilder(null, dlg.Program, null);
            var addresses = new List<Address>();
            Address addrTable;
            if (dlg.Program.Platform.TryParseAddress(dlg.JumpTableStartAddress.Text, out addrTable))
            {
                var stride = dlg.Program.Platform.PointerType.Size;
                var state = dlg.Program.Architecture.CreateProcessorState();
                state.SetInstructionPointer(dlg.Instruction.Address);
                addresses = vectorBuilder.BuildTable(addrTable, stride * (int) dlg.EntryCount.Value, null, stride, state);
            }
            dlg.Entries.DataSource = addresses;
        }

        private void Entries_SelectedIndexChanged(object sender, EventArgs e)
        {
            var addr = (Address)dlg.Entries.SelectedItem;
            string text;
            if (addr != null)
            {
                var dasm = dlg.Program.CreateDisassembler(addr);
                text = string.Join(
                    Environment.NewLine,
                    dasm.TakeWhile(i => (i.InstructionClass & InstructionClass.Transfer) == 0)
                        .Select(i => i.ToString()));
            }
            else
            {
                text = "";
            }
            dlg.Disassembly.Text = text;
        }

        private void EnableSegmentedPanel(bool hasValue)
        {
            //foreach (Control control in dlg.SegmentedAddressPanel.Controls)
            //{
            //    control.Enabled = hasValue;
            //}
            if (hasValue)
            {
                dlg.SegmentList.DataSource = dlg.Program.SegmentMap.Segments.Values
                    .Select(seg => new ListOption { Text = seg.Name, Value = seg.Address })
                    .ToList();
            }
        }

        private void EnableControls()
        {
            dlg.IndirectTable.Enabled = dlg.IsIndirectTable.Checked;
            dlg.IndirectLabel.Enabled = dlg.IsIndirectTable.Checked;
        }

        private void IsIndirectTable_CheckedChanged(object sender, EventArgs e)
        {
            EnableControls();
        }

        public UserIndirectJump GetResults()
        {
            var vb = new VectorBuilder(dlg.Services, dlg.Program, new DirectedGraphImpl<object>());
            var stride = 4; //$TODO: get from dialog
            var entries = vb.BuildTable(dlg.VectorAddress, stride * (int)dlg.EntryCount.Value, null, stride, null);
            var table =  new ImageMapVectorTable(dlg.VectorAddress, entries.ToArray(), 0);
            return new UserIndirectJump
            {
                Address = dlg.Instruction.Address,
                Table = table,
                IndexRegister = dlg.Program.Architecture.GetRegister(dlg.IndexRegister.SelectedIndex.ToString())
            };
        }
    }
}
