// spcinv_text.c
// Generated by decompiling spcinv.sav
// using Reko decompiler version 0.9.1.0.

#include "spcinv_text.h"

// 0200: void fn0200(Register Eq_n r5, Register (ptr16 Eq_n) pc)
void fn0200(Eq_n r5, struct Eq_n * pc)
{
	do
	{
		PRINT(&globals->b0F9A);
		struct Eq_n * r2_n = &globals->t0002;
		struct Eq_n * r3_n = null;
		do
		{
			Eq_n r0_n;
		} while (TTYIN(out r0_n));
		do
		{
			word16 r0_n;
		} while (TTYIN(out r0_n));
		do
		{
			word16 r0_n;
		} while (TTYIN(out r0_n));
		if (r0_n == 66)
		{
			PRINT(&globals->b0FDA);
			do
			{
				word16 r0_n;
			} while (TTYIN(out r0_n));
			break;
		}
		r2_n = &globals->t0001;
		r3_n = &globals->t0001;
		if (r0_n == 0x49)
			break;
		r2_n = null;
		r3_n = &globals->t0002;
	} while (r0_n != 0x45);
	globals->ptr0F06 = r2_n;
	globals->ptr0F08 = r3_n;
	globals->w0024 |= 0x1040;
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w0AB4 = globals->w1170;
	globals->t0B5E.u0 = 0x00;
	globals->w1166 = 0x0101;
	globals->w1168 = 4446;
	FnSubfn(&globals->w1166);
	if (Test(UGE,false))
	{
		globals->w1166 = 0x0801;
		globals->w1168 = 0x00;
		globals->w116A = 0x0B5E;
		globals->w116C = 0x01;
		globals->w116E = 0x00;
		FnSubfn(&globals->w1166);
		__syscall(0x88FC);
	}
	fn0BD6();
l02A2:
	byte * r4_n = fn0C20(r5, pc, out r5);
	while (true)
	{
		Eq_n r0_n;
		if (!TTYIN(out r0_n) && globals->ptr0EFA == null)
			break;
		globals->w1166 = 0x1100;
		globals->w1168 = 4464;
		FnSubfn(&globals->w1166);
		Eq_n r0_n = globals->w1170 - globals->w1172;
		if (r0_n >= 0x00)
		{
			globals->w1174 = globals->w1170;
			++pc->w0E52;
			word16 v34_n = ~globals->w0EF4;
			globals->w0EF6 = v34_n;
			if (v34_n == 0x00)
				globals->w0EF8 = ~globals->w0EF6;
			if (globals->ptr0EFA != null)
			{
				word16 v40_n = globals->ptr0EFA - 0x01;
				globals->w0EFC = v40_n;
				if (v40_n != 0x00)
					goto l0370;
				if (globals->w0F18 == 0x00)
					goto l03AE;
				byte * r4_n;
				Eq_n r5_n;
				Eq_n r0_n = fn0486(r0_n, r4_n, r5, out r4_n, out r5_n);
				globals->w0F16 = 0x02;
				r4_n = fn0470(r0_n, r4_n, r5_n);
				globals->w0F18 = 0x78;
			}
			if (globals->w0EF8 == 0x00)
			{
				if (globals->w0F14 <= 0x08)
					goto l0370;
				ci16 v64_n = globals->w0F16 - 0x01;
				globals->w0F18 = v64_n;
				if (v64_n > 0x00)
					goto l0370;
				globals->ptr0EFA = &globals->t0456;
			}
			globals->ptr0EFA();
l0370:
			Eq_n r5_n;
			Eq_n r5_n;
			byte * r4_n;
			r0_n = fn0998(fn07A6(fn06D6(fn04A0(r4_n, pc, out r5_n), r5_n, pc), pc, out r4_n, out r5_n), r4_n, r5_n, pc, out r4_n, out r5);
			if (r4_n != &globals->b1178)
				goto l038E;
			if (globals->w0F12 != 0x00)
				continue;
			if (globals->t0F02 != 0x00)
				goto l0392;
			if (globals->w0F18 > 0x00)
			{
				globals->ptr0F1A = globals->w0F18 + 0x01;
				goto l02A2;
			}
l03AE:
			cup16 v50_n = globals->t0B5A - globals->t0B5A;
			if (v50_n > 0x00)
			{
				globals->t0B5E = globals->t0B5A;
				globals->w1166 = 0x0101;
				globals->w1168 = 4446;
				FnSubfn(&globals->w1166);
				if (v50_n < 0x00)
				{
					globals->w1166 = 0x0201;
					globals->w1168 = 4446;
					globals->w116A = 0x01;
					FnSubfn(&globals->w1166);
					r0_n.u0 = 4454;
					if (v50_n >= 0x00)
						goto l03E6;
				}
				else
				{
l03E6:
					globals->w1166 = 0x0901;
					globals->w1168 = 0x00;
					globals->w116A = 0x0B5E;
					globals->w116C = 0x01;
					globals->w116E = 0x00;
					FnSubfn(&globals->w1166);
					__syscall(0x88FC);
					r0_n.u0 = 0x0601;
				}
			}
			byte * r4_n;
			Eq_n r5_n;
			Eq_n r0_n = fn0486(r0_n, r4_n, r5, out r4_n, out r5_n);
			struct Eq_n * sp_n = (struct Eq_n *) <invalid>;
			sp_n->bFFFFFFFF = 0x01;
			sp_n->b0000 = 0x18;
			byte * r4_n;
			Eq_n r5_n;
			Eq_n r0_n = fn0AB6(r0_n, r4_n, r5_n, out r4_n, out r5_n);
			sp_n->tFFFFFFFD = r5_n;
			word16 r5_n;
			word16 r0_n;
			word16 r4_n;
			fn0AE8(r0_n, r4_n, &globals->ptr0420, sp_n->tFFFFFFFD, out r0_n, out r4_n, out r5_n);
			return;
		}
		if (r4_n == &globals->b1178)
			continue;
l038E:
		r4_n = fn0AF6(r4_n, r5, out r5);
l0392:
	}
	globals->t02CB = r0_n;
	byte * r1_n = &globals->b02C6;
	do
	{
		r1_n = r1_n + 1;
		r1_n = r1_n;
	} while (*r1_n - r0_n != 0x00);
	(*((char *) globals->a02CC + (r1_n - 711) * 0x02))();
}

