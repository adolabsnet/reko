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
using Reko.Core.Serialization;
using Reko.Core.Services;
using Reko.Environments.Msdos;
using Reko.UnitTests.Mocks;
using Rhino.Mocks;
using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Text;

namespace Reko.UnitTests
{
    [TestFixture]
    public class DecompilerTests
    {
        MockRepository mr;
        ILoader loader;
        TestDecompiler decompiler;
        private ServiceContainer sc;

        [SetUp]
        public void Setup()
        {
            mr = new MockRepository();
            var config = new FakeDecompilerConfiguration();
            var host = new FakeDecompilerHost();
            sc = new ServiceContainer();
            loader = mr.StrictMock<ILoader>();
            sc.AddService<DecompilerEventListener>(new FakeDecompilerEventListener());
            sc.AddService<IFileSystemService>(new FileSystemServiceImpl());
            sc.AddService<DecompilerHost>(host);
            loader.Replay();
            decompiler = new TestDecompiler(loader, sc);
            loader.BackToRecord();
        }

        [Test]
        public void Dec_LoadProjectFileNoBom()
        {
            byte [] bytes = new byte[1000];
            loader.Stub(l => l.LoadImageBytes("test.dcproject", 0))
                .Return(new UTF8Encoding(false).GetBytes("<?xml version=\"1.0\" encoding=\"UTF-8\"?><project xmlns=\"http://schemata.jklnet.org/Reko/v3\">" +
                    "<input><filename>foo.bar</filename></input></project>"));
            loader.Stub(l => l.LoadImageBytes("foo.bar", 0)).Return(bytes);
            loader.Stub(l => l.LoadExecutable(null, null, null)).IgnoreArguments().Return(new Program());
            mr.ReplayAll();

            decompiler.Load("test.dcproject");

            Assert.AreEqual("foo.bar", decompiler.Project.Programs[0].Filename);
            mr.VerifyAll();
        }

        [Test]
        public void Dec_LoadCallSignatures()
        {
            var arch = new IntelArchitecture(ProcessorMode.Real);
            Program program = new Program { 
                Architecture = arch,
                Platform = new MsdosPlatform(sc, arch)
            };
            decompiler.Project = new Project
            {
                Programs = { program },
            };
            List<SerializedCall_v1> al = new List<SerializedCall_v1>();
            SerializedSignature sig = new SerializedSignature();
            sig.Arguments = new Argument_v1[] {
			    new Argument_v1 {
			        Kind = new Register_v1("ds")
                },
                new Argument_v1 {
			        Kind = new Register_v1("bx"),
                }
            };
            al.Add(new SerializedCall_v1(Address.SegPtr(0x0C32, 0x3200), sig));
            var sigs = decompiler.LoadCallSignatures(program, al);

            ProcedureSignature ps = sigs[Address.SegPtr(0x0C32, 0x3200)];
            Assert.IsNotNull(ps, "Expected a call signature for address");
        }
    }

    public class TestDecompiler : DecompilerDriver
    {
        public TestDecompiler(ILoader loader, IServiceProvider sp)
            : base(loader, sp)
        {
        }
    }
}
