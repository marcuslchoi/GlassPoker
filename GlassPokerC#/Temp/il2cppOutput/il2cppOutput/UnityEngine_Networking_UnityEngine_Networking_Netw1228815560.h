#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t_324504351_0;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t1959189233_0;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct Dictionary_2_t_1298951910_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UnityEngine.Networking.NetworkMigrationManager
struct  NetworkMigrationManager_t1228815560_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_HostMigration
	bool ___m_HostMigration_2;
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_ShowGUI
	bool ___m_ShowGUI_3;
	// System.Int32 UnityEngine.Networking.NetworkMigrationManager::m_OffsetX
	int32_t ___m_OffsetX_4;
	// System.Int32 UnityEngine.Networking.NetworkMigrationManager::m_OffsetY
	int32_t ___m_OffsetY_5;
	// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkMigrationManager::m_Client
	NetworkClient_t1572714452_0 * ___m_Client_6;
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_WaitingToBecomeNewHost
	bool ___m_WaitingToBecomeNewHost_7;
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_WaitingReconnectToNewHost
	bool ___m_WaitingReconnectToNewHost_8;
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_DisconnectedFromHost
	bool ___m_DisconnectedFromHost_9;
	// System.Boolean UnityEngine.Networking.NetworkMigrationManager::m_HostWasShutdown
	bool ___m_HostWasShutdown_10;
	// UnityEngine.Networking.Match.MatchInfo UnityEngine.Networking.NetworkMigrationManager::m_MatchInfo
	MatchInfo_t_629025159_0 * ___m_MatchInfo_11;
	// System.Int32 UnityEngine.Networking.NetworkMigrationManager::m_OldServerConnectionId
	int32_t ___m_OldServerConnectionId_12;
	// System.String UnityEngine.Networking.NetworkMigrationManager::m_NewHostAddress
	String_t* ___m_NewHostAddress_13;
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage UnityEngine.Networking.NetworkMigrationManager::m_NewHostInfo
	PeerInfoMessage_t_324504351_0 * ___m_NewHostInfo_14;
	// UnityEngine.Networking.NetworkSystem.PeerListMessage UnityEngine.Networking.NetworkMigrationManager::m_PeerListMessage
	PeerListMessage_t1959189233_0 * ___m_PeerListMessage_15;
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkMigrationManager::m_Peers
	PeerInfoMessageU5BU5D_t1683934211_0* ___m_Peers_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers> UnityEngine.Networking.NetworkMigrationManager::m_PendingPlayers
	Dictionary_2_t_1298951910_0 * ___m_PendingPlayers_17;
};
