// pngpixel.c
// Generated by decompiling pngpixel
// using Reko decompiler version 0.6.2.0.

#include "pngpixel.h"

// 0000000000400AE8: void _init()
void _init()
{
	if (globals->qw601FF8 != 0x00)
		fn0000000000400CC0();
	return;
}

// 0000000000400B20: void fn0000000000400B20()
void fn0000000000400B20()
{
fn0000000000400B20_entry:
fn0000000000400B20_exit:
}

// 0000000000400B30: void fn0000000000400B30()
void fn0000000000400B30()
{
fn0000000000400B30_entry:
fn0000000000400B30_exit:
}

// 0000000000400B40: void fn0000000000400B40()
void fn0000000000400B40()
{
fn0000000000400B40_entry:
fn0000000000400B40_exit:
}

// 0000000000400B50: void fn0000000000400B50()
void fn0000000000400B50()
{
fn0000000000400B50_entry:
fn0000000000400B50_exit:
}

// 0000000000400B60: void fn0000000000400B60()
void fn0000000000400B60()
{
fn0000000000400B60_entry:
fn0000000000400B60_exit:
}

// 0000000000400B70: void fn0000000000400B70()
void fn0000000000400B70()
{
fn0000000000400B70_entry:
fn0000000000400B70_exit:
}

// 0000000000400B80: void fn0000000000400B80()
void fn0000000000400B80()
{
fn0000000000400B80_entry:
fn0000000000400B80_exit:
}

// 0000000000400B90: void fn0000000000400B90()
void fn0000000000400B90()
{
fn0000000000400B90_entry:
fn0000000000400B90_exit:
}

// 0000000000400BA0: void fn0000000000400BA0()
void fn0000000000400BA0()
{
fn0000000000400BA0_entry:
fn0000000000400BA0_exit:
}

// 0000000000400BB0: void fn0000000000400BB0()
void fn0000000000400BB0()
{
fn0000000000400BB0_entry:
fn0000000000400BB0_exit:
}

// 0000000000400BC0: void fn0000000000400BC0()
void fn0000000000400BC0()
{
fn0000000000400BC0_entry:
fn0000000000400BC0_exit:
}

// 0000000000400BD0: void fn0000000000400BD0()
void fn0000000000400BD0()
{
fn0000000000400BD0_entry:
fn0000000000400BD0_exit:
}

// 0000000000400BE0: void fn0000000000400BE0()
void fn0000000000400BE0()
{
fn0000000000400BE0_entry:
fn0000000000400BE0_exit:
}

// 0000000000400BF0: void fn0000000000400BF0()
void fn0000000000400BF0()
{
fn0000000000400BF0_entry:
fn0000000000400BF0_exit:
}

// 0000000000400C00: void fn0000000000400C00()
void fn0000000000400C00()
{
fn0000000000400C00_entry:
fn0000000000400C00_exit:
}

// 0000000000400C10: void fn0000000000400C10()
void fn0000000000400C10()
{
fn0000000000400C10_entry:
fn0000000000400C10_exit:
}

// 0000000000400C20: void fn0000000000400C20()
void fn0000000000400C20()
{
fn0000000000400C20_entry:
fn0000000000400C20_exit:
}

// 0000000000400C30: void fn0000000000400C30()
void fn0000000000400C30()
{
fn0000000000400C30_entry:
fn0000000000400C30_exit:
}

// 0000000000400C40: void fn0000000000400C40()
void fn0000000000400C40()
{
fn0000000000400C40_entry:
fn0000000000400C40_exit:
}

// 0000000000400C50: void fn0000000000400C50()
void fn0000000000400C50()
{
fn0000000000400C50_entry:
fn0000000000400C50_exit:
}

// 0000000000400C60: void fn0000000000400C60()
void fn0000000000400C60()
{
fn0000000000400C60_entry:
fn0000000000400C60_exit:
}

// 0000000000400C70: void fn0000000000400C70()
void fn0000000000400C70()
{
fn0000000000400C70_entry:
fn0000000000400C70_exit:
}

