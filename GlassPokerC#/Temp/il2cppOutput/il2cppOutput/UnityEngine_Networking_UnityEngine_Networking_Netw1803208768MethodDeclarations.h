#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.NetworkLobbyManager
struct NetworkLobbyManager_t1803208768_0;
// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t1123681262_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkLobbyManager::.ctor()
extern "C"  void NetworkLobbyManager__ctor_m_1335056490_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::.cctor()
extern "C"  void NetworkLobbyManager__cctor_m1080825559_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::get_showLobbyGUI()
extern "C"  bool NetworkLobbyManager_get_showLobbyGUI_m_2076073145_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_showLobbyGUI(System.Boolean)
extern "C"  void NetworkLobbyManager_set_showLobbyGUI_m2082122404_0 (NetworkLobbyManager_t1803208768_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayers()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayers_m_885365523_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayers_m79347530_0 (NetworkLobbyManager_t1803208768_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_maxPlayersPerConnection()
extern "C"  int32_t NetworkLobbyManager_get_maxPlayersPerConnection_m757341584_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_maxPlayersPerConnection(System.Int32)
extern "C"  void NetworkLobbyManager_set_maxPlayersPerConnection_m1781833173_0 (NetworkLobbyManager_t1803208768_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::get_minPlayers()
extern "C"  int32_t NetworkLobbyManager_get_minPlayers_m_410939457_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_minPlayers(System.Int32)
extern "C"  void NetworkLobbyManager_set_minPlayers_m353255196_0 (NetworkLobbyManager_t1803208768_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkLobbyPlayer UnityEngine.Networking.NetworkLobbyManager::get_lobbyPlayerPrefab()
extern "C"  NetworkLobbyPlayer_t1123681262_0 * NetworkLobbyManager_get_lobbyPlayerPrefab_m_1366266561_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyPlayerPrefab(UnityEngine.Networking.NetworkLobbyPlayer)
extern "C"  void NetworkLobbyManager_set_lobbyPlayerPrefab_m742630836_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkLobbyPlayer_t1123681262_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::get_gamePlayerPrefab()
extern "C"  GameObject_t_184308134_0 * NetworkLobbyManager_get_gamePlayerPrefab_m1419685885_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_gamePlayerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_set_gamePlayerPrefab_m_2043272998_0 (NetworkLobbyManager_t1803208768_0 * __this, GameObject_t_184308134_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_lobbyScene()
extern "C"  String_t* NetworkLobbyManager_get_lobbyScene_m_535579504_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_lobbyScene(System.String)
extern "C"  void NetworkLobbyManager_set_lobbyScene_m_1165752191_0 (NetworkLobbyManager_t1803208768_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkLobbyManager::get_playScene()
extern "C"  String_t* NetworkLobbyManager_get_playScene_m_1729196320_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::set_playScene(System.String)
extern "C"  void NetworkLobbyManager_set_playScene_m897305139_0 (NetworkLobbyManager_t1803208768_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnValidate()
extern "C"  void NetworkLobbyManager_OnValidate_m_1121689597_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyManager::FindSlot()
extern "C"  uint8_t NetworkLobbyManager_FindSlot_m3076113_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::SceneLoadedForPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject)
extern "C"  void NetworkLobbyManager_SceneLoadedForPlayer_m275332960_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___lobbyPlayerGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkLobbyManager::CheckConnectionIsReadyToBegin(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t NetworkLobbyManager_CheckConnectionIsReadyToBegin_m171879710_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CheckReadyToBegin()
extern "C"  void NetworkLobbyManager_CheckReadyToBegin_m580260967_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerReturnToLobby()
extern "C"  void NetworkLobbyManager_ServerReturnToLobby_m1407590844_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientEnterLobby()
extern "C"  void NetworkLobbyManager_CallOnClientEnterLobby_m1793153332_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::CallOnClientExitLobby()
extern "C"  void NetworkLobbyManager_CallOnClientExitLobby_m1129254372_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::SendReturnToLobby()
extern "C"  bool NetworkLobbyManager_SendReturnToLobby_m498238601_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerConnect_m889351635_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnServerDisconnect_m2081534787_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnServerAddPlayer_m1742695974_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkLobbyManager_OnServerRemovePlayer_m1305676728_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, PlayerController_t1101131586_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::ServerChangeScene(System.String)
extern "C"  void NetworkLobbyManager_ServerChangeScene_m_914770251_0 (NetworkLobbyManager_t1803208768_0 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnServerSceneChanged_m1837036522_0 (NetworkLobbyManager_t1803208768_0 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReadyToBeginMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReadyToBeginMessage_m_807974488_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerSceneLoadedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerSceneLoadedMessage_m125351184_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnServerReturnToLobbyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnServerReturnToLobbyMessage_m2081116778_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartServer()
extern "C"  void NetworkLobbyManager_OnStartServer_m980983578_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartHost()
extern "C"  void NetworkLobbyManager_OnStartHost_m_1247654465_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopHost()
extern "C"  void NetworkLobbyManager_OnStopHost_m1548274359_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnStartClient_m_340781652_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkClient_t1572714452_0 * ___lobbyClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientConnect_m_1757255093_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientDisconnect_m_264846389_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnStopClient()
extern "C"  void NetworkLobbyManager_OnStopClient_m_1251639142_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnClientSceneChanged_m1360631543_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientReadyToBegin(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientReadyToBegin_m_1461877261_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnClientAddPlayerFailedMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkLobbyManager_OnClientAddPlayerFailedMessage_m_2088707434_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartHost()
extern "C"  void NetworkLobbyManager_OnLobbyStartHost_m1020635233_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopHost()
extern "C"  void NetworkLobbyManager_OnLobbyStopHost_m97424341_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartServer()
extern "C"  void NetworkLobbyManager_OnLobbyStartServer_m_1036003012_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerConnect_m1506925941_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyServerDisconnect_m597788769_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneChanged(System.String)
extern "C"  void NetworkLobbyManager_OnLobbyServerSceneChanged_m_1615476468_0 (NetworkLobbyManager_t1803208768_0 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateLobbyPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t_184308134_0 * NetworkLobbyManager_OnLobbyServerCreateLobbyPlayer_m1182724572_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerCreateGamePlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  GameObject_t_184308134_0 * NetworkLobbyManager_OnLobbyServerCreateGamePlayer_m1298728140_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayerRemoved(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayerRemoved_m_1186463801_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerSceneLoadedForPlayer(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkLobbyManager_OnLobbyServerSceneLoadedForPlayer_m_1504903059_0 (NetworkLobbyManager_t1803208768_0 * __this, GameObject_t_184308134_0 * ___lobbyPlayer, GameObject_t_184308134_0 * ___gamePlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyServerPlayersReady()
extern "C"  void NetworkLobbyManager_OnLobbyServerPlayersReady_m786221567_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientEnter()
extern "C"  void NetworkLobbyManager_OnLobbyClientEnter_m581063364_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientExit()
extern "C"  void NetworkLobbyManager_OnLobbyClientExit_m_1219262380_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientConnect_m_1139680787_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientDisconnect_m_1748592407_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkLobbyManager_OnLobbyStartClient_m_30644530_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkClient_t1572714452_0 * ___lobbyClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyStopClient()
extern "C"  void NetworkLobbyManager_OnLobbyStopClient_m345864760_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkLobbyManager_OnLobbyClientSceneChanged_m1409850517_0 (NetworkLobbyManager_t1803208768_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnLobbyClientAddPlayerFailed()
extern "C"  void NetworkLobbyManager_OnLobbyClientAddPlayerFailed_m62772779_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::OnGUI()
extern "C"  void NetworkLobbyManager_OnGUI_m_1839657840_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyManager::TryToAddPlayer()
extern "C"  void NetworkLobbyManager_TryToAddPlayer_m884190618_0 (NetworkLobbyManager_t1803208768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
