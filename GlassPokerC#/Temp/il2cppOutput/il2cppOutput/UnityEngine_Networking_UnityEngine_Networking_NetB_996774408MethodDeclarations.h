#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.NetBuffer
struct NetBuffer_t_996774408_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen1163398599.h"

// System.Void UnityEngine.Networking.NetBuffer::.ctor()
extern "C"  void NetBuffer__ctor_m1267756190_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::.ctor(System.Byte[])
extern "C"  void NetBuffer__ctor_m1377534955_0 (NetBuffer_t_996774408_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetBuffer::get_Position()
extern "C"  uint32_t NetBuffer_get_Position_m859208883_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetBuffer::ReadByte()
extern "C"  uint8_t NetBuffer_ReadByte_m_962350160_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::ReadBytes(System.Byte[],System.UInt32)
extern "C"  void NetBuffer_ReadBytes_m2074824748_0 (NetBuffer_t_996774408_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, uint32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::ReadChars(System.Char[],System.UInt32)
extern "C"  void NetBuffer_ReadChars_m_1269696148_0 (NetBuffer_t_996774408_0 * __this, CharU5BU5D_t_1225802637_0* ___buffer, uint32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetBuffer::AsArraySegment()
extern "C"  ArraySegment_1_t1163398599_0  NetBuffer_AsArraySegment_m376714016_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte(System.Byte)
extern "C"  void NetBuffer_WriteByte_m_1483867256_0 (NetBuffer_t_996774408_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte2(System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte2_m_1964167937_0 (NetBuffer_t_996774408_0 * __this, uint8_t ___value0, uint8_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte4(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte4_m1211271943_0 (NetBuffer_t_996774408_0 * __this, uint8_t ___value0, uint8_t ___value1, uint8_t ___value2, uint8_t ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte8(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte8_m1793487127_0 (NetBuffer_t_996774408_0 * __this, uint8_t ___value0, uint8_t ___value1, uint8_t ___value2, uint8_t ___value3, uint8_t ___value4, uint8_t ___value5, uint8_t ___value6, uint8_t ___value7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteBytesAtOffset(System.Byte[],System.UInt16,System.UInt16)
extern "C"  void NetBuffer_WriteBytesAtOffset_m1941197549_0 (NetBuffer_t_996774408_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, uint16_t ___targetOffset, uint16_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteBytes(System.Byte[],System.UInt16)
extern "C"  void NetBuffer_WriteBytes_m_709871099_0 (NetBuffer_t_996774408_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, uint16_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteCheckForSpace(System.UInt16)
extern "C"  void NetBuffer_WriteCheckForSpace_m_2029798008_0 (NetBuffer_t_996774408_0 * __this, uint16_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::FinishMessage()
extern "C"  void NetBuffer_FinishMessage_m420612528_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::SeekZero()
extern "C"  void NetBuffer_SeekZero_m_474632282_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::Replace(System.Byte[])
extern "C"  void NetBuffer_Replace_m_625428199_0 (NetBuffer_t_996774408_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetBuffer::ToString()
extern "C"  String_t* NetBuffer_ToString_m1860587189_0 (NetBuffer_t_996774408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
