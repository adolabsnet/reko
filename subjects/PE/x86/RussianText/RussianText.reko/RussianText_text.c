// RussianText_text.c
// Generated by decompiling RussianText.exe
// using Reko decompiler version 0.9.1.0.

#include "RussianText_text.h"

// 00401071: void _GetExceptDLLinfo(Stack (ptr32 Eq_n) dwArg04)
void _GetExceptDLLinfo(struct Eq_n * dwArg04)
{
	fn004011FC(dwArg04);
}

// 00401084: void fn00401084()
void fn00401084()
{
}

// 0040110B: void fn0040110B()
void fn0040110B()
{
	if (globals->dw40208B >= 0x00)
	{
		word32 eax_n;
		__CRTL_TLS_GetValue();
		if (eax_n != 0x00)
		{
			Eq_n eax_n = GetProcessHeap();
			__CRTL_TLS_ExitThread();
		}
	}
}

// 00401158: Register word32 fn00401158()
// Called from:
//      _GetExceptDLLinfo
//      fn004011B0
word32 fn00401158()
{
	return fs->ptr002C[globals->dw40208B];
}

// 00401168: Register int32 main(Stack int32 argc, Stack (ptr32 (ptr32 char)) argv)
int32 main(int32 argc, char ** argv)
{
	printf(&globals->b4020A4);
	return 0x00;
}

// 0040117C: void fn0040117C()
void fn0040117C()
{
}

// 00401180: void fn00401180()
void fn00401180()
{
}

// 004011B0: void fn004011B0(Stack (ptr32 void) dwArg04)
void fn004011B0(void * dwArg04)
{
	void * ebx_n = dwArg04;
	if (dwArg04 == null && dwArg04 == null)
	{
		fn004011FC(fp - 0x0C);
		ebx_n = dwLoc08;
	}
	memcpy(fn00401158(), ebx_n, 0x9C);
	_InitTermAndUnexPtrs();
}

// 004011FC: void fn004011FC(Stack (ptr32 Eq_n) dwArg04)
// Called from:
//      _GetExceptDLLinfo
//      fn004011B0
void fn004011FC(struct Eq_n * dwArg04)
{
	globals->dw4020F8 = (char *) fn00401158() + 28;
	dwArg04->dw0000 = 0x82727349;
	dwArg04->ptr0004 = 0x004020E4;
}

