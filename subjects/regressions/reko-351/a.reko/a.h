// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr32 code) ptr8000270C) (80002714 (arr (ptr32 code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 uint32 dw80002726) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_48: (fn word32 ())
	T_48 (in deregister_tm_clones : ptr32)
	T_49 (in signature of deregister_tm_clones : void)
Eq_113: (fn void ())
	T_113 (in register_tm_clones : ptr32)
	T_114 (in signature of register_tm_clones : void)
	T_116 (in register_tm_clones : ptr32)
Eq_142: (fn void (real64, int32))
	T_142 (in pow_int : ptr32)
	T_143 (in signature of pow_int : void)
	T_153 (in pow_int : ptr32)
Eq_145: (fn void (int32))
	T_145 (in factorial : ptr32)
	T_146 (in signature of factorial : void)
	T_155 (in factorial : ptr32)
Eq_162: (fn void (real64))
	T_162 (in sine_taylor : ptr32)
	T_163 (in signature of sine_taylor : void)
Eq_166: (fn void (real64, real64, Eq_170))
	T_166 (in _sin : ptr32)
	T_167 (in signature of _sin : void)
Eq_170: (union "Eq_170" ((ptr32 word32) u0) ((ref int32) u1))
	T_170 (in tArg14 : Eq_170)
	T_175 (in fp - 8<32> : word32)
Eq_187: (ref int32)
	T_187 (in tArg14 + 0<32> : word32)
Eq_192: (union "Eq_192" ((ptr32 word32) u0) ((ref int32) u1))
	T_192 (in tArg14 + 0<32> : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in a6 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in a6_23 : (ptr32 word32))
  Class: Eq_3
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_10 t0000)))
T_4: (in fp : ptr32)
  Class: Eq_4
  DataType: ptr32
  OrigDataType: ptr32
T_5: (in 4<32> : word32)
  Class: Eq_5
  DataType: ui32
  OrigDataType: ui32
T_6: (in fp - 4<32> : word32)
  Class: Eq_3
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_7: (in true : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in 0<32> : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in a6_23 + 0<32> : word32)
  Class: Eq_9
  DataType: ptr32
  OrigDataType: ptr32