// 0000000000400C80: void fn0000000000400C80()
void fn0000000000400C80()
{
fn0000000000400C80_entry:
fn0000000000400C80_exit:
}

// 0000000000400C90: void fn0000000000400C90()
void fn0000000000400C90()
{
fn0000000000400C90_entry:
fn0000000000400C90_exit:
}

// 0000000000400CA0: void fn0000000000400CA0()
void fn0000000000400CA0()
{
fn0000000000400CA0_entry:
fn0000000000400CA0_exit:
}

// 0000000000400CB0: void fn0000000000400CB0()
void fn0000000000400CB0()
{
fn0000000000400CB0_entry:
fn0000000000400CB0_exit:
}

// 0000000000400CC0: void fn0000000000400CC0()
void fn0000000000400CC0()
{
	word64 rsp_3;
	globals->qw601FF8();
	return;
}

// 0000000000400CD0: void _start(Register word64 rax, Register (ptr Eq_17) rdx, Stack word64 qwArg00, Stack word32 dwArg04)
void _start(word64 rax,  * rdx, word64 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	word64 rax_22 = DPB(rax, __libc_start_main(&globals->t4012F9, qwArg00, fp + 0x08, &globals->t401780, &globals->t4017F0, rdx, DPB(qwArg00, fp + 0x04, 0)), 0);
	__hlt();
}

// 0000000000400D00: Register ptr64 deregister_tm_clones(Register word64 r8)
ptr64 deregister_tm_clones(word64 r8)
{
	if (false || 0x00 == 0x00)
		return fp + 0x04;
	else
	{
		ptr64 rsp_43;
		word32 eax_44;
		word64 rax_45;
		word64 rbp_46;
		word64 r8_47;
		byte SCZO_48;
		byte CZ_49;
		byte SZO_50;
		byte C_51;
		byte Z_52;
		word32 edi_53;
		word64 rdi_54;
		eax();
		return rsp_43;
	}
}

// 0000000000400D40: void register_tm_clones()
void register_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	else
	{
		word64 rsp_43;
		word64 rsi_44;
		word64 rbp_45;
		byte SCZO_46;
		word64 rax_47;
		byte Z_48;
		byte SZO_49;
		byte C_50;
		word64 rdi_51;
		word32 eax_52;
		eax();
		return;
	}
}

// 0000000000400D80: void __do_global_dtors_aux(Register word64 r8)
void __do_global_dtors_aux(word64 r8)
{
	if (globals->b602108 == 0x00)
	{
		deregister_tm_clones(r8);
		globals->b602108 = 0x01;
	}
	return;
}

// 0000000000400DA0: void frame_dummy()
void frame_dummy()
{
fn0000000000400DA0_entry:
	rsp = fp
	rdi = 0x00601E10
	SCZO = cond(globals->qw601E10 - 0x00)
	Z = SCZO
	branch Test(NE,Z) l0000000000400DB0
	goto l0000000000400DAB
l0000000000400DA0:
l0000000000400DAB:
	register_tm_clones()
	return
l0000000000400DB0:
	rax = 0x00
	SZO = cond(0x00)
	Z = SZO
	C = false
	branch Test(EQ,Z) l0000000000400DAB
l0000000000400DBA:
	rsp = fp - 0x04
	dwLoc04 = rbp
	qwLoc04 = DPB(qwLoc04, dwLoc04, 0)
	rbp = fp - 0x04
	eax()
	rbp = qwLoc04
	rsp = fp + 0x04
	register_tm_clones()
	return
l0000000000400DC0_thunk_register_tm_clones:
fn0000000000400DA0_exit:
}

