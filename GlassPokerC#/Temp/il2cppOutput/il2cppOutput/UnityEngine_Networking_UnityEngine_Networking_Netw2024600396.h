#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile)
struct NetworkServer_t2024600396_0;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2007138745_0;
// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t514828959_0;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t_488951965_0;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t_717251577_0;
// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t364354715_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t956281371_0;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t_1751280916_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.NetworkServer
struct  NetworkServer_t2024600396_0  : public Object_t
{
	// System.Boolean UnityEngine.Networking.NetworkServer::m_LocalClientActive
	bool ___m_LocalClientActive_5;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::m_LocalConnectionsFakeList
	List_1_t2007138745_0 * ___m_LocalConnectionsFakeList_6;
	// UnityEngine.Networking.ULocalConnectionToClient UnityEngine.Networking.NetworkServer::m_LocalConnection
	ULocalConnectionToClient_t514828959_0 * ___m_LocalConnection_7;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.NetworkServer::m_NetworkScene
	NetworkScene_t_488951965_0 * ___m_NetworkScene_8;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkServer::m_ExternalConnections
	HashSet_1_t_717251577_0 * ___m_ExternalConnections_9;
	// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper UnityEngine.Networking.NetworkServer::m_SimpleServerSimple
	ServerSimpleWrapper_t364354715_0 * ___m_SimpleServerSimple_10;
	// System.Single UnityEngine.Networking.NetworkServer::m_MaxDelay
	float ___m_MaxDelay_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkServer::m_RemoveList
	HashSet_1_t956281371_0 * ___m_RemoveList_12;
	// System.Int32 UnityEngine.Networking.NetworkServer::m_RemoveListCount
	int32_t ___m_RemoveListCount_13;
};
struct NetworkServer_t2024600396_0_StaticFields{
	// System.Boolean UnityEngine.Networking.NetworkServer::s_Active
	bool ___s_Active_1;
	// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Networking.NetworkServer::s_Instance
	NetworkServer_t2024600396_0 * ___s_Instance_2;
	// System.Object UnityEngine.Networking.NetworkServer::s_Sync
	Object_t * ___s_Sync_3;
	// System.Boolean UnityEngine.Networking.NetworkServer::m_DontListen
	bool ___m_DontListen_4;
	// System.UInt16 UnityEngine.Networking.NetworkServer::maxPacketSize
	uint16_t ___maxPacketSize_14;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkServer::s_RemovePlayerMessage
	RemovePlayerMessage_t_1751280916_0 * ___s_RemovePlayerMessage_15;
};
