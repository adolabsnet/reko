// test_init.c
// Generated by decompiling test
// using Reko decompiler version 0.9.1.0.

#include "test_init.h"

// 00000588: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (__gmon_start__ == 0x00)
	{
		ptr32 r25_n = *(ptr32 *) 0x00020A4C;
		(r25_n + 2004)();
		ptr32 r25_n = *(ptr32 *) 0x00020A4C;
		(r25_n + 0x0970)();
	}
	else
	{
		word32 r25_n;
		__gmon_start__();
	}
}

