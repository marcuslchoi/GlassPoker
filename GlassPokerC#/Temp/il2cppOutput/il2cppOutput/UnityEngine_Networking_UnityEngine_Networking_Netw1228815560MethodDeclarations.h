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

// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t1228815560_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>
struct Dictionary_2_t_1298951910_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t1959189233_0;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t_324504351_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1658281290.h"

// System.Void UnityEngine.Networking.NetworkMigrationManager::.ctor()
extern "C"  void NetworkMigrationManager__ctor_m435808910_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AddPendingPlayer(UnityEngine.GameObject,System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  void NetworkMigrationManager_AddPendingPlayer_m343460376_0 (NetworkMigrationManager_t1228815560_0 * __this, GameObject_t_184308134_0 * ___obj, int32_t ___connectionId, NetworkInstanceId_t1240163353_0  ___netId, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkMigrationManager::FindPendingPlayer(System.Int32,UnityEngine.Networking.NetworkInstanceId,System.Int16)
extern "C"  GameObject_t_184308134_0 * NetworkMigrationManager_FindPendingPlayer_m291414195_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___connectionId, NetworkInstanceId_t1240163353_0  ___netId, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::RemovePendingPlayer(System.Int32)
extern "C"  void NetworkMigrationManager_RemovePendingPlayer_m_1716682255_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostMigration()
extern "C"  bool NetworkMigrationManager_get_hostMigration_m1606637019_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_hostMigration(System.Boolean)
extern "C"  void NetworkMigrationManager_set_hostMigration_m250307500_0 (NetworkMigrationManager_t1228815560_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_showGUI()
extern "C"  bool NetworkMigrationManager_get_showGUI_m1802275027_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_showGUI(System.Boolean)
extern "C"  void NetworkMigrationManager_set_showGUI_m_447659996_0 (NetworkMigrationManager_t1228815560_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetX()
extern "C"  int32_t NetworkMigrationManager_get_offsetX_m4025312_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetX(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetX_m_1283086299_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_offsetY()
extern "C"  int32_t NetworkMigrationManager_get_offsetY_m4026273_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_offsetY(System.Int32)
extern "C"  void NetworkMigrationManager_set_offsetY_m224465510_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkMigrationManager::get_client()
extern "C"  NetworkClient_t1572714452_0 * NetworkMigrationManager_get_client_m_319352821_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingToBecomeNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingToBecomeNewHost_m574393542_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingToBecomeNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingToBecomeNewHost_m_1595692701_0 (NetworkMigrationManager_t1228815560_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_waitingReconnectToNewHost()
extern "C"  bool NetworkMigrationManager_get_waitingReconnectToNewHost_m_880960104_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_waitingReconnectToNewHost(System.Boolean)
extern "C"  void NetworkMigrationManager_set_waitingReconnectToNewHost_m_625457751_0 (NetworkMigrationManager_t1228815560_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_disconnectedFromHost()
extern "C"  bool NetworkMigrationManager_get_disconnectedFromHost_m707371962_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::get_hostWasShutdown()
extern "C"  bool NetworkMigrationManager_get_hostWasShutdown_m_1631810772_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Match.MatchInfo UnityEngine.Networking.NetworkMigrationManager::get_matchInfo()
extern "C"  MatchInfo_t_629025159_0 * NetworkMigrationManager_get_matchInfo_m_1754998106_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkMigrationManager::get_oldServerConnectionId()
extern "C"  int32_t NetworkMigrationManager_get_oldServerConnectionId_m447188670_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkMigrationManager::get_newHostAddress()
extern "C"  String_t* NetworkMigrationManager_get_newHostAddress_m1788883502_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::set_newHostAddress(System.String)
extern "C"  void NetworkMigrationManager_set_newHostAddress_m647660195_0 (NetworkMigrationManager_t1228815560_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkMigrationManager::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t1683934211_0* NetworkMigrationManager_get_peers_m_727277086_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers> UnityEngine.Networking.NetworkMigrationManager::get_pendingPlayers()
extern "C"  Dictionary_2_t_1298951910_0 * NetworkMigrationManager_get_pendingPlayers_m952382421_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Start()
extern "C"  void NetworkMigrationManager_Start_m_617053298_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Reset(System.Int32)
extern "C"  void NetworkMigrationManager_Reset_m471468556_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___reconnectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::AssignAuthorityCallback(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkMigrationManager_AssignAuthorityCallback_m_1485601060_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, bool ___authorityState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::Initialize(UnityEngine.Networking.NetworkClient,UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkMigrationManager_Initialize_m_583994257_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkClient_t1572714452_0 * ___newClient, MatchInfo_t_629025159_0 * ___newMatchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::DisablePlayerObjects()
extern "C"  void NetworkMigrationManager_DisablePlayerObjects_m_985261791_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::SendPeerInfo()
extern "C"  void NetworkMigrationManager_SendPeerInfo_m412259022_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerClientAuthority_m1328157587_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeerInfo(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnPeerInfo_m772562097_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayerMessage_m756101807_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectObjectForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  bool NetworkMigrationManager_ReconnectObjectForConnection_m_1803956571_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___newConnection, GameObject_t_184308134_0 * ___oldObject, int32_t ___oldConnectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::ReconnectPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  bool NetworkMigrationManager_ReconnectPlayerForConnection_m651368686_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___newConnection, GameObject_t_184308134_0 * ___oldPlayer, int32_t ___oldConnectionId, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::LostHostOnClient(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkMigrationManager_LostHostOnClient_m_1545633871_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::LostHostOnHost()
extern "C"  void NetworkMigrationManager_LostHostOnHost_m997934121_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::BecomeNewHost(System.Int32)
extern "C"  bool NetworkMigrationManager_BecomeNewHost_m_1610207280_0 (NetworkMigrationManager_t1228815560_0 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnClientDisconnectedFromHost(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption&)
extern "C"  void NetworkMigrationManager_OnClientDisconnectedFromHost_m699601846_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t* ___sceneChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerHostShutdown()
extern "C"  void NetworkMigrationManager_OnServerHostShutdown_m_335512010_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m1384684799_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___newConnection, GameObject_t_184308134_0 * ___oldPlayer, int32_t ___oldConnectionId, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectPlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkMigrationManager_OnServerReconnectPlayer_m_183225607_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___newConnection, GameObject_t_184308134_0 * ___oldPlayer, int32_t ___oldConnectionId, int16_t ___playerControllerId, NetworkReader_t1995447500_0 * ___extraMessageReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnServerReconnectObject(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int32)
extern "C"  void NetworkMigrationManager_OnServerReconnectObject_m870285808_0 (NetworkMigrationManager_t1228815560_0 * __this, NetworkConnection_t_437512601_0 * ___newConnection, GameObject_t_184308134_0 * ___oldObject, int32_t ___oldConnectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnPeersUpdated(UnityEngine.Networking.NetworkSystem.PeerListMessage)
extern "C"  void NetworkMigrationManager_OnPeersUpdated_m381121068_0 (NetworkMigrationManager_t1228815560_0 * __this, PeerListMessage_t1959189233_0 * ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnAuthorityUpdated(UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void NetworkMigrationManager_OnAuthorityUpdated_m_329527701_0 (NetworkMigrationManager_t1228815560_0 * __this, GameObject_t_184308134_0 * ___go, int32_t ___connectionId, bool ___authorityState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkMigrationManager::FindNewHost(UnityEngine.Networking.NetworkSystem.PeerInfoMessage&,System.Boolean&)
extern "C"  bool NetworkMigrationManager_FindNewHost_m1068880209_0 (NetworkMigrationManager_t1228815560_0 * __this, PeerInfoMessage_t_324504351_0 ** ___newHostInfo, bool* ___youAreNewHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIHost()
extern "C"  void NetworkMigrationManager_OnGUIHost_m877579216_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUIClient()
extern "C"  void NetworkMigrationManager_OnGUIClient_m_1544577165_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMigrationManager::OnGUI()
extern "C"  void NetworkMigrationManager_OnGUI_m_68792440_0 (NetworkMigrationManager_t1228815560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
