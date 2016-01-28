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
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t_430663014_0;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t1305823158_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType>
struct List_1_t_1188385898_0;
// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t1228815560_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t_851833179_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t629066769_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t341711844_0;
// UnityEngine.Networking.NetworkManager
struct NetworkManager_t1484180676_0;
// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t1380441051_0;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t_1751280916_0;
// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t1068699893_0;
// UnityEngine.AsyncOperation
struct AsyncOperation_t59089492_0;
struct AsyncOperation_t59089492_0_marshaled;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_Networking_UnityEngine_Networking_LogFil40381012.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play_681717418.h"

// UnityEngine.Networking.NetworkManager
struct  NetworkManager_t1484180676_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 UnityEngine.Networking.NetworkManager::m_NetworkPort
	int32_t ___m_NetworkPort_2;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_ServerBindToIP
	bool ___m_ServerBindToIP_3;
	// System.String UnityEngine.Networking.NetworkManager::m_ServerBindAddress
	String_t* ___m_ServerBindAddress_4;
	// System.String UnityEngine.Networking.NetworkManager::m_NetworkAddress
	String_t* ___m_NetworkAddress_5;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_DontDestroyOnLoad
	bool ___m_DontDestroyOnLoad_6;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_RunInBackground
	bool ___m_RunInBackground_7;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_ScriptCRCCheck
	bool ___m_ScriptCRCCheck_8;
	// System.Single UnityEngine.Networking.NetworkManager::m_MaxDelay
	float ___m_MaxDelay_9;
	// UnityEngine.Networking.LogFilter/FilterLevel UnityEngine.Networking.NetworkManager::m_LogLevel
	int32_t ___m_LogLevel_10;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkManager::m_PlayerPrefab
	GameObject_t_184308134_0 * ___m_PlayerPrefab_11;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_AutoCreatePlayer
	bool ___m_AutoCreatePlayer_12;
	// UnityEngine.Networking.PlayerSpawnMethod UnityEngine.Networking.NetworkManager::m_PlayerSpawnMethod
	int32_t ___m_PlayerSpawnMethod_13;
	// System.String UnityEngine.Networking.NetworkManager::m_OfflineScene
	String_t* ___m_OfflineScene_14;
	// System.String UnityEngine.Networking.NetworkManager::m_OnlineScene
	String_t* ___m_OnlineScene_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.Networking.NetworkManager::m_SpawnPrefabs
	List_1_t_430663014_0 * ___m_SpawnPrefabs_16;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_CustomConfig
	bool ___m_CustomConfig_17;
	// System.Int32 UnityEngine.Networking.NetworkManager::m_MaxConnections
	int32_t ___m_MaxConnections_18;
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.NetworkManager::m_ConnectionConfig
	ConnectionConfig_t461326897_0 * ___m_ConnectionConfig_19;
	// UnityEngine.Networking.GlobalConfig UnityEngine.Networking.NetworkManager::m_GlobalConfig
	GlobalConfig_t1305823158_0 * ___m_GlobalConfig_20;
	// System.Collections.Generic.List`1<UnityEngine.Networking.QosType> UnityEngine.Networking.NetworkManager::m_Channels
	List_1_t_1188385898_0 * ___m_Channels_21;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_UseWebSockets
	bool ___m_UseWebSockets_22;
	// System.Boolean UnityEngine.Networking.NetworkManager::m_UseSimulator
	bool ___m_UseSimulator_23;
	// System.Int32 UnityEngine.Networking.NetworkManager::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_24;
	// System.Single UnityEngine.Networking.NetworkManager::m_PacketLossPercentage
	float ___m_PacketLossPercentage_25;
	// System.String UnityEngine.Networking.NetworkManager::m_MatchHost
	String_t* ___m_MatchHost_26;
	// System.Int32 UnityEngine.Networking.NetworkManager::m_MatchPort
	int32_t ___m_MatchPort_27;
	// UnityEngine.Networking.NetworkMigrationManager UnityEngine.Networking.NetworkManager::m_MigrationManager
	NetworkMigrationManager_t1228815560_0 * ___m_MigrationManager_28;
	// System.Net.EndPoint UnityEngine.Networking.NetworkManager::m_EndPoint
	EndPoint_t_1941440085_0 * ___m_EndPoint_29;
	// System.Boolean UnityEngine.Networking.NetworkManager::isNetworkActive
	bool ___isNetworkActive_31;
	// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::client
	NetworkClient_t1572714452_0 * ___client_32;
	// UnityEngine.Networking.Match.MatchInfo UnityEngine.Networking.NetworkManager::matchInfo
	MatchInfo_t_629025159_0 * ___matchInfo_35;
	// UnityEngine.Networking.Match.NetworkMatch UnityEngine.Networking.NetworkManager::matchMaker
	NetworkMatch_t629066769_0 * ___matchMaker_36;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.NetworkManager::matches
	List_1_t341711844_0 * ___matches_37;
	// System.String UnityEngine.Networking.NetworkManager::matchName
	String_t* ___matchName_38;
	// System.UInt32 UnityEngine.Networking.NetworkManager::matchSize
	uint32_t ___matchSize_39;
};
struct NetworkManager_t1484180676_0_StaticFields{
	// System.String UnityEngine.Networking.NetworkManager::networkSceneName
	String_t* ___networkSceneName_30;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.Networking.NetworkManager::s_StartPositions
	List_1_t_851833179_0 * ___s_StartPositions_33;
	// System.Int32 UnityEngine.Networking.NetworkManager::s_StartPositionIndex
	int32_t ___s_StartPositionIndex_34;
	// UnityEngine.Networking.NetworkManager UnityEngine.Networking.NetworkManager::singleton
	NetworkManager_t1484180676_0 * ___singleton_40;
	// UnityEngine.Networking.NetworkSystem.AddPlayerMessage UnityEngine.Networking.NetworkManager::s_AddPlayerMessage
	AddPlayerMessage_t1380441051_0 * ___s_AddPlayerMessage_41;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkManager::s_RemovePlayerMessage
	RemovePlayerMessage_t_1751280916_0 * ___s_RemovePlayerMessage_42;
	// UnityEngine.Networking.NetworkSystem.ErrorMessage UnityEngine.Networking.NetworkManager::s_ErrorMessage
	ErrorMessage_t1068699893_0 * ___s_ErrorMessage_43;
	// UnityEngine.AsyncOperation UnityEngine.Networking.NetworkManager::s_LoadingSceneAsync
	AsyncOperation_t59089492_0 * ___s_LoadingSceneAsync_44;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkManager::s_ClientReadyConnection
	NetworkConnection_t_437512601_0 * ___s_ClientReadyConnection_45;
	// System.String UnityEngine.Networking.NetworkManager::s_Address
	String_t* ___s_Address_46;
};
