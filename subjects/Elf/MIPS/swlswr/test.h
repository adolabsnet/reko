// test.h
// Generated by decompiling test
// using Reko decompiler version 0.8.0.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (10000 Eq_57 t10000) (10A60 word32 dw10A60) (10AA4 word32 dw10AA4) (10AA8 (ptr32 Eq_57) ptr10AA8) (10AB0 int32 dw10AB0) (10ABC (ptr32 word32) ptr10ABC) (10AD4 (ptr32 code) ptr10AD4) (10AE4 (ptr32 code) ptr10AE4))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_57: (struct "Eq_57" 0001 (A60 (ptr32 code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
	T_57 (in Mem0[0x00010AA8:word32] : word32)
	T_76 (in Mem0[0x00010AA8:word32] : word32)
	T_102 (in r19_10 : (ptr32 Eq_57))
	T_104 (in Mem0[0x00010AA8:word32] : word32)
	T_115 (in r17_41 : (ptr32 Eq_57))
	T_117 (in Mem0[0x00010AA8:word32] : word32)
	T_118 (in r2_39 : (ptr32 Eq_57))
	T_120 (in Mem0[0x00010AA8:word32] : word32)
	T_266 (in r3_7 : (ptr32 Eq_57))
	T_268 (in Mem0[0x00010AA8:word32] : word32)
Eq_80: (union "Eq_80" (int32 u0) (uint32 u1))
	T_80 (in r2_12 : Eq_80)
	T_84 (in r5_10 >> 0x02 >> 0x1F : word32)
Eq_82: (union "Eq_82" (int32 u0) (uint32 u1))
	T_82 (in r5_10 >> 0x02 : word32)
Eq_85: (union "Eq_85" (int32 u0) (uint32 u1))
	T_85 (in r5_10 >> 0x02 : word32)
Eq_86: (union "Eq_86" (int32 u0) (uint32 u1))
	T_86 (in r2_12 + (r5_10 >> 0x02) : word32)
Eq_121: (union "Eq_121" (int32 u0) (up32 u1))
	T_121 (in r2_45 : Eq_121)
	T_124 (in Mem0[r17_41 + 0x00000AF4:word32] : word32)
	T_125 (in r16_47 : Eq_121)
	T_134 (in (globals->dw10AB0 - (r2_39 + 2664) >> 0x02) + -1 : word32)
	T_179 (in r16_78 : Eq_121)
	T_185 (in Mem68[r17_41 + 0x00000AF4:word32] : word32)
Eq_154: (fn void ())
	T_154 (in deregister_tm_clones : ptr32)
	T_155 (in signature of deregister_tm_clones : void)
Eq_162: (union "Eq_162" (int32 u0) (up32 u1))
	T_162 (in 1 : int32)
Eq_190: (fn void ())
	T_190 (in register_tm_clones : ptr32)
	T_191 (in signature of register_tm_clones : void)
Eq_195: (fn (ptr32 void) ((ptr32 void), int32, Eq_199))
	T_195 (in memset : ptr32)
	T_196 (in signature of memset : void)
Eq_199: size_t
	T_199 (in num : size_t)
	T_202 (in r6_18 : word32)
	T_206 (in num : size_t)
	T_207 (in size : size_t)
	T_208 (in r4_35 : word32)
	T_209 (in r5_34 : word32)
Eq_204: (fn (ptr32 void) (Eq_199, Eq_199))
	T_204 (in calloc : ptr32)
	T_205 (in signature of calloc : void)
Eq_211: (union "Eq_211" (byte u0) (word32 u1))
	T_211 (in dwLoc14 : word32)
	T_215 (in Mem54[r2_45 + 0x00000000:word32] : word32)
	T_222 (in 0x0C : byte)
	T_225 (in Mem61[r2_45 + 0x00000000:byte] : byte)
	T_231 (in r3_52 : Eq_211)
