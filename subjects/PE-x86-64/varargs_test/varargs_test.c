// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.6.2.0.

#include "varargs_test.h"

// 0000000140001000: Register word32 fn0000000140001000(Register out Eq_3 silOut)
word32 fn0000000140001000(Eq_3 & silOut)
{
	fn0000000140001140(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	*(fp - 0x90) = fp - 0x84;
	*(fp - 0x98) = fp - 0x88;
	*(fp - 0xA0) = fp - 0x78;
	*(fp - 0xA8) = fp - 0x80;
	fn00000001400010D0(qwArg00, qwArg08, qwArg10, qwArg18);
	byte sil_42;
	return fn00000001400011B0(*(fp - 0x10) ^ fp - 200, out sil_42);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn00000001400010D0(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_28;
	word64 rcx_29;
	word64 rdx_30;
	word64 r8_31;
	word64 r9_32;
	word64 rbx_33;
	word64 rsi_34;
	word64 rdi_35;
	byte SCZO_36;
	word32 ecx_37;
	byte SZO_38;
	byte C_39;
	word64 rax_40;
	word32 r9d_41;
	_acrt_iob_func();
	ui64 * rax_44 = fn00000001400010C0();
	word64 rsp_54;
	word64 rcx_55;
	word64 rdx_56;
	word64 r8_57;
	word64 r9_58;
	word64 rbx_59;
	word64 rsi_60;
	word64 rdi_61;
	byte SCZO_62;
	word32 ecx_63;
	byte SZO_64;
	byte C_65;
	word64 rax_66;
	word32 r9d_67;
	_stdio_common_vfscanf();
	return;
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn0000000140001140(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_26;
	word64 rcx_27;
	word64 rdx_28;
	word64 r8_29;
	word64 r9_30;
	word64 rbx_31;
	word64 rsi_32;
	word64 rdi_33;
	byte SCZO_34;
	word32 ecx_35;
	word64 rax_36;
	word32 r9d_37;
	byte SZO_38;
	byte C_39;
	_acrt_iob_func();
	ui64 * rax_42 = fn0000000140001130();
	word64 rsp_52;
	word64 rcx_53;
	word64 rdx_54;
	word64 r8_55;
	word64 r9_56;
	word64 rbx_57;
	word64 rsi_58;
	word64 rdi_59;
	byte SCZO_60;
	word32 ecx_61;
	word64 rax_62;
	word32 r9d_63;
	byte SZO_64;
	byte C_65;
	_stdio_common_vfprintf();
	return;
}

// 00000001400011B0: Register word32 fn00000001400011B0(Register ui64 rcx, Register out Eq_59 silOut)
word32 fn00000001400011B0(ui64 rcx, Eq_59 & silOut)
{
fn00000001400011B0_entry:
	*silOut = sil
	branch rcx != globals->qw40003000 l00000001400011CC
	goto l00000001400011BA
l00000001400011B0:
l00000001400011BA:
	word64 rcx_26 = __rol(rcx, 0x10)
	branch ((word16) rcx_26 & ~0x00) != 0x00 l00000001400011C8
l00000001400011C6:
	return eax
l00000001400011C8:
	__ror(rcx_26, 0x10)
l00000001400011CC:
	byte sil_23
	return fn000000014000147C(qwArg08, out sil_23)
l00000001400011CC_thunk_fn000000014000147C:
	eax = fn000000014000147C(qwArg08, out sil)
	return eax
fn00000001400011B0_exit:
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rbx, Register word64 r8, Register word64 r13, Register word128 xmm1)
void fn00000001400011D4(word64 rbx, word64 r8, word64 r13, word128 xmm1)
{
	word64 rsp_8;
	word64 rbx_9;
	byte SCZO_10;
	word32 ecx_11;
	word64 rcx_12;
	word32 eax_13;
	word64 rax_14;
	byte al_15;
	byte SZO_16;
	byte C_17;
	byte Z_18;
	ui64 r8_19;
	ptr64 r13_20;
	word128 xmm1_21;
	byte bl_22;
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc2C);
	*__p__commode() = fn0000000140001ABC();
	word32 eax_35 = fn000000014000164C(0x01, r8_19, r13_20, xmm1_21, qwLoc2C);
	byte al_37 = (byte) eax_35;
	if (al_37 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg04, qwArg08, qwArg0C);
		fn0000000140001854(eax_35);
		word32 eax_78 = fn0000000140001918();
		word64 rsp_80;
		word64 rbx_81;
		byte SCZO_82;
		word32 ecx_83;
		word64 rcx_84;
		word32 eax_85;
		word64 rax_86;
		byte al_87;
		byte SZO_88;
		byte C_89;
		byte Z_90;
		word64 r8_91;
		word64 r13_92;
		word128 xmm1_93;
		byte bl_94;
		configure_narrow_argv();
		if (eax_85 == 0x00)
		{
			fn0000000140001928();
			if (fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_103 = fn0000000140001ABC();
			word64 rsp_105;
			word64 rbx_106;
			byte SCZO_107;
			word32 ecx_108;
			word64 rcx_109;
			word32 eax_110;
			word64 rax_111;
			byte al_112;
			byte SZO_113;
			byte C_114;
			byte Z_115;
			word64 r8_116;
			word64 r13_117;
			word128 xmm1_118;
			byte bl_119;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_141;
				word64 rbx_142;
				byte SCZO_143;
				word32 ecx_144;
				word64 rcx_145;
				word32 eax_146;
				word64 rax_147;
				byte al_148;
				byte SZO_149;
				byte C_150;
				byte Z_151;
				word64 r8_152;
				word64 r13_153;
				word128 xmm1_154;
				byte bl_155;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		word64 rcx_160;
		byte bl_161;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_160, out bl_161);
		int3();
	}
	word64 rcx_73;
	byte bl_74;
	fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_73, out bl_74);
	int3();
	int3();
	fn0000000140001290();
	return;
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
	return;
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14();
	word32 eax_4 = fn0000000140001ABC();
	word64 rsp_9;
	byte SCZO_10;
	word32 ecx_11;
	word32 eax_12;
	word64 rcx_13;
	globals->u40002098();
	return;
}

// 00000001400012BC: Register uint64 fn00000001400012BC(Register word32 edx, Register word64 rdi, Register ptr64 r13, Register (ptr Eq_386) gs, Stack word64 qwArg08, Stack word64 qwArg10)
uint64 fn00000001400012BC(word32 edx, word64 rdi, ptr64 r13, Eq_386 * gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx, r13) == 0x00)
	{
		word64 rcx_359;
		byte bl_360;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_359, out bl_360);
		int3();
	}
	*(fp - 0x14) = 0x00;
	word32 eax_24 = fn00000001400015C4(gs);
	word64 rax_27 = DPB(rax, eax_24, 0);
	byte bl_28 = (byte) eax_24;
	word32 ecx_33 = (word32) (uint64) globals->dw400035B0;
	if (ecx_33 == 0x01)
	{
		ecx_33 = 0x07;
		word64 rcx_352;
		rax_27 = DPB(rax, fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_352, out bl_28), 0);
	}
	uint64 rax_228;
	if (ecx_33 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		word64 rax_331 = DPB(rax_27, _initterm_e(&globals->t400021B8, &globals->t400021D0), 0);
		if (_initterm_e(&globals->t400021B8, &globals->t400021D0) != 0x00)
		{
			rax_228 = 0xFF;
			return rax_228;
		}
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
	}
	else
		*(fp - 0x14) = 0x01;
	fn00000001400017B4(bl_28);
	word64 * rax_79 = fn0000000140001964();
	if (*rax_79 != 0x00)
	{
		word64 rax_290 = fn0000000140001718(rax_79);
		byte al_291 = (byte) rax_290;
		if (al_291 != 0x00)
		{
			word64 rbx_296 = *rax_79;
			fn0000000140001BF4();
			Eq_506 ebx_297 = (word32) rbx_296;
			word64 rsp_304;
			word64 rbx_305;
			word64 rsi_306;
			word64 rdi_307;
			byte SCZO_308;
			word64 rcx_309;
			byte al_310;
			byte SZO_311;
			byte C_312;
			byte Z_313;
			byte sil_314;
			byte bl_315;
			word32 ecx_316;
			word64 rdx_317;
			word64 rax_318;
			word32 eax_319;
			byte cl_320;
			word32 r8d_321;
			word64 r8_322;
			word32 edx_323;
			word32 ebx_324;
			word64 r13_325;
			struct Eq_530 * gs_326;
			byte dl_327;
			ebx_297();
		}
	}
	word64 * rax_106 = fn000000014000196C();
	if (*rax_106 != 0x00)
	{
		word64 rax_257 = fn0000000140001718(rax_106);
		byte al_258 = (byte) rax_257;
		if (al_258 != 0x00)
		{
			word64 rsp_264;
			word64 rbx_265;
			word64 rsi_266;
			word64 rdi_267;
			byte SCZO_268;
			word64 rcx_269;
			byte al_270;
			byte SZO_271;
			byte C_272;
			byte Z_273;
			byte sil_274;
			byte bl_275;
			word32 ecx_276;
			word64 rdx_277;
			word64 rax_278;
			word32 eax_279;
			byte cl_280;
			word32 r8d_281;
			word64 r8_282;
			word32 edx_283;
			word32 ebx_284;
			word64 r13_285;
			struct Eq_570 * gs_286;
			byte dl_287;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_114;
	word64 rbx_115;
	word64 rsi_116;
	word64 rdi_117;
	byte SCZO_118;
	word64 rcx_119;
	byte al_120;
	byte SZO_121;
	byte C_122;
	byte Z_123;
	byte sil_124;
	byte bl_125;
	word32 ecx_126;
	word64 rdx_127;
	word64 rax_128;
	word32 eax_129;
	byte cl_130;
	word32 r8d_131;
	word64 r8_132;
	word32 edx_133;
	word32 ebx_134;
	word64 r13_135;
	struct Eq_596 * gs_136;
	byte dl_137;
	_p___argv();
	word64 rsp_140;
	word64 rbx_141;
	word64 rsi_142;
	word64 rdi_143;
	byte SCZO_144;
	word64 rcx_145;
	byte al_146;
	byte SZO_147;
	byte C_148;
	byte Z_149;
	byte sil_150;
	byte bl_151;
	word32 ecx_152;
	word64 rdx_153;
	word64 rax_154;
	word32 eax_155;
	byte cl_156;
	word32 r8d_157;
	word64 r8_158;
	word32 edx_159;
	word32 ebx_160;
	word64 r13_161;
	struct Eq_622 * gs_162;
	byte dl_163;
	_p___argc();
	word64 rsp_166;
	word64 rbx_167;
	word64 rsi_168;
	word64 rdi_169;
	byte SCZO_170;
	word64 rcx_171;
	byte al_172;
	byte SZO_173;
	byte C_174;
	byte Z_175;
	byte sil_176;
	byte bl_177;
	word32 ecx_178;
	word64 rdx_179;
	word64 rax_180;
	word32 eax_181;
	byte cl_182;
	word32 r8d_183;
	word64 r8_184;
	word32 edx_185;
	word32 ebx_186;
	word64 r13_187;
	struct Eq_648 * gs_188;
	byte dl_189;
	get_initial_narrow_environment();
	byte sil_194;
	word32 eax_195 = fn0000000140001000(out sil_194);
	uint64 rbx_196 = (uint64) eax_195;
	word32 ebx_198 = (word32) rbx_196;
	byte al_199 = fn0000000140001AC0();
	if (al_199 == 0x00)
		exit((uint64) ebx_198);
	if (sil_194 == 0x00)
	{
		word64 rsp_231;
		word64 rbx_232;
		word64 rsi_233;
		word64 rdi_234;
		byte SCZO_235;
		word64 rcx_236;
		byte al_237;
		byte SZO_238;
		byte C_239;
		byte Z_240;
		byte sil_241;
		byte bl_242;
		word32 ecx_243;
		word64 rdx_244;
		word64 rax_245;
		word32 eax_246;
		byte cl_247;
		word32 r8d_248;
		word64 r8_249;
		word32 edx_250;
		word32 ebx_251;
		word64 r13_252;
		struct Eq_697 * gs_253;
		byte dl_254;
		cexit();
	}
	rax_228 = (uint64) fn00000001400017D8(0x00);
	return rax_228;
}

// 0000000140001434: Register Eq_713 Win32CrtStartup()
Eq_713 Win32CrtStartup()
{
	fn000000014000186C(rbx, qwLoc24, qwLoc1C, qwLoc14, qwLoc10, qwLoc0C);
	return fn00000001400012BC(edx, rdi, r13, gs, qwArg08, qwArg10);
}

// 0000000140001448: Register word32 fn0000000140001448()
word32 fn0000000140001448()
{
	SetUnhandledExceptionFilter(tLoc20);
	UnhandledExceptionFilter(tLoc20);
	Eq_748 eax_14 = GetCurrentProcess();
	word64 rsp_24;
	word64 rbx_25;
	byte SCZO_26;
	word64 rcx_27;
	word32 ecx_28;
	byte SZO_29;
	byte C_30;
	word32 eax_31;
	word64 rax_32;
	word32 edx_33;
	word64 rdx_34;
	globals->ptr40002058();
	return eax_31;
}

// 000000014000147C: Register word32 fn000000014000147C(Stack word64 qwArg08, Register out Eq_170 silOut)
word32 fn000000014000147C(word64 qwArg08, Eq_170 & silOut)
{
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		byte sil_16;
		*silOut = fn0000000140001550(&globals->t400030E0, qwLoc3C, qwLoc2C);
		globals->qw400031D8 = fp->qw0000;
		globals->ptr40003178 = &fp->qw0008;
		globals->qw40003050 = globals->qw400031D8;
		globals->qw40003160 = fp->qw0008;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		*(fp - 0x18) = globals->qw40003000;
		*(fp - 0x10) = globals->qw40003008;
		return fn0000000140001448();
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: Register byte fn0000000140001550(Register (ptr Eq_783) rcx, Stack word64 qwArg04, Stack word64 qwArg14)
byte fn0000000140001550(Eq_783 * rcx, word64 qwArg04, word64 qwArg14)
{
	RtlCaptureContext(tLoc48);
	Eq_867 rsi_16 = rcx->t00F8;
l000000014000156A:
	Eq_897 rax_49 = RtlLookupFunctionEntry(rsi_16, fp + 0x14, null);
	if (rax_49 != null)
	{
		word64 rsp_97;
		word64 rbx_98;
		word64 rdi_100;
		byte SCZO_101;
		word64 rcx_102;
		word32 edi_103;
		byte SZO_104;
		byte C_105;
		word32 r8d_106;
		word64 r8_107;
		word64 rdx_108;
		word64 rax_109;
		byte Z_110;
		word64 r9_111;
		word32 ecx_112;
		byte SO_113;
		byte sil_114;
		KERNEL32.dll!RtlVirtualUnwind();
		if ((word32) (uint64) (edi_103 + 0x01) < 0x02)
			goto l000000014000156A;
	}
	return (byte) qwLoc04;
}

// 00000001400015C4: Register word32 fn00000001400015C4(Register (ptr Eq_386) gs)
word32 fn00000001400015C4(Eq_386 * gs)
{
	word32 eax_4 = fn0000000140001DC4();
	if (eax_4 == 0x00)
		return DPB(eax_4, 0x00, 0);
	else
		__lock();
}

// 0000000140001600: Register byte fn0000000140001600(Register word32 ecx, Register word32 edx, Register ptr64 r13)
byte fn0000000140001600(word32 ecx, word32 edx, ptr64 r13)
{
	byte al_16 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_35;
	globals->b400035F0 = al_16;
	byte bl_26 = fn0000000140001BFC(edx, 0x01, r13, qwLoc20, qwLoc1C, qwLoc18, qwLoc14, qwLoc10);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_35 = bl_26;
			return al_35;
		}
		fn0000000140001938();
	}
	al_35 = 0x00;
	return al_35;
}

