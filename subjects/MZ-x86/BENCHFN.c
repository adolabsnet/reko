// BENCHFN.c
// Generated by decompiling BENCHFN.EXE
// using Reko decompiler version 0.6.1.0.

#include "BENCHFN.h"

void fn0800_01FA()
{
	return;
}

void fn0800_01FF()
{
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	fn0800_01FA();
	return;
}

void fn0800_0222()
{
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	fn0800_01FF();
	return;
}

void fn0800_0245()
{
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	fn0800_0222();
	return;
}

void main(Eq_64 * ds)
{
	Eq_65 di_13;
	word16 bx_14 = fn0800_0E4B(ds, 404, out di_13);
	fn0800_16D4(bx_14, di_13, ds, 0x01B0);
	word16 di_36;
	fn0800_0E4B(ds, 0x01B4, out di_36);
	ci16 wLoc08_40 = 0x00;
	cu16 wLoc0A_41 = 0x01;
	while (wLoc08_40 < wLoc04 || wLoc08_40 <= wLoc04 && wLoc0A_41 <= wLoc06)
	{
		wLoc0A_41 = wLoc0A_41 + 0x01;
		wLoc08_40 = v14;
	}
	word16 di_69;
	fn0800_0E4B(ds, 0x01CE, out di_69);
	return;
}

word16 fn0800_0E4B(Eq_64 * ds, word16 wArg02, ptr16 & diOut)
{
	word16 di_20;
	word16 bx_21 = fn0800_1073(ds, wArg02, out di_20);
	return bx_21;
}

word16 fn0800_1073(Eq_64 * ds, word16 wArg04, ptr16 & diOut)
{
	ci8 bLoc57_110 = 0x50;
	mp16 sp_162 = fp - 0xA0;
	byte Eq_64::* di_108 = fp - 0x56;
	byte Eq_64::* si_106 = wArg04;
	while (true)
	{
		byte al_41 = ds->*si_106;
		si_106 = si_106 + 0x01;
		byte al_102 = al_41;
		ax = DPB(ax, al_41, 0);
		if (al_41 == 0x00)
			break;
		if (al_41 == 0x25)
		{
			al_102 = ds->*si_106;
			ax = DPB(ax, al_102, 0);
			si_106 = si_106 + 0x01;
			if (al_102 != 0x25)
			{
				byte bLoc8F_129 = 0x00;
				while (true)
				{
					word16 ax_140 = DPB(ax, 0x00, 8);
					cu8 bl_144 = (byte) ax_140;
					byte dl_142 = (byte) ax_140;
					struct Eq_197 Eq_64::* bx_146 = DPB(ax_140, bl_144 - 0x20, 0);
					if (bl_144 >= 0x80)
						break;
					cu16 bx_183 = DPB(ax_140, (ds->*bx_146).b04F9, 0);
					if (bx_183 > 0x17)
						goto l0800_1560;
					if (true)
						break;
					if (bLoc8F_129 != 0x2B)
						bLoc8F_129 = dl_142;
					ax = DPB(ax_140, ds->*si_106, 0);
					si_106 = si_106 + 0x01;
				}
l0800_1560:
				byte Eq_64::* si_155 = si_106;
				byte al_157 = 0x25;
				do
				{
					bx = fn0800_1099(al_157, fp - 0x02, di_108, ds, out di_108);
					byte al_168 = ds->*si_155;
					sp_162 = sp_162 + ~0x01;
					si_155 = si_155 + 0x01;
					al_157 = al_168;
				} while (al_168 != 0x00);
				break;
			}
		}
		ds->*di_108 = al_102;
		ci8 v15_109 = bLoc57_110 - 0x01;
		di_108 = di_108 + 0x01;
		bLoc57_110 = v15_109;
		if (v15_109 <= 0x00)
			bx = fn0800_10A1(fp - 0x02, di_108, out di_108);
	}
	if (bLoc57_110 < 0x50)
	{
		byte Eq_64::* di_94;
		fn0800_10A1(fp - 0x02, di_108, out di_94);
		word16 di_96;
		bx = fn0800_10A1(fp - 0x02, di_94, out di_96);
	}
	word16 Eq_203::* sp_81 = sp_162 + 0x02;
	*diOut = ss->*sp_81;
	return bx;
}

word16 fn0800_1099(byte al, Eq_161 Eq_254::*bp, byte Eq_64::*di, Eq_64 * ds, Eq_226 & diOut)
{
	ds->*di = al;
	ci8 v9_10 = ss->*(bp - 0x55) - 0x01;
	ss->*(bp - 0x55) = v9_10;
	*diOut = di + 0x01;
	if (v9_10 <= 0x00)
		return bx;
	else
	{
		byte Eq_64::* di_16;
		return fn0800_10A1(bp, di + 0x01, out di_16);
	}
}