T_10: (in Mem31[a6_23 + 0<32>:word32] : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_11: (in 00000000 : ptr32)
  Class: Eq_11
  DataType: ptr32
  OrigDataType: ptr32
T_12: (in 0<32> : word32)
  Class: Eq_11
  DataType: ptr32
  OrigDataType: word32
T_13: (in 0<u32> == 0<32> : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in a0_26 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 00000000 : ptr32)
  Class: Eq_15
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_16: (in d0_12 : int32)
  Class: Eq_16
  DataType: int32
  OrigDataType: int32
T_17: (in 0<i32> : int32)
  Class: Eq_16
  DataType: int32
  OrigDataType: int32
T_18: (in false : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in 1<32> : word32)
  Class: Eq_16
  DataType: int32
  OrigDataType: word32
T_20: (in d0_18 : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in 1<32> : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in d0_12 >> 1<32> : word32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_23: (in 0<32> : word32)
  Class: Eq_20
  DataType: int32
  OrigDataType: word32
T_24: (in d0_18 == 0<32> : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in 00000000 : ptr32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_26: (in 0<32> : word32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: word32
T_27: (in 0<u32> == 0<32> : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in a0_37 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in 00000000 : ptr32)
  Class: Eq_29
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_30: (in a6_38 : ptr32)
  Class: Eq_30
  DataType: ptr32
  OrigDataType: ptr32
T_31: (in fp : ptr32)
  Class: Eq_31
  DataType: ptr32
  OrigDataType: ptr32
T_32: (in 4<32> : word32)
  Class: Eq_32
  DataType: ui32
  OrigDataType: ui32
T_33: (in fp - 4<32> : word32)
  Class: Eq_30
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in 80002724 : ptr32)
  Class: Eq_34
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_35 t0000)))
T_35: (in Mem15[0x80002724<p32>:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0<8> : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in globals->b80002724 != 0<8> : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in d0_21 : uint32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: up32
T_39: (in 80002726 : ptr32)
  Class: Eq_39
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_40 t0000)))
T_40: (in Mem15[0x80002726<p32>:word32] : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: word32
T_41: (in a2_20 : (arr (ptr32 code)))
  Class: Eq_41
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: (ptr32 (struct (0 (arr T_254) a0000)))
T_42: (in 80002714 : ptr32)
  Class: Eq_41
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: ptr32
T_43: (in d2_25 : up32)
  Class: Eq_43
  DataType: up32
  OrigDataType: up32
T_44: (in 0<32> : word32)
  Class: Eq_43
  DataType: up32
  OrigDataType: word32
T_45: (in 0<32> : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: up32
T_46: (in d0_21 >= 0<32> : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in a6_55 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in deregister_tm_clones : ptr32)
  Class: Eq_48
  DataType: (ptr32 Eq_48)
  OrigDataType: (ptr32 (fn T_50 ()))
T_49: (in signature of deregister_tm_clones : void)
  Class: Eq_48
  DataType: (ptr32 Eq_48)
  OrigDataType: 
T_50: (in deregister_tm_clones() : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_51: (in a7_56 : ptr32)
  Class: Eq_51
  DataType: ptr32
  OrigDataType: ptr32
T_52: (in <invalid> : void)
  Class: Eq_51
  DataType: ptr32
  OrigDataType: void
T_53: (in 00000000 : ptr32)
  Class: Eq_53
  DataType: ptr32
  OrigDataType: ptr32
T_54: (in 0<32> : word32)
  Class: Eq_53
  DataType: ptr32
  OrigDataType: word32
T_55: (in 0<u32> == 0<32> : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in d0_31 : uint32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: uint32
T_57: (in 1<32> : word32)
  Class: Eq_57
  DataType: up32
  OrigDataType: up32
T_58: (in d0_21 + 1<32> : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: up32
T_59: (in 80002726 : ptr32)
  Class: Eq_59
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_60 t0000)))
T_60: (in Mem34[0x80002726<p32>:word32] : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: word32
T_61: (in a0_46 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in d1_95 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in 4<i32> : int32)
  Class: Eq_63
  DataType: int32
  OrigDataType: int32
T_64: (in d0_31 * 4<i32> : word32)
  Class: Eq_64
  DataType: ui32
  OrigDataType: ui32
T_65: (in a2_20[d0_31 * 4<i32>] : word32)
  Class: Eq_65
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_66: (in 80002726 : ptr32)
  Class: Eq_66
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_67 t0000)))
T_67: (in Mem34[0x80002726<p32>:word32] : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: word32
T_68: (in d2_25 - d0_21 : word32)
  Class: Eq_68
  DataType: up32
  OrigDataType: up32
T_69: (in 0<32> : word32)
  Class: Eq_68
  DataType: up32
  OrigDataType: up32
T_70: (in d2_25 - d0_21 > 0<32> : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 1<8> : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_72: (in 80002724 : ptr32)
  Class: Eq_72
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_73 t0000)))
T_73: (in Mem81[0x80002724<p32>:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_74: (in 8000065C : ptr32)
  Class: Eq_74
  DataType: ptr32
  OrigDataType: ptr32
T_75: (in 4<32> : word32)
  Class: Eq_75
  DataType: ui32
  OrigDataType: ui32
T_76: (in a7_56 - 4<32> : word32)
  Class: Eq_76
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_79 t0000)))
T_77: (in 0<32> : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in a7_56 - 4<32> + 0<32> : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in Mem68[a7_56 - 4<32> + 0<32>:word32] : word32)
  Class: Eq_74
  DataType: ptr32
  OrigDataType: word32