// 000000014000164C: Register word32 fn000000014000164C(Register uint32 ecx, Register ui64 r8, Register ptr64 r13, Register word128 xmm1, Stack word64 qwArg08)
word32 fn000000014000164C(uint32 ecx, ui64 r8, ptr64 r13, word128 xmm1, word64 qwArg08)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (ecx > 0x01)
	{
		word64 * rcx_184;
		byte bl_185;
		fn0000000140001974(0x05, qwLoc48, qwLoc44, qwLoc40, qwLoc38, out rcx_184, out bl_185);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_184);
	}
	else
	{
		word32 eax_143;
		word32 eax_37 = fn0000000140001DC4();
		if (eax_37 != 0x00 && ebx_11 == 0x00)
		{
			word64 rsp_116;
			word64 rbx_117;
			word64 rbp_118;
			byte SCZO_119;
			word32 ebx_120;
			word32 ecx_121;
			byte CZ_122;
			word32 eax_123;
			byte SZO_124;
			byte C_125;
			byte Z_126;
			word64 rcx_127;
			byte al_128;
			word64 rdx_129;
			word64 r8_130;
			word32 edx_131;
			word64 rax_132;
			byte cl_133;
			word64 r13_134;
			word128 xmm0_135;
			word128 xmm1_136;
			byte bl_137;
			initialize_onexit_table();
			if (eax_123 != 0x00)
				eax_143 = DPB(eax_123, 0x00, 0);
			else
			{
				word64 rsp_148;
				word64 rbx_149;
				word64 rbp_150;
				byte SCZO_151;
				word32 ebx_152;
				word32 ecx_153;
				byte CZ_154;
				word32 eax_155;
				byte SZO_156;
				byte C_157;
				byte Z_158;
				word64 rcx_159;
				byte al_160;
				word64 rdx_161;
				word64 r8_162;
				word32 edx_163;
				word64 rax_164;
				byte cl_165;
				word64 r13_166;
				word128 xmm0_167;
				word128 xmm1_168;
				byte bl_169;
				initialize_onexit_table();
				eax_143 = DPB(eax_155, eax_155 == 0x00, 0);
			}
		}
		else
		{
			word64 rdx_70 = globals->qw40003000;
			word32 eax_79 = (word32) (uint64) ((word32) (uint64) (word32) rdx_70 & 0x3F);
			ui64 r8_87 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - eax_79)) ^ rdx_70;
			*(r13 - 0x20) = r8_87;
			*(r13 - 0x18) = r8_87;
			*(r13 - 0x10) = r8_87;
			globals->ow400035C0 = owLoc24;
			*(r13 - 0x20) = r8_87;
			*(r13 - 0x18) = r8_87;
			*(r13 - 0x10) = r8_87;
			globals->r400035D0 = rLoc14;
			globals->ow400035D8 = owLoc24;
			globals->r400035E8 = rLoc14;
			eax_143 = DPB(eax_79, 0x01, 0);
		}
		return eax_143;
	}
}

