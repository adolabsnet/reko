// ais3_crackme.h
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4005C5 Eq_16 t4005C5) (400620 Eq_19 t400620) (4006B0 Eq_20 t4006B0) (4006C8 (str char) str4006C8) (4006F0 (str char) str4006F0) (400718 (str char) str400718) (600DF8 (arr (ptr64 code)) a600DF8) (600E08 word64 qw600E08) (601038 byte b601038))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in rdx : (ptr64 Eq_5))
	T_21 (in rtld_fini : (ptr64 (fn void ())))
Eq_6: (union "Eq_6" (int32 u0) (word64 u1))
	T_6 (in qwArg00 : Eq_6)
	T_17 (in argc : int32)
Eq_7: (fn void (ptr64))
	T_7 (in __align : ptr64)
	T_8 (in signature of __align : void)
Eq_14: (fn int32 ((ptr64 Eq_16), Eq_6, (ptr64 (ptr64 char)), (ptr64 Eq_19), (ptr64 Eq_20), (ptr64 Eq_5), (ptr64 void)))
	T_14 (in __libc_start_main : ptr64)
	T_15 (in signature of __libc_start_main : void)
Eq_16: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_16 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_23 (in 0x4005C5_64 : word64)
Eq_19: (fn void ())
	T_19 (in init : (ptr64 (fn void ())))
	T_25 (in 0x400620_64 : word64)
Eq_20: (fn void ())
	T_20 (in fini : (ptr64 (fn void ())))
	T_26 (in 0x4006B0_64 : word64)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr64)
	T_29 (in signature of __hlt : void)
Eq_53: (fn void (word64))
	T_53 (in deregister_tm_clones : ptr64)
	T_54 (in signature of deregister_tm_clones : void)
Eq_70: (fn void (word64))
	T_70 (in register_tm_clones : ptr64)
	T_71 (in signature of register_tm_clones : void)
	T_73 (in register_tm_clones : ptr64)
Eq_101: (struct "Eq_101" 0001 (0 (arr Eq_101) a0000))
	T_101 (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : byte)
	T_232
	T_233
Eq_113: (struct "Eq_113" (601020 byte b601020))
	T_113 (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) : word64)
Eq_177: (struct "Eq_177" (8 (ptr64 (arr Eq_101)) ptr0008))
	T_177 (in rsi : (ptr64 Eq_177))
Eq_181: (fn word32 ((ptr64 (arr Eq_101))))
	T_181 (in verify : ptr64)
	T_182 (in signature of verify : void)
Eq_192: (fn int32 ((ptr64 char)))
	T_192 (in puts : ptr64)
	T_193 (in signature of puts : void)
	T_197 (in puts : ptr64)
	T_200 (in puts : ptr64)
Eq_208: (fn void ())
	T_208 (in _init : ptr64)
	T_209 (in signature of _init : void)
Eq_212: (union "Eq_212" (int64 u0) (ptr64 u1))
	T_212 (in 0000000000600E00 : ptr64)
Eq_213: (union "Eq_213" (int64 u0) (ptr64 u1))
	T_213 (in 0000000000600DF8 : ptr64)
