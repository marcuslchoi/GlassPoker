#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_t_199353830_0;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_t251156418_0;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2024600396_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1572714452.h"

// UnityEngine.Networking.LocalClient
struct  LocalClient_t_33198575_0  : public NetworkClient_t1572714452_0
{
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_t_199353830_0 * ___m_InternalMsgs_22;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_t_199353830_0 * ___m_InternalMsgs2_23;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_t251156418_0 * ___m_FreeMessages_24;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t2024600396_0 * ___m_LocalServer_25;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_26;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_t1603845406_0 * ___s_InternalMessage_27;
};
