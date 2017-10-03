#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
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

using System.Linq;
using Reko.Core;
using Reko.Core.Machine;
using Reko.Core.Types;
using NUnit.Framework;

using System;
using Rhino.Mocks;

namespace Reko.UnitTests.Core
{
	[TestFixture]
	public class StorageTests
	{
        private Storage eax;
        private Storage ax;
        private Storage al;
        private Storage ah;

        private FlagRegister freg;
        private FlagGroupStorage szc;
        private FlagGroupStorage sz;
        private FlagGroupStorage c;
        private FlagGroupStorage z;
        private FlagGroupStorage s;

        public StorageTests()
        {
            this.eax = new RegisterStorage("eax", 0, 0, PrimitiveType.Word32);
            this.ax = new RegisterStorage("ax", 0, 0, PrimitiveType.Word16);
            this.al = new RegisterStorage("al", 0, 0, PrimitiveType.Byte);
            this.ah = new RegisterStorage("ah", 0, 8, PrimitiveType.Byte);

            this.freg = new FlagRegister("eflags", 70, PrimitiveType.Word32);
            this.szc = new FlagGroupStorage(freg, 0x7, "szc", PrimitiveType.Byte);
            this.sz = new FlagGroupStorage(freg, 0x6, "sz", PrimitiveType.Byte);
            this.c = new FlagGroupStorage(freg, 0x1, "c", PrimitiveType.Bool);
            this.z = new FlagGroupStorage(freg, 0x2, "z", PrimitiveType.Bool);
            this.s = new FlagGroupStorage(freg, 0x4, "s", PrimitiveType.Bool);
        }

        [Test]
        public void Stg_RegistersOverlap()
        {
            Assert.IsTrue(eax.OverlapsWith(eax));
            Assert.IsTrue(eax.OverlapsWith(ax));
            Assert.IsTrue(eax.OverlapsWith(al));
            Assert.IsTrue(eax.OverlapsWith(ah));
            Assert.IsFalse(al.OverlapsWith(ah));
        }

        [Test]
        public void Stg_RegistersCover()
        {
            Assert.IsTrue(eax.Covers(eax));
            Assert.IsTrue(eax.Covers(ax));
            Assert.IsFalse(ax.Covers(eax));
            Assert.IsTrue(ax.Covers(al));
            Assert.IsFalse(ah.Covers(al));
        }

        [Test]
        public void Stg_FlagGroupsOverlap()
        {
            Assert.IsTrue(szc.OverlapsWith(szc));
            Assert.IsTrue(szc.OverlapsWith(sz));
            Assert.IsTrue(sz.OverlapsWith(szc));
            Assert.IsTrue(c.OverlapsWith(szc));
            Assert.IsFalse(c.OverlapsWith(sz));
            Assert.IsFalse(sz.OverlapsWith(c));
        }

        [Test]
        public void Stg_FlagGroupsCover()
        {
            Assert.IsTrue(szc.Covers(szc));
            Assert.IsTrue(szc.Covers(sz));
            Assert.IsFalse(sz.Covers(szc));
            Assert.IsFalse(c.Covers(szc));
            Assert.IsFalse(c.Covers(sz));
            Assert.IsFalse(sz.Covers(c));
        }
    }
}
