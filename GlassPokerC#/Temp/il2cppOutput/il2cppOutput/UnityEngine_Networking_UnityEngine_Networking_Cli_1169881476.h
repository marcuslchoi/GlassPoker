#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t139052538_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t978308258_0;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t_488951965_0;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t1885152673_0;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t_566896209_0;
// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t1276833250_0;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t2070618241_0;
// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t_649532950_0;
// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t1042428357_0;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.ClientScene/PendingOwner>
struct List_1_t_303076179_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.ClientScene
struct  ClientScene_t_1169881476_0  : public Object_t
{
};
struct ClientScene_t_1169881476_0_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.ClientScene::s_LocalPlayers
	List_1_t139052538_0 * ___s_LocalPlayers_2;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::s_ReadyConnection
	NetworkConnection_t_437512601_0 * ___s_ReadyConnection_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::s_SpawnableObjects
	Dictionary_2_t978308258_0 * ___s_SpawnableObjects_4;
	// System.Boolean UnityEngine.Networking.ClientScene::s_IsReady
	bool ___s_IsReady_5;
	// System.Boolean UnityEngine.Networking.ClientScene::s_IsSpawnFinished
	bool ___s_IsSpawnFinished_6;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.ClientScene::s_NetworkScene
	NetworkScene_t_488951965_0 * ___s_NetworkScene_7;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnSceneMessage
	ObjectSpawnSceneMessage_t1885152673_0 * ___s_ObjectSpawnSceneMessage_8;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnFinishedMessage
	ObjectSpawnFinishedMessage_t_566896209_0 * ___s_ObjectSpawnFinishedMessage_9;
	// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage UnityEngine.Networking.ClientScene::s_ObjectDestroyMessage
	ObjectDestroyMessage_t1276833250_0 * ___s_ObjectDestroyMessage_10;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnMessage
	ObjectSpawnMessage_t2070618241_0 * ___s_ObjectSpawnMessage_11;
	// UnityEngine.Networking.NetworkSystem.OwnerMessage UnityEngine.Networking.ClientScene::s_OwnerMessage
	OwnerMessage_t_649532950_0 * ___s_OwnerMessage_12;
	// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage UnityEngine.Networking.ClientScene::s_ClientAuthorityMessage
	ClientAuthorityMessage_t1042428357_0 * ___s_ClientAuthorityMessage_13;
	// System.Int32 UnityEngine.Networking.ClientScene::s_ReconnectId
	int32_t ___s_ReconnectId_14;
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.ClientScene::s_Peers
	PeerInfoMessageU5BU5D_t1683934211_0* ___s_Peers_15;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ClientScene/PendingOwner> UnityEngine.Networking.ClientScene::s_PendingOwnerIds
	List_1_t_303076179_0 * ___s_PendingOwnerIds_16;
};