T_80: (in d0_75 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in a0_76 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in d1_77 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in 00000000 : ptr32)
  Class: Eq_83
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_84: (in a6_18 : ptr32)
  Class: Eq_84
  DataType: ptr32
  OrigDataType: ptr32
T_85: (in fp : ptr32)
  Class: Eq_85
  DataType: ptr32
  OrigDataType: ptr32
T_86: (in 4<32> : word32)
  Class: Eq_86
  DataType: ui32
  OrigDataType: ui32
T_87: (in fp - 4<32> : word32)
  Class: Eq_84
  DataType: ptr32
  OrigDataType: ptr32
T_88: (in a7_23 : ptr32)
  Class: Eq_88
  DataType: ptr32
  OrigDataType: ptr32
T_89: (in fp - 4<32> : word32)
  Class: Eq_88
  DataType: ptr32
  OrigDataType: ptr32
T_90: (in 00000000 : ptr32)
  Class: Eq_90
  DataType: ptr32
  OrigDataType: ptr32
T_91: (in 0<32> : word32)
  Class: Eq_90
  DataType: ptr32
  OrigDataType: word32
T_92: (in 0<u32> == 0<32> : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in 8000271C : ptr32)
  Class: Eq_93
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_94 t0000)))
T_94: (in Mem25[0x8000271C<p32>:word32] : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in 0<32> : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_96: (in globals->dw8000271C != 0<32> : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in a7_17 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in a1_20 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in 00000000 : ptr32)
  Class: Eq_99
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_100: (in 8<i32> : int32)
  Class: Eq_100
  DataType: int32
  OrigDataType: int32
T_101: (in a7_17 + 8<i32> : word32)
  Class: Eq_88
  DataType: ptr32
  OrigDataType: word32
T_102: (in 00000000 : ptr32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: ptr32
T_103: (in 0<32> : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: word32
T_104: (in 0<u32> == 0<32> : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 8000271C : ptr32)
  Class: Eq_105
  DataType: ptr32
  OrigDataType: ptr32
T_106: (in 4<i32> : int32)
  Class: Eq_106
  DataType: int32
  OrigDataType: int32
T_107: (in a7_23 - 4<i32> : word32)
  Class: Eq_107
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_110 t0000)))
T_108: (in 0<32> : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in a7_23 - 4<i32> + 0<32> : word32)
  Class: Eq_109
  DataType: ptr32
  OrigDataType: ptr32
T_110: (in Mem38[a7_23 - 4<i32> + 0<32>:word32] : word32)
  Class: Eq_105
  DataType: ptr32
  OrigDataType: word32
T_111: (in a1_44 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in 00000000 : ptr32)
  Class: Eq_112
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_113: (in register_tm_clones : ptr32)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: (ptr32 (fn T_115 ()))
T_114: (in signature of register_tm_clones : void)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: 
T_115: (in register_tm_clones() : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in register_tm_clones : ptr32)
  Class: Eq_113
  DataType: (ptr32 Eq_113)
  OrigDataType: (ptr32 (fn T_117 ()))