Eq_281 * fn0800_10A1(Eq_161 Eq_254::*bp, byte Eq_64::*di, Eq_163 & diOut)
{
	word16 di_18 = di - (bp - 0x54);
	struct Eq_286 * ss_32;
	union Eq_298 Eq_286::* bp_36;
	word16 ax_37;
	word16 di_38;
	(cs->*(ss->*bp).ptr000A)();
	if (ax_37 == 0x00)
		(ss_32->*(bp_36 - 0x02)).u1 = 0x01;
	(ss_32->*(bp_36 - 0x55)).u0 = 0x50;
	(ss_32->*(bp_36 - 88)).u1 = (ss_32->*(bp_36 - 88)).u1;
	*diOut = bp_36 - 0x54;
	return es;
}

void fn0800_16D4(word16 bx, Eq_65 di, Eq_64 * ds, word16 wArg02)
{
	fn0800_16F3(bx, di, ds, 0x0342, wArg02);
	return;
}

void fn0800_16F3(word16 bx, Eq_65 di, Eq_64 * ds, word16 wArg06, word16 wArg08)
{
	struct Eq_335 Eq_372::* bp_155 = fp - 0x02;
	word16 wLoc28_105 = 0x00;
	bool D_161 = false;
	byte Eq_64::* si_158 = wArg08;
	es_160 = es;
	di_207 = di;
l0800_1726:
	struct Eq_345 * es_160;
	Eq_65 di_207;
	byte al_58 = ds->*si_158;
	byte Eq_64::* si_59 = si_158 + 0x01;
	byte SZO_62 = cond(al_58);
	if (al_58 == 0x00)
		return;
	byte SCZO_100 = cond(al_58 - 0x25);
	if (al_58 == 0x25)
	{
		wLoc24 = ~0x00;
		bLoc2B = 0x00;
		int16 ax_349 = (int16) (ds->*si_59);
		if (ax_349 < 0x00)
			goto l0800_17E6;
		if (DPB(bx, 0x00, 8) <= 0x15)
		{
			switch (ax_349)
			{
			case 0x00:
				break;
			}
			return;
		}
l0800_1AEB:
		(cs->*(ss->*bp_155).ptr0006)();
		return;
	}
	word16 v17_147 = wLoc28_105 + 0x01;
	Eq_65 di_159;
	Eq_65 ax_167;
	(cs->*(ss->*bp_155).ptr0004)();
	byte SZO_180 = cond(ax_167);
	wLoc28_105 = v17_147;
	cx = wArg06;
	Eq_65 ax_178 = ax_167;
	byte al_179 = (byte) ax_167;
	SO = SZO_180;
	if (ax_167 < 0x00)
	{
l0800_1764:
		goto l0800_1AEB;
	}
	else
	{
		byte SZO_208 = cond(di_159);
		di_207 = di_159;
		S = SZO_208;
		if (di_159 >= 0x00)
		{
			byte SCZO_246 = cond(ds->*di_159 - 0x01);
			byte Z_247 = SCZO_246;
			if (ds->*di_159 == 0x01)
			{
l0800_174A:
				ci8 bl_270 = (byte) ax_178;
				byte al_268 = (byte) bx;
				byte bh_271 = SLICE(ax_178, byte, 8);
				struct Eq_413 Eq_64::* bx_273 = DPB(ax_178, bl_270, 0);
				byte SZO_274 = cond(bl_270);
				if (bl_270 >= 0x00)
				{
					byte SCZO_310 = cond((ds->*bx_273).b055A - 0x01);
					if ((ds->*bx_273).b055A == 0x01)
					{
						word16 v25_312 = wLoc28_105 + 0x01;
						Eq_65 ax_330;
						(cs->*(ss->*bp_155).ptr0004)();
						wLoc28_105 = v25_312;
						cx = wArg06;
						ax_178 = ax_330;
						if (ax_330 > 0x00)
							goto l0800_174A;
						goto l0800_1764;
					}
				}
				(cs->*(ss->*bp_155).ptr0006)();
				wLoc36 = bx_273;
				cx = wArg06;
				wLoc28_105 = wLoc28_105 - 0x01;
				goto l0800_1726;
			}
		}
		byte SCZO_211 = cond(ax_167 - di_159);
		if (ax_167 == di_159)
			goto l0800_1726;
		(cs->*(ss->*bp_155).ptr0006)();
		return;
	}
}

