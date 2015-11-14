#region License
/* 
 * Copyright (C) 1999-2015 John K�ll�n.
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

using NUnit.Framework;
using Reko.Arch.X86;
using Reko.Core;
using Reko.Core.Expressions;
using Reko.Core.Services;
using Reko.Core.Types;
using Reko.Environments.Msdos;
using System;
using System.ComponentModel.Design;

namespace Reko.UnitTests.Arch.Intel
{
	[TestFixture]
	public class MsDosPlatformTests
	{
        private ServiceContainer sc;

        [SetUp]
        public void Setup()
        {
            sc = new ServiceContainer();
            sc.AddService<IFileSystemService>(new FileSystemServiceImpl());
        }

		[Test]
		public void MspRealModeServices()
		{
			IntelArchitecture arch = new IntelArchitecture(ProcessorMode.Real);
			Platform platform = new MsdosPlatform(sc, arch);

			var state = arch.CreateProcessorState();
			state.SetRegister(Registers.ah, Constant.Byte(0x3E));
			SystemService svc = platform.FindService(0x21, state);
			Assert.AreEqual("msdos_close_file", svc.Name);
			Assert.AreEqual(1, svc.Signature.Parameters.Length);
			Assert.IsFalse(svc.Characteristics.Terminates, "close() shouldn't terminate program");

			state.SetRegister(Registers.ah, Constant.Byte(0x4C));
			svc = platform.FindService(0x21, state);
			Assert.AreEqual("msdos_terminate", svc.Name);
			Assert.AreEqual(1, svc.Signature.Parameters.Length);
			Assert.IsTrue(svc.Characteristics.Terminates, "terminate() should terminate program");

			state.SetRegister(Registers.ah, Constant.Byte(0x2F));
			svc = platform.FindService(0x21, state);
			Assert.AreEqual("msdos_get_disk_transfer_area_address", svc.Name);
			Assert.AreEqual(0, svc.Signature.Parameters.Length);
			SequenceStorage seq = (SequenceStorage) svc.Signature.ReturnValue.Storage;
			Assert.AreEqual("es", seq.Head.Name);
			Assert.AreEqual("bx", seq.Tail.Name);
		}
	}
}