Eq_212: (struct "Eq_212" (0 Eq_211 t0000) (1 word32 dw0001) (4 byte b0004))
	T_212 (in r2_45 : word32)
	T_230 (in r2_50 : (ptr32 Eq_212))
	T_232 (in r2_62 : (ptr32 Eq_212))
Eq_233: (fn void ())
	T_233 (in _init : ptr32)
	T_234 (in signature of _init : void)
Eq_327: (fn void ())
	T_327 (in _fini : ptr32)
	T_328 (in signature of _fini : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in __gmon_start__ : ptr32)
  Class: Eq_2
  DataType: word32
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_5: (in __gmon_start__ == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in sp_24 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in r28_25 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in r25_26 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in ra_27 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in r2_28 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in 00020A4C : ptr32)
  Class: Eq_11
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_14 t0000)))
T_12: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in 0x00020A4C + 0x00000000 : word32)
  Class: Eq_13
  DataType: ptr32
  OrigDataType: ptr32
T_14: (in Mem0[0x00020A4C + 0x00000000:word32] : word32)
  Class: Eq_14
  DataType: ptr32
  OrigDataType: ptr32
T_15: (in 2004 : int32)
  Class: Eq_15
  DataType: int32
  OrigDataType: int32
T_16: (in *(ptr32 *) 0x00020A4C + 2004 : word32)
  Class: Eq_16
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_17: (in sp_35 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in r28_36 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in r25_37 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in ra_38 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in r2_39 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in 00020A4C : ptr32)
  Class: Eq_22
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_25 t0000)))
T_23: (in 0x00000000 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in 0x00020A4C + 0x00000000 : word32)
  Class: Eq_24
  DataType: ptr32
  OrigDataType: ptr32
T_25: (in Mem0[0x00020A4C + 0x00000000:word32] : word32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_26: (in 2416 : int32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_27: (in *(ptr32 *) 0x00020A4C + 2416 : word32)
  Class: Eq_27
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_28: (in sp_12 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in r28_13 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in r25_14 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in ra_15 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in r2_16 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in __gmon_start__ : ptr32)
  Class: Eq_33
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_34: (in signature of __gmon_start__ : void)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: 
T_35: (in dwArg00 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in r25_23 : (ptr32 code))
  Class: Eq_36
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_37: (in 00020A24 : ptr32)
  Class: Eq_37
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_40 t0000)))
T_38: (in 0x00000000 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in 0x00020A24 + 0x00000000 : word32)
  Class: Eq_39
  DataType: ptr32
  OrigDataType: ptr32
T_40: (in Mem0[0x00020A24 + 0x00000000:word32] : word32)
  Class: Eq_36
  DataType: (ptr32 code)
  OrigDataType: word32
T_41: (in sp_24 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in ra_25 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in r0_26 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in r28_27 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in r4_28 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in r5_29 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in r6_30 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in r1_31 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in r7_32 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in r8_33 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in r2_34 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in r25_35 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in r2_8 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in 0x00010AA4 : word32)
  Class: Eq_54
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_55 t0000)))
T_55: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_56: (in 0x00010AA8 : word32)
  Class: Eq_56
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_57 t0000)))
T_57: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_58: (in 2692 : int32)
  Class: Eq_58
  DataType: int32
  OrigDataType: int32
T_59: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_60: (in r2_8 == globals->ptr10AA8 + 2692 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in r25_18 : (ptr32 code))
  Class: Eq_61
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_62: (in 0x00000000 : word32)
  Class: Eq_61
  DataType: (ptr32 code)
  OrigDataType: word32
T_63: (in r25_18 == null : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in 0x00010AE4 : word32)
  Class: Eq_64
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_65 t0000)))
T_65: (in Mem0[0x00010AE4:word32] : word32)
  Class: Eq_61
  DataType: (ptr32 code)
  OrigDataType: word32
T_66: (in sp_19 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in r28_20 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in r25_21 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in r4_22 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in r2_23 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in ra_24 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in r5_10 : int32)
  Class: Eq_72
  DataType: int32
  OrigDataType: int32