Eq_222: (union "Eq_222" (int64 u0) (uint64 u1))
	T_222 (in rbx_36 : Eq_222)
	T_223 (in 0_u64 : uint64)
	T_229 (in rbx_36 + 1_64 : word64)
	T_230 (in rbp_19 >> 3_64 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: (ptr64 (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr64 Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in rdx : (ptr64 Eq_5))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: (ptr64 (fn void ()))
T_6: (in qwArg00 : Eq_6)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: (union (int32 u1) (word64 u0))
T_7: (in __align : ptr64)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: (ptr64 (fn T_13 (T_12)))
T_8: (in signature of __align : void)
  Class: Eq_7
  DataType: (ptr64 Eq_7)
  OrigDataType: 
T_9: (in  : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: 
T_10: (in fp : ptr64)
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_11: (in 8_i64 : int64)
  Class: Eq_11
  DataType: int64
  OrigDataType: int64
T_12: (in fp + 8_i64 : word64)
  Class: Eq_9
  DataType: ptr64
  OrigDataType: ptr64
T_13: (in __align((char *) fp + 8_i32) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __libc_start_main : ptr64)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: (ptr64 (fn T_27 (T_23, T_6, T_24, T_25, T_26, T_5, T_10)))
T_15: (in signature of __libc_start_main : void)
  Class: Eq_14
  DataType: (ptr64 Eq_14)
  OrigDataType: 
T_16: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: 
T_17: (in argc : int32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_18: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_19: (in init : (ptr64 (fn void ())))
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_20: (in fini : (ptr64 (fn void ())))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_5
  DataType: (ptr64 Eq_5)
  OrigDataType: 
T_22: (in stack_end : (ptr64 void))
  Class: Eq_10
  DataType: (ptr64 void)
  OrigDataType: 
T_23: (in 0x4005C5_64 : word64)
  Class: Eq_16
  DataType: (ptr64 Eq_16)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_24: (in fp + 8_i64 : word64)
  Class: Eq_18
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_25: (in 0x400620_64 : word64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn void ()))
T_26: (in 0x4006B0_64 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn void ()))
T_27: (in __libc_start_main(&globals->t4005C5, qwArg00, (char *) fp + 8_i32, &globals->t400620, &globals->t4006B0, rdx, fp) : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in __hlt : ptr64)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: (ptr64 (fn T_30 ()))
T_29: (in signature of __hlt : void)
  Class: Eq_28
  DataType: (ptr64 Eq_28)
  OrigDataType: 
T_30: (in __hlt() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in __gmon_start__ : ptr64)
  Class: Eq_31
  DataType: word64
  OrigDataType: 
T_32: (in signature of __gmon_start__ : void)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: 
T_33: (in 0_64 : word64)
  Class: Eq_31
  DataType: word64
  OrigDataType: word64
T_34: (in __gmon_start__ == 0_64 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in __gmon_start__ : ptr64)
  Class: Eq_35
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_36: (in r8 : word64)
  Class: Eq_36
  DataType: word64
  OrigDataType: word64
T_37: (in false : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0_u64 : uint64)
  Class: Eq_38
  DataType: uint64
  OrigDataType: uint64
T_39: (in 0_64 : word64)
  Class: Eq_38
  DataType: uint64
  OrigDataType: word64
T_40: (in 0_u64 == 0_64 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in 0_u64 : uint64)
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_42: (in r8 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_43: (in true : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0_u64 : uint64)
  Class: Eq_44
  DataType: uint64
  OrigDataType: uint64
T_45: (in 0_64 : word64)
  Class: Eq_44
  DataType: uint64
  OrigDataType: word64
T_46: (in 0_u64 == 0_64 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0_u64 : uint64)
  Class: Eq_47
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_48: (in r8 : word64)
  Class: Eq_36
  DataType: word64
  OrigDataType: word64
T_49: (in 0000000000601038 : ptr64)
  Class: Eq_49
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_50 t0000)))
T_50: (in Mem0[0x0000000000601038:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0_08 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_52: (in globals->b601038 != 0_08 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in deregister_tm_clones : ptr64)
  Class: Eq_53
  DataType: (ptr64 Eq_53)
  OrigDataType: (ptr64 (fn T_55 (T_48)))
T_54: (in signature of deregister_tm_clones : void)
  Class: Eq_53
  DataType: (ptr64 Eq_53)
  OrigDataType: 
T_55: (in deregister_tm_clones(r8) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in 1_08 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_57: (in 0000000000601038 : ptr64)
  Class: Eq_57
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_58 t0000)))
T_58: (in Mem21[0x0000000000601038:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_59: (in r8 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_60: (in 0000000000600E08 : ptr64)
  Class: Eq_60
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_61 t0000)))
T_61: (in Mem0[0x0000000000600E08:word64] : word64)
  Class: Eq_61
  DataType: word64
  OrigDataType: word64
T_62: (in 0_64 : word64)
  Class: Eq_61
  DataType: word64
  OrigDataType: word64
T_63: (in globals->qw600E08 == 0_64 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in 0_u64 : uint64)
  Class: Eq_64
  DataType: uint64
  OrigDataType: uint64
T_65: (in 0_64 : word64)
  Class: Eq_64
  DataType: uint64
  OrigDataType: word64
