// ledwith8051.h
// Generated by decompiling ledwith8051.hex
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr16 (struct "Globals")))
Eq_2: (segment "Eq_2" (0 (arr byte 128) a0000))
	T_2 (in __data : (ptr16 Eq_2))
Eq_3: (union "Eq_3" (byte u0) ((memptr (ptr16 Eq_2) byte) u1))
	T_3 (in R0_10 : Eq_3)
	T_4 (in 0x7F_08 : byte)
	T_10 (in R0_10 - 1_08 : byte)
	T_11 (in 0_08 : byte)
Eq_9: (union "Eq_9" (byte u0) ((memptr (ptr16 Eq_2) byte) u1))
	T_9 (in 1_08 : byte)
Eq_13: (fn void ())
	T_13 (in fn0003 : ptr16)
	T_14 (in signature of fn0003 : void)
	T_16 (in fn0003 : ptr16)
// Type Variables ////////////
globals_t: (in globals : (ptr16 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr16 Eq_1)
  OrigDataType: (ptr16 (struct "Globals"))
T_2: (in __data : (ptr16 Eq_2))
  Class: Eq_2
  DataType: (ptr16 Eq_2)
  OrigDataType: (ptr16 (segment (0 (arr T_47 128) a0000)))
T_3: (in R0_10 : Eq_3)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: (union (byte u0) ((memptr T_2 (struct 0001 (0 byte b0000))) u1))
T_4: (in 0x7F_08 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_5: (in 0_08 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0_08 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in R0_10 + 0_08 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in Mem9[__data:R0_10 + 0_08:byte] : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_9: (in 1_08 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: (union (byte u0) ((memptr T_2 (struct 0001 (0 byte b0000))) u1))
T_10: (in R0_10 - 1_08 : byte)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: (union (byte u0) ((memptr T_2 (struct 0001 (0 byte b0000))) u1))
T_11: (in 0_08 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_12: (in R0_10 != 0_08 : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in fn0003 : ptr16)
  Class: Eq_13
  DataType: (ptr16 Eq_13)
  OrigDataType: (ptr16 (fn T_15 ()))
T_14: (in signature of fn0003 : void)
  Class: Eq_13
  DataType: (ptr16 Eq_13)
  OrigDataType: 
T_15: (in fn0003() : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in fn0003 : ptr16)
  Class: Eq_13
  DataType: (ptr16 Eq_13)
  OrigDataType: (ptr16 (fn T_17 ()))
T_17: (in fn0003() : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_18: (in R7_21 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0_08 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_20: (in R6_26 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0_08 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_22: (in R4_10 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x27_08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_24: (in R4_10 != 0x27_08 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in 1_08 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in R4_10 + 1_08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_27: (in R5_11 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 1_08 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in R5_11 + 1_08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_30: (in 0_08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_31: (in R5_11 != 0_08 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x10_08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_33: (in R5_11 != 0x10_08 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 1_08 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in R7_21 + 1_08 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_36: (in 0_08 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_37: (in R7_21 != 0_08 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0xA_08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in R7_21 ^ 0xA_08 : byte)
  Class: Eq_39
  DataType: ui8
  OrigDataType: ui8
T_40: (in R7_21 ^ 0xA_08 | R6_26 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0_08 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_42: (in (R7_21 ^ 0xA_08 | R6_26) != 0_08 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 1_08 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in R6_26 + 1_08 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_45: (in 0_08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_46: (in 0_08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_47:
  Class: Eq_47
  DataType: byte
  OrigDataType: (struct 0001 (0 T_8 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
	byte a0000[128];	// 0
} Eq_2;

typedef union Eq_3 {
	byte u0;
	byte Eq_2::* u1;
} Eq_3;

typedef union Eq_9 {
	byte u0;
	byte Eq_2::* u1;
} Eq_9;

typedef void (Eq_13)();

