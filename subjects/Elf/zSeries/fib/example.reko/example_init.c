// example_init.c
// Generated by decompiling example
// using Reko decompiler version 0.9.1.0.

#include "example_init.h"

// 00000560: FlagGroup byte _init(Register word64 r6, Register word64 r7, Register word64 r8, Register word64 r9, Register word64 r10, Register word64 r11, Register word64 r12, Register word64 r13, Register out Eq_n r1Out, Register out Eq_n r6Out, Register out Eq_n r8Out, Register out Eq_n r9Out, Register out Eq_n r10Out, Register out Eq_n r11Out, Register out Eq_n r12Out, Register out Eq_n r13Out)
byte _init(word64 r6, word64 r7, word64 r8, word64 r9, word64 r10, word64 r11, word64 r12, word64 r13, union Eq_n & r1Out, union Eq_n & r6Out, union Eq_n & r8Out, union Eq_n & r9Out, union Eq_n & r10Out, union Eq_n & r11Out, union Eq_n & r12Out, union Eq_n & r13Out)
{
	Eq_n r15_n = fp - 320;
	word64 r12_n = DPB(r12, 0x2000, 0);
	Eq_n r1_n = DPB(fp - 0x00A0, 8248, 0) + 0x00;
	if (r1_n != 0x00)
		r1_n();
	Eq_n v16_n = (word64) r15_n + 0x00D0;
	Eq_n r6_n;
	Eq_n r8_n;
	Eq_n r9_n;
	Eq_n r10_n;
	Eq_n r11_n;
	Eq_n r12_n;
	Eq_n r13_n;
	Eq_n r1_n;
	byte CC_n;
	(*((word64) r15_n + 272))();
	r1Out = r1_n;
	r6Out = r6_n;
	r8Out = r8_n;
	r9Out = r9_n;
	r10Out = r10_n;
	r11Out = r11_n;
	r12Out = r12_n;
	r13Out = r13_n;
	return CC_n;
}