// 0000000140001718: Register (ptr Eq_1129) fn0000000140001718(Register (ptr word64) rcx)
Eq_1129 * fn0000000140001718(word64 * rcx)
{
	struct Eq_1129 * rax_101;
	word32 * rax_33 = (word32 *) 23117;
	if (*(word16 *) 0x140000000 == 23117)
	{
		rax_33 = (int64) *(word32 *) 0x14000003C;
		word64 rcx_51 = rax_33 + 0x0000000140000000;
		if (rcx_51->dw0000 == 0x4550)
		{
			rax_33 = (word32 *) 0x020B;
			if (rcx_51->w0018 == 0x020B)
			{
				struct Eq_1160 * rax_61 = DPB(0x020B, (word32) rcx_51->w0014, 0);
				word64 rdx_116 = rcx_51 + 0x18 + rax_61;
				struct Eq_1171 * rax_114 = DPB(rax_61, (word32) rcx_51->w0006, 0);
				word64 r8_59 = rcx - 0x0000000140000000;
				word64 r9_69 = rdx_116 + (rax_114 * 0x05) * 0x08;
				while (rdx_116 != r9_69)
				{
					struct Eq_1171 * rcx_109 = (uint64) rdx_116->dw000C;
					word32 ecx_110 = (word32) rcx_109;
					if (r8_59 >= rcx_109)
					{
						rax_114 = (uint64) ((word32) (uint64) rdx_116->dw0008 + ecx_110);
						if (r8_59 < rax_114)
							goto l000000014000178F;
					}
					rdx_116 = rdx_116 + 0x28;
				}
				rdx_116 = null;
l000000014000178F:
				if (rdx_116 == null)
					rax_101 = (struct Eq_1129 *) DPB(rax_114, 0x00, 0);
				else if (rdx_116->dw0024 < 0x00)
					rax_101 = (struct Eq_1129 *) DPB(rax_114, 0x00, 0);
				else
					rax_101 = (struct Eq_1129 *) DPB(rax_114, 0x01, 0);
				return rax_101;
			}
		}
	}
	rax_101 = (struct Eq_1129 *) DPB(rax_33, 0x00, 0);
	return rax_101;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
	return;
}

