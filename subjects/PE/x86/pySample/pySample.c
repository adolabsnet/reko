// pySample.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.8.0.0.

#include "pySample.h"

// 10001000: Register (ptr32 Eq_2) fn10001000(Stack (ptr32 Eq_3) ptrArg04, Stack (ptr32 Eq_4) ptrArg08)
PyObject * fn10001000(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_20 = PyArg_ParseTuple(ptrArg08, "ii:sum", fp - 0x04, fp - 0x08);
	if (eax_20 != null)
		return Py_BuildValue("i", dwLoc04 + dwLoc08);
	return eax_20;
}

// 10001050: Register (ptr32 Eq_2) fn10001050(Stack (ptr32 Eq_3) ptrArg04, Stack (ptr32 Eq_4) ptrArg08)
PyObject * fn10001050(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_20 = PyArg_ParseTuple(ptrArg08, "ii:dif", fp - 0x08, fp - 0x04);
	if (eax_20 != null)
		return Py_BuildValue("i", dwLoc08 - dwLoc04);
	return eax_20;
}

// 100010A0: Register (ptr32 Eq_2) fn100010A0(Stack (ptr32 Eq_3) ptrArg04, Stack (ptr32 Eq_4) ptrArg08)
PyObject * fn100010A0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_20 = PyArg_ParseTuple(ptrArg08, "ii:div", fp - 0x08, fp - 0x04);
	if (eax_20 != null)
		return Py_BuildValue("i", (int32) ((int64) dwLoc08 / dwLoc04));
	return eax_20;
}

// 100010F0: Register (ptr32 Eq_2) fn100010F0(Stack (ptr32 Eq_3) ptrArg04, Stack (ptr32 Eq_4) ptrArg08)
PyObject * fn100010F0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_20 = PyArg_ParseTuple(ptrArg08, "ff:fdiv", fp - 0x08, fp - 0x04);
	if (eax_20 != null)
		return Py_BuildValue("f", (real64) rLoc08 / rLoc04);
	return eax_20;
}

// 10001140: Register (ptr32 Eq_99) py_unused(Stack (ptr32 Eq_100) self, Stack (ptr32 Eq_101) args)
PyObject * py_unused(PyObject * self, PyObject * args)
{
	PyObject * eax_15 = PyArg_ParseTuple(args, ":unused");
	if (eax_15 == null)
		return eax_15;
	PyObject * eax_24 = &_Py_NoneStruct;
	++eax_24->ob_refcnt;
	return &_Py_NoneStruct;
}

// 10001170: void initpySample()
void initpySample()
{
	Py_InitModule4("pySample", globals->methods, null, null, 1007);
}