T_66: (in 0_u64 == 0_64 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in r8_29 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_68: (in fn0000000000000000 : ptr64)
  Class: Eq_68
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_69: (in signature of fn0000000000000000 : void)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: 
T_70: (in register_tm_clones : ptr64)
  Class: Eq_70
  DataType: (ptr64 Eq_70)
  OrigDataType: (ptr64 (fn T_72 (T_67)))
T_71: (in signature of register_tm_clones : void)
  Class: Eq_70
  DataType: (ptr64 Eq_70)
  OrigDataType: 
T_72: (in register_tm_clones(r8_29) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in register_tm_clones : ptr64)
  Class: Eq_70
  DataType: (ptr64 Eq_70)
  OrigDataType: (ptr64 (fn T_74 (T_59)))
T_74: (in register_tm_clones(r8) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_75: (in eax : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in rdi : (arr Eq_101))
  Class: Eq_76
  DataType: (ptr64 (arr Eq_101))
  OrigDataType: (ptr64 (struct (0 (arr T_232) a0000)))
T_77: (in dwLoc0C_100 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in 0_32 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_79: (in rax_114 : uint64)
  Class: Eq_79
  DataType: uint64
  OrigDataType: uint64
T_80: (in rax_17 : (ptr64 byte))
  Class: Eq_80
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_89 t0000)))
T_81: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_81
  DataType: uint64
  OrigDataType: uint64
T_82: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : int64)
  Class: Eq_83
  DataType: int64
  OrigDataType: int64
T_84: (in rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : word64)
  Class: Eq_80
  DataType: (ptr64 byte)
  OrigDataType: word64
T_85: (in rax_32_32_115 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in SLICE(rax_17, word32, 32) : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_87: (in 0_64 : word64)
  Class: Eq_87
  DataType: word64
  OrigDataType: word64
T_88: (in rax_17 + 0_64 : word64)
  Class: Eq_88
  DataType: word64
  OrigDataType: word64
T_89: (in Mem12[rax_17 + 0_64:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in (word32) Mem12[rax_17 + 0_64:byte] : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in SLICE((word32) Mem12[rax_17 + 0_64:byte], byte, 0) : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in 0_08 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_93: (in (byte) (word32) *rax_17 != 0_08 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in al_34 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_95
  DataType: uint64
  OrigDataType: uint64
T_96: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_97
  DataType: uint64
  OrigDataType: uint64
T_98: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : int64)
  Class: Eq_99
  DataType: int64
  OrigDataType: int64
T_100: (in rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0) : word64)
  Class: Eq_100
  DataType: (ptr64 Eq_101)
  OrigDataType: (ptr64 (struct (0 T_101 t0000)))
T_101: (in Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : byte)
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: byte
T_102: (in (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in (uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte] : uint64)
  Class: Eq_103
  DataType: uint64
  OrigDataType: uint64
T_104: (in SLICE((uint64) (word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte], word32, 0) : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in (word32) (uint64) dwLoc0C_100 ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc0C_100))].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000))[0_i32].a0000)[0_i32])) : word32)
  Class: Eq_105
  DataType: ui32
  OrigDataType: ui32
T_106: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte]), word32, 0)) : uint64)
  Class: Eq_106
  DataType: uint64
  OrigDataType: uint64
T_107: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ SLICE((uint64) ((word32) Mem12[rdi + (int64) SLICE((uint64) dwLoc0C_100, word32, 0):byte]), word32, 0)), byte, 0) : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_108: (in rax_75 : uint64)
  Class: Eq_108
  DataType: uint64
  OrigDataType: uint64
T_109: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_108
  DataType: uint64
  OrigDataType: uint64
T_110: (in SLICE(rax_75, word48, 16) : word48)
  Class: Eq_110
  DataType: word48
  OrigDataType: word48
T_111: (in SLICE(rax_75, byte, 0) : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in (int16) SLICE(rax_75, byte, 0) : int16)
  Class: Eq_112
  DataType: int16
  OrigDataType: int16
T_113: (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) : word64)
  Class: Eq_113
  DataType: (ptr64 Eq_113)
  OrigDataType: (ptr64 (struct (601020 T_116 t601020)))
T_114: (in 0x601020_64 : word64)
  Class: Eq_114
  DataType: word64
  OrigDataType: word64
T_115: (in SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x601020_64 : word64)
  Class: Eq_115
  DataType: word64
  OrigDataType: word64
T_116: (in Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x601020_64:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in (word32) Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x601020_64:byte] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in SLICE((word32) Mem74[SEQ(SLICE(rax_75, word48, 16), (int16) SLICE(rax_75, byte, 0)) + 0x601020_64:byte], byte, 0) : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in (word32) al_34 : word32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_120: (in 8_32 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_121
  DataType: uint64
  OrigDataType: uint64
T_122: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 9_32 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in (word32) (uint64) dwLoc0C_100 ^ 9_32 : word32)
  Class: Eq_124
  DataType: ui32
  OrigDataType: ui32