T_73: (in 0x00010AA4 : word32)
  Class: Eq_73
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_74 t0000)))
T_74: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_75: (in 0x00010AA8 : word32)
  Class: Eq_75
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_76 t0000)))
T_76: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_77: (in 2692 : int32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_78: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in globals->dw10AA4 - (globals->ptr10AA8 + 2692) : word32)
  Class: Eq_72
  DataType: int32
  OrigDataType: word32
T_80: (in r2_12 : Eq_80)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: (union (int32 u1) (uint32 u0))
T_81: (in 0x02 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in r5_10 >> 0x02 : word32)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (int32 u0) (uint32 u1))
T_83: (in 0x1F : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in r5_10 >> 0x02 >> 0x1F : word32)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: uint32
T_85: (in r5_10 >> 0x02 : word32)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (int32 u1) (uint32 u0))
T_86: (in r2_12 + (r5_10 >> 0x02) : word32)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: (union (int32 u1) (uint32 u0))
T_87: (in 0x01 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in r2_12 + (r5_10 >> 0x02) >> 0x01 : word32)
  Class: Eq_88
  DataType: int32
  OrigDataType: int32
T_89: (in 0x00000000 : word32)
  Class: Eq_88
  DataType: int32
  OrigDataType: word32
T_90: (in r2_12 + (r5_10 >> 0x02) >> 0x01 == 0x00000000 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in r25_22 : (ptr32 code))
  Class: Eq_91
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_92: (in 0x00010AD4 : word32)
  Class: Eq_92
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_93 t0000)))
T_93: (in Mem0[0x00010AD4:word32] : word32)
  Class: Eq_91
  DataType: (ptr32 code)
  OrigDataType: word32
T_94: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: (ptr32 code)
  OrigDataType: word32
