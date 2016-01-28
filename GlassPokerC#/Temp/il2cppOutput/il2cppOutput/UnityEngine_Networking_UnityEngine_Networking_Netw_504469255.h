#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Mes_1858254221.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct  AnimationMessage_t_504469255_0  : public MessageBase_t_1858254221_0
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationMessage::netId
	NetworkInstanceId_t1240163353_0  ___netId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AnimationMessage::stateHash
	int32_t ___stateHash_1;
	// System.Single UnityEngine.Networking.NetworkSystem.AnimationMessage::normalizedTime
	float ___normalizedTime_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationMessage::parameters
	ByteU5BU5D_t_1238178395_0* ___parameters_3;
};