T_125: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32) : uint64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: uint64
T_126: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) : word32)
  Class: Eq_126
  DataType: ui32
  OrigDataType: ui32
T_127: (in 3_32 : word32)
  Class: Eq_127
  DataType: ui32
  OrigDataType: ui32
T_128: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_100 ^ 9_32) & 3_32 : word32)
  Class: Eq_128
  DataType: ui32
  OrigDataType: ui32
T_129: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32) : uint64)
  Class: Eq_129
  DataType: uint64
  OrigDataType: uint64
T_130: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0) : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0) : uint64)
  Class: Eq_131
  DataType: uint64
  OrigDataType: uint64
T_132: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0) : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in 8_32 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))) : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in (uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)) : uint64)
  Class: Eq_134
  DataType: uint64
  OrigDataType: uint64
T_135: (in SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0) : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in (uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0) : uint64)
  Class: Eq_136
  DataType: uint64
  OrigDataType: uint64
T_137: (in SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0) : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in (word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8_32 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))))))) : word32)
  Class: Eq_138
  DataType: int32
  OrigDataType: int32
T_139: (in (uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)) : uint64)
  Class: Eq_139
  DataType: uint64
  OrigDataType: uint64
T_140: (in SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in (uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_141
  DataType: uint64
  OrigDataType: uint64
T_142: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_142
  DataType: ui32
  OrigDataType: ui32
T_143: (in (word32) al_34 : word32)
  Class: Eq_143
  DataType: ui32
  OrigDataType: ui32
T_144: (in (uint64) dwLoc0C_100 : uint64)
  Class: Eq_144
  DataType: uint64
  OrigDataType: uint64
T_145: (in SLICE((uint64) dwLoc0C_100, word32, 0) : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in 9_32 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in (word32) (uint64) dwLoc0C_100 ^ 9_32 : word32)
  Class: Eq_147
  DataType: ui32
  OrigDataType: ui32
T_148: (in (uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32) : uint64)
  Class: Eq_148
  DataType: uint64
  OrigDataType: uint64
T_149: (in SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) : word32)
  Class: Eq_149
  DataType: ui32
  OrigDataType: ui32
T_150: (in 3_32 : word32)
  Class: Eq_150
  DataType: ui32
  OrigDataType: ui32
T_151: (in (word32) (uint64) ((word32) (uint64) dwLoc0C_100 ^ 9_32) & 3_32 : word32)
  Class: Eq_151
  DataType: ui32
  OrigDataType: ui32
T_152: (in (uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32) : uint64)
  Class: Eq_152
  DataType: uint64
  OrigDataType: uint64
T_153: (in SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0) : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in (uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0) : uint64)
  Class: Eq_154
  DataType: uint64
  OrigDataType: uint64
T_155: (in SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0) : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in (word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))) : word32)
  Class: Eq_156
  DataType: ui32
  OrigDataType: ui32
T_157: (in (uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)) : uint64)
  Class: Eq_157
  DataType: uint64
  OrigDataType: uint64
T_158: (in SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0) : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in (uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0) : uint64)
  Class: Eq_159
  DataType: uint64
  OrigDataType: uint64
T_160: (in SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0), word32, 0) : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in (uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0), word32, 0) : uint64)
  Class: Eq_161
  DataType: uint64
  OrigDataType: uint64
T_162: (in SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0) : word32)
  Class: Eq_162
  DataType: ui32
  OrigDataType: ui32
T_163: (in (word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8_32 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))))))))) : word32)
  Class: Eq_163
  DataType: ui32
  OrigDataType: ui32
T_164: (in (uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)) : uint64)
  Class: Eq_164
  DataType: uint64
  OrigDataType: uint64
