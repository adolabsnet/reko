#region License
/* 
 * Copyright (C) 1999-2018 John Källén.
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
using Reko.Analysis;
using Reko.Core;
using Reko.UnitTests.Mocks;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

namespace Reko.UnitTests.Analysis
{
    [TestFixture]
    public class StackPointerBackpropagatorTests
    {
        private Program program;

        [SetUp]
        public void Setup()
        {
            var arch = new FakeArchitecture();
            var platform = new FakePlatform(null, arch);
            this.program = new Program
            {
                Architecture = arch,
                Platform  = platform,
            };
        }

        private void AssertStringsEqual(string sExp, SsaState ssa)
        {
            var sw = new StringWriter();
            ssa.Procedure.Write(false, sw);
            var sActual = sw.ToString();
            if (sExp != sActual)
            {
                Debug.Print("{0}", sActual);
                Assert.AreEqual(sExp, sActual);
            }
        }

        private SsaState RunTest(ProcedureBuilder m)
        {
            var proc = m.Procedure;
            var scc = new HashSet<Procedure> { proc };
            var sst = new SsaTransform(program, m.Procedure, scc, null, null);
            sst.Transform();
            sst.AddUsesToExitBlock();
            var ssa = sst.SsaState;
            var spbp = new StackPointerBackpropagator(ssa);
            spbp.BackpropagateStackPointer();
            return ssa;
        }

        [Test]
        public void Spbp_LinearProcedure()
        {
            var m = new ProcedureBuilder(program.Architecture);

            var fp = m.Frame.FramePointer;
            var sp = m.Frame.EnsureRegister(m.Architecture.StackRegister);
            var r1 = m.Reg32("r1");
            var r2 = m.Reg32("r2");
            m.Assign(sp, fp);
            m.Assign(sp, m.ISub(sp, m.Int32(4)));
            m.MStore(sp, r1);
            m.Call(r2, 4);      // Indirect call = hell node
            m.Assign(r1, m.Mem32(sp));
            m.Assign(sp, m.IAdd(sp, m.Int32(4)));
            m.Return();

            SsaState ssa = RunTest(m);

            var sExp =
            #region Expected
@"// ProcedureBuilder
// Return size: 0
define ProcedureBuilder
ProcedureBuilder_entry:
	def fp
	def r1
	def r2
	// succ:  l1
l1:
	r63_2 = fp
	r63_3 = r63_2 - 4
	Mem5[r63_3:word32] = r1
	call r2 (retsize: 4;)
		uses: r1:r1,r2:r2,r63:r63_3
		defs: r1:r1_8,r2:r2_9
	r63_7 = fp - 4
	r1_10 = Mem5[r63_7:word32]
	r63_11 = r63_7 + 4
	return
	// succ:  ProcedureBuilder_exit
ProcedureBuilder_exit:
	use r1_10
	use r2_9
	use r63_11
";
            #endregion
            AssertStringsEqual(sExp, ssa);
        }

        [Test(Description = "This mirrors real world code which has more than one epilog")]
        [Ignore("It would be nice if this passed.")]
        public void Spbp_TwoExits()
        {
            var m = new ProcedureBuilder(program.Architecture);

            var fp = m.Frame.FramePointer;
            var sp = m.Frame.EnsureRegister(m.Architecture.StackRegister);
            var r1 = m.Reg32("r1");
            var r2 = m.Reg32("r2");
            var r3 = m.Reg32("r3");
            m.Assign(sp, fp);
            m.Assign(sp, m.ISub(sp, m.Int32(4)));
            m.MStore(sp, r1);
            m.BranchIf(m.Eq0(r3), "m_eq0");

            m.Label("m_ne0");
            m.Call(m.Mem32(m.IAdd(r2, 4)), 4);      // Indirect call = hell node
            m.Assign(r1, m.Mem32(sp));
            m.Assign(sp, m.IAdd(sp, m.Int32(4)));
            m.Return();

            m.Label("m_eq0");
            m.Call(m.Mem32(m.IAdd(r2, 8)), 4);      // Indirect call = hell node
            m.Assign(r1, m.Mem32(sp));
            m.Assign(sp, m.IAdd(sp, m.Int32(4)));
            m.Return();

            SsaState ssa = RunTest(m);

            var sExp =
            #region Expected
@"// ProcedureBuilder
// Return size: 0
define ProcedureBuilder
ProcedureBuilder_entry:
	def fp
	def r1
	def r3
	def r2
	// succ:  l1
l1:
	r63_2 = fp
	r63_3 = r63_2 - 4
	Mem5[r63_3:word32] = r1
	branch r3 == 0x00000000 m_eq0
	goto m_ne0
	// succ:  m_ne0 m_eq0
m_eq0:
	call Mem5[r2 + 0x00000008:word32] (retsize: 4;)
		uses: r1:r1,r2:r2,r3:r3,r63:r63_3
		defs: r1:r1_9,r2:r2_10,r3:r3_11,r63:r63_8
	r63_14 = fp - 4
	r1_12 = Mem5[r63_8:word32]
	r63_13 = r63_8 + 4
	return
	// succ:  ProcedureBuilder_exit
m_ne0:
	call Mem5[r2 + 0x00000004:word32] (retsize: 4;)
		uses: r1:r1,r2:r2,r3:r3,r63:r63_3
		defs: r1:r1_15,r2:r2_16,r3:r3_17
	r63_14 = fp - 4
	r1_18 = Mem5[r63_14:word32]
	r63_19 = r63_14 + 4
	return
	// succ:  ProcedureBuilder_exit
ProcedureBuilder_exit:
	r63_23 = PHI(r63_19, r63_13)
	r3_22 = PHI(r3_17, r3_11)
	r2_21 = PHI(r2_16, r2_10)
	r1_20 = PHI(r1_18, r1_12)
	use r1_20
	use r2_21
	use r3_22
	use r63_23
";
            #endregion
            AssertStringsEqual(sExp, ssa);
        }

    }
}
