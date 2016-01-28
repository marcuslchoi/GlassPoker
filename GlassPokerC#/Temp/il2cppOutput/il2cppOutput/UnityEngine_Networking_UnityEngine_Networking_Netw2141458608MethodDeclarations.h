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

// UnityEngine.Networking.NetworkAnimator
struct NetworkAnimator_t2141458608_0;
// UnityEngine.Animator
struct Animator_t607439280_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t_504469255_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t1101405487_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkAnimator::.ctor()
extern "C"  void NetworkAnimator__ctor_m30965414_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::.cctor()
extern "C"  void NetworkAnimator__cctor_m477831623_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.Networking.NetworkAnimator::get_animator()
extern "C"  Animator_t607439280_0 * NetworkAnimator_get_animator_m1200642663_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::set_animator(UnityEngine.Animator)
extern "C"  void NetworkAnimator_set_animator_m_1675837948_0 (NetworkAnimator_t2141458608_0 * __this, Animator_t607439280_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetParameterAutoSend(System.Int32,System.Boolean)
extern "C"  void NetworkAnimator_SetParameterAutoSend_m_406343728_0 (NetworkAnimator_t2141458608_0 * __this, int32_t ___index, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::GetParameterAutoSend(System.Int32)
extern "C"  bool NetworkAnimator_GetParameterAutoSend_m1590777447_0 (NetworkAnimator_t2141458608_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ResetParameterOptions()
extern "C"  void NetworkAnimator_ResetParameterOptions_m1119654632_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::InitializeAuthority()
extern "C"  void NetworkAnimator_InitializeAuthority_m1089378135_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnStartServer()
extern "C"  void NetworkAnimator_OnStartServer_m_1369151958_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnStartLocalPlayer()
extern "C"  void NetworkAnimator_OnStartLocalPlayer_m_1081322169_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::FixedUpdate()
extern "C"  void NetworkAnimator_FixedUpdate_m_1269413983_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&)
extern "C"  bool NetworkAnimator_CheckAnimStateChanged_m1946003198_0 (NetworkAnimator_t2141458608_0 * __this, int32_t* ___stateHash, float* ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::CheckSendRate()
extern "C"  void NetworkAnimator_CheckSendRate_m_2089282956_0 (NetworkAnimator_t2141458608_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetSendTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetSendTrackingParam_m2009561759_0 (NetworkAnimator_t2141458608_0 * __this, String_t* ___p, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetRecvTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetRecvTrackingParam_m_2005618175_0 (NetworkAnimator_t2141458608_0 * __this, String_t* ___p, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimMsg(UnityEngine.Networking.NetworkSystem.AnimationMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimMsg_m_997944087_0 (NetworkAnimator_t2141458608_0 * __this, AnimationMessage_t_504469255_0 * ___msg, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimParamsMsg(UnityEngine.Networking.NetworkSystem.AnimationParametersMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimParamsMsg_m873400569_0 (NetworkAnimator_t2141458608_0 * __this, AnimationParametersMessage_t1101405487_0 * ___msg, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimTriggerMsg(System.Int32)
extern "C"  void NetworkAnimator_HandleAnimTriggerMsg_m20741265_0 (NetworkAnimator_t2141458608_0 * __this, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::WriteParameters(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void NetworkAnimator_WriteParameters_m_1411646514_0 (NetworkAnimator_t2141458608_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___autoSend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ReadParameters(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_ReadParameters_m_1028330579_0 (NetworkAnimator_t2141458608_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___autoSend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkAnimator_OnSerialize_m_1823503356_0 (NetworkAnimator_t2141458608_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___forceAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_OnDeserialize_m_385800505_0 (NetworkAnimator_t2141458608_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.String)
extern "C"  void NetworkAnimator_SetTrigger_m1619652078_0 (NetworkAnimator_t2141458608_0 * __this, String_t* ___triggerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.Int32)
extern "C"  void NetworkAnimator_SetTrigger_m_1209411355_0 (NetworkAnimator_t2141458608_0 * __this, int32_t ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationServerMessage_m_2100400935_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersServerMessage_m_1772484637_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerServerMessage_m_411935199_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationClientMessage_m_99843231_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersClientMessage_m228073067_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerClientMessage_m1588622505_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
