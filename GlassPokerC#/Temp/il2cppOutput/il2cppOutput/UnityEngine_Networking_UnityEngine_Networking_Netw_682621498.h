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

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct  ReconnectMessage_t_682621498_0  : public MessageBase_t_1858254221_0
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::oldConnectionId
	int32_t ___oldConnectionId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.ReconnectMessage::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ReconnectMessage::netId
	NetworkInstanceId_t1240163353_0  ___netId_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgSize
	int32_t ___msgSize_3;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgData
	ByteU5BU5D_t_1238178395_0* ___msgData_4;
};
