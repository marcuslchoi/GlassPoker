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

// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t1894858435_0;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t2007834814_0;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t2007834783_0;
// UnityEngine.CharacterController
struct CharacterController_t_902802116_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t816092662_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1663721986.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw_405882485.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1389798152.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// System.Void UnityEngine.Networking.NetworkTransform::.ctor()
extern "C"  void NetworkTransform__ctor_m_1355411795_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::get_transformSyncMode()
extern "C"  int32_t NetworkTransform_get_transformSyncMode_m539447075_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_transformSyncMode(UnityEngine.Networking.NetworkTransform/TransformSyncMode)
extern "C"  void NetworkTransform_set_transformSyncMode_m_83689122_0 (NetworkTransform_t1894858435_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_sendInterval()
extern "C"  float NetworkTransform_get_sendInterval_m_373589631_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_sendInterval(System.Single)
extern "C"  void NetworkTransform_set_sendInterval_m734689482_0 (NetworkTransform_t1894858435_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::get_syncRotationAxis()
extern "C"  int32_t NetworkTransform_get_syncRotationAxis_m_277536944_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransform_set_syncRotationAxis_m1345018113_0 (NetworkTransform_t1894858435_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransform_get_rotationSyncCompression_m_1458138580_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_set_rotationSyncCompression_m_1758316671_0 (NetworkTransform_t1894858435_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_syncSpin()
extern "C"  bool NetworkTransform_get_syncSpin_m_1957755761_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncSpin(System.Boolean)
extern "C"  void NetworkTransform_set_syncSpin_m_131910456_0 (NetworkTransform_t1894858435_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_movementTheshold()
extern "C"  float NetworkTransform_get_movementTheshold_m_392271228_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_movementTheshold(System.Single)
extern "C"  void NetworkTransform_set_movementTheshold_m_1646459737_0 (NetworkTransform_t1894858435_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_snapThreshold()
extern "C"  float NetworkTransform_get_snapThreshold_m528936847_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_snapThreshold(System.Single)
extern "C"  void NetworkTransform_set_snapThreshold_m_1459668100_0 (NetworkTransform_t1894858435_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateRotation()
extern "C"  float NetworkTransform_get_interpolateRotation_m_551766483_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransform_set_interpolateRotation_m899343774_0 (NetworkTransform_t1894858435_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateMovement()
extern "C"  float NetworkTransform_get_interpolateMovement_m_1327620322_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransform_set_interpolateMovement_m_1053995955_0 (NetworkTransform_t1894858435_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t2007834814_0 * NetworkTransform_get_clientMoveCallback3D_m165841627_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransform_set_clientMoveCallback3D_m749277190_0 (NetworkTransform_t1894858435_0 * __this, ClientMoveCallback3D_t2007834814_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback2D()
extern "C"  ClientMoveCallback2D_t2007834783_0 * NetworkTransform_get_clientMoveCallback2D_m_788417059_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback2D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D)
extern "C"  void NetworkTransform_set_clientMoveCallback2D_m_1371010970_0 (NetworkTransform_t1894858435_0 * __this, ClientMoveCallback2D_t2007834783_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::get_characterContoller()
extern "C"  CharacterController_t_902802116_0 * NetworkTransform_get_characterContoller_m2043444668_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C"  Rigidbody_t_1022613340_0 * NetworkTransform_get_rigidbody3D_m496229341_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C"  Rigidbody2D_t816092662_0 * NetworkTransform_get_rigidbody2D_m_1558615060_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C"  float NetworkTransform_get_lastSyncTime_m1413133714_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C"  Vector3_t_725341337_0  NetworkTransform_get_targetSyncPosition_m2132060475_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C"  Vector3_t_725341337_0  NetworkTransform_get_targetSyncVelocity_m_1218564113_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C"  Quaternion_t1989680039_0  NetworkTransform_get_targetSyncRotation3D_m92246425_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C"  float NetworkTransform_get_targetSyncRotation2D_m1266579856_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_grounded()
extern "C"  bool NetworkTransform_get_grounded_m1467469112_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_grounded(System.Boolean)
extern "C"  void NetworkTransform_set_grounded_m455549361_0 (NetworkTransform_t1894858435_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnValidate()
extern "C"  void NetworkTransform_OnValidate_m2120404812_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Awake()
extern "C"  void NetworkTransform_Awake_m_1117806576_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartServer()
extern "C"  void NetworkTransform_OnStartServer_m990969649_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransform_OnSerialize_m_39255807_0 (NetworkTransform_t1894858435_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeTransform_m_1735134046_0 (NetworkTransform_t1894858435_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode3D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode3D_m729474689_0 (NetworkTransform_t1894858435_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeCharacterController(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeCharacterController_m_207264165_0 (NetworkTransform_t1894858435_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode2D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode2D_m_732105310_0 (NetworkTransform_t1894858435_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_OnDeserialize_m1241785952_0 (NetworkTransform_t1894858435_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeTransform_m2073059378_0 (NetworkTransform_t1894858435_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode3D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode3D_m2031868869_0 (NetworkTransform_t1894858435_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode2D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode2D_m1338476164_0 (NetworkTransform_t1894858435_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeCharacterController(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeCharacterController_m_702318439_0 (NetworkTransform_t1894858435_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdate()
extern "C"  void NetworkTransform_FixedUpdate_m462648936_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateServer()
extern "C"  void NetworkTransform_FixedUpdateServer_m539646923_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateClient()
extern "C"  void NetworkTransform_FixedUpdateClient_m68951635_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode3D()
extern "C"  void NetworkTransform_InterpolateTransformMode3D_m92504918_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformModeCharacterController()
extern "C"  void NetworkTransform_InterpolateTransformModeCharacterController_m_1254467678_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode2D()
extern "C"  void NetworkTransform_InterpolateTransformMode2D_m92475127_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Update()
extern "C"  void NetworkTransform_Update_m_1636197888_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::HasMoved()
extern "C"  bool NetworkTransform_HasMoved_m_312189982_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SendTransform()
extern "C"  void NetworkTransform_SendTransform_m_1841783409_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::HandleTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransform_HandleTransform_m_310219737_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::WriteAngle(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_WriteAngle_m_538268472_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, float ___angle, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::ReadAngle(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_ReadAngle_m_186318180_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity3D_m_1502657564_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, Vector3_t_725341337_0  ___velocity, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity2D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector2,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity2D_m_1295976090_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, Vector2_t_725341338_0  ___velocity, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Quaternion,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation3D_m_1466534150_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, Quaternion_t1989680039_0  ___rot, int32_t ___mode, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation2D_m_1875080008_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, float ___rot, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin3D_m798199548_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, Vector3_t_725341337_0  ___angularVelocity, int32_t ___mode, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin2D_m_268627588_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, float ___angularVelocity, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t_725341337_0  NetworkTransform_UnserializeVelocity3D_m1412416770_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t_725341337_0  NetworkTransform_UnserializeVelocity2D_m_1683815261_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::UnserializeRotation3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Quaternion_t1989680039_0  NetworkTransform_UnserializeRotation3D_m1705877562_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___mode, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeRotation2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeRotation2D_m711868502_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeSpin3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t_725341337_0  NetworkTransform_UnserializeSpin3D_m1313347486_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___mode, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeSpin2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeSpin2D_m92269978_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, int32_t ___compression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransform::GetNetworkChannel()
extern "C"  int32_t NetworkTransform_GetNetworkChannel_m1865413086_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::GetNetworkSendInterval()
extern "C"  float NetworkTransform_GetNetworkSendInterval_m_38238672_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartAuthority()
extern "C"  void NetworkTransform_OnStartAuthority_m_94241609_0 (NetworkTransform_t1894858435_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
