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

// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;

#include "codegen/il2cpp-codegen.h"
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

// System.Void UnityEngine.Networking.NetworkReader::.ctor()
extern "C"  void NetworkReader__ctor_m747793098_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkReader__ctor_m717295404_0 (NetworkReader_t1995447500_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(System.Byte[])
extern "C"  void NetworkReader__ctor_m_1159402177_0 (NetworkReader_t1995447500_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Initialize()
extern "C"  void NetworkReader_Initialize_m1300175370_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
extern "C"  uint32_t NetworkReader_get_Position_m1564888967_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::SeekZero()
extern "C"  void NetworkReader_SeekZero_m1251930618_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Replace(System.Byte[])
extern "C"  void NetworkReader_Replace_m919412077_0 (NetworkReader_t1995447500_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
extern "C"  uint32_t NetworkReader_ReadPackedUInt32_m1171987132_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadPackedUInt64()
extern "C"  uint64_t NetworkReader_ReadPackedUInt64_m_1848110116_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
extern "C"  NetworkInstanceId_t1240163353_0  NetworkReader_ReadNetworkId_m1641462175_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
extern "C"  NetworkSceneId_t_1731400738_0  NetworkReader_ReadSceneId_m_1999048318_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
extern "C"  uint8_t NetworkReader_ReadByte_m_1221619708_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte UnityEngine.Networking.NetworkReader::ReadSByte()
extern "C"  int8_t NetworkReader_ReadSByte_m1541696690_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkReader::ReadInt16()
extern "C"  int16_t NetworkReader_ReadInt16_m1285805732_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
extern "C"  uint16_t NetworkReader_ReadUInt16_m_2052256156_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkReader::ReadInt32()
extern "C"  int32_t NetworkReader_ReadInt32_m_1708560872_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadUInt32()
extern "C"  uint32_t NetworkReader_ReadUInt32_m_390012508_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.NetworkReader::ReadInt64()
extern "C"  int64_t NetworkReader_ReadInt64_m_1429545642_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadUInt64()
extern "C"  uint64_t NetworkReader_ReadUInt64_m_333213820_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
extern "C"  float NetworkReader_ReadSingle_m_778139260_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Networking.NetworkReader::ReadDouble()
extern "C"  double NetworkReader_ReadDouble_m1994131620_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ReadString()
extern "C"  String_t* NetworkReader_ReadString_m2071466148_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Networking.NetworkReader::ReadChar()
extern "C"  uint16_t NetworkReader_ReadChar_m2081362500_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
extern "C"  bool NetworkReader_ReadBoolean_m_2139256884_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t_1238178395_0* NetworkReader_ReadBytes_m278866820_0 (NetworkReader_t1995447500_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
extern "C"  ByteU5BU5D_t_1238178395_0* NetworkReader_ReadBytesAndSize_m_207216793_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Networking.NetworkReader::ReadVector2()
extern "C"  Vector2_t_725341338_0  NetworkReader_ReadVector2_m1763066630_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
extern "C"  Vector3_t_725341337_0  NetworkReader_ReadVector3_m_162465720_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Networking.NetworkReader::ReadVector4()
extern "C"  Vector4_t_725341336_0  NetworkReader_ReadVector4_m_2087998070_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Networking.NetworkReader::ReadColor()
extern "C"  Color_t_388944582_0  NetworkReader_ReadColor_m2107280750_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Networking.NetworkReader::ReadColor32()
extern "C"  Color32_t_113586919_0  NetworkReader_ReadColor32_m_376602068_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
extern "C"  Quaternion_t1989680039_0  NetworkReader_ReadQuaternion_m879545712_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Networking.NetworkReader::ReadRect()
extern "C"  Rect_t_981940947_0  NetworkReader_ReadRect_m328648112_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane UnityEngine.Networking.NetworkReader::ReadPlane()
extern "C"  Plane_t_377038797_0  NetworkReader_ReadPlane_m1159231712_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Networking.NetworkReader::ReadRay()
extern "C"  Ray_t1215250369_0  NetworkReader_ReadRay_m394674300_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Networking.NetworkReader::ReadMatrix4x4()
extern "C"  Matrix4x4_t1577636070_0  NetworkReader_ReadMatrix4x4_m1243985222_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
extern "C"  NetworkHash128_t1346402176_0  NetworkReader_ReadNetworkHash128_m_1446504192_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkReader::ReadTransform()
extern "C"  Transform_t1584899523_0 * NetworkReader_ReadTransform_m277361664_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkReader::ReadGameObject()
extern "C"  GameObject_t_184308134_0 * NetworkReader_ReadGameObject_m_5071024_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkReader::ReadNetworkIdentity()
extern "C"  NetworkIdentity_t_1494067577_0 * NetworkReader_ReadNetworkIdentity_m605531056_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ToString()
extern "C"  String_t* NetworkReader_ToString_m534275977_0 (NetworkReader_t1995447500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
