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

// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct  OverrideTransformMessage_t_1322273283_0  : public MessageBase_t_1858254221_0
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::netId
	NetworkInstanceId_t1240163353_0  ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::payload
	ByteU5BU5D_t_1238178395_0* ___payload_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::teleport
	bool ___teleport_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::time
	int32_t ___time_3;
};