T_117: (in register_tm_clones() : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_118: (in rArg04 : real64)
  Class: Eq_118
  DataType: real64
  OrigDataType: real64
T_119: (in dwArg04 : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_120: (in dwLoc08_35 : int32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_121: (in 2<i32> : int32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_122: (in 1<32> : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in dwLoc08_35 + 1<32> : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_124: (in dwLoc08_35 - dwArg04 : word32)
  Class: Eq_124
  DataType: int32
  OrigDataType: int32
T_125: (in 0<32> : word32)
  Class: Eq_124
  DataType: int32
  OrigDataType: int32
T_126: (in dwLoc08_35 - dwArg04 > 0<32> : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in rArg04 : real64)
  Class: Eq_127
  DataType: real64
  OrigDataType: real64
T_128: (in dwArg0C : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_129: (in dwLoc08_49 : int32)
  Class: Eq_129
  DataType: int32
  OrigDataType: int32
T_130: (in 0<32> : word32)
  Class: Eq_129
  DataType: int32
  OrigDataType: word32
T_131: (in 1<32> : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in dwLoc08_49 + 1<32> : word32)
  Class: Eq_129
  DataType: int32
  OrigDataType: word32
T_133: (in dwLoc08_49 - dwArg0C : word32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_134: (in 0<32> : word32)
  Class: Eq_133
  DataType: int32
  OrigDataType: int32
T_135: (in dwLoc08_49 - dwArg0C >= 0<32> : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in rArg04 : real64)
  Class: Eq_127
  DataType: real64
  OrigDataType: real64
T_137: (in dwArg0C : int32)
  Class: Eq_137
  DataType: int32
  OrigDataType: int32
T_138: (in dwLoc08_127 : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_139: (in 3<i32> : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_140: (in dwLoc08_130 : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_141: (in 5<i32> : int32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_142: (in pow_int : ptr32)
  Class: Eq_142
  DataType: (ptr32 Eq_142)
  OrigDataType: (ptr32 (fn T_144 (T_136, T_138)))
T_143: (in signature of pow_int : void)
  Class: Eq_142
  DataType: (ptr32 Eq_142)
  OrigDataType: 
T_144: (in pow_int(rArg04, dwLoc08_127) : void)
  Class: Eq_144
  DataType: void
  OrigDataType: void
T_145: (in factorial : ptr32)
  Class: Eq_145
  DataType: (ptr32 Eq_145)
  OrigDataType: (ptr32 (fn T_147 (T_138)))
T_146: (in signature of factorial : void)
  Class: Eq_145
  DataType: (ptr32 Eq_145)
  OrigDataType: 
T_147: (in factorial(dwLoc08_127) : void)
  Class: Eq_147
  DataType: void
  OrigDataType: void
T_148: (in 4<32> : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in dwLoc08_127 + 4<32> : word32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_150: (in dwLoc08_127 - dwArg0C : word32)
  Class: Eq_150
  DataType: int32
  OrigDataType: int32
T_151: (in 0<32> : word32)
  Class: Eq_150
  DataType: int32
  OrigDataType: int32
T_152: (in dwLoc08_127 - dwArg0C > 0<32> : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in pow_int : ptr32)
  Class: Eq_142
  DataType: (ptr32 Eq_142)
  OrigDataType: (ptr32 (fn T_154 (T_136, T_140)))
T_154: (in pow_int(rArg04, dwLoc08_130) : void)
  Class: Eq_144
  DataType: void
  OrigDataType: void
T_155: (in factorial : ptr32)
  Class: Eq_145
  DataType: (ptr32 Eq_145)
  OrigDataType: (ptr32 (fn T_156 (T_140)))
T_156: (in factorial(dwLoc08_130) : void)
  Class: Eq_147
  DataType: void
  OrigDataType: void
T_157: (in 4<32> : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in dwLoc08_130 + 4<32> : word32)
  Class: Eq_119
  DataType: int32
  OrigDataType: int32
T_159: (in dwLoc08_130 - dwArg0C : word32)
  Class: Eq_159
  DataType: int32
  OrigDataType: int32
T_160: (in 0<32> : word32)
  Class: Eq_159
  DataType: int32
  OrigDataType: int32
T_161: (in dwLoc08_130 - dwArg0C > 0<32> : bool)
  Class: Eq_161
  DataType: bool
  OrigDataType: bool
T_162: (in sine_taylor : ptr32)
  Class: Eq_162
  DataType: (ptr32 Eq_162)
  OrigDataType: (ptr32 (fn T_165 (T_164)))
T_163: (in signature of sine_taylor : void)
  Class: Eq_162
  DataType: (ptr32 Eq_162)
  OrigDataType: 
T_164: (in 4.61425307021499e+18 : real64)
  Class: Eq_118
  DataType: real64
  OrigDataType: real64
T_165: (in sine_taylor(4.61425307021499e+18) : void)
  Class: Eq_165
  DataType: void
  OrigDataType: void
T_166: (in _sin : ptr32)
  Class: Eq_166
  DataType: (ptr32 Eq_166)
  OrigDataType: (ptr32 (fn T_176 (T_171, T_172, T_175)))
T_167: (in signature of _sin : void)
  Class: Eq_166
  DataType: (ptr32 Eq_166)
  OrigDataType: 
T_168: (in rArg04 : real64)
  Class: Eq_168
  DataType: real64
  OrigDataType: real64
T_169: (in rArg0C : real64)
  Class: Eq_169
  DataType: real64
  OrigDataType: real64
T_170: (in tArg14 : Eq_170)
  Class: Eq_170
  DataType: Eq_170
  OrigDataType: (union ((ptr32 (struct (0 T_188 t0000))) u1) ((ref int32) u0))
T_171: (in 4.61425307021499e+18 : real64)
  Class: Eq_168
  DataType: real64
  OrigDataType: real64
T_172: (in 4.56906395155395e+18 : real64)
  Class: Eq_169
  DataType: real64
  OrigDataType: real64
T_173: (in fp : ptr32)
  Class: Eq_173
  DataType: ptr32
  OrigDataType: ptr32
T_174: (in 8<32> : word32)
  Class: Eq_174
  DataType: ui32
  OrigDataType: ui32
T_175: (in fp - 8<32> : word32)
  Class: Eq_170
  DataType: Eq_170
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_176: (in _sin(4.61425307021499e+18, 4.56906395155395e+18, fp - 8<32>) : void)
  Class: Eq_176
  DataType: void
  OrigDataType: void
T_177: (in rLoc0C_114 : real64)
  Class: Eq_168
  DataType: real64
  OrigDataType: real64
T_178: (in v9_14 : real64)
  Class: Eq_178
  DataType: real64
  OrigDataType: real64
T_179: (in (real96) rArg04 : real96)
  Class: Eq_179
  DataType: real96
  OrigDataType: real96
T_180: (in (real96) rArg04 * rArg04 : real96)
  Class: Eq_180
  DataType: real96
  OrigDataType: real96
T_181: (in (real64) ((real96) rArg04 * rArg04) : real64)
  Class: Eq_178
  DataType: real64
  OrigDataType: real64
T_182: (in dwLoc20_120 : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in 2<32> : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_184: (in rLoc14_122 : real64)
  Class: Eq_184
  DataType: real64
  OrigDataType: real64
T_185: (in 0x3FF0000000000000<64> : word64)
  Class: Eq_184
  DataType: real64
  OrigDataType: word64
T_186: (in 0<32> : word32)
  Class: Eq_186
  DataType: word32
  OrigDataType: word32
T_187: (in tArg14 + 0<32> : word32)
  Class: Eq_187
  DataType: Eq_187
  OrigDataType: (ref int32)
T_188: (in Mem98[tArg14 + 0<32>:word32] : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in 1<32> : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in Mem98[tArg14 + 0<32>:word32] + 1<32> : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_191: (in 0<32> : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in tArg14 + 0<32> : word32)
  Class: Eq_192
  DataType: Eq_192
  OrigDataType: (union ((ptr32 word32) u1) ((ref int32) u0))
T_193: (in Mem106[tArg14 + 0<32>:word32] : word32)
  Class: Eq_188
  DataType: Eq_170
  OrigDataType: word32
T_194: (in v23_57 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in 0<32> : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in dwLoc20_120 + 0<32> : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_197: (in (real96) rLoc0C_114 : real96)
  Class: Eq_197
  DataType: real96
  OrigDataType: real96
T_198: (in (real96) rLoc0C_114 * v9_14 : real96)
  Class: Eq_198
  DataType: real96
  OrigDataType: real96
T_199: (in (real64) ((real96) rLoc0C_114 * v9_14) : real64)
  Class: Eq_199
  DataType: real64
  OrigDataType: real64
T_200: (in (real96) (real64) ((real96) rLoc0C_114 * v9_14) : real96)
  Class: Eq_200
  DataType: real96
  OrigDataType: real96
T_201: (in (real96) (real64) ((real96) rLoc0C_114 * v9_14) * v9_14 : real96)
  Class: Eq_201
  DataType: real96
  OrigDataType: real96
T_202: (in (real64) ((real96) (real64) ((real96) rLoc0C_114 * v9_14) * v9_14) : real64)
  Class: Eq_168
  DataType: real64
  OrigDataType: real64
T_203: (in 3<32> : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in v23_57 + 3<32> : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_205: (in (real96) rLoc14_122 : real96)
  Class: Eq_205
  DataType: real96
  OrigDataType: real96
T_206: (in (real96) v23_57 : real96)
  Class: Eq_206
  DataType: real96
  OrigDataType: real96
T_207: (in (real80) (real96) v23_57 : real80)
  Class: Eq_207
  DataType: real80
  OrigDataType: real80
T_208: (in (real96) rLoc14_122 * (real80) ((real96) v23_57) : real96)
  Class: Eq_208
  DataType: real96
  OrigDataType: real96
T_209: (in (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) : real64)
  Class: Eq_209
  DataType: real64
  OrigDataType: real64
T_210: (in (real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) : real96)
  Class: Eq_210
  DataType: real96
  OrigDataType: real96
T_211: (in 1<32> : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in v23_57 + 1<32> : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in (real96) (v23_57 + 1<32>) : real96)
  Class: Eq_213
  DataType: real96
  OrigDataType: real96
T_214: (in (real80) (real96) (v23_57 + 1<32>) : real80)
  Class: Eq_214
  DataType: real80
  OrigDataType: real80
T_215: (in (real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>)) : real96)
  Class: Eq_215
  DataType: real96
  OrigDataType: real96
T_216: (in (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) : real64)
  Class: Eq_216
  DataType: real64
  OrigDataType: real64
T_217: (in (real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) : real96)
  Class: Eq_217
  DataType: real96
  OrigDataType: real96
T_218: (in 2<32> : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in v23_57 + 2<32> : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in (real96) (v23_57 + 2<32>) : real96)
  Class: Eq_220
  DataType: real96
  OrigDataType: real96
T_221: (in (real80) (real96) (v23_57 + 2<32>) : real80)
  Class: Eq_221
  DataType: real80
  OrigDataType: real80
T_222: (in (real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) * (real80) ((real96) (v23_57 + 2<32>)) : real96)
  Class: Eq_222
  DataType: real96
  OrigDataType: real96
T_223: (in (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) * (real80) ((real96) (v23_57 + 2<32>))) : real64)
  Class: Eq_223
  DataType: real64
  OrigDataType: real64
T_224: (in (real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) * (real80) ((real96) (v23_57 + 2<32>))) : real96)
  Class: Eq_224
  DataType: real96
  OrigDataType: real96
T_225: (in v23_57 + 3<32> : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in (real96) (v23_57 + 3<32>) : real96)
  Class: Eq_226
  DataType: real96
  OrigDataType: real96
T_227: (in (real80) (real96) (v23_57 + 3<32>) : real80)
  Class: Eq_227
  DataType: real80
  OrigDataType: real80
T_228: (in (real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) * (real80) ((real96) (v23_57 + 2<32>))) * (real80) ((real96) (v23_57 + 3<32>)) : real96)
  Class: Eq_228
  DataType: real96
  OrigDataType: real96
T_229: (in (real64) ((real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 1<32>))) * (real80) ((real96) (v23_57 + 2<32>))) * (real80) ((real96) (v23_57 + 3<32>))) : real64)
  Class: Eq_184
  DataType: real64
  OrigDataType: real64
T_230: (in (real96) rLoc0C_114 : real96)
  Class: Eq_230
  DataType: real96
  OrigDataType: real96
T_231: (in (real96) rLoc0C_114 / rLoc14_122 : real96)
  Class: Eq_231
  DataType: real96
  OrigDataType: real96
T_232: (in (real64) ((real96) rLoc0C_114 / rLoc14_122) : real64)
  Class: Eq_169
  DataType: real64
  OrigDataType: real64
T_233: (in (real64) ((real96) rLoc0C_114 / rLoc14_122) < rArg0C : bool)
  Class: Eq_233
  DataType: bool
  OrigDataType: bool
T_234: (in a0_12 : (ptr32 code))
  Class: Eq_234
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_235: (in 8000270C : ptr32)
  Class: Eq_235
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_236 t0000)))
T_236: (in Mem11[0x8000270C<p32>:word32] : word32)
  Class: Eq_234
  DataType: (ptr32 code)
  OrigDataType: word32
T_237: (in a6_19 : ptr32)
  Class: Eq_237
  DataType: ptr32
  OrigDataType: ptr32
T_238: (in fp : ptr32)
  Class: Eq_238
  DataType: ptr32
  OrigDataType: ptr32
T_239: (in 4<32> : word32)
  Class: Eq_239
  DataType: ui32
  OrigDataType: ui32
T_240: (in fp - 4<32> : word32)
  Class: Eq_237
  DataType: ptr32
  OrigDataType: ptr32
T_241: (in a2_13 : ptr32)
  Class: Eq_241
  DataType: ptr32
  OrigDataType: ptr32
T_242: (in 8000270C : ptr32)
  Class: Eq_241
  DataType: ptr32
  OrigDataType: ptr32
T_243: (in -1<i32> : int32)
  Class: Eq_234
  DataType: (ptr32 code)
  OrigDataType: int32
T_244: (in a0_12 == (<anonymous> *) -1<i32> : bool)
  Class: Eq_244
  DataType: bool
  OrigDataType: bool
T_245: (in a2_24 : ptr32)
  Class: Eq_245
  DataType: ptr32
  OrigDataType: ptr32
T_246: (in 4<i32> : int32)
  Class: Eq_246
  DataType: int32
  OrigDataType: int32
T_247: (in a2_24 - 4<i32> : word32)
  Class: Eq_247
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_250 t0000)))
T_248: (in 0<32> : word32)
  Class: Eq_248
  DataType: word32
  OrigDataType: word32
T_249: (in a2_24 - 4<i32> + 0<32> : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in Mem11[a2_24 - 4<i32> + 0<32>:word32] : word32)
  Class: Eq_234
  DataType: (ptr32 code)
  OrigDataType: word32
T_251: (in a2_24 - 4<i32> : word32)
  Class: Eq_241
  DataType: ptr32
  OrigDataType: ptr32
T_252: (in -1<i32> : int32)
  Class: Eq_234
  DataType: (ptr32 code)
  OrigDataType: int32
T_253: (in a0_12 != (<anonymous> *) -1<i32> : bool)
  Class: Eq_253
  DataType: bool
  OrigDataType: bool
T_254:
  Class: Eq_254
  DataType: (ptr32 code)
  OrigDataType: (struct 0004 (0 T_65 t0000))
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	uint32 dw80002726;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef word32 (Eq_48)();

typedef void (Eq_113)();

typedef void (Eq_142)(real64, int32);

typedef void (Eq_145)(int32);

typedef void (Eq_162)(real64);

typedef void (Eq_166)(real64, real64, Eq_170);

typedef union Eq_170 {
	word32 * u0;
	int32 & u1;
} Eq_170;

typedef int32 & Eq_187;

typedef union Eq_192 {
	word32 * u0;
	int32 & u1;
} Eq_192;