// 100011E9: Register word32 fn100011E9(Stack word32 dwArg08)
word32 fn100011E9(word32 dwArg08)
{
	word32 eax_123;
	Eq_139 ebp_203 = 0x00;
	if (dwArg08 == 0x00)
	{
		if (globals->dw10003070 <= 0x00)
		{
			eax_123 = 0x00;
			return eax_123;
		}
		--globals->dw10003070;
	}
	globals->dw100033A4 = *adjust_fdiv;
	if (dwArg08 == 0x01)
	{
		Eq_139 edi_82 = fs->ptr0018->t0004;
		while (true)
		{
			Eq_139 eax_93 = InterlockedCompareExchange(&globals->t100033AC, edi_82, 0x00);
			if (eax_93 == 0x00)
				break;
			if (eax_93 == edi_82)
			{
				ebp_203 = 0x01;
				break;
			}
			Sleep(1000);
		}
		if (globals->dw100033A8 != 0x00)
			_amsg_exit(0x1F);
		globals->dw100033A8 = 0x01;
		if (_initterm_e(&globals->t100020A0, &globals->t100020A8) != 0x00)
		{
			eax_123 = 0x00;
			return eax_123;
		}
		_initterm(&globals->t10002098, &globals->t1000209C);
		globals->dw100033A8 = 0x02;
		if (ebp_203 == 0x00)
			InterlockedExchange(&globals->t100033AC, ebp_203);
		if (globals->ptr100033B8 != null)
		{
			word32 edi_161;
			word32 eax_162 = fn10001742(InterlockedCompareExchange, 268448684, 0x02, out edi_161);
			if (eax_162 != 0x00)
			{
				*(fp - 0x14) = fp->dw000C;
				*(fp - 0x18) = edi_161;
				*(fp - 0x1C) = fp->dw0004;
				word32 esp_176;
				word32 eax_177;
				word32 ebp_178;
				byte SZO_179;
				bool C_180;
				byte SCZO_181;
				bool Z_182;
				word32 ecx_183;
				word32 ebx_184;
				word32 esi_185;
				word32 edi_186;
				struct Eq_391 * fs_187;
				globals->ptr100033B8();
			}
		}
		++globals->dw10003070;
	}
	else if (dwArg08 == 0x00)
	{
		while (InterlockedCompareExchange(&globals->t100033AC, 0x01, 0x00) != 0x00)
			Sleep(1000);
		if (globals->dw100033A8 != 0x02)
			_amsg_exit(0x1F);
		word32 * eax_232 = _decode_pointer(globals->ptr100033B4);
		word32 * ebx_233 = eax_232;
		ptr32 esp_238 = fp - 0x10;
		if (eax_232 != null)
		{
			ptr32 esp_263 = fp - 0x10;
			word32 * edi_264 = _decode_pointer(globals->ptr100033B0);
			while (true)
			{
				edi_264 -= 0x04;
				if (edi_264 < ebx_233)
					break;
				<anonymous> * eax_285 = *edi_264;
				if (eax_285 != null)
				{
					word32 eax_290;
					word32 ebp_291;
					byte SZO_292;
					bool C_293;
					byte SCZO_294;
					bool Z_295;
					word32 ecx_296;
					word32 esi_298;
					struct Eq_331 * fs_300;
					eax_285();
				}
			}
			word32 ** esp_278 = esp_263 - 0x04;
			*esp_278 = ebx_233;
			free(*esp_278);
			void * eax_282 = _encoded_null();
			globals->ptr100033B0 = eax_282;
			globals->ptr100033B4 = eax_282;
			esp_238 = (char *) esp_278 + 0x04;
		}
		LONG * esp_251 = esp_238 - 0x04;
		*esp_251 = (int32) 0x00;
		*(esp_251 - 0x04) = 268448684;
		globals->dw100033A8 = 0x00;
		InterlockedExchange(*(esp_251 - 0x04), *esp_251);
	}
	eax_123 = 0x01;
	return eax_123;
}