T_165: (in SLICE((uint64) (SLICE((uint64) SLICE((uint64) ((word32) al_34 >> SLICE((uint64) SLICE((uint64) (8_32 - SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), word32, 0)), word32, 0), byte, 0)), word32, 0), word32, 0) | SLICE((uint64) SLICE((uint64) SLICE((uint64) ((word32) al_34 << SLICE((uint64) SLICE((uint64) (SLICE((uint64) (SLICE((uint64) dwLoc0C_100, word32, 0) ^ 9_32), word32, 0) & 3_32), word32, 0), byte, 0)), word32, 0), word32, 0), word32, 0)), byte, 0) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in 8_08 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in (byte) (uint64) ((word32) (uint64) (word32) (uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8_32 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32))))))))))) + 8_08 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_168: (in (byte) (word32) SEQ(SLICE(rax_75, word48, 16), (int16) (byte) rax_75)->b601020 == (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 >> (byte) ((uint64) ((word32) ((uint64) (8_32 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_34 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc0C_100) ^ 9_32)) & 3_32)))))))))))) + 8_08 : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in 0x17_32 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_170: (in dwLoc0C_100 == 0x17_32 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in (word32) (dwLoc0C_100 == 0x17_32) : word32)
  Class: Eq_171
  DataType: word32
  OrigDataType: word32
T_172: (in SEQ(rax_32_32_115, (word32) (dwLoc0C_100 == 0x17_32)) : word64)
  Class: Eq_79
  DataType: uint64
  OrigDataType: word64
