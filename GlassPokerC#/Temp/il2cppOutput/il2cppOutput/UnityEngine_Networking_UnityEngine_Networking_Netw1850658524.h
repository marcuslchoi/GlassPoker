#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_Networking_UnityEngine_Networking_Mes_1858254221.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"

// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct  PeerAuthorityMessage_t1850658524_0  : public MessageBase_t_1858254221_0
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::connectionId
	int32_t ___connectionId_0;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::netId
	NetworkInstanceId_t1240163353_0  ___netId_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::authorityState
	bool ___authorityState_2;
};
