// ais3_crackme_text.c
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.9.1.0.

#include "ais3_crackme_text.h"

// 0000000000400410: void _start(Register (ptr64 Eq_n) rdx, Stack Eq_n qwArg00)
void _start(void (* rdx)(), Eq_n qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 8, &globals->t400620, &globals->t4006B0, rdx, fp);
	__hlt();
}

// 000000000040043C: void call_gmon_start()
void call_gmon_start()
{
	if (__gmon_start__ != 0x00)
		__gmon_start__();
}

// 0000000000400460: void deregister_tm_clones()
void deregister_tm_clones()
{
	if (true || 0x00 == 0x00)
		return;
	null();
}

// 0000000000400490: void register_tm_clones()
void register_tm_clones()
{
	if (true || 0x00 == 0x00)
		return;
	null();
}

// 00000000004004D0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b601038 == 0x00)
	{
		deregister_tm_clones();
		globals->b601038 = 0x01;
	}
}

// 00000000004004F0: void frame_dummy()
void frame_dummy()
{
	if (globals->qw600E08 == 0x00 || 0x00 == 0x00)
		register_tm_clones();
	else
	{
		fn0000000000000000();
		register_tm_clones();
	}
}

// 0000000000400520: Register word32 verify(Register (arr Eq_n) rdi)
word32 verify(Eq_n rdi[])
{
	word32 dwLoc0C_n = 0x00;
	while (true)
	{
		uint64 rax_n;
		byte * rax_n = (rdi + (int64) ((word32) ((uint64) dwLoc0C_n)))->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000;
		word32 rax_32_32_n = SLICE(rax_n, word32, 32);
		if ((byte) (word32) *rax_n == 0x00)
			break;
		byte al_n = (byte) (uint64) ((word32) (uint64) dwLoc0C_n ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_n))].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000)[0])));
		if ((byte) (word32) ((int64) (word32) (uint64) dwLoc0C_n + 0x00601020) != (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_n >> (byte) ((uint64) ((word32) ((uint64) (0x08 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_n) ^ 0x09)) & 0x03)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_n << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_n) ^ 0x09)) & 0x03)))))))))))) + 0x08)
		{
			rax_n = 0x00;
			return (word32) rax_n;
		}
		++dwLoc0C_n;
	}
	rax_n = SEQ(rax_32_32_n, (word32) (dwLoc0C_n == 0x17));
	return (word32) rax_n;
}

// 00000000004005C5: void main(Register (ptr64 Eq_n) rsi, Register word32 edi)
void main(struct Eq_n * rsi, word32 edi)
{
	if (edi != 0x02)
		puts("You need to enter the secret key!");
	else if ((word32) (uint64) (uint32) verify(rsi->ptr0008) != 0x00)
		puts("Correct! that is the secret key!");
	else
		puts("I'm sorry, that's the wrong secret key!");
}

// 0000000000400620: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	int64 rbp_n = 0x00600E00 - 0x00600DF8;
	word32 r13d_n = (word32) (uint64) edi;
	if (rbp_n >> 0x03 != 0x00)
	{
		Eq_n rbx_n = 0x00;
		do
		{
			(*((char *) globals->a600DF8 + rbx_n * 0x08))();
			rbx_n = (word64) rbx_n.u1 + 1;
		} while (rbx_n != rbp_n >> 0x03);
	}
}

// 00000000004006B0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