// 0470: Register (ptr16 byte) fn0470(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5)
// Called from:
//      fn0200
byte * fn0470(Eq_n r0, byte * r4, Eq_n r5)
{
	byte * r4_n;
	Eq_n r5_n;
	Eq_n r0_n = fn0AB6(r0, r4, r5, out r4_n, out r5_n);
	byte * r4_n;
	word16 r0_n;
	word16 r5_n;
	fn0AE8(r0_n, r4_n, &globals->ptr0482, r5_n, out r0_n, out r4_n, out r5_n);
	return r4_n;
}

// 0486: Register Eq_n fn0486(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r4Out, Register out ptr16 r5Out)
// Called from:
//      fn0200
Eq_n fn0486(Eq_n r0, byte * r4, Eq_n r5, ptr16 & r4Out, ptr16 & r5Out)
{
	byte * r4_n;
	Eq_n r5_n;
	ptr16 r4_n;
	ptr16 r5_n;
	Eq_n r0_n = fn0A74(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n);
	r4Out = r4_n;
	r5Out = r5_n;
	return r0_n;
}

// 04A0: Register (ptr16 byte) fn04A0(Register (ptr16 byte) r4, Register (ptr16 Eq_n) pc, Register out Eq_n r5Out)
// Called from:
//      fn0200
byte * fn04A0(byte * r4, struct Eq_n * pc, union Eq_n & r5Out)
{
	cui16 v5_n = pc->w0A52 & globals->w0EF4;
	pc->w0A52 = v5_n;
	if (v5_n == 0x00)
	{
		Eq_n r5_n;
		do
		{
			Eq_n r3_n = (int16) *((word32) r5_n + 0x0EF0);
			if (r3_n != 0x00)
			{
				globals->t0F0C = r3_n;
				byte * r4_n;
				Eq_n r0_n = fn0AB6((int16) *((word32) r5_n + 0x0EF3), r4, r5_n, out r4_n, out r5_n);
				*r4_n = 0x20;
				struct Eq_n * sp_n = fp - 0x02;
				r4 = r4_n + 1;
				Eq_n r0_n = r0_n - 0x01;
				if ((globals->t0F02 > 0x00 || r0_n - 0x01 < 0x04) && r0_n - 0x01 != 0x02)
				{
					*((word32) r5_n + 0x0EF3) = r0_n - 0x01;
					if (r0_n - 0x01 <= 22)
					{
						sp_n = (struct Eq_n *) <invalid>;
						if (!fn067C(r0_n - 0x01, r3_n, r4_n + 1, r5_n, out r0_n, out r4, out r5_n))
							goto l04EE;
					}
					else
					{
l04EE:
						Eq_n r1_n = (word32) r0_n + 1;
						if (r0_n != 0x03 || (globals->t0F02 <= 0x00 || !fn05D4(r0_n, r3_n, r4, r5_n, pc, out r0_n, out r3_n, out r4, out r5_n)))
						{
							ptr16 sp_n = &sp_n->b0000 + 2;
							Eq_n r0_n;
							if (!fn064A(r0_n, r1_n, r3_n, r4, r5_n, out r0_n, out r4, out r5_n))
							{
								struct Eq_n * r2_n;
								do
								{
									if (r2_n[0x06DC] - r0_n == 0x00)
									{
l0524:
										r0_n = r2_n[0x06D6];
										word16 r1_n;
										for (r1_n = 0x08; r1_n != 0x00; --r1_n)
										{
											Eq_n r3_n = *r0_n;
											if (r3_n != 0x00)
											{
												if (r3_n >= 0x00)
												{
													if ((word16) r3_n + 4 - *((word32) r5_n + 0x0EF0) <= 0x00)
													{
														if (*r0_n - *((word32) r5_n + 0x0EF0) < 0x00)
															break;
														Eq_n r1_n = *r0_n;
														r0_n->u0 = *r0_n | 0x8000;
														Eq_n r0_n = r0_n - r2_n[0x06D6];
														globals->t0F0A = r0_n;
														--*((word32) r0_n + 0x0DC4);
														struct Eq_n * sp_n = sp_n - 0x02;
														sp_n->t0000 = r1_n;
														sp_n->t0001 = r2_n[0x06DC];
														byte * r4_n;
														Eq_n r5_n;
														byte * r4_n;
														Eq_n r5_n;
														fn0A7C(fn0AB6(r0_n, r4, r5_n, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n);
														pc->w05F2 = (word16) r2_n[1770] + pc->w05F2;
														r4 = fn0B1A(r4_n, r5_n, out r5_n);
														wchar_t v65_n = globals->w0F12 - 0x01;
														globals->w0F14 = v65_n;
														if (v65_n <= 0x00 && globals->t0F02 <= 0x00)
														{
															globals->ptr0EFA = null;
															globals->w0EFC = 0x05;
														}
														goto l0584;
													}
												}
												else
												{
													struct Eq_n * sp_n = sp_n - 0x01;
													sp_n->b0000 = (byte) *r0_n;
													sp_n->t0001 = r2_n[0x06DC];
													byte * r4_n;
													Eq_n r5_n;
													byte * r4_n;
													Eq_n r5_n;
													Eq_n r0_n = fn0A74(fn0AB6(r0_n, r4, r5_n, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n);
													*r0_n = 0x00;
													sp_n->wFFFFFFFE = (int16) *((word32) r5_n + 0x0EF0) + 0x01;
													sp_n->bFFFFFFFF = (byte) *((word32) r5_n + 0x0EF3);
													sp_n = sp_n - 0x02;
													r0_n = fn0AB6(r0_n, r4_n, r5_n, out r4, out r5_n);
												}
											}
											r0_n = (word32) r0_n + 2;
										}
										break;
									}
									cup16 v38_n = r2_n[0x06DC] - r1_n;
									if (v38_n < 0x00)
										break;
									if (v38_n == 0x00)
										goto l0524;
									++r2_n;
								} while (r2_n >= &globals->t000A);
								union Eq_n * sp_n = sp_n - 2;
								*sp_n = (union Eq_n *) r5_n;
								word16 r0_n;
								byte * r4_n;
								Eq_n r5_n;
								fn0AE8(r0_n, r4, &globals->ptr05B8, *sp_n, out r0_n, out r4_n, out r5_n);
								r5Out = r5_n;
								return r4_n;
							}
						}
					}
				}
l0584:
				((word32) r5_n + 0x0EF0)->u0 = 0x00;
				goto l0588;
			}
l0588:
			--r5_n;
		} while (r5_n >= 0x00);
		r5Out = r5_n;
		return r4;
	}
	else
	{
		r5Out = r5;
		return r4;
	}
}

// 05D4: FlagGroup bool fn05D4(Register Eq_n r0, Register Eq_n r3, Register (ptr16 byte) r4, Register Eq_n r5, Register (ptr16 Eq_n) pc, Register out Eq_n r0Out, Register out Eq_n r3Out, Register out (ptr16 byte) r4Out, Register out Eq_n r5Out)
// Called from:
//      fn04A0
bool fn05D4(Eq_n r0, Eq_n r3, byte * r4, Eq_n r5, struct Eq_n * pc, union Eq_n & r0Out, union Eq_n & r3Out, byte & r4Out, union Eq_n & r5Out)
{
	cup16 v11_n = 0x04 - (r3 - globals->t0F02);
	bool Z_n = SLICE(cond(v11_n), bool, 2);
	if (v11_n > 0x00)
	{
		r0Out = r0;
		r3Out = r3;
		r4Out = r4;
		r5Out = r5;
		return Z_n;
	}
	else
	{
		byte * r4_n;
		Eq_n r5_n;
		byte * r4_n;
		Eq_n r5_n;
		fn0A7C(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n);
		fn0A94();
		ui16 r3_n = __rol(0x00, 0x00);
		ui16 r3_n = __rol(r3_n, r3_n);
		Eq_n r0_n = globals->a0F2A[r3_n];
		Eq_n v23_n = pc->t090A >> 1;
		pc->t090A = v23_n;
		if (v23_n >= 0x00)
			r0_n = (word32) r0_n + 200;
		pc->w054A = (word16) ((word32) r0_n + pc->w054A);
		byte * r4_n;
		Eq_n r5_n;
		Eq_n r0_n = fn0AB6(r0_n, r4_n, r5_n, out r4_n, out r5_n);
		Eq_n r0_n;
		byte * r4_n;
		Eq_n r5_n;
		bool Z_n = fn0AE8(r0_n, r4_n, &globals->ptr0624, r5_n, out r0_n, out r4_n, out r5_n);
		r0Out = r0_n;
		r3Out = r3_n << 1;
		r4Out = r4_n;
		r5Out = r5_n;
		return Z_n;
	}
}

// 064A: FlagGroup bool fn064A(Register Eq_n r0, Register Eq_n r1, Register Eq_n r3, Register (ptr16 byte) r4, Register Eq_n r5, Register out Eq_n r0Out, Register out (ptr16 byte) r4Out, Register out Eq_n r5Out)
// Called from:
//      fn04A0
bool fn064A(Eq_n r0, Eq_n r1, Eq_n r3, byte * r4, Eq_n r5, union Eq_n & r0Out, byte & r4Out, union Eq_n & r5Out)
{
	struct Eq_n * r2_n = globals->ptr0F06;
	do
	{
		bool Z_n;
		if (r2_n[0x0EE6] - r3 == 0x00 && r2_n[0x0EEC] >= 0x00)
		{
			if (r2_n[0x0EE9] - r1 == 0x00)
			{
				r2_n[0x0EE6] = (struct Eq_n) 0x00;
				Z_n = true;
				break;
			}
			if (r2_n[0x0EE9] - r0 == 0x00)
			{
				Eq_n r0_n;
				byte * r4_n;
				Eq_n r5_n;
				bool Z_n = fn0AE8(r0, r4, &globals->ptr066A, r5, out r0_n, out r4_n, out r5_n);
				r0Out = r0_n;
				r4Out = r4_n;
				r5Out = r5_n;
				return Z_n;
			}
		}
		--r2_n;
		Z_n = SLICE(cond(r2_n), bool, 2);
	} while (r2_n >= null);
	r0Out = r0;
	r4Out = r4;
	r5Out = r5;
	return Z_n;
}

// 067C: FlagGroup bool fn067C(Register Eq_n r0, Register Eq_n r3, Register (ptr16 byte) r4, Register Eq_n r5, Register out Eq_n r0Out, Register out (ptr16 byte) r4Out, Register out Eq_n r5Out)
// Called from:
//      fn04A0
//      fn06D6
bool fn067C(Eq_n r0, Eq_n r3, byte * r4, Eq_n r5, union Eq_n & r0Out, byte & r4Out, union Eq_n & r5Out)
{
	struct Eq_n * r1_n = (word32) r0 + (r3 - 0x01 << 1);
	byte v11_n = r1_n->b0E2A;
	bool Z_n = SLICE(cond(v11_n), bool, 2);
	if (v11_n != 0x00)
	{
		--r1_n->b0E2A;
		struct Eq_n * r1_n = (int16) r1_n->b0E2A;
		byte * r4_n;
		r0 = fn0AB6(r0, r4, r5, out r4_n, out r5);
		byte v21_n = r1_n->b0EE0;
		*r4_n = v21_n;
		r4 = r4_n + 1;
		Z_n = SLICE(cond(v21_n), bool, 2);
	}
	r0Out = r0;
	r4Out = r4;
	r5Out = r5;
	return Z_n;
}

// 06A2: void fn06A2()
void fn06A2()
{
	if (globals->t0F0A != 0x00)
	{
		Eq_n r5_n;
		do
		{
			if (*((word32) r5_n + 0x0EF0) == 0x00)
			{
				wchar_t r0_n = globals->w0F14;
				if (r0_n <= 0x08)
				{
					*((word32) r5_n + 0x0EF0) = r0_n + 0x02;
					((word32) r5_n + 0x0EF3)->u0 = 0x18;
					globals->t0F0C.u0 = 0x00;
				}
				return;
			}
			--r5_n;
		} while (r5_n >= 0x00);
	}
}

// 06D6: Register (ptr16 byte) fn06D6(Register (ptr16 byte) r4, Register Eq_n r5, Register (ptr16 Eq_n) pc)
// Called from:
//      fn0200
byte * fn06D6(byte * r4, Eq_n r5, struct Eq_n * pc)
{
	struct Eq_n * r2_n;
	do
	{
		Eq_n r3_n = (int16) r2_n[0x0EE6];
		if (r3_n != 0x00)
		{
			cui16 v12_n = pc->w0812 & globals->w0EF4;
			pc->w0812 = v12_n;
			if (v12_n == 0x00 && (r2_n[0x0EEC] <= 0x00 || globals->w0EF4 - globals->w0EF4 == 0x00))
				goto l07A0;
			Eq_n r0_n;
			Eq_n r0_n = (int16) r2_n[0x0EE9];
			if (r2_n[0x0EEC] >= 0x00)
			{
				byte * r4_n;
				r0_n = fn0AB6(r0_n, r4, r5, out r4_n, out r5);
				*r4_n = 0x20;
				r4 = r4_n + 1;
			}
			else
			{
				r0_n = fn0AB6(r0_n, r4, r5, out r4, out r5);
				r2_n[0x0EEC] = (struct Eq_n) (r2_n[0x0EEC] & ~0x80);
			}
			r2_n[0x0EE9] = (struct Eq_n) ((byte) r2_n[0x0EE9] + 1);
			Eq_n r0_n = (word32) r0_n + 1;
			struct Eq_n * sp_n = fp - 0x02;
			if (r0_n != 0x19)
			{
				if (r0_n != 0x18)
				{
					if (r0_n > 22)
						goto l078A;
					sp_n = (struct Eq_n *) <invalid>;
					if (!fn067C(r0_n, r3_n, r4, r5, out r0_n, out r4, out r5))
						goto l0784;
				}
				else if (globals->ptr0EFA == null && (globals->w0F14 - r3_n >= 0x00 && globals->w0F14 - (r3_n - 0x04) <= 0x00))
				{
					byte * r4_n;
					Eq_n r5_n;
					byte * r4_n;
					Eq_n r5_n;
					Eq_n r0_n = fn0A7C(fn0AB6(r0_n, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n);
					globals->ptr0EFA = null;
					globals->w0EFC = 0x05;
					globals->ptr0F1A = globals->w0F18 - 0x01;
					byte * r4_n;
					word16 r0_n;
					word16 r5_n;
					fn0AE8(r0_n, r4_n, &globals->ptr077E, r5_n, out r0_n, out r4_n, out r5_n);
					return r4_n;
				}
l078A:
				union Eq_n * sp_n = sp_n - 2;
				*sp_n = (union Eq_n *) r5;
				byte * r4_n;
				word16 r0_n;
				word16 r5_n;
				fn0AE8(r0_n, r4, &globals->ptr078E, *sp_n, out r0_n, out r4_n, out r5_n);
				return r4_n;
			}
l0784:
			r2_n[0x0EE6] = (struct Eq_n) 0x00;
		}
l07A0:
		--r2_n;
	} while (r2_n >= null);
	return r4;
}

// 07A6: Register Eq_n fn07A6(Register (ptr16 byte) r4, Register (ptr16 Eq_n) pc, Register out (ptr16 byte) r4Out, Register out Eq_n r5Out)
// Called from:
//      fn0200
Eq_n fn07A6(byte * r4, struct Eq_n * pc, byte & r4Out, union Eq_n & r5Out)
{
	Eq_n sp_n = fp;
	ci16 v5_n = globals->w0F1C - 0x01;
	globals->w0F1E = v5_n;
	if (v5_n == 0x00)
	{
		globals->w0F1E = globals->w0F26;
		r5.u0 = 0x00;
		do
		{
			struct Eq_n * r2_n = globals->ptr0F1A;
			r0 = r2_n->t0DB8;
			if (r0 != 0x00)
			{
				if (globals->w0EFC != 0x00)
				{
					struct Eq_n * r1_n = r2_n->ptr0DAC;
					word16 r3_n;
					for (r3_n = 0x08; r3_n != 0x00; --r3_n)
					{
						if (r1_n->t0000 != 0x00)
						{
							--sp_n;
							*sp_n = r1_n->t0000;
							*((word32) sp_n + 1) = r0;
							byte * r4_n;
							Eq_n r5_n;
							r0 = fn0A74(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4, out r5);
							if (r1_n->t0000 <= 0x00)
								r1_n->t0000.u0 = 0x00;
						}
						++r1_n;
					}
					r2_n->t0DB8 = (word32) r2_n->t0DB8 + 1;
					r0 = (word32) r0 + 1;
				}
				struct Eq_n * r1_n = r2_n->ptr0DAC;
				cui16 r3_n;
				for (r3_n = 0x08; r3_n != 0x00; --r3_n)
				{
					if (r1_n->t0000 > 0x00)
					{
						r1_n->t0000 = (word32) r1_n->t0000 + globals->w0F20;
						if (r1_n->t0000 >= 0x08 || r1_n->t0000 <= 0x48)
							globals->t0F00 = sp_n;
						if (r0 == 0x17)
							globals->t0F02 = sp_n;
						if (r0 <= 22)
							fn093C(r0, r1_n);
						struct Eq_n * sp_n = sp_n - 0x01;
						sp_n->t0000 = r1_n->t0000;
						sp_n->t0001 = r0;
						byte * r4_n;
						Eq_n r5_n;
						Eq_n r0_n = fn0AB6(r0, r4, (byte) r5.u0 + 1, out r4_n, out r5_n);
						fn096A(r3_n);
						sp_n->tFFFFFFFE = r5_n;
						Eq_n r0_n;
						byte * r4_n;
						Eq_n r5_n;
						fn0AE8(r0_n, r4_n, &globals->ptr083C, sp_n->tFFFFFFFE, out r0_n, out r4_n, out r5_n);
						r4Out = r4_n;
						r5Out = r5_n;
						return r0_n;
					}
					if (r1_n->t0000 < 0x00 && globals->w0EFC == 0x00)
					{
						--sp_n;
						*sp_n = r1_n->t0000;
						*((word32) sp_n + 1) = r0;
						byte * r4_n;
						Eq_n r5_n;
						r0 = fn0A74(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4, out r5);
						r1_n->t0000.u0 = 0x00;
					}
					++r1_n;
				}
				if (r5 == 0x00)
					r2_n->t0DB8.u0 = 0x00;
			}
			ci16 v75_n = pc->w06AE - 0x02;
			pc->w06AE = v75_n;
			if (v75_n < 0x00)
			{
				globals->w0F1C = 0x0A;
				globals->w0DAA = ~globals->w0DA8;
				if (globals->w0EFC != 0x00)
					globals->w0EFE = 0x00;
				else if (globals->w0EFE != 0x00)
				{
					globals->w0F22 = -globals->w0F20;
					if (globals->t0F00 == 0x00)
						globals->w0EFE = 0x01;
				}
				globals->t0F00.u0 = 0x00;
				globals->t0F02.u0 = 0x00;
				goto l08B2;
			}
		} while (r5 == 0x00);
		globals->t0F28 = r5;
	}
l08B2:
	if (globals->w0F12 != 0x00)
	{
		cui16 v36_n = pc->w063A & globals->w0EF4;
		pc->w063A = v36_n;
		if (v36_n != 0x00)
		{
			struct Eq_n * r2_n;
			do
			{
				if (r2_n[0x0EE6] == 0x00)
				{
					do
					{
						Eq_n r0_n = fn0A94() & globals->w0F0E;
						if (r0_n != 0x00)
							goto l093A;
						cui16 r0_n = fn0A94();
						struct Eq_n * r1_n = globals->ptr0F08;
						if (r1_n >= null && (r1_n->w0DC4 > 0x00 && r0_n << 1 < 0x00))
							break;
						ui16 r1_n = __rol(0x00, 0x00);
						ui16 r1_n = __rol(r1_n, r1_n);
						ui16 r1_n = __rol(r1_n, r1_n);
						r1_n = r1_n << 1;
					} while (globals->a0DC4[r1_n * 0x02] <= 0x00);
					r0_n.u0 = 0x0DB8;
					do
					{
						r0_n -= 0x02;
						word16 r3_n = Mem321[r0_n + 0x00:word16] + r1_n;
					} while (*r3_n <= 0x00);
					r2_n[0x0EE6] = (struct Eq_n) ((int16) *r3_n + 0x02);
					r2_n[0x0EE9] = (struct Eq_n) *((byte) r0_n.u0 + 0x0C);
					r2_n[0x0EEC] = (struct Eq_n) 0x80;
					if (r0_n != 3500)
					{
						r0_n = fn0A94() & globals->t0F0C;
						if (r0_n == 0x00)
							goto l0936;
					}
					else
					{
l0936:
						r2_n[0x0EEC] = (struct Eq_n) ((byte) r2_n[0x0EEC] + 1);
					}
l093A:
					r4Out = r4;
					r5Out = r5;
					return r0_n;
				}
				--r2_n;
			} while (r2_n >= null);
		}
	}
	r4Out = r4;
	r5Out = r5;
	return r0;
}

// 093C: void fn093C(Register Eq_n r0, Register (ptr16 Eq_n) r1)
// Called from:
//      fn07A6
void fn093C(Eq_n r0, struct Eq_n * r1)
{
	word16 r3_n = r1->t0000;
	cui16 r3_n = r3_n - 0x01;
	if (globals->w0F20 >= 0x00)
		r3_n = r3_n - 0x02;
	struct Eq_n * r3_n = (word32) r0 + (r3_n << 1) - 22 + 0x0E40;
	word16 wLoc04_n = 0x07;
	do
	{
		r3_n->b0000 = 0x00;
		word16 v18_n = wLoc04_n - 0x01;
		++r3_n;
		wLoc04_n = v18_n;
	} while (v18_n != 0x00);
}

// 096A: void fn096A(Register cui16 r3)
// Called from:
//      fn07A6
void fn096A(cui16 r3)
{
	if ((r3 & 0x01) == 0x00)
	{
		if (globals->w0DA8 == 0x00)
		{
l0976:
			globals->b112D = 0x2F;
			globals->b1131 = 0x5C;
			return;
		}
	}
	else if (globals->w0DA8 != 0x00)
		goto l0976;
	globals->b112D = 0x5C;
	globals->b1131 = 0x2F;
}

// 0998: Register Eq_n fn0998(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register (ptr16 Eq_n) pc, Register out (ptr16 byte) r4Out, Register out Eq_n r5Out)
// Called from:
//      fn0200
Eq_n fn0998(Eq_n r0, byte * r4, Eq_n r5, struct Eq_n * pc, byte & r4Out, union Eq_n & r5Out)
{
	Eq_n r2_n = globals->t0F02;
	if (r2_n <= 0x00)
	{
		ci16 v10_n = globals->w0F1E - 0x01;
		globals->w0F20 = v10_n;
		if (v10_n != 0x00)
		{
			if (r2_n == 0x00 || globals->w0F1E < 0x28)
				goto l0A5E;
			goto l0A2A;
		}
		globals->w0F20 = 100;
		globals->w0F12 = 0x01;
		globals->w0A6A = 4404;
		cui16 r0_n = fn0A94();
		r2_n.u0 = 0x01;
		word16 r1_n = 0x00;
		r0 = r0_n << 1;
		if (r0_n << 1 < 0x00)
		{
			r0 = r0_n << 2;
			if (r0_n << 2 < 0x00)
			{
				globals->w0F12 = globals->w0F10 + 0x01;
				globals->w0A6A = 0x113D;
				r1_n = 0x0A;
			}
		}
		if (r0 <= 0x00)
		{
			globals->w0F12 = -globals->w0F10;
			pc->w008A += r1_n;
			r2_n.u0 = 0x4A;
		}
	}
	if (globals->w0EF4 != 0x00 || globals->w0EF6 != 0x00)
	{
l0A18:
		globals->t0F04 = r2_n;
		r4Out = r4;
		r5Out = r5;
		return r0;
	}
	if (globals->w0F10 >= 0x00)
	{
		if (r2_n != 0x49)
		{
l0A04:
			r2_n.u0 = (byte) r2_n.u0 + globals->w0F10;
			byte * r4_n;
			Eq_n r5_n;
			r0 = fn0A60(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4, out r5);
			goto l0A18;
		}
	}
	else if (r2_n != 0x02)
		goto l0A04;
l0A2A:
	byte * r4_n;
	Eq_n r5_n;
	byte * r4_n;
	Eq_n r5_n;
	byte * r4_n;
	Eq_n r5_n;
	r0 = fn0A74(fn0AB6(fn0A74(fn0AB6(r0, r4, r5, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n), r4_n, r5_n, out r4_n, out r5_n), r4_n, r5_n, out r4, out r5);
	globals->t0F04.u0 = 0x00;
	if (globals->w0F12 <= 0x00)
	{
		globals->ptr0EFA = null;
		globals->w0EFC = 0x05;
	}
l0A5E:
	r4Out = r4;
	r5Out = r5;
	return r0;
}

// 0A60: Register Eq_n fn0A60(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r4Out, Register out ptr16 r5Out)
// Called from:
//      fn0998
Eq_n fn0A60(Eq_n r0, byte * r4, Eq_n r5, ptr16 & r4Out, ptr16 & r5Out)
{
	Eq_n r0_n;
	ptr16 r4_n;
	ptr16 r5_n;
	fn0AE8(r0, r4, &globals->ptr0A64, r5, out r0_n, out r4_n, out r5_n);
	r4Out = r4_n;
	r5Out = r5_n;
	return r0_n;
}

// 0A74: Register Eq_n fn0A74(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r4Out, Register out ptr16 r5Out)
// Called from:
//      fn0486
//      fn04A0
//      fn07A6
//      fn0998
Eq_n fn0A74(Eq_n r0, byte * r4, Eq_n r5, ptr16 & r4Out, ptr16 & r5Out)
{
	Eq_n r0_n;
	ptr16 r4_n;
	ptr16 r5_n;
	fn0AE8(r0, r4, &globals->ptr0A78, r5, out r0_n, out r4_n, out r5_n);
	r4Out = r4_n;
	r5Out = r5_n;
	return r0_n;
}

// 0A7C: Register Eq_n fn0A7C(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r4Out, Register out ptr16 r5Out)
// Called from:
//      fn04A0
//      fn05D4
//      fn06D6
Eq_n fn0A7C(Eq_n r0, byte * r4, Eq_n r5, ptr16 & r4Out, ptr16 & r5Out)
{
	*r4 = globals->b0F24;
	Eq_n r0_n;
	ptr16 r4_n;
	ptr16 r5_n;
	fn0AE8(r0, r4 + 1, &globals->ptr0A84, r5, out r0_n, out r4_n, out r5_n);
	r4Out = r4_n;
	r5Out = r5_n;
	return r0_n;
}

// 0A94: Register ui16 fn0A94()
// Called from:
//      fn05D4
//      fn07A6
//      fn0998
ui16 fn0A94()
{
	ui16 r0_n = ((SEQ(SLICE(__swab(globals->w0AB2), byte, 8), 0x00) << 1) + globals->w0AB2 << 2) + globals->w0AB2;
	globals->w0AB4 = r0_n + 0x3619;
	return r0_n + 0x3619;
}

// 0AB6: Register Eq_n fn0AB6(Register Eq_n r0, Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r4Out, Register out (ptr16 Eq_n) r5Out)
// Called from:
//      fn0200
//      fn0470
//      fn0486
//      fn04A0
//      fn05D4
//      fn067C
//      fn06D6
//      fn07A6
//      fn0998
//      fn0AF6
//      fn0B1A
Eq_n fn0AB6(Eq_n r0, byte * r4, Eq_n r5, ptr16 & r4Out, struct Eq_n & r5Out)
{
	Eq_n r0_n;
	ptr16 r4_n;
	struct Eq_n * r5_n;
	fn0AE8(r0, r4, &globals->ptr0ABA, r5, out r0_n, out r4_n, out r5_n);
	r4Out = r4_n;
	r5Out = r5_n;
	return r0_n;
}

// 0AE8: FlagGroup bool fn0AE8(Register Eq_n r0, Register (ptr16 byte) r4, Register (ptr16 (ptr16 byte)) r5, Stack Eq_n wArg00, Register out ptr16 r0Out, Register out ptr16 r4Out, Register out Eq_n r5Out)
// Called from:
//      fn0200
//      fn0470
//      fn04A0
//      fn05D4
//      fn064A
//      fn06D6
//      fn07A6
//      fn0A60
//      fn0A74
//      fn0A7C
//      fn0AB6
//      fn0B1A
//      fn0C20
bool fn0AE8(Eq_n r0, byte * r4, byte ** r5, Eq_n wArg00, ptr16 & r0Out, ptr16 & r4Out, union Eq_n & r5Out)
{
	byte * r0_n = *r5;
	do
	{
		byte v8_n = *r0_n;
		*r4 = v8_n;
		++r0_n;
		++r4;
	} while (v8_n != 0x00);
	ptr16 r0_n;
	byte NZV_n;
	(*((char *) r5 + 2))();
	r0Out = r0_n;
	r4Out = r4 - 0x01;
	r5Out = wArg00;
	return SLICE(NZV_n, bool, 2);
}

// 0AF6: Register (ptr16 byte) fn0AF6(Register (ptr16 byte) r4, Register Eq_n r5, Register out ptr16 r5Out)
// Called from:
//      fn0200
byte * fn0AF6(byte * r4, Eq_n r5, ptr16 & r5Out)
{
	byte * r4_n;
	ptr16 r5_n;
	fn0AB6(globals->w0F14 + 0x02, r4, r5, out r4_n, out r5_n);
	*r4_n = 0x80;
	PRINT(&globals->b1178);
	r5Out = r5_n;
	return &globals->b1178;
}

// 0B1A: Register (ptr16 byte) fn0B1A(Register (ptr16 byte) r4, Register Eq_n r5, Register out (ptr16 Eq_n) r5Out)
// Called from:
//      fn04A0
byte * fn0B1A(byte * r4, Eq_n r5, struct Eq_n & r5Out)
{
	byte * r4_n;
	Eq_n r5_n;
	Eq_n r0_n = fn0AB6(globals->t0B5A, r4, r5, out r4_n, out r5_n);
	byte * r4_n;
	struct Eq_n * r5_n;
	word16 r0_n;
	fn0AE8(r0_n, r4_n, &globals->ptr0B34, r5_n, out r0_n, out r4_n, out r5_n);
	r5Out = r5_n;
	return r4_n;
}

// 0B60: void fn0B60(Register cup16 r0, Register ci16 r3, Register (ptr16 word16) r4)
void fn0B60(cup16 r0, ci16 r3, word16 * r4)
{
	word16 wLoc08_n = 0x00;
	if (r3 >= 0x00)
		globals->w0BC8 = 0x20;
	else
	{
		globals->w0BC8 = 0x30;
		r3 = -r3;
	}
	if (r3 != 0x00)
	{
		word16 * r2_n = 0x0BD4 - (r3 << 1);
		do
		{
			word16 r5_n = 0x30;
			cup16 v16_n = *r2_n;
			++r2_n;
			if (v16_n == 0x00)
				return;
			while (true)
			{
				r0 -= v16_n;
				if (r0 < 0x00)
					break;
				++r5_n;
			}
			int16 r5_n;
			r0 += v16_n;
			if (wLoc08_n == 0x00)
			{
				if (r5_n != ~0x2F)
				{
					++wLoc08_n;
					goto l0BB4;
				}
				if (r3 == 0x01 || *r2_n == 0x00)
					goto l0BB4;
				r5_n = (int16) globals->b0BC6;
			}
			else
			{
l0BB4:
				r5_n = r5_n + 0x00;
			}
			*r4 = r5_n;
			++r4;
			--r3;
		} while (r3 != 0x00);
	}
}

// 0BD6: void fn0BD6()
// Called from:
//      fn0200
void fn0BD6()
{
	globals->ptr0F1A = &globals->t0003;
	globals->w0B5C = 0x00;
	globals->w0F0E = 0xF800;
	globals->w0F10 = 0xE000;
	struct Eq_n * r1_n = &globals->t0E56;
	word16 r0_n;
	for (r0_n = 0x06; r0_n != 0x00; --r0_n)
	{
		word16 r2_n;
		for (r2_n = 0x0A; r2_n != 0x00; --r2_n)
		{
			r1_n->b0000 = 0x04;
			r1_n = &r1_n->b0000 + 1;
		}
		++r1_n;
	}
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w1174 = globals->w1170;
}

// 0C20: Register word16 fn0C20(Register Eq_n r5, Register (ptr16 Eq_n) pc, Register out ptr16 r5Out)
// Called from:
//      fn0200
word16 fn0C20(Eq_n r5, struct Eq_n * pc, ptr16 & r5Out)
{
	word16 * r1_n = globals->a0DB8;
	word16 r0_n;
	Eq_n r2_n = 0x05;
	for (r0_n = 0x06; r0_n != 0x00; --r0_n)
	{
		*r1_n = (word16) r2_n;
		++r1_n;
		r2_n.u1 = (word16) r2_n.u1 + 2;
	}
	struct Eq_n * r1_n = null;
	word16 r0_n;
	word16 r2_n = 11;
	for (r0_n = 0x08; r0_n != 0x00; --r0_n)
	{
		r1_n[1776] = (struct Eq_n) r2_n;
		r1_n[0x06F8] = (struct Eq_n) r2_n;
		r1_n[0x0700] = (struct Eq_n) r2_n;
		r1_n[1800] = (struct Eq_n) r2_n;
		r1_n[1808] = (struct Eq_n) r2_n;
		r1_n[1816] = (struct Eq_n) r2_n;
		r1_n[0x06E2] = (struct Eq_n) 0x06;
		++r1_n;
		r2_n += 0x08;
	}
	word16 * r1_n = globals->a0EE6;
	Eq_n r0_n;
	for (r0_n = 0x10; r0_n != 0x00; --r0_n)
	{
		*r1_n = 0x00;
		++r1_n;
	}
	globals->t0F0A.u0 = ~0x00;
	globals->w0F14 = 0x30;
	globals->w0F16 = 0x02;
	globals->w0F18 = 0x78;
	globals->w0F1C = 0x0A;
	globals->w0F1E = 0x04;
	globals->t0F28.u0 = 0x04;
	globals->w0F20 = 100;
	globals->w0F22 = 0x01;
	pc->w025E <<= 1;
	ui16 v17_n = pc->w025C << 1;
	pc->w025C = v17_n;
	if (v17_n == 0x00)
		pc->w0256 >>= 1;
	word16 r0_n;
	word16 r4_n;
	ptr16 r5_n;
	fn0AE8(r0_n, &globals->b1178, &globals->ptr0CC2, r5, out r0_n, out r4_n, out r5_n);
	r5Out = r5_n;
	return r4_n;
}

// 0D98: void fn0D98(Register (ptr16 Eq_n) r0, Register (ptr16 byte) r4)
void fn0D98(struct Eq_n * r0, byte * r4)
{
	word16 r1_n;
	for (r1_n = 0x46; r1_n != 0x00; --r1_n)
	{
		*r4 = (byte) ((int16) r0->b0000 + 0x0EE0);
		++r0;
		++r4;
	}
}

