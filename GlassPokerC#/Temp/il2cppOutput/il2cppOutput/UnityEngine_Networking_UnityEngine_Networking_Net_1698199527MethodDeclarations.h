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

// UnityEngine.Networking.NetworkTransformChild
struct NetworkTransformChild_t_1698199527_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t2007834814_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw_405882485.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1389798152.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void UnityEngine.Networking.NetworkTransformChild::.ctor()
extern "C"  void NetworkTransformChild__ctor_m853353245_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::get_target()
extern "C"  Transform_t1584899523_0 * NetworkTransformChild_get_target_m50533663_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_target(UnityEngine.Transform)
extern "C"  void NetworkTransformChild_set_target_m_1614240792_0 (NetworkTransformChild_t_1698199527_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkTransformChild::get_childIndex()
extern "C"  uint32_t NetworkTransformChild_get_childIndex_m_336238879_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_sendInterval()
extern "C"  float NetworkTransformChild_get_sendInterval_m1946748585_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_sendInterval(System.Single)
extern "C"  void NetworkTransformChild_set_sendInterval_m_2053685958_0 (NetworkTransformChild_t_1698199527_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::get_syncRotationAxis()
extern "C"  int32_t NetworkTransformChild_get_syncRotationAxis_m_1443020620_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransformChild_set_syncRotationAxis_m_1761988975_0 (NetworkTransformChild_t_1698199527_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransformChild_get_rotationSyncCompression_m1958729794_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransformChild_set_rotationSyncCompression_m_128708335_0 (NetworkTransformChild_t_1698199527_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_movementThreshold()
extern "C"  float NetworkTransformChild_get_movementThreshold_m_69342494_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_movementThreshold(System.Single)
extern "C"  void NetworkTransformChild_set_movementThreshold_m1332538737_0 (NetworkTransformChild_t_1698199527_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateRotation()
extern "C"  float NetworkTransformChild_get_interpolateRotation_m_720008187_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateRotation_m1462584110_0 (NetworkTransformChild_t_1698199527_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateMovement()
extern "C"  float NetworkTransformChild_get_interpolateMovement_m_1495862026_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateMovement_m_490755619_0 (NetworkTransformChild_t_1698199527_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t2007834814_0 * NetworkTransformChild_get_clientMoveCallback3D_m_994576711_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransformChild_set_clientMoveCallback3D_m_594276970_0 (NetworkTransformChild_t_1698199527_0 * __this, ClientMoveCallback3D_t2007834814_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_lastSyncTime()
extern "C"  float NetworkTransformChild_get_lastSyncTime_m_561495366_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::get_targetSyncPosition()
extern "C"  Vector3_t_725341337_0  NetworkTransformChild_get_targetSyncPosition_m_1872636673_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::get_targetSyncRotation3D()
extern "C"  Quaternion_t1989680039_0  NetworkTransformChild_get_targetSyncRotation3D_m_492443219_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnValidate()
extern "C"  void NetworkTransformChild_OnValidate_m187105500_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Awake()
extern "C"  void NetworkTransformChild_Awake_m1090958464_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransformChild_OnSerialize_m_704056083_0 (NetworkTransformChild_t_1698199527_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransformChild_SerializeModeTransform_m557368882_0 (NetworkTransformChild_t_1698199527_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_OnDeserialize_m2139720688_0 (NetworkTransformChild_t_1698199527_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_UnserializeModeTransform_m2065096866_0 (NetworkTransformChild_t_1698199527_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdate()
extern "C"  void NetworkTransformChild_FixedUpdate_m659912408_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateServer()
extern "C"  void NetworkTransformChild_FixedUpdateServer_m_148486085_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateClient()
extern "C"  void NetworkTransformChild_FixedUpdateClient_m_619181373_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Update()
extern "C"  void NetworkTransformChild_Update_m_1883958384_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::HasMoved()
extern "C"  bool NetworkTransformChild_HasMoved_m_404571954_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SendTransform()
extern "C"  void NetworkTransformChild_SendTransform_m_1250147841_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::HandleChildTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransformChild_HandleChildTransform_m2047562775_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransformChild::GetNetworkChannel()
extern "C"  int32_t NetworkTransformChild_GetNetworkChannel_m1174235006_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::GetNetworkSendInterval()
extern "C"  float NetworkTransformChild_GetNetworkSendInterval_m_320760488_0 (NetworkTransformChild_t_1698199527_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