T_95: (in r25_22 == null : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in sp_23 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in r28_24 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in r25_25 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in r4_26 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in r5_27 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in r2_28 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in r19_10 : (ptr32 Eq_57))
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (struct (AF0 T_107 t0AF0)))
T_103: (in 0x00010AA8 : word32)
  Class: Eq_103
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_104 t0000)))
T_104: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_105: (in 0x00000AF0 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in Mem0[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in (word32) r19_10[2800] : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in 0x00000000 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_110: (in (word32) r19_10[2800] != 0x00000000 : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in __cxa_finalize : ptr32)
  Class: Eq_111
  DataType: word32
  OrigDataType: 
T_112: (in signature of __cxa_finalize : void)
  Class: Eq_112
  DataType: Eq_112
  OrigDataType: 
T_113: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_114: (in __cxa_finalize == 0x00000000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in r17_41 : (ptr32 Eq_57))
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (struct 0001 (AF4 word32 dw0AF4)))
T_116: (in 0x00010AA8 : word32)
  Class: Eq_116
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_117 t0000)))
T_117: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_118: (in r2_39 : (ptr32 Eq_57))
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_119: (in 0x00010AA8 : word32)
  Class: Eq_119
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_120 t0000)))
T_120: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_121: (in r2_45 : Eq_121)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: (struct "Eq_57" 0001 (A60 (ptr32 code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
T_122: (in 0x00000AF4 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in r17_41 + 0x00000AF4 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in Mem0[r17_41 + 0x00000AF4:word32] : word32)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: word32
T_125: (in r16_47 : Eq_121)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: (union (int32 u0) (up32 u1))
T_126: (in 0x00010AB0 : word32)
  Class: Eq_126
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_127 t0000)))
T_127: (in Mem0[0x00010AB0:word32] : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in 2664 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in r2_39 + 2664 : word32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_130: (in globals->dw10AB0 - (r2_39 + 2664) : word32)
  Class: Eq_130
  DataType: int32
  OrigDataType: int32
T_131: (in 0x02 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in globals->dw10AB0 - (r2_39 + 2664) >> 0x02 : word32)
  Class: Eq_132
  DataType: int32
  OrigDataType: int32
T_133: (in -1 : int32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_134: (in (globals->dw10AB0 - (r2_39 + 2664) >> 0x02) + -1 : word32)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: int32
T_135: (in r18_43 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in 2664 : int32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in r2_39 + 2664 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_138: (in r2_45 < r16_47 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in (word32) (r2_45 < r16_47) : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in 0x00000000 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_141: (in (word32) (r2_45 < r16_47) == 0x00000000 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in sp_92 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in r28_93 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in r25_94 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in ra_96 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in r18_97 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in r17_98 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in r16_99 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in r2_100 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in r4_101 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in r3_102 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in __cxa_finalize : ptr32)
  Class: Eq_152
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_153: (in signature of __cxa_finalize : void)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: 
T_154: (in deregister_tm_clones : ptr32)
  Class: Eq_154
  DataType: (ptr32 Eq_154)
  OrigDataType: (ptr32 (fn T_156 ()))
T_155: (in signature of deregister_tm_clones : void)
  Class: Eq_154
  DataType: (ptr32 Eq_154)
  OrigDataType: 
T_156: (in deregister_tm_clones() : void)
  Class: Eq_156
  DataType: void
  OrigDataType: void
T_157: (in 0x01 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_158: (in 0x00000AF0 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_159
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 byte)
T_160: (in Mem61[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_161: (in r2_66 : uint32)
  Class: Eq_161
  DataType: uint32
  OrigDataType: uint32
T_162: (in 1 : int32)
  Class: Eq_162
  DataType: int32
  OrigDataType: (union (int32 u0) (up32 u1))
T_163: (in r2_45 + 1 : word32)
  Class: Eq_161
  DataType: uint32
  OrigDataType: up32
T_164: (in 0x00000AF4 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in r17_41 + 0x00000AF4 : word32)
  Class: Eq_165
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_166: (in Mem68[r17_41 + 0x00000AF4:word32] : word32)
  Class: Eq_161
  DataType: uint32
  OrigDataType: word32
T_167: (in r2_69 : (ptr32 (ptr32 code)))
  Class: Eq_167
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_174 t0000)))
T_168: (in 0x02 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in r2_66 << 0x02 : word32)
  Class: Eq_169
  DataType: ui32
  OrigDataType: ui32
T_170: (in r18_43 + (r2_66 << 0x02) : word32)
  Class: Eq_167
  DataType: (ptr32 (ptr32 code))
  OrigDataType: word32
T_171: (in r25_70 : (ptr32 code))
  Class: Eq_171
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_172: (in 0x00000000 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in r2_69 + 0x00000000 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in Mem68[r2_69 + 0x00000000:word32] : word32)
  Class: Eq_171
  DataType: (ptr32 code)
  OrigDataType: word32
T_175: (in sp_71 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in r28_72 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in r25_73 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in ra_75 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in r16_78 : Eq_121)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: up32
T_180: (in r2_79 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in r4_80 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in r3_81 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in 0x00000AF4 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in r17_41 + 0x00000AF4 : word32)
  Class: Eq_184
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_185: (in Mem68[r17_41 + 0x00000AF4:word32] : word32)
  Class: Eq_121
  DataType: Eq_121
  OrigDataType: word32
T_186: (in r2_45 < r16_78 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in (word32) (r2_45 < r16_78) : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in 0x00000000 : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_189: (in (word32) (r2_45 < r16_78) != 0x00000000 : bool)
  Class: Eq_189
  DataType: bool
  OrigDataType: bool
T_190: (in register_tm_clones : ptr32)
  Class: Eq_190
  DataType: (ptr32 Eq_190)
  OrigDataType: (ptr32 (fn T_192 ()))
T_191: (in signature of register_tm_clones : void)
  Class: Eq_190
  DataType: (ptr32 Eq_190)
  OrigDataType: 
T_192: (in register_tm_clones() : void)
  Class: Eq_192
  DataType: void
  OrigDataType: void
T_193: (in dwArg00 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in dwArg04 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in memset : ptr32)
  Class: Eq_195
  DataType: (ptr32 Eq_195)
  OrigDataType: (ptr32 (fn T_203 (T_200, T_201, T_202)))
T_196: (in signature of memset : void)
  Class: Eq_195
  DataType: (ptr32 Eq_195)
  OrigDataType: 
T_197: (in r4 : (ptr32 void))
  Class: Eq_197
  DataType: (ptr32 void)
  OrigDataType: 
T_198: (in value : int32)
  Class: Eq_198
  DataType: int32
  OrigDataType: 
T_199: (in num : size_t)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: 
T_200: (in r4_20 : word32)
  Class: Eq_197
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_201: (in r5_19 : word32)
  Class: Eq_198
  DataType: int32
  OrigDataType: int32
T_202: (in r6_18 : word32)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: size_t
T_203: (in memset(r4_20, r5_19, r6_18) : (ptr32 void))
  Class: Eq_203
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_204: (in calloc : ptr32)
  Class: Eq_204
  DataType: (ptr32 Eq_204)
  OrigDataType: (ptr32 (fn T_210 (T_208, T_209)))
T_205: (in signature of calloc : void)
  Class: Eq_204
  DataType: (ptr32 Eq_204)
  OrigDataType: 
T_206: (in num : size_t)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: 
T_207: (in size : size_t)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: 
T_208: (in r4_35 : word32)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: size_t
T_209: (in r5_34 : word32)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: size_t
T_210: (in calloc(r4_35, r5_34) : (ptr32 void))
  Class: Eq_210
  DataType: (ptr32 void)
  OrigDataType: (ptr32 void)
T_211: (in dwLoc14 : word32)
  Class: Eq_211
  DataType: Eq_211
  OrigDataType: word32
T_212: (in r2_45 : word32)
  Class: Eq_212
  DataType: (ptr32 Eq_212)
  OrigDataType: (ptr32 (struct (0 T_211 t0000) (1 T_229 t0001) (4 T_221 t0004)))
T_213: (in 0x00000000 : word32)
  Class: Eq_213
  DataType: word32
  OrigDataType: word32
T_214: (in r2_45 + 0x00000000 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in Mem54[r2_45 + 0x00000000:word32] : word32)
  Class: Eq_211
  DataType: Eq_211
  OrigDataType: word32
T_216: (in bLoc10 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in (word32) bLoc10 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in (byte) (word32) bLoc10 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x00000004 : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in r2_45 + 0x00000004 : word32)
  Class: Eq_220
  DataType: ptr32
  OrigDataType: ptr32
T_221: (in Mem58[r2_45 + 0x00000004:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_222: (in 0x0C : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_223: (in 0x00000000 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in r2_45 + 0x00000000 : word32)
  Class: Eq_224
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_225: (in Mem61[r2_45 + 0x00000000:byte] : byte)
  Class: Eq_211
  DataType: Eq_211
  OrigDataType: byte
T_226: (in 0x00000000 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in 0x00000001 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in r2_45 + 0x00000001 : word32)
  Class: Eq_228
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 word32)
T_229: (in Mem63[r2_45 + 0x00000001:word32] : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_230: (in r2_50 : (ptr32 Eq_212))
  Class: Eq_212
  DataType: (ptr32 Eq_212)
  OrigDataType: (ptr32 (struct (0 T_211 t0000) (1 T_229 t0001) (4 T_221 t0004)))
T_231: (in r3_52 : Eq_211)
  Class: Eq_211
  DataType: Eq_211
  OrigDataType: word32
T_232: (in r2_62 : (ptr32 Eq_212))
  Class: Eq_212
  DataType: (ptr32 Eq_212)
  OrigDataType: (ptr32 (struct (0 T_211 t0000) (1 T_229 t0001) (4 T_221 t0004)))
T_233: (in _init : ptr32)
  Class: Eq_233
  DataType: (ptr32 Eq_233)
  OrigDataType: (ptr32 (fn T_235 ()))
T_234: (in signature of _init : void)
  Class: Eq_233
  DataType: (ptr32 Eq_233)
  OrigDataType: 
T_235: (in _init() : void)
  Class: Eq_235
  DataType: void
  OrigDataType: void
T_236: (in r16_31 : (ptr32 word32))
  Class: Eq_236
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct 0004 (0 word32 dw0000)))
T_237: (in 0x00010ABC : word32)
  Class: Eq_237
  DataType: (ptr32 (ptr32 word32))
  OrigDataType: (ptr32 (struct (0 T_238 t0000)))
T_238: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_236
  DataType: (ptr32 word32)
  OrigDataType: word32
T_239: (in 0x00010ABC : word32)
  Class: Eq_239
  DataType: (ptr32 (ptr32 word32))
  OrigDataType: (ptr32 (struct (0 T_240 t0000)))
T_240: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_236
  DataType: (ptr32 word32)
  OrigDataType: int32
T_241: (in globals->ptr10ABC - r16_31 : word32)
  Class: Eq_241
  DataType: int32
  OrigDataType: int32
T_242: (in 0x02 : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in globals->ptr10ABC - r16_31 >> 0x02 : word32)
  Class: Eq_243
  DataType: int32
  OrigDataType: int32
T_244: (in 0x00000000 : word32)
  Class: Eq_243
  DataType: int32
  OrigDataType: word32
T_245: (in globals->ptr10ABC - r16_31 >> 0x02 == 0x00000000 : bool)
  Class: Eq_245
  DataType: bool
  OrigDataType: bool
T_246: (in r25_54 : (ptr32 code))
  Class: Eq_246
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_247: (in 0x00000000 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in r16_31 + 0x00000000 : word32)
  Class: Eq_248
  DataType: int32
  OrigDataType: int32
T_249: (in Mem0[r16_31 + 0x00000000:word32] : word32)
  Class: Eq_246
  DataType: (ptr32 code)
  OrigDataType: word32
T_250: (in sp_59 : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in r28_60 : word32)
  Class: Eq_251
  DataType: word32
  OrigDataType: word32
T_252: (in r25_61 : word32)
  Class: Eq_252
  DataType: word32
  OrigDataType: word32
T_253: (in r21_62 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in r6_63 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in r20_64 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in r5_65 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in r19_66 : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_258: (in r4_67 : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in r18_68 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in r16_69 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in ra_70 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in r17_71 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_263: (in r18_68 != r17_71 : bool)
  Class: Eq_263
  DataType: bool
  OrigDataType: bool
T_264: (in 4 : int32)
  Class: Eq_264
  DataType: int32
  OrigDataType: int32
T_265: (in r16_69 + 4 : word32)
  Class: Eq_236
  DataType: (ptr32 word32)
  OrigDataType: word32
T_266: (in r3_7 : (ptr32 Eq_57))
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: (ptr32 (struct (A60 T_272 t0A60)))
T_267: (in 0x00010AA8 : word32)
  Class: Eq_267
  DataType: (ptr32 (ptr32 Eq_57))
  OrigDataType: (ptr32 (struct (0 T_268 t0000)))
T_268: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_57
  DataType: (ptr32 Eq_57)
  OrigDataType: word32
T_269: (in r25_17 : (ptr32 code))
  Class: Eq_269
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_270: (in 0x00000A60 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in r3_7 + 0x00000A60 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in Mem0[r3_7 + 0x00000A60:word32] : word32)
  Class: Eq_269
  DataType: (ptr32 code)
  OrigDataType: word32
T_273: (in -1 : int32)
  Class: Eq_269
  DataType: (ptr32 code)
  OrigDataType: int32
T_274: (in r25_17 == (<anonymous> *) -1 : bool)
  Class: Eq_274
  DataType: bool
  OrigDataType: bool
T_275: (in sp_30 : word32)
  Class: Eq_275
  DataType: word32
  OrigDataType: word32
T_276: (in r28_31 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in r25_32 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in r3_33 : word32)
  Class: Eq_278
  DataType: word32
  OrigDataType: word32
T_279: (in r2_34 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in ra_35 : word32)
  Class: Eq_280
  DataType: word32
  OrigDataType: word32
T_281: (in r17_36 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in r16_37 : (ptr32 int32))
  Class: Eq_282
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_285 t0000)))
T_283: (in 0x00000000 : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in r16_37 + 0x00000000 : word32)
  Class: Eq_284
  DataType: word32
  OrigDataType: word32
T_285: (in Mem0[r16_37 + 0x00000000:word32] : word32)
  Class: Eq_285
  DataType: int32
  OrigDataType: word32
T_286: (in -1 : int32)
  Class: Eq_285
  DataType: int32
  OrigDataType: int32
T_287: (in *r16_37 != -1 : bool)
  Class: Eq_287
  DataType: bool
  OrigDataType: bool
T_288: (in r28 : ptr32)
  Class: Eq_288
  DataType: ptr32
  OrigDataType: ptr32
T_289: (in r25_4 : (ptr32 code))
  Class: Eq_289
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_290: (in 0x00007FF0 : word32)
  Class: Eq_290
  DataType: ui32
  OrigDataType: ui32
T_291: (in r28 - 0x00007FF0 : word32)
  Class: Eq_291
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_294 t0000)))
T_292: (in 0x00000000 : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_293
  DataType: word32
  OrigDataType: word32
T_294: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_289
  DataType: (ptr32 code)
  OrigDataType: word32
T_295: (in sp_8 : word32)
  Class: Eq_295
  DataType: word32
  OrigDataType: word32
T_296: (in r28_9 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_297: (in r25_10 : word32)
  Class: Eq_297
  DataType: word32
  OrigDataType: word32
T_298: (in ra_11 : word32)
  Class: Eq_298
  DataType: word32
  OrigDataType: word32
T_299: (in r15_12 : word32)
  Class: Eq_299
  DataType: word32
  OrigDataType: word32
T_300: (in r24_13 : word32)
  Class: Eq_300
  DataType: word32
  OrigDataType: word32
T_301: (in r28 : ptr32)
  Class: Eq_301
  DataType: ptr32
  OrigDataType: ptr32
T_302: (in r25_4 : (ptr32 code))
  Class: Eq_302
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_303: (in 0x00007FF0 : word32)
  Class: Eq_303
  DataType: ui32
  OrigDataType: ui32
T_304: (in r28 - 0x00007FF0 : word32)
  Class: Eq_304
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_307 t0000)))
T_305: (in 0x00000000 : word32)
  Class: Eq_305
  DataType: word32
  OrigDataType: word32
T_306: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_307: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_302
  DataType: (ptr32 code)
  OrigDataType: word32
T_308: (in sp_8 : word32)
  Class: Eq_308
  DataType: word32
  OrigDataType: word32
T_309: (in r28_9 : word32)
  Class: Eq_309
  DataType: word32
  OrigDataType: word32
T_310: (in r25_10 : word32)
  Class: Eq_310
  DataType: word32
  OrigDataType: word32
T_311: (in ra_11 : word32)
  Class: Eq_311
  DataType: word32
  OrigDataType: word32
T_312: (in r15_12 : word32)
  Class: Eq_312
  DataType: word32
  OrigDataType: word32
T_313: (in r24_13 : word32)
  Class: Eq_313
  DataType: word32
  OrigDataType: word32
T_314: (in r28 : ptr32)
  Class: Eq_314
  DataType: ptr32
  OrigDataType: ptr32
T_315: (in r25_4 : (ptr32 code))
  Class: Eq_315
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_316: (in 0x00007FF0 : word32)
  Class: Eq_316
  DataType: ui32
  OrigDataType: ui32
T_317: (in r28 - 0x00007FF0 : word32)
  Class: Eq_317
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_320 t0000)))
T_318: (in 0x00000000 : word32)
  Class: Eq_318
  DataType: word32
  OrigDataType: word32
