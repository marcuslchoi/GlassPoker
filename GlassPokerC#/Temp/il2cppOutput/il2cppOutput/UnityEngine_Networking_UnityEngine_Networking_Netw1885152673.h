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
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct  ObjectSpawnSceneMessage_t1885152673_0  : public MessageBase_t_1858254221_0
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::netId
	NetworkInstanceId_t1240163353_0  ___netId_0;
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::sceneId
	NetworkSceneId_t_1731400738_0  ___sceneId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::position
	Vector3_t_725341337_0  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::payload
	ByteU5BU5D_t_1238178395_0* ___payload_3;
};