// 0000000000400DC6: void component(Register uint32 ecx, Register word32 edx, Register word32 esi, Register word32 edi, Register word32 r8d, Register ptr64 r13)
void component(uint32 ecx, word32 edx, word32 esi, word32 edi, word32 r8d, ptr64 r13)
{
	*(r13 - 0x28) = r8d;
	if (ecx > 0x10)
		exit(0x01);
	else
	{
		word64 rax_60 = globals->a401828[(uint64) ecx * 0x08];
		Eq_160 eax_61 = (word32) rax_60;
		word64 rsp_62;
		word64 rbp_63;
		byte SCZO_64;
		word64 rdi_65;
		word32 esi_66;
		word32 edx_67;
		word32 ecx_68;
		word64 r13_69;
		word32 r8d_70;
		word32 eax_71;
		word64 rax_72;
		byte SZO_73;
		byte C_74;
		word64 rdx_75;
		byte CZ_76;
		word64 rsi_77;
		word32 edi_78;
		eax_61();
		return;
	}
}

// 0000000000400EE9: Register word64 print_pixel(Register byte dil, Register (ptr Eq_181) fs, Stack word64 qwArg04, Stack word64 qwArg0C)
word64 print_pixel(byte dil, Eq_181 * fs, word64 qwArg04, word64 qwArg0C)
{
	word64 rsp_36;
	word64 rbp_37;
	word64 rbx_38;
	byte SCZO_39;
	word64 rdi_40;
	word64 rsi_41;
	word64 rdx_42;
	word32 ecx_43;
	word64 rax_44;
	struct Eq_193 * fs_45;
	word32 eax_46;
	byte SZO_47;
	byte C_48;
	byte al_49;
	byte CZ_50;
	word32 esi_51;
	byte Z_52;
	byte dil_53;
	png_get_bit_depth();
	word64 rsp_61;
	word64 rbp_62;
	word64 rbx_63;
	byte SCZO_64;
	word64 rdi_65;
	word64 rsi_66;
	word64 rdx_67;
	word32 ecx_68;
	word64 rax_69;
	struct Eq_212 * fs_70;
	word32 eax_71;
	byte SZO_72;
	byte C_73;
	byte al_74;
	byte CZ_75;
	word32 esi_76;
	byte Z_77;
	byte dil_78;
	png_get_color_type();
	FILE * rax_25 = fs->ptr0028;
	uint32 eax_79 = (word32) al_74;
	if (eax_79 > 0x06)
	{
		word64 rsp_126;
		word64 rbp_127;
		word64 rbx_128;
		byte SCZO_129;
		word64 rdi_130;
		word64 rsi_131;
		word64 rdx_132;
		word32 ecx_133;
		word64 rax_134;
		struct Eq_238 * fs_135;
		word32 eax_136;
		byte SZO_137;
		byte C_138;
		byte al_139;
		byte CZ_140;
		word32 esi_141;
		byte Z_142;
		byte dil_143;
		png_error();
		if ((rax_25 ^ fs_135->qw0028) != 0x00)
			__stack_chk_fail();
		return qwArg0C;
	}
	else
	{
		word64 rax_103 = globals->a401958[(uint64) eax_79 * 0x08];
		Eq_259 eax_104 = (word32) rax_103;
		word64 rsp_105;
		word64 rbp_106;
		word64 rbx_107;
		byte SCZO_108;
		word64 rdi_109;
		word64 rsi_110;
		word64 rdx_111;
		word32 ecx_112;
		word64 rax_113;
		struct Eq_270 * fs_114;
		word32 eax_115;
		byte SZO_116;
		byte C_117;
		byte al_118;
		byte CZ_119;
		word32 esi_120;
		byte Z_121;
		byte dil_122;
		eax_104();
		return rbp_106;
	}
}

