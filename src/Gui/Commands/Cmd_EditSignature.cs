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
using Reko.Core.Services;
using Reko.Gui.Windows.Forms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Reko.Gui.Commands
{
    public class Cmd_EditSignature : Command
    {
        private Program program;
        private Procedure procedure;
        private Address address;

        public Cmd_EditSignature(IServiceProvider services, Program program, Procedure procedure, Address addr)
            : base(services)
        {
            this.program = program;
            this.procedure = procedure;
            this.address = addr;
        }

        public override void DoIt()
        {
            var dlgFactory = Services.RequireService<IDialogFactory>();
            var uiSvc = Services.RequireService<IDecompilerShellUiService>();
            var platform = program.Platform;
            var ser = platform.CreateProcedureSerializer(new TypeLibraryDeserializer(platform, true), "stdapi");
            var sProc = ser.Serialize(procedure, address);
            //$REVIEW: use dialog factory.
            var i = new ProcedureDialogInteractor(platform.Architecture, sProc);
            using (ProcedureDialog dlg = i.CreateDialog())
            {
                if (DialogResult.OK == uiSvc.ShowModalDialog(dlg))
                {
                    program.User.Procedures[address] =
                        i.SerializedProcedure;
                    ser = platform.CreateProcedureSerializer(new TypeLibraryDeserializer(platform, true), "stdapi");
                    procedure.Signature =
                        ser.Deserialize(i.SerializedProcedure.Signature, procedure.Frame);

                    // canAdvance = false;
                }
            }
        }
    }
}