// 00000001400017D8: Register word32 fn00000001400017D8(Register byte dl)
word32 fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) qwLoc04;
}

// 0000000140001804: void fn0000000140001804(Register word32 eax)
void fn0000000140001804(word32 eax)
{
	word32 eax_20;
	word64 rdx_7 = globals->qw40003000;
	word32 edx_8 = (word32) rdx_7;
	ui32 ecx_12 = (word32) (uint64) edx_8;
	byte cl_15 = (byte) (uint64) (ecx_12 & 0x3F);
	word64 rdx_17 = __ror(rdx_7 ^ globals->ow400035C0, cl_15);
	if (rdx_17 == ~0x00)
	{
		word64 rsp_46;
		word64 rbx_47;
		byte SCZO_48;
		word64 rdx_49;
		word64 rcx_50;
		word32 ecx_51;
		word32 edx_52;
		byte SZO_53;
		byte C_54;
		byte cl_55;
		byte Z_56;
		word64 rax_58;
		crt_atexit();
	}
	else
	{
		word64 rsp_62;
		word64 rbx_63;
		byte SCZO_64;
		word64 rdx_65;
		word64 rcx_66;
		word32 ecx_67;
		word32 edx_68;
		byte SZO_69;
		byte C_70;
		byte cl_71;
		byte Z_72;
		word64 rax_74;
		register_onexit_function();
	}
	return;
}