// 10001388: Register word32 fn10001388(Register Eq_395 ecx, Register Eq_197 edx, Register (ptr32 Eq_172) ebx, Register ptr32 esi, Register word32 edi)
word32 fn10001388(LPVOID ecx, DWORD edx,  * ebx, ptr32 esi, word32 edi)
{
	struct Eq_400 * ebp_10 = fn100017E8(ebx, esi, edi, dwLoc0C, 0x100021E8, 0x10);
	Eq_413 ebx_16 = ebp_10->t0008;
	*(ebp_10 - 0x1C) = 0x01;
	*(ebp_10 - 0x04) = 0x00;
	globals->t10003008 = edx;
	*(ebp_10 - 0x04) = 0x01;
	ptr32 esp_186 = fp - 0x08;
	Eq_395 edi_12 = ecx;
	Eq_197 esi_14 = edx;
	if (edx == 0x00 && globals->dw10003070 == 0x00)
	{
		*(ebp_10 - 0x1C) = 0x00;
		goto l1000147A;
	}
	if (edx == 0x01 || edx == 0x02)
	{
		word32 eax_171 = globals->dw100020CC;
		if (eax_171 != 0x00)
		{
			word32 ecx_213;
			word32 edx_215;
			word32 eax_218;
			byte SZO_219;
			bool C_220;
			byte SCZO_221;
			bool Z_222;
			fn00000000();
			*(ebp_10 - 0x1C) = eax_218;
		}
		if (*(ebp_10 - 0x1C) == 0x00)
		{
l1000147A:
			*(ebp_10 - 0x04) &= 0x00;
			*(ebp_10 - 0x04) = ~0x01;
			fn10001493();
			word32 eax_42 = *(ebp_10 - 0x1C);
			fn1000182D(ebp_10, 0x10, dwArg00, dwArg04, dwArg08, dwArg0C);
			return eax_42;
		}
		LPVOID * esp_193 = esp_186 - 0x04;
		*esp_193 = (LPVOID *) edi_12;
		*(esp_193 - 0x04) = (uint32) esi_14;
		*(esp_193 - 0x08) = (_onexit_t *) ebx_16;
		ui32 eax_199 = fn100011E9(dwArg04);
		*(ebp_10 - 0x1C) = eax_199;
		esp_186 = (char *) esp_193 + 0x04;
		if (eax_199 == 0x00)
			goto l1000147A;
	}
	LPVOID * esp_62 = esp_186 - 0x04;
	*esp_62 = (LPVOID *) edi_12;
	*(esp_62 - 0x04) = (uint32) esi_14;
	*(esp_62 - 0x08) = (_onexit_t *) ebx_16;
	word32 eax_68 = fn100017C6(dwArg00, dwArg04);
	*(ebp_10 - 0x1C) = eax_68;
	ptr32 esp_148 = (char *) esp_62 + 0x04;
	if (esi_14 == 0x01 && eax_68 == 0x00)
	{
		*esp_62 = (LPVOID *) edi_12;
		*(esp_62 - 0x04) = eax_68;
		*(esp_62 - 0x08) = (_onexit_t *) ebx_16;
		fn100017C6(dwArg00, dwArg04);
		*esp_62 = (LPVOID *) edi_12;
		*(esp_62 - 0x04) = 0x00;
		*(esp_62 - 0x08) = (_onexit_t *) ebx_16;
		fn100011E9(dwArg04);
		esp_148 = (char *) esp_62 + 0x04;
		word32 eax_149 = globals->dw100020CC;
		if (eax_149 != 0x00)
		{
			*esp_62 = (LPVOID *) edi_12;
			*(esp_62 - 0x04) = 0x00;
			*(esp_62 - 0x08) = (_onexit_t *) ebx_16;
			word32 ecx_161;
			word32 edx_163;
			word32 eax_166;
			byte SZO_167;
			bool C_168;
			byte SCZO_169;
			bool Z_170;
			fn00000000();
		}
	}
	if (esi_14 == 0x00 || esi_14 == 0x03)
	{
		LPVOID * esp_86 = esp_148 - 0x04;
		*esp_86 = (LPVOID *) edi_12;
		*(esp_86 - 0x04) = (uint32) esi_14;
		*(esp_86 - 0x08) = (_onexit_t *) ebx_16;
		ui32 eax_92 = fn100011E9(dwArg04);
		if (eax_92 == 0x00)
			*(ebp_10 - 0x1C) &= eax_92;
		if (*(ebp_10 - 0x1C) != 0x00)
		{
			word32 eax_101 = globals->dw100020CC;
			if (eax_101 != 0x00)
			{
				*esp_86 = (LPVOID *) edi_12;
				*(esp_86 - 0x04) = (uint32) esi_14;
				*(esp_86 - 0x08) = (_onexit_t *) ebx_16;
				word32 esp_111;
				word32 edi_112;
				word32 ecx_113;
				word32 esi_114;
				word32 edx_115;
				word32 ebx_116;
				word32 eax_118;
				byte SZO_119;
				bool C_120;
				byte SCZO_121;
				bool Z_122;
				fn00000000();
				*(ebp_10 - 0x1C) = eax_118;
			}
		}
	}
	goto l1000147A;
}

// 10001493: void fn10001493()
void fn10001493()
{
	globals->t10003008 = ~0x00;
}

// 1000149E: Register Eq_732 DllMain(Stack Eq_733 hModule, Stack Eq_197 dwReason, Stack Eq_395 lpReserved)
BOOL DllMain(HANDLE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == 0x01)
		fn10001864();
	return fn10001388(lpReserved, dwReason, ebx, esi, edi);
}

