#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Mes_1858254221.h"

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct  PeerListMessage_t1959189233_0  : public MessageBase_t_1858254221_0
{
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkSystem.PeerListMessage::peers
	PeerInfoMessageU5BU5D_t1683934211_0* ___peers_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerListMessage::oldServerConnectionId
	int32_t ___oldServerConnectionId_1;
};