// 0000000140001854: void fn0000000140001854(Register word32 eax)
void fn0000000140001854(word32 eax)
{
	fn0000000140001804(eax);
	return;
}

// 000000014000186C: void fn000000014000186C(Register Eq_716 rbx, Stack word64 qwArg0C, Stack word64 qwArg14, Stack word64 qwArg1C, Stack word64 qwArg20, Stack word64 qwArg24)
void fn000000014000186C(Eq_716 rbx, word64 qwArg0C, word64 qwArg14, word64 qwArg1C, word64 qwArg20, word64 qwArg24)
{
	Eq_716 rax_15 = globals->qw40003000;
	if (rax_15 == rbx)
	{
		GetSystemTimeAsFileTime(tLoc20);
		ui64 v15_48 = qwArg14 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(tLoc20);
		rax_15 = ((uint64) dwArg1C << 0x20 ^ qwArg1C ^ v15_48 ^ (word64) fp + 0x0C) & (word64) fp + 0x0C;
		if (rax_15 == rbx)
			rax_15 = (word64) fp + 0x0C;
		globals->qw40003000 = rax_15;
	}
	globals->qw40003008 = ~rax_15;
	return;
}

// 0000000140001918: Register word32 fn0000000140001918()
word32 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: Register word32 fn0000000140001920()
word32 fn0000000140001920()
{
	return 0x4000;
}

