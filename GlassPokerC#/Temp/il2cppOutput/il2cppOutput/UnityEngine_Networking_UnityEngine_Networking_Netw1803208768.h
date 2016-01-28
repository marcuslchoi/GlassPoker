#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t1123681262_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>
struct List_1_t1751035063_0;
// UnityEngine.Networking.NetworkLobbyPlayer[]
struct NetworkLobbyPlayerU5BU5D_t1820904400_0;
// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_t996000028_0;
// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t_407483521_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1484180676.h"

// UnityEngine.Networking.NetworkLobbyManager
struct  NetworkLobbyManager_t1803208768_0  : public NetworkManager_t1484180676_0
{
	// System.Boolean UnityEngine.Networking.NetworkLobbyManager::m_ShowLobbyGUI
	bool ___m_ShowLobbyGUI_47;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MaxPlayers
	int32_t ___m_MaxPlayers_48;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MaxPlayersPerConnection
	int32_t ___m_MaxPlayersPerConnection_49;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MinPlayers
	int32_t ___m_MinPlayers_50;
	// UnityEngine.Networking.NetworkLobbyPlayer UnityEngine.Networking.NetworkLobbyManager::m_LobbyPlayerPrefab
	NetworkLobbyPlayer_t1123681262_0 * ___m_LobbyPlayerPrefab_51;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::m_GamePlayerPrefab
	GameObject_t_184308134_0 * ___m_GamePlayerPrefab_52;
	// System.String UnityEngine.Networking.NetworkLobbyManager::m_LobbyScene
	String_t* ___m_LobbyScene_53;
	// System.String UnityEngine.Networking.NetworkLobbyManager::m_PlayScene
	String_t* ___m_PlayScene_54;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer> UnityEngine.Networking.NetworkLobbyManager::m_PendingPlayers
	List_1_t1751035063_0 * ___m_PendingPlayers_55;
	// UnityEngine.Networking.NetworkLobbyPlayer[] UnityEngine.Networking.NetworkLobbyManager::lobbySlots
	NetworkLobbyPlayerU5BU5D_t1820904400_0* ___lobbySlots_56;
};
struct NetworkLobbyManager_t1803208768_0_StaticFields{
	// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage UnityEngine.Networking.NetworkLobbyManager::s_ReadyToBeginMessage
	LobbyReadyToBeginMessage_t996000028_0 * ___s_ReadyToBeginMessage_57;
	// UnityEngine.Networking.NetworkSystem.IntegerMessage UnityEngine.Networking.NetworkLobbyManager::s_SceneLoadedMessage
	IntegerMessage_t_407483521_0 * ___s_SceneLoadedMessage_58;
	// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage UnityEngine.Networking.NetworkLobbyManager::s_LobbyReadyToBeginMessage
	LobbyReadyToBeginMessage_t996000028_0 * ___s_LobbyReadyToBeginMessage_59;
};
