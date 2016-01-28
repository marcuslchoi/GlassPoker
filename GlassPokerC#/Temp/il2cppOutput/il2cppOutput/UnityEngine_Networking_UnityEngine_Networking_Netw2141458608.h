#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t607439280_0;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t_504469255_0;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t1101405487_0;
// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct AnimationTriggerMessage_t_1335695875_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.String
struct String_t;

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo435842068.h"

// UnityEngine.Networking.NetworkAnimator
struct  NetworkAnimator_t2141458608_0  : public NetworkBehaviour_t435842068_0
{
	// UnityEngine.Animator UnityEngine.Networking.NetworkAnimator::m_Animator
	Animator_t607439280_0 * ___m_Animator_8;
	// System.UInt32 UnityEngine.Networking.NetworkAnimator::m_ParameterSendBits
	uint32_t ___m_ParameterSendBits_9;
	// System.Int32 UnityEngine.Networking.NetworkAnimator::m_AnimationHash
	int32_t ___m_AnimationHash_13;
	// System.Int32 UnityEngine.Networking.NetworkAnimator::m_TransitionHash
	int32_t ___m_TransitionHash_14;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkAnimator::m_ParameterWriter
	NetworkWriter_t_2144114564_0 * ___m_ParameterWriter_15;
	// System.Single UnityEngine.Networking.NetworkAnimator::m_SendTimer
	float ___m_SendTimer_16;
	// System.String UnityEngine.Networking.NetworkAnimator::param0
	String_t* ___param0_17;
	// System.String UnityEngine.Networking.NetworkAnimator::param1
	String_t* ___param1_18;
	// System.String UnityEngine.Networking.NetworkAnimator::param2
	String_t* ___param2_19;
	// System.String UnityEngine.Networking.NetworkAnimator::param3
	String_t* ___param3_20;
	// System.String UnityEngine.Networking.NetworkAnimator::param4
	String_t* ___param4_21;
	// System.String UnityEngine.Networking.NetworkAnimator::param5
	String_t* ___param5_22;
};
struct NetworkAnimator_t2141458608_0_StaticFields{
	// UnityEngine.Networking.NetworkSystem.AnimationMessage UnityEngine.Networking.NetworkAnimator::s_AnimationMessage
	AnimationMessage_t_504469255_0 * ___s_AnimationMessage_10;
	// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage UnityEngine.Networking.NetworkAnimator::s_AnimationParametersMessage
	AnimationParametersMessage_t1101405487_0 * ___s_AnimationParametersMessage_11;
	// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage UnityEngine.Networking.NetworkAnimator::s_AnimationTriggerMessage
	AnimationTriggerMessage_t_1335695875_0 * ___s_AnimationTriggerMessage_12;
};