// 0000000140001928: void fn0000000140001928()
void fn0000000140001928()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002028();
	return;
}

// 0000000140001938: void fn0000000140001938()
void fn0000000140001938()
{
	return;
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_4 = fn0000000140001130();
	*rax_4 = *rax_4 | 0x04;
	ui64 * rax_10 = fn00000001400010C0();
	*rax_10 = *rax_10 | 0x02;
	return;
}

// 0000000140001958: Register word32 fn0000000140001958()
word32 fn0000000140001958()
{
	return (word32) (globals->dw40003014 == 0x00);
}

// 0000000140001964: Register ptr64 fn0000000140001964()
ptr64 fn0000000140001964()
{
	return 0x140003638;
}

// 000000014000196C: Register ptr64 fn000000014000196C()
ptr64 fn000000014000196C()
{
	return 0x140003630;
}

// 0000000140001974: Register Eq_747 fn0000000140001974(Register word32 ecx, Stack word64 qwArg04, Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg14, Register out ptr64 rcxOut, Register out Eq_240 blOut)
LONG fn0000000140001974(word32 ecx, word64 qwArg04, word64 qwArg08, word64 qwArg0C, word64 qwArg14, ptr64 & rcxOut, Eq_240 & blOut)
{
	word32 ebx_11 = (word32) (uint64) ecx;
	if (IsProcessorFeaturePresent(tLoc05C4) == 0x00)
	{
		globals->dw40003610 = globals->dw40003610 & 0x00;
		Eq_1422 eax_29 = memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		RtlCaptureContext(tLoc05C0);
		Eq_897 rax_36 = RtlLookupFunctionEntry(qwLoc03DC, fp + 0x14, null);
		if (rax_36 != null)
		{
			word64 rsp_138;
			word64 rbx_139;
			word64 rbp_140;
			byte SCZO_141;
			word32 ebx_142;
			word32 ecx_143;
			word64 rcx_144;
			word32 eax_145;
			byte SZO_146;
			byte C_147;
			byte Z_148;
			word32 edx_149;
			word64 rdx_150;
			word64 rax_151;
			word32 r8d_152;
			word64 r8_153;
			word64 r9_154;
			byte bl_155;
			KERNEL32.dll!RtlVirtualUnwind();
		}
		memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		Eq_772 eax_72 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(tLoc05C0);
		word64 rcx_84;
		*rcxOut = fp - 1412;
		Eq_747 eax_109 = UnhandledExceptionFilter(tLoc05C0);
		if (eax_109 == 0x00)
		{
			eax_109 = (word32) (uint64) (0x00 - (-(eax_72 == 0x01) == 0x00));
			globals->dw40003610 = globals->dw40003610 & eax_109;
		}
		byte bl_98;
		*blOut = (byte) qwArg0C;
		return eax_109;
	}
	else
		__fastfail((word32) (uint64) ebx_11);
}