// 100015CF: Register Eq_413 fn100015CF(Register (ptr32 Eq_172) ebx, Register ptr32 esi, Register word32 edi)
_onexit_t fn100015CF( * ebx, ptr32 esi, word32 edi)
{
	Eq_413 eax_132;
	struct Eq_400 * ebp_10 = fn100017E8(ebx, esi, edi, dwLoc0C, 0x10002210, 0x14);
	word32 * eax_16 = _decode_pointer(globals->ptr100033B4);
	*(ebp_10 - 0x1C) = eax_16;
	if (eax_16 == (word32 *) ~0x00)
		eax_132 = _onexit(ebp_10->t0008);
	else
	{
		word32 esp_60;
		word32 esi_61;
		word32 eax_62;
		word32 ecx_63;
		struct Eq_774 * ebp_64;
		byte SCZO_65;
		bool Z_66;
		byte SZO_67;
		bool C_68;
		word32 ebx_69;
		word32 edi_70;
		lock();
		*(ebp_64 - 0x04) &= 0x00;
		*(ebp_64 - 0x1C) = _decode_pointer(globals->ptr100033B4);
		*(ebp_64 - 0x20) = _decode_pointer(globals->ptr100033B0);
		Eq_413 eax_96 = __dllonexit(ebp_64->t0008, ebp_64 - 0x1C, ebp_64 - 0x20);
		*(ebp_64 - 0x24) = (_onexit_t *) eax_96;
		word32 esp_102;
		word32 esi_103;
		void * eax_104;
		word32 ecx_105;
		word32 ebp_106;
		byte SCZO_107;
		bool Z_108;
		byte SZO_109;
		bool C_110;
		word32 ebx_111;
		word32 edi_112;
		encode_pointer();
		globals->ptr100033B4 = eax_104;
		word32 esp_117;
		word32 esi_118;
		void * eax_119;
		word32 ecx_120;
		byte SCZO_122;
		bool Z_123;
		byte SZO_124;
		bool C_125;
		word32 ebx_126;
		word32 edi_127;
		encode_pointer();
		globals->ptr100033B0 = eax_119;
		*(ebp_10 - 0x04) = ~0x01;
		fn10001665();
		eax_132 = (Eq_413) *(ebp_10 - 0x24);
	}
	fn1000182D(ebp_10, 0x14, dwArg00, dwArg04, dwArg08, dwArg0C);
	return eax_132;
}

// 10001665: void fn10001665()
void fn10001665()
{
	word32 esp_4;
	word32 ecx_5;
	unlock();
}

// 1000166E: void fn1000166E(Register (ptr32 Eq_172) ebx, Register ptr32 esi, Register word32 edi, Stack word32 dwArg04)
void fn1000166E( * ebx, ptr32 esi, word32 edi, word32 dwArg04)
{
	fn100015CF(ebx, esi, edi);
}

// 10001680: void fn10001680()
void fn10001680()
{
	word32 * esi_12 = &globals->dw100021D8;
	if (false)
	{
		do
		{
			word32 eax_30 = *esi_12;
			if (eax_30 != 0x00)
			{
				word32 esp_43;
				word32 edi_45;
				word32 eax_46;
				byte SCZO_47;
				bool C_48;
				byte SZO_49;
				bool Z_50;
				fn00000000();
			}
			++esi_12;
		} while (esi_12 < &globals->dw100021D8);
	}
}

// 100016D0: Register word32 fn100016D0(Stack (ptr32 Eq_922) dwArg04)
word32 fn100016D0(Eq_922 * dwArg04)
{
	if (dwArg04->w0000 != 23117)
		return 0x00;
	struct Eq_928 * eax_21 = dwArg04 + dwArg04->dw003C / 0x0040;
	if (eax_21->dw0000 != 0x4550)
		return 0x00;
	return (word32) (eax_21->w0018 == 0x010B);
}

