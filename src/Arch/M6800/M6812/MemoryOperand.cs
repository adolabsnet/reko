﻿#region License
/* 
 * Copyright (C) 1999-2019 John Källén.
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
using Reko.Core.Machine;
using Reko.Core.Types;
using System;

namespace Reko.Arch.M6800.M6812
{
    public class MemoryOperand : MachineOperand
    {
        public MemoryOperand(PrimitiveType width) : base(width)
        {
        }

        public RegisterStorage Base { get; set; }
        public RegisterStorage Index { get; set; }
        public short? Offset { get; set; }
        public bool PreIncrement { get; internal set; }
        public bool PostIncrement { get; internal set; }
        public bool Indirect { get; internal set; }

        public override void Write(MachineInstructionWriter writer, MachineInstructionWriterOptions options)
        {
            if (Base != null)
            {
                if (Indirect)
                    writer.WriteChar('[');
                if (PreIncrement)
                {
                    writer.WriteFormat("${0:X2},{1}{2}",
                        Math.Abs(Offset.Value),
                        Offset.Value > 0 ? "+" : "-",
                        Base.Name);
                }
                else if (PostIncrement)
                {
                    writer.WriteFormat("${0:X2},{1}{2}",
                        Math.Abs(Offset.Value),
                        Base.Name,
                        Offset.Value > 0 ? "+" : "-");
                }
                else if (Offset != null)
                {
                    writer.WriteFormat("${0:X4},{1}", Offset.Value, Base.Name);
                } 
                else
                {
                    writer.WriteFormat("{0},{1}", Index.Name, Base.Name);
                }
                if (Indirect)
                    writer.WriteChar(']');
                return;
            }
            else if (Offset != null)
            {
                // Absolute address
                writer.WriteFormat("${0:X4}", (ushort)Offset.Value);
                return;
            }
            throw new System.NotImplementedException();
        }
    }
}