// 0000000140001ABC: Register word32 fn0000000140001ABC()
word32 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: Register bool fn0000000140001AC0()
bool fn0000000140001AC0()
{
	bool al_21;
	struct Eq_1511 * rax_7 = DPB(rax, GetModuleHandleW(tLoc24), 0);
	if (rax_7 != null && rax_7->w0000 == 23117)
	{
		word64 rax_49 = (int64) rax_7->dw003C + rax_7;
		if (rax_49->dw0000 == 0x4550 && (rax_49->w0018 == 0x020B && rax_49->dw0084 > 0x0E))
		{
			al_21 = rax_49->dw00F8 != 0x00;
			return al_21;
		}
	}
	al_21 = 0x00;
	return al_21;
}

// 0000000140001B14: void fn0000000140001B14()
void fn0000000140001B14()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002068();
	return;
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr (ptr Eq_1560)) rcx)
void fn0000000140001B24(Eq_1560 * * rcx)
{
	struct Eq_1560 * rax_5 = *rcx;
	if (rax_5->dw0000 == ~0x1F928C9C && rax_5->dw0018 == 0x04)
	{
		uint64 rcx_33 = (uint64) rax_5->dw0020;
		word32 ecx_34 = (word32) rcx_33;
		if (rcx_33 <= ~0x19930521 || ecx_34 == 0x01994000)
		{
			word64 rsp_38;
			byte SCZO_39;
			word64 rax_40;
			word64 rcx_41;
			byte Z_42;
			word32 ecx_43;
			word32 eax_44;
			byte CZ_45;
			byte SZO_46;
			byte C_47;
			api-ms-win-crt-runtime-l1-1-0.dll!terminate();
			int3();
			fn0000000140001B5C(qwLoc28, qwLoc24, qwLoc20, qwLoc1C);
			return;
		}
	}
	return;
}

// 0000000140001B5C: void fn0000000140001B5C(Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14)
void fn0000000140001B5C(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 * rbx_11 = &globals->qw40002680;
	word64 * rsi_12 = &globals->qw40002680;
	while (rbx_11 < rsi_12)
	{
		word64 rdi_37 = *rbx_11;
		if (rdi_37 != 0x00)
		{
			fn0000000140001BF4();
			word64 rsp_53;
			word64 rdi_56;
			byte SCZO_57;
			byte C_58;
			byte SZO_59;
			byte Z_60;
			word64 rcx_61;
			edi();
		}
		rbx_11 = rbx_11 + 0x08;
	}
	return;
}

// 0000000140001BA8: void fn0000000140001BA8(Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14)
void fn0000000140001BA8(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 * rbx_11 = &globals->qw40002690;
	word64 * rsi_12 = &globals->qw40002690;
	while (rbx_11 < rsi_12)
	{
		word64 rdi_37 = *rbx_11;
		if (rdi_37 != 0x00)
		{
			fn0000000140001BF4();
			word64 rsp_53;
			word64 rdi_56;
			byte SCZO_57;
			byte C_58;
			byte SZO_59;
			byte Z_60;
			word64 rcx_61;
			edi();
		}
		rbx_11 = rbx_11 + 0x08;
	}
	return;
}

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	word64 rsp_3;
	globals->ptr40002190();
	return;
}

// 0000000140001BFC: Register byte fn0000000140001BFC(Register word32 edx, Register uint64 rbx, Register ptr64 r13, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14, Stack word64 qwArg18, Stack word64 qwArg1C)
byte fn0000000140001BFC(word32 edx, uint64 rbx, ptr64 r13, word64 qwArg0C, word64 qwArg10, word64 qwArg14, word64 qwArg18, word64 qwArg1C)
{
	globals->dw4000301C = 0x02;
	word32 eax_20;
	word32 ebx_21;
	word32 ecx_22;
	word32 edx_23;
	__cpuid(0x00, 0x00, &eax_20, &ebx_21, &ecx_22, &edx_23);
	globals->dw40003018 = 0x01;
	ui32 r8d_201 = (word32) (uint64) globals->dw40003614;
	ui32 eax_65;
	word32 ebx_66;
	word32 ecx_67;
	word32 edx_68;
	__cpuid(0x01, 0x00, &eax_65, &ebx_66, &ecx_67, &edx_68);
	word32 r9d_71 = (word32) (uint64) ecx_67;
	*(r13 - 0x08) = r9d_71;
	word32 r11d_219 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_21 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx_23) ^ 0x69746E65))) | (word32) ((uint64) (ecx_22 ^ 0x444D4163)));
	int32 edi_58 = (word32) (uint64) eax_20;
	ui32 ecx_75 = (word32) (uint64) eax_65;
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx_23 ^ 0x49656E69) | (word32) ((uint64) ((word32) ((uint64) ecx_22) ^ 1818588270))) | (word32) ((uint64) ((word32) ((uint64) ebx_21) ^ 1970169159))) == 0x00)
	{
		globals->qw40003020 = globals->qw40003020 | ~0x00;
		r8d_201 = (word32) (uint64) (r8d_201 | 0x04);
		globals->dw40003614 = r8d_201;
		word32 eax_211 = (word32) (uint64) (eax_65 & 0x0FFF3FF0);
		if (eax_211 == 0x000106C0 || (eax_211 == 0x00020660 || eax_211 == 0x00020670))
		{
l0000000140001CDE:
			r8d_201 = (word32) (uint64) (r8d_201 | 0x01);
			globals->dw40003614 = r8d_201;
			goto l0000000140001CE9;
		}
		uint64 rax_235 = (uint64) (eax_211 + ~0x0003064F);
		if ((word32) rax_235 <= 0x20)
		{
			r11d_219 = 0x00010001;
			if (!__bt(rbx, rax_235))
				goto l0000000140001CDE;
		}
	}