T_319: (in r28 - 0x00007FF0 + 0x00000000 : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_320: (in Mem0[r28 - 0x00007FF0 + 0x00000000:word32] : word32)
  Class: Eq_315
  DataType: (ptr32 code)
  OrigDataType: word32
T_321: (in sp_8 : word32)
  Class: Eq_321
  DataType: word32
  OrigDataType: word32
T_322: (in r28_9 : word32)
  Class: Eq_322
  DataType: word32
  OrigDataType: word32
T_323: (in r25_10 : word32)
  Class: Eq_323
  DataType: word32
  OrigDataType: word32
T_324: (in ra_11 : word32)
  Class: Eq_324
  DataType: word32
  OrigDataType: word32
T_325: (in r15_12 : word32)
  Class: Eq_325
  DataType: word32
  OrigDataType: word32
T_326: (in r24_13 : word32)
  Class: Eq_326
  DataType: word32
  OrigDataType: word32
T_327: (in _fini : ptr32)
  Class: Eq_327
  DataType: (ptr32 Eq_327)
  OrigDataType: (ptr32 (fn T_329 ()))
T_328: (in signature of _fini : void)
  Class: Eq_327
  DataType: (ptr32 Eq_327)
  OrigDataType: 
T_329: (in _fini() : void)
  Class: Eq_329
  DataType: void
  OrigDataType: void
T_330: (in sp_17 : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_331: (in r28_18 : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in r25_19 : word32)
  Class: Eq_332
  DataType: word32
  OrigDataType: word32
T_333: (in ra_20 : word32)
  Class: Eq_333
  DataType: word32
  OrigDataType: word32
T_334: (in 00020A4C : ptr32)
  Class: Eq_334
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_337 t0000)))
T_335: (in 0x00000000 : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_336: (in 0x00020A4C + 0x00000000 : word32)
  Class: Eq_336
  DataType: ptr32
  OrigDataType: ptr32
T_337: (in Mem0[0x00020A4C + 0x00000000:word32] : word32)
  Class: Eq_337
  DataType: ptr32
  OrigDataType: ptr32
T_338: (in 1780 : int32)
  Class: Eq_338
  DataType: int32
  OrigDataType: int32
T_339: (in *(ptr32 *) 0x00020A4C + 1780 : word32)
  Class: Eq_339
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	Eq_57 t10000;	// 10000
	word32 dw10A60;	// 10A60
	word32 dw10AA4;	// 10AA4
	struct Eq_57 * ptr10AA8;	// 10AA8
	int32 dw10AB0;	// 10AB0
	word32 * ptr10ABC;	// 10ABC
	<anonymous> * ptr10AD4;	// 10AD4
	<anonymous> * ptr10AE4;	// 10AE4
} Eq_1;

typedef struct Eq_57 {	// size: 1 1
	<anonymous> * ptr0A60;	// A60
	byte b0AF0;	// AF0
	word32 dw0AF4;	// AF4
} Eq_57;

typedef union Eq_80 {
	int32 u0;
	uint32 u1;
} Eq_80;

typedef union Eq_82 {
	int32 u0;
	uint32 u1;
} Eq_82;

typedef union Eq_85 {
	int32 u0;
	uint32 u1;
} Eq_85;

typedef union Eq_86 {
	int32 u0;
	uint32 u1;
} Eq_86;

typedef union Eq_121 {
	int32 u0;
	up32 u1;
} Eq_121;

typedef void (Eq_154)();

typedef union Eq_162 {
	int32 u0;
	up32 u1;
} Eq_162;

typedef void (Eq_190)();

typedef void (Eq_195)(void, int32, size_t);

typedef size_t Eq_199;

typedef void (Eq_204)(size_t, size_t);

typedef union Eq_211 {
	byte u0;
	word32 u1;
} Eq_211;

typedef struct Eq_212 {
	Eq_211 t0000;	// 0
	word32 dw0001;	// 1
	byte b0004;	// 4
} Eq_212;

typedef void (Eq_233)();

typedef void (Eq_327)();

