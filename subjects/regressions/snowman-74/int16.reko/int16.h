// int16.h
// Generated by decompiling int16.dll
// using Reko decompiler version 0.9.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_3: (struct "A" (0 word32 dw0000))
	T_3 (in this : (ptr32 Eq_3))
Eq_9: BOOL
	T_9 (in eax : Eq_9)
	T_13 (in 1<32> : word32)
Eq_10: HANDLE
	T_10 (in hModule : Eq_10)
Eq_11: DWORD
	T_11 (in dwReason : Eq_11)
Eq_12: LPVOID
	T_12 (in lpReserved : Eq_12)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in eax : int32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_3: (in this : (ptr32 Eq_3))
  Class: Eq_3
  DataType: (ptr32 Eq_3)
  OrigDataType: (ptr32 (struct "A"))
T_4: (in dwArg04 : int32)
  Class: Eq_4
  DataType: int32
  OrigDataType: int32
T_5: (in 0<32> : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in this + 0<32> : word32)
  Class: Eq_6
  DataType: ptr32
  OrigDataType: ptr32
T_7: (in Mem0[this + 0<32>:word32] : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in this->dw0000 + dwArg04 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_9: (in eax : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: BOOL
T_10: (in hModule : Eq_10)
  Class: Eq_10
  DataType: Eq_10
  OrigDataType: HANDLE
T_11: (in dwReason : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: DWORD
T_12: (in lpReserved : Eq_12)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: LPVOID
T_13: (in 1<32> : word32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word32
*/
typedef struct Globals {
} Eq_1;

typedef struct A {
	word32 dw0000;	// 0
} Eq_3;

typedef BOOL Eq_9;

typedef HANDLE Eq_10;

typedef DWORD Eq_11;

typedef LPVOID Eq_12;