l0000000140001CE9:
	if (r11d_219 == 0x00 && (word32) ((uint64) (ecx_75 & 0x0FF00F00)) >= 0x00600F00)
	{
		r8d_201 = (word32) (uint64) (r8d_201 | 0x04);
		globals->dw40003614 = r8d_201;
	}
	*(r13 - 0x1C) = r9d_71;
	if (edi_58 >= 0x07)
	{
		word32 eax_181;
		word32 ebx_182;
		word32 ecx_183;
		word32 edx_184;
		__cpuid(0x07, 0x00, &eax_181, &ebx_182, &ecx_183, &edx_184);
		if (!__bt(ebx_182, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_201 | 0x02);
	}
	if (!__bt(r9d_71, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(r9d_71, 0x1B) && !__bt(r9d_71, 0x1C))
		{
			ui64 edx_eax_149 = __xgetbv(0x00);
			if (((byte) (edx_eax_149 << 0x20 | edx_eax_149) & 0x06) == 0x06)
			{
				ui32 eax_163 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_163;
				if ((bLoc1C & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_163 | 0x20);
				}
			}
		}
	}
	return (byte) qwArg14;
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
word32 fn0000000140001DC4()
{
	return (word32) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
	return;
}

// 0000000140001E7C: void fn0000000140001E7C(Register (ptr Eq_1936) rax, Register Eq_1937 rdx, Register (ptr Eq_1938) r9)
void fn0000000140001E7C(Eq_1936 * rax, Eq_1937 rdx, Eq_1938 * r9)
{
	fn0000000140001E9C(rax, rdx, r9, r9->ptr0038);
	return;
}

// 0000000140001E9C: void fn0000000140001E9C(Register (ptr Eq_1936) rax, Register Eq_1937 rcx, Register (ptr Eq_1938) rdx, Register (ptr Eq_1944) r8)
void fn0000000140001E9C(Eq_1936 * rax, Eq_1937 rcx, Eq_1938 * rdx, Eq_1944 * r8)
{
	word32 r11d_12 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	Eq_1937 r9_14 = rcx;
	Eq_1937 r10_19 = rcx;
	if ((rax->b0000 & 0x04) != 0x00)
		r10_19 = (word64) rcx.u1 + (int64) r8->dw0004 & (int64) ((word32) ((uint64) (-((word32) ((uint64) rax->dw0008)))));
	word64 rdx_24 = Mem0[(int64) r11d_12 + r10_19:word64];
	struct Eq_1972 * rcx_27 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_27->b0003 & 0x0F) != 0x00)
		r9_14 = (word64) rcx.u1 + (uint64) ((word32) rcx_27->b0003 & ~0x0F);
	ui64 r9_38 = r9_14 ^ rdx_24;
	byte sil_47;
	fn00000001400011B0(r9_38, out sil_47);
	return;
}

// 0000000140001F10: void fn0000000140001F10()
void fn0000000140001F10()
{
	word64 rsp_3;
	word32 eax_4;
	eax();
	return;
}

// 0000000140001F12: void fn0000000140001F12(Register word64 rcx)
void fn0000000140001F12(word64 rcx)
{
	word64 rsp_14;
	word64 rbp_15;
	byte SCZO_16;
	word64 rdx_17;
	word64 rax_18;
	word64 rcx_19;
	word32 ecx_20;
	seh_filter_exe();
	return;
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
	return;
}

