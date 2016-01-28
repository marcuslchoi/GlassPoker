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

// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen1163398599.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "UnityEngine_UnityEngine_Color32_113586919.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Plane_377038797.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C"  void NetworkWriter__ctor_m1431389466_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C"  void NetworkWriter__ctor_m_1444457233_0 (NetworkWriter_t_2144114564_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C"  int16_t NetworkWriter_get_Position_m357721918_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C"  ByteU5BU5D_t_1238178395_0* NetworkWriter_ToArray_m_1149187540_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C"  ByteU5BU5D_t_1238178395_0* NetworkWriter_AsArray_m1508982933_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C"  ArraySegment_1_t1163398599_0  NetworkWriter_AsArraySegment_m_297619676_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C"  void NetworkWriter_WritePackedUInt32_m_1920916718_0 (NetworkWriter_t_2144114564_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt64(System.UInt64)
extern "C"  void NetworkWriter_WritePackedUInt64_m1117946964_0 (NetworkWriter_t_2144114564_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkWriter_Write_m1399142972_0 (NetworkWriter_t_2144114564_0 * __this, NetworkInstanceId_t1240163353_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C"  void NetworkWriter_Write_m_295882625_0 (NetworkWriter_t_2144114564_0 * __this, NetworkSceneId_t_1731400738_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Char)
extern "C"  void NetworkWriter_Write_m_1204130778_0 (NetworkWriter_t_2144114564_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C"  void NetworkWriter_Write_m_1204529996_0 (NetworkWriter_t_2144114564_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.SByte)
extern "C"  void NetworkWriter_Write_m1750342971_0 (NetworkWriter_t_2144114564_0 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C"  void NetworkWriter_Write_m1504471586_0 (NetworkWriter_t_2144114564_0 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C"  void NetworkWriter_Write_m391260413_0 (NetworkWriter_t_2144114564_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C"  void NetworkWriter_Write_m1504473384_0 (NetworkWriter_t_2144114564_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C"  void NetworkWriter_Write_m391262211_0 (NetworkWriter_t_2144114564_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int64)
extern "C"  void NetworkWriter_Write_m1504476329_0 (NetworkWriter_t_2144114564_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt64)
extern "C"  void NetworkWriter_Write_m391265156_0 (NetworkWriter_t_2144114564_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C"  void NetworkWriter_Write_m_467943244_0 (NetworkWriter_t_2144114564_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Double)
extern "C"  void NetworkWriter_Write_m_717505973_0 (NetworkWriter_t_2144114564_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C"  void NetworkWriter_Write_m_149266933_0 (NetworkWriter_t_2144114564_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C"  void NetworkWriter_Write_m_121251954_0 (NetworkWriter_t_2144114564_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_Write_m_1618705595_0 (NetworkWriter_t_2144114564_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkWriter_Write_m85119410_0 (NetworkWriter_t_2144114564_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_WriteBytesAndSize_m_1394781070_0 (NetworkWriter_t_2144114564_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C"  void NetworkWriter_WriteBytesFull_m697201796_0 (NetworkWriter_t_2144114564_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C"  void NetworkWriter_Write_m710722563_0 (NetworkWriter_t_2144114564_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C"  void NetworkWriter_Write_m710722594_0 (NetworkWriter_t_2144114564_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector4)
extern "C"  void NetworkWriter_Write_m710722625_0 (NetworkWriter_t_2144114564_0 * __this, Vector4_t_725341336_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color)
extern "C"  void NetworkWriter_Write_m1441701039_0 (NetworkWriter_t_2144114564_0 * __this, Color_t_388944582_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color32)
extern "C"  void NetworkWriter_Write_m_1799726928_0 (NetworkWriter_t_2144114564_0 * __this, Color32_t_113586919_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C"  void NetworkWriter_Write_m_415054110_0 (NetworkWriter_t_2144114564_0 * __this, Quaternion_t1989680039_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Rect)
extern "C"  void NetworkWriter_Write_m_1879609828_0 (NetworkWriter_t_2144114564_0 * __this, Rect_t_981940947_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Plane)
extern "C"  void NetworkWriter_Write_m1810780374_0 (NetworkWriter_t_2144114564_0 * __this, Plane_t_377038797_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Ray)
extern "C"  void NetworkWriter_Write_m1463384840_0 (NetworkWriter_t_2144114564_0 * __this, Ray_t1215250369_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Matrix4x4)
extern "C"  void NetworkWriter_Write_m_1865011581_0 (NetworkWriter_t_2144114564_0 * __this, Matrix4x4_t1577636070_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkWriter_Write_m626727197_0 (NetworkWriter_t_2144114564_0 * __this, NetworkHash128_t1346402176_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkWriter_Write_m2069883022_0 (NetworkWriter_t_2144114564_0 * __this, NetworkIdentity_t_1494067577_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Transform)
extern "C"  void NetworkWriter_Write_m_1639844538_0 (NetworkWriter_t_2144114564_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.GameObject)
extern "C"  void NetworkWriter_Write_m910789263_0 (NetworkWriter_t_2144114564_0 * __this, GameObject_t_184308134_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.MessageBase)
extern "C"  void NetworkWriter_Write_m1309956130_0 (NetworkWriter_t_2144114564_0 * __this, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C"  void NetworkWriter_SeekZero_m_463587926_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C"  void NetworkWriter_StartMessage_m_296556614_0 (NetworkWriter_t_2144114564_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C"  void NetworkWriter_FinishMessage_m_241129940_0 (NetworkWriter_t_2144114564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