// 10001700: Register (ptr32 Eq_945) fn10001700(Stack (ptr32 Eq_946) dwArg04, Stack uint32 dwArg08)
Eq_945 * fn10001700(Eq_946 * dwArg04, uint32 dwArg08)
{
	struct Eq_948 * ecx_6 = dwArg04 + dwArg04->dw003C / 0x0040;
	up32 esi_14 = (word32) ecx_6->w0006;
	up32 edx_15 = 0x00;
	struct Eq_945 * eax_23 = ecx_6 + ((word32) ecx_6->w0014 + 0x18) / 22;
	if (!DPB(CZ, false, 0))
	{
		do
		{
			uint32 ecx_50 = eax_23->dw000C;
			if (dwArg08 >= ecx_50 && dwArg08 < eax_23->dw0008 + ecx_50)
				return eax_23;
			++edx_15;
			++eax_23;
		} while (edx_15 < esi_14);
	}
	eax_23 = null;
	return eax_23;
}

// 10001742: Register ui32 fn10001742(Register (ptr32 Eq_172) ebx, Register ptr32 esi, Register word32 edi, Register out ptr32 ediOut)
ui32 fn10001742( * ebx, ptr32 esi, word32 edi, ptr32 & ediOut)
{
	ui32 eax_33;
	struct Eq_400 * ebp_10 = fn100017E8(ebx, esi, edi, dwLoc0C, 0x10002230, 0x08);
	*(ebp_10 - 0x04) &= 0x00;
	Eq_487 dwLoc0C_18 = 0x10000000;
	if (fn100016D0(&globals->t10000000) != 0x00)
	{
		Eq_413 eax_50 = ebp_10->t0008;
		dwLoc0C_18 = eax_50 - 0x10000000;
		struct Eq_1028 * eax_57 = fn10001700(&globals->t10000000, eax_50 - 0x10000000);
		if (eax_57 != null)
		{
			eax_33 = ~(eax_57->dw0024 >> 0x1F) & 0x01;
			*(ebp_10 - 0x04) = ~0x01;
l100017A8:
			word32 edi_38;
			*ediOut = fn1000182D(ebp_10, dwLoc0C_18, &globals->t10002230, 0x08, dwArg00, dwArg04);
			return eax_33;
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	eax_33 = 0x00;
	goto l100017A8;
}

// 100017C6: Register word32 fn100017C6(Stack Eq_488 dwArg04, Stack word32 dwArg08)
word32 fn100017C6(HMODULE dwArg04, word32 dwArg08)
{
	if (dwArg08 == 0x01 && globals->dw100020CC == 0x00)
		DisableThreadLibraryCalls(dwArg04);
	return 0x01;
}

// 100017E8: Register ptr32 fn100017E8(Register (ptr32 Eq_172) ebx, Register ptr32 esi, Register word32 edi, Stack word32 dwArg00, Stack word32 dwArg04, Stack ui32 dwArg08)
ptr32 fn100017E8( * ebx, ptr32 esi, word32 edi, word32 dwArg00, word32 dwArg04, ui32 dwArg08)
{
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = (Eq_139 (**)(LONG *, Eq_139, Eq_139)) ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	*(esp_14 - 0x0010) = globals->dw10003000 ^ fp + 0x08;
	*(esp_14 - 0x0014) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 1000182D: Register word32 fn1000182D(Register (ptr32 Eq_400) ebp, Stack Eq_487 dwArg00, Stack Eq_488 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
word32 fn1000182D(Eq_400 * ebp, Eq_487 dwArg00, HMODULE dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	fs->dw0000 = *(ebp - 0x10);
	ebp->t0000 = dwArg00;
	return dwArg08;
}

// 10001864: void fn10001864()
void fn10001864()
{
	ui32 eax_8 = globals->dw10003000;
	if (eax_8 != 0xBB40E64E && (eax_8 & 0xFFFF0000) != 0x00)
		globals->dw10003004 = ~eax_8;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 esi_58 = dwLoc08 & 0x00 ^ dwLoc0C & 0x00 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x14);
		ui32 esi_68 = esi_58 ^ (dwLoc10 ^ dwLoc14);
		if (esi_68 == 0xBB40E64E)
			esi_68 = ~0x44BF19B0;
		else if ((esi_68 & 0xFFFF0000) == 0x00)
			esi_68 |= esi_68 << 0x10;
		globals->dw10003000 = esi_68;
		globals->dw10003004 = ~esi_68;
	}
}