T_173: (in 1_32 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in dwLoc0C_100 + 1_32 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_175: (in 0_u64 : uint64)
  Class: Eq_79
  DataType: uint64
  OrigDataType: uint64
T_176: (in SLICE(rax_114, word32, 0) : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_177: (in rsi : (ptr64 Eq_177))
  Class: Eq_177
  DataType: (ptr64 Eq_177)
  OrigDataType: (ptr64 (struct (8 T_185 t0008)))
T_178: (in edi : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in 2_32 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_180: (in edi == 2_32 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in verify : ptr64)
  Class: Eq_181
  DataType: (ptr64 Eq_181)
  OrigDataType: (ptr64 (fn T_186 (T_185)))
T_182: (in signature of verify : void)
  Class: Eq_181
  DataType: (ptr64 Eq_181)
  OrigDataType: 
T_183: (in 8_64 : word64)
  Class: Eq_183
  DataType: word64
  OrigDataType: word64
T_184: (in rsi + 8_64 : word64)
  Class: Eq_184
  DataType: word64
  OrigDataType: word64
T_185: (in Mem12[rsi + 8_64:word64] : word64)
  Class: Eq_76
  DataType: (ptr64 (arr Eq_101))
  OrigDataType: word64
T_186: (in verify(rsi->ptr0008) : word32)
  Class: Eq_186
  DataType: word32
  OrigDataType: word32
T_187: (in (uint32) verify(rsi->ptr0008) : uint32)
  Class: Eq_187
  DataType: uint32
  OrigDataType: uint32
T_188: (in (uint64) (uint32) verify(rsi->ptr0008) : uint64)
  Class: Eq_188
  DataType: uint64
  OrigDataType: uint64
T_189: (in SLICE((uint64) (uint32) verify(rsi->ptr0008), word32, 0) : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in 0_32 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_191: (in (word32) (uint64) (uint32) verify(rsi->ptr0008) == 0_32 : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in puts : ptr64)
  Class: Eq_192
  DataType: (ptr64 Eq_192)
  OrigDataType: (ptr64 (fn T_196 (T_195)))
T_193: (in signature of puts : void)
  Class: Eq_192
  DataType: (ptr64 Eq_192)
  OrigDataType: 
T_194: (in s : (ptr64 char))
  Class: Eq_194
  DataType: (ptr64 char)
  OrigDataType: 
T_195: (in 0x4006C8_u64 : uint64)
  Class: Eq_194
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_196: (in puts("You need to enter the secret key!") : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_197: (in puts : ptr64)
  Class: Eq_192
  DataType: (ptr64 Eq_192)
  OrigDataType: (ptr64 (fn T_199 (T_198)))
T_198: (in 0x400718_u64 : uint64)
  Class: Eq_194
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_199: (in puts("I'm sorry, that's the wrong secret key!") : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_200: (in puts : ptr64)
  Class: Eq_192
  DataType: (ptr64 Eq_192)
  OrigDataType: (ptr64 (fn T_202 (T_201)))
T_201: (in 0x4006F0_u64 : uint64)
  Class: Eq_194
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_202: (in puts("Correct! that is the secret key!") : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_203: (in rdx : word64)
  Class: Eq_203
  DataType: word64
  OrigDataType: word64
T_204: (in rsi : word64)
  Class: Eq_204
  DataType: word64
  OrigDataType: word64
T_205: (in edi : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in rdi : word64)
  Class: Eq_206
  DataType: word64
  OrigDataType: word64
T_207: (in SLICE(rdi, word32, 0) : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_208: (in _init : ptr64)
  Class: Eq_208
  DataType: (ptr64 Eq_208)
  OrigDataType: (ptr64 (fn T_210 ()))
T_209: (in signature of _init : void)
  Class: Eq_208
  DataType: (ptr64 Eq_208)
  OrigDataType: 
T_210: (in _init() : void)
  Class: Eq_210
  DataType: void
  OrigDataType: void
T_211: (in rbp_19 : int64)
  Class: Eq_211
  DataType: int64
  OrigDataType: int64
T_212: (in 0000000000600E00 : ptr64)
  Class: Eq_212
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_213: (in 0000000000600DF8 : ptr64)
  Class: Eq_213
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_214: (in 0x600E00_u64 - 0x600DF8_u64 : word64)
  Class: Eq_211
  DataType: int64
  OrigDataType: int64
T_215: (in r13d_72 : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_216: (in (uint64) edi : uint64)
  Class: Eq_216
  DataType: uint64
  OrigDataType: uint64
T_217: (in SLICE((uint64) edi, word32, 0) : word32)
  Class: Eq_215
  DataType: word32
  OrigDataType: word32
T_218: (in 3_64 : word64)
  Class: Eq_218
  DataType: word64
  OrigDataType: word64
T_219: (in rbp_19 >> 3_64 : word64)
  Class: Eq_219
  DataType: int64
  OrigDataType: int64
T_220: (in 0_64 : word64)
  Class: Eq_219
  DataType: int64
  OrigDataType: word64
T_221: (in rbp_19 >> 3_64 == 0_64 : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in rbx_36 : Eq_222)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: word64
T_223: (in 0_u64 : uint64)
  Class: Eq_222
  DataType: uint64
  OrigDataType: uint64
T_224: (in 0000000000600DF8 : ptr64)
  Class: Eq_224
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_234) a0000)))
T_225: (in 8_64 : word64)
  Class: Eq_225
  DataType: ui64
  OrigDataType: ui64
T_226: (in rbx_36 * 8_64 : word64)
  Class: Eq_226
  DataType: ui64
  OrigDataType: ui64
T_227: (in 0x0000000000600DF8[rbx_36 * 8_64] : word64)
  Class: Eq_227
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_228: (in 1_64 : word64)
  Class: Eq_228
  DataType: word64
  OrigDataType: word64
T_229: (in rbx_36 + 1_64 : word64)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: uint64
T_230: (in rbp_19 >> 3_64 : word64)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: int64
T_231: (in rbx_36 != rbp_19 >> 3_64 : bool)
  Class: Eq_231
  DataType: bool
  OrigDataType: bool
T_232:
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: (struct 0001 (0 T_101 t0000))
T_233:
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: (arr Eq_101)
T_234:
  Class: Eq_234
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_227 t0000))
*/
typedef struct Globals {
	Eq_16 t4005C5;	// 4005C5
	Eq_19 t400620;	// 400620
	Eq_20 t4006B0;	// 4006B0
	char str4006C8[];	// 4006C8
	char str4006F0[];	// 4006F0
	char str400718[];	// 400718
	<anonymous> * a600DF8[];	// 600DF8
	word64 qw600E08;	// 600E08
	byte b601038;	// 601038
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef union Eq_6 {
	int32 u0;
	word64 u1;
} Eq_6;

typedef void (Eq_7)(ptr64);

typedef int32 (Eq_14)( *, Eq_6, char * *,  *,  *,  *, void);

typedef int32 (Eq_16)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_19)();

typedef void (Eq_20)();

typedef void (Eq_28)();

typedef void (Eq_53)(word64);

typedef void (Eq_70)(word64);

typedef struct Eq_101 {	// size: 1 1
	Eq_101 a0000[];	// 0
} Eq_101;

typedef struct Eq_113 {
	byte b601020;	// 601020
} Eq_113;

typedef struct Eq_177 {
	Eq_101 (* ptr0008)[];	// 8
} Eq_177;

typedef word32 (Eq_181)(Eq_101 *[]);

typedef int32 (Eq_192)(char *);

typedef void (Eq_208)();

typedef union Eq_212 {
	int64 u0;
	ptr64 u1;
} Eq_212;

typedef union Eq_213 {
	int64 u0;
	ptr64 u1;
} Eq_213;

typedef union Eq_222 {
	int64 u0;
	uint64 u1;
} Eq_222;