// 00000000004012F9: void main(Register (ptr Eq_222) rsi, Register word32 edi, Register word64 r13, Register (ptr Eq_181) fs)
void main(FILE * rsi, word32 edi, word64 r13, Eq_181 * fs)
{
fn00000000004012F9_entry:
	rsp = fp
	rsp = fp - 0x04
	dwLoc04 = rbp
	rbp = fp - 0x04
	rsp = fp - 0xA4
	dwLoc98 = edi
	qwLocA4 = rsi
	rax = fs->ptr0028
	qwLoc0C = rax
	rax = null
	dwLoc88 = 0x01
	SCZO = cond(dwLoc98 - 0x04)
	Z = SCZO
	branch Test(NE,Z) l000000000040173F
	goto l0000000000401337
l00000000004012F9:
l0000000000401337:
	rax = qwLocA4
	rax = (FILE *) ((char *) &rax->ptr0000 + 0x08)
	SCZO = cond(rax)
	rax = rax->ptr0000
	rdi = rax
	atol()
	qwLoc2C = rax
	rax = qwLocA4
	rax = (FILE *) ((char *) &rax->ptr0000 + 0x0010)
	SCZO = cond(rax)
	rax = rax->ptr0000
	rdi = rax
	atol()
	qwLoc24 = rax
	rax = qwLocA4
	rax = (FILE *) ((char *) &rax->ptr0000 + 0x0018)
	rax = rax->ptr0000
	rsi = &globals->str401990
	rdi = rax
	rax = fopen(rdi, "rb")
	eax = (word32) rax
	al = (byte) rax
	qwLoc1C = rax
	qwLoc44 = null
	SCZO = cond(qwLoc1C - 0x00)
	Z = SCZO
	branch Test(EQ,Z) l0000000000401716
l000000000040139D:
	rcx = null
	rdx = null
	rsi = null
	rdi = &globals->t401993
	png_create_read_struct()
	qwLoc3C = rax
	rax = qwLoc3C
	SZO = cond(rax & rax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l00000000004016F6
l00000000004013C7:
	rax = qwLoc3C
	rdi = rax
	png_create_info_struct()
	qwLoc34 = rax
	rax = qwLoc34
	SZO = cond(rax & rax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l00000000004016C0
l00000000004013E4:
	rax = qwLoc3C
	rdx = qwLoc1C
	rsi = rdx
	rdi = rax
	png_init_io()
	rdx = qwLoc34
	rax = qwLoc3C
	rsi = rdx
	rdi = rax
	png_read_info()
	rdx = qwLoc34
	rax = qwLoc3C
	rsi = rdx
	rdi = rax
	png_get_rowbytes()
	rdx = rax
	rax = qwLoc3C
	rsi = rdx
	rdi = rax
	png_malloc()
	qwLoc44 = rax
	rax = qwLoc44
	qwLoc14 = rax
	rsi = qwLoc34
	rax = qwLoc3C
	eax = (word32) rax
	r9 = r13 - 116
	r8 = r13 - 0x78
	rcx = fp - 0x80
	rdx = fp - 0x84
	rsp = fp - 0xAC
	SCZO = cond(fp - 0xAC)
	rdi = fp - 0x6C
	rsp = fp - 0xB0
	dwLocB0 = fp - 0x6C
	rdi = fp - 0x70
	rsp = fp - 0xB4
	dwLocB4 = fp - 0x70
	rdi = fp - 116
	rsp = fp - 0xB8
	dwLocB8 = fp - 116
	rdi = rax
	png_get_IHDR()
	rsp = fp - 0x98
	SZO = cond(eax & eax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l00000000004016AF
l000000000040147A:
	rax = (uint64) dwLoc74
	eax = (word32) rax
	al = (byte) rax
	SZO = cond(eax & eax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l0000000000401488
l0000000000401481:
	SCZO = cond(eax - 0x01)
	Z = SCZO
	branch Test(EQ,Z) l0000000000401491
l0000000000401486:
	rax = qwLoc3C
	rsi = &globals->t40199A
	rdi = rax
	png_error()
	goto l00000000004014AB
l0000000000401488:
	dwLoc68 = 0x01
	goto l00000000004014AB
l0000000000401491:
	dwLoc68 = 0x07
	goto l00000000004014AB
l000000000040149A:
l00000000004014AB:
	rax = qwLoc3C
	rdi = rax
	png_start_read_image()
	dwLoc64 = 0x00
l00000000004014C3:
	rax = (uint64) *(rbp - 0x70)
	eax = (word32) rax
	SCZO = cond(eax - 0x01)
	Z = SCZO
	branch Test(NE,Z) l00000000004015CE
l00000000004014CF:
	SCZO = cond(*(rbp - 0x60) - 0x01)
	SZO = SCZO
	branch Test(LE,SZO) l00000000004014EF
l00000000004014D5:
	rax = (FILE *) 0x07
	eax = (word32) rax
	rax = (uint64) (eax - *(rbp - 0x60))
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	rdx = (FILE *) 0x01
	edx = (word32) rdx
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (edx << cl)
	edx = (word32) rdx
	rax = (uint64) edx
	eax = (word32) rax
	rax = (uint64) (eax - 0x01)
	eax = (word32) rax
	al = (byte) rax
	SCZO = cond(eax)
	goto l00000000004014F4
l00000000004014EF:
	rax = (FILE *) 0x07
	eax = (word32) rax
	al = (byte) rax
l00000000004014F4:
	rdx = (uint64) *(rbp - 0x60)
	edx = (word32) rdx
	rsi = (uint64) edx
	esi = (word32) rsi
	rsi = (uint64) (esi & 0x01)
	esi = (word32) rsi
	rdx = (uint64) *(rbp - 0x60)
	edx = (word32) rdx
	rdx = (uint64) ((word32) edx + 0x01)
	edx = (word32) rdx
	rdx = (uint64) (edx >> 0x01)
	edx = (word32) rdx
	rcx = (FILE *) 0x03
	ecx = (word32) rcx
	rcx = (uint64) (ecx - edx)
	ecx = (word32) rcx
	rdx = (uint64) ecx
	edx = (word32) rdx
	rcx = (uint64) edx
	cl = (byte) rcx
	rsi = (uint64) (esi << cl)
	esi = (word32) rsi
	rdx = (uint64) esi
	edx = (word32) rdx
	rdx = (uint64) (edx & 0x07)
	edx = (word32) rdx
	rax = (uint64) (eax - edx)
	eax = (word32) rax
	rdx = (uint64) eax
	edx = (word32) rdx
	rax = (uint64) *(rbp - 0x80)
	eax = (word32) rax
	rdx = (uint64) ((word32) edx + eax)
	edx = (word32) rdx
	SCZO = cond(*(rbp - 0x60) - 0x01)
	SZO = SCZO
	branch Test(LE,SZO) l0000000000401531
l0000000000401525:
	rax = (FILE *) 0x07
	eax = (word32) rax
	rax = (uint64) (eax - *(rbp - 0x60))
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	al = (byte) rax
	SCZO = cond(eax)
	goto l0000000000401536
l0000000000401531:
	rax = (FILE *) 0x03
	eax = (word32) rax
	al = (byte) rax
l0000000000401536:
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (edx >> cl)
	edx = (word32) rdx
	rax = (uint64) edx
	eax = (word32) rax
	SZO = cond(eax & eax)
	Z = SZO
	C = false
	branch Test(EQ,Z) l000000000040166E
l0000000000401544:
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	rax = (uint64) (eax & 0x01)
	eax = (word32) rax
	rdx = (uint64) eax
	edx = (word32) rdx
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	rax = (uint64) (eax + 0x01)
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	rcx = (FILE *) 0x03
	ecx = (word32) rcx
	rcx = (uint64) (ecx - eax)
	ecx = (word32) rcx
	rax = (uint64) ecx
	eax = (word32) rax
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (edx << cl)
	edx = (word32) rdx
	rax = (uint64) edx
	eax = (word32) rax
	rax = (uint64) (eax & 0x07)
	eax = (word32) rax
	*(rbp - 88) = eax
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	rax = (uint64) (eax & 0x01)
	eax = (word32) rax
	SZO = cond(eax & eax)
	Z = SZO
	al = Test(EQ,Z)
	edx = (word32) al
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	rcx = (FILE *) 0x03
	ecx = (word32) rcx
	rcx = (uint64) (ecx - eax)
	ecx = (word32) rcx
	rax = (uint64) ecx
	eax = (word32) rax
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (edx << cl)
	edx = (word32) rdx
	rax = (uint64) edx
	eax = (word32) rax
	rax = (uint64) (eax & 0x07)
	eax = (word32) rax
	*(rbp - 0x5C) = eax
	rax = (FILE *) 0x07
	eax = (word32) rax
	rax = (uint64) (eax - *(rbp - 0x60))
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	rdx = (FILE *) 0x01
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (0x01 << cl)
	edx = (word32) rdx
	rax = (uint64) edx
	eax = (word32) rax
	*(rbp - 0x50) = eax
	SCZO = cond(*(rbp - 0x60) - 0x02)
	SZO = SCZO
	branch Test(LE,SZO) l00000000004015C4
l00000000004015AF:
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	rax = (uint64) (eax - 0x01)
	eax = (word32) rax
	rax = (uint64) (eax >> 0x01)
	eax = (word32) rax
	rdx = (FILE *) 0x08
	edx = (word32) rdx
	rcx = (uint64) eax
	cl = (byte) rcx
	rdx = (uint64) (edx >> cl)
	edx = (word32) rdx
	SCZO = cond(edx)
	rax = (uint64) edx
	eax = (word32) rax
	al = (byte) rax
	goto l00000000004015C9
l00000000004015C4:
	rax = (FILE *) 0x08
	eax = (word32) rax
	al = (byte) rax
l00000000004015C9:
	*(rbp - 0x54) = eax
	goto l00000000004015E8
l00000000004015CE:
	*(rbp - 88) = 0x00
	rax = (uint64) *(rbp - 88)
	eax = (word32) rax
	*(rbp - 0x5C) = eax
	*(rbp - 0x50) = 0x01
	rax = (uint64) *(rbp - 0x50)
	eax = (word32) rax
	*(rbp - 0x54) = eax
l00000000004015E8:
	rax = (uint64) *(rbp - 0x5C)
	eax = (word32) rax
	*(rbp - 0x4C) = eax
l00000000004015F0:
	rdi = &globals->str4019B6
	rax = DPB(rax, puts("png_read_row"), 0)
	rax = (FILE *) *(rbp - 0x38)
	rcx = (FILE *) *(rbp - 0x10)
	rdx = null
	rsi = rcx
	rdi = rax
	png_read_row()
	rax = (uint64) *(rbp - 0x4C)
	SCZO = cond(rax - *(rbp - 0x20))
	Z = SCZO
	branch Test(NE,Z) l000000000040165E
l000000000040161B:
	rax = (uint64) *(rbp - 88)
	eax = (word32) rax
	*(rbp - 0x48) = eax
	*(rbp - 0x44) = 0x00
	goto l0000000000401656
l000000000040162A:
	rax = (uint64) *(rbp - 0x48)
	SCZO = cond(rax - *(rbp - 0x28))
	Z = SCZO
	branch Test(NE,Z) l000000000040164C
l0000000000401633:
	rsi = (FILE *) *(rbp - 0x30)
	rax = (FILE *) *(rbp - 0x38)
	rcx = (uint64) *(rbp - 0x44)
	rdx = (FILE *) *(rbp - 0x10)
	rdi = rax
	dil = (byte) rdi
	rbp = print_pixel(dil, fs, qwArg04, qwArg0C)
	goto l000000000040167F
l000000000040164C:
	rax = (uint64) *(rbp - 0x50)
	eax = (word32) rax
	v27 = *(rbp - 0x48) + eax
	*(rbp - 0x48) = v27
	v28 = *(rbp - 0x44) + 0x01
	*(rbp - 0x44) = v28
	SCZO = cond(v28)
l0000000000401656:
	rax = (uint64) *(rbp - 0x80)
	eax = (word32) rax
	SCZO = cond(*(rbp - 0x48) - eax)
	C = SCZO
	branch Test(ULT,C) l000000000040162A
l000000000040165E:
	rax = (uint64) *(rbp - 0x54)
	eax = (word32) rax
	v26 = *(rbp - 0x4C) + eax
	*(rbp - 0x4C) = v26
	SCZO = cond(v26)
l0000000000401664:
	rax = (uint64) *(rbp - 0x7C)
	eax = (word32) rax
	al = (byte) rax
	SCZO = cond(*(rbp - 0x4C) - eax)
	C = SCZO
	branch Test(ULT,C) l00000000004015F0
l000000000040166F:
	v25 = *(rbp - 0x60) + 0x01
	*(rbp - 0x60) = v25
	SCZO = cond(v25)
l0000000000401673:
	rax = (uint64) *(rbp - 0x60)
	eax = (word32) rax
	SCZO = cond(eax - *(rbp - 100))
	SO = SCZO
	branch Test(LT,SO) l00000000004014C3
l000000000040167F:
	*(rbp - 0x40) = 0x00
	rax = (FILE *) *(rbp - 0x38)
	rdx = (FILE *) *(rbp - 0x10)
	rsi = rdx
	rdi = rax
	png_free()
	rax = (FILE *) *(rbp - 0x38)
	rdx = rbp - 0x30
	rsi = rdx
	rdi = rax
	png_destroy_info_struct()
	goto l00000000004016DE
l00000000004016AF:
	rax = qwLoc3C
	rsi = &globals->t4019C3
	rdi = rax
	png_error()
l00000000004016C0:
	rax = globals->ptr602100
	rcx = rax
	rdx = (FILE *) 44
	rsi = (FILE *) 0x01
	rdi = &globals->t4019E8
	rax = DPB(rax, fwrite(&globals->t4019E8, 0x01, 44, rcx), 0)
l00000000004016DE:
	rax = fp - 0x3C
	rdx = null
	rsi = null
	rdi = fp - 0x3C
	png_destroy_read_struct()
	goto l000000000040175D
l00000000004016F6:
	rax = globals->ptr602100
	rcx = rax
	rdx = (FILE *) 0x2E
	rsi = (FILE *) 0x01
	rdi = &globals->t401A18
	rax = DPB(rax, fwrite(&globals->t401A18, 0x01, 0x2E, rcx), 0)
	goto l000000000040175D
l0000000000401716:
	rax = qwLocA4
	rax = (FILE *) ((char *) &rax->ptr0000 + 0x0018)
	SCZO = cond(rax)
	rdx = rax->ptr0000
	rax = globals->ptr602100
	rsi = &globals->t401A48
	rdi = rax
	rax = null
	rax = null
	goto l000000000040175D
l000000000040173F:
	rax = globals->ptr602100
	rcx = rax
	rdx = (FILE *) 0x27
	rsi = (FILE *) 0x01
	rdi = &globals->t401A70
	rax = DPB(rax, fwrite(&globals->t401A70, 0x01, 0x27, rcx), 0)
l000000000040175D:
	rax = (FILE *) 0x01
	rdi = qwLoc0C
	rdi = rdi ^ fs->ptr0028
	SZO = cond(rdi)
	Z = SZO
	C = false
	branch Test(EQ,Z) l0000000000401777
l0000000000401772:
	__stack_chk_fail()
l0000000000401777:
	rsp = fp - 0x04
	rbp = qwLoc04
	rsp = fp + 0x04
	return
fn00000000004012F9_exit:
}

// 0000000000401780: void __libc_csu_init(Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rsi, word32 edi)
{
	_init();
	if (0x0000000000601E08 - 0x0000000000601E00 >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_74;
			word64 rdi_75;
			word64 rsi_76;
			word32 r15d_77;
			word32 edi_78;
			word64 r15_79;
			word64 rbp_80;
			word64 r12_81;
			word64 rbx_82;
			word64 r14_83;
			word64 r13_84;
			word64 rdx_85;
			byte SCZO_86;
			byte SZO_87;
			byte C_88;
			byte Z_89;
			word32 ebx_90;
			globals->u601E00();
		} while (rbx_82 + 0x01 != rbp_80);
	}
	return;
}

// 00000000004017F0: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 00000000004017F4: void _fini()
void _fini()
{
	return;
}

