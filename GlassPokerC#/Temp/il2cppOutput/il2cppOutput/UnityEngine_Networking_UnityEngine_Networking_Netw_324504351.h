#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t871667817_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Mes_1858254221.h"

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct  PeerInfoMessage_t_324504351_0  : public MessageBase_t_1858254221_0
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::connectionId
	int32_t ___connectionId_0;
	// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::address
	String_t* ___address_1;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::port
	int32_t ___port_2;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isHost
	bool ___isHost_3;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isYou
	bool ___isYou_4;
	// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[] UnityEngine.Networking.NetworkSystem.PeerInfoMessage::playerIds
	PeerInfoPlayerU5BU5D_t871667817_0* ___playerIds_5;
};
