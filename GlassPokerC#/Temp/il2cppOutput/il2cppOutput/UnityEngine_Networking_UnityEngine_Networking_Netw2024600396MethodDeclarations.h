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

// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2024600396_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2007138745_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t2097057352_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t_291238575_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t_678772473_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// UnityEngine.Networking.LocalClient
struct LocalClient_t_33198575_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t966714903_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t_1478993424_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1479454492.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.NetworkServer::.ctor()
extern "C"  void NetworkServer__ctor_m_409017270_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::.cctor()
extern "C"  void NetworkServer__cctor_m_276729693_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_localConnections()
extern "C"  List_1_t2007138745_0 * NetworkServer_get_localConnections_m_1119076631_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_listenPort()
extern "C"  int32_t NetworkServer_get_listenPort_m_426140301_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_serverHostId()
extern "C"  int32_t NetworkServer_get_serverHostId_m1334920849_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_connections()
extern "C"  ReadOnlyCollection_1_t2097057352_0 * NetworkServer_get_connections_m400512615_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServer::get_handlers()
extern "C"  Dictionary_2_t_291238575_0 * NetworkServer_get_handlers_m244410896_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServer::get_hostTopology()
extern "C"  HostTopology_t_147370200_0 * NetworkServer_get_hostTopology_m1387968627_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkServer::get_objects()
extern "C"  Dictionary_2_t_678772473_0 * NetworkServer_get_objects_m1868020773_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_sendPeerInfo()
extern "C"  bool NetworkServer_get_sendPeerInfo_m1962101833_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkServer_set_sendPeerInfo_m1959433638_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_dontListen()
extern "C"  bool NetworkServer_get_dontListen_m1008379945_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_dontListen(System.Boolean)
extern "C"  void NetworkServer_set_dontListen_m_569550074_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_useWebSockets()
extern "C"  bool NetworkServer_get_useWebSockets_m_2141635548_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServer_set_useWebSockets_m364285877_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkServer UnityEngine.Networking.NetworkServer::get_instance()
extern "C"  NetworkServer_t2024600396_0 * NetworkServer_get_instance_m_1442713055_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_active()
extern "C"  bool NetworkServer_get_active_m_695986441_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_localClientActive()
extern "C"  bool NetworkServer_get_localClientActive_m1343007053_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_numChannels()
extern "C"  int32_t NetworkServer_get_numChannels_m_1921815891_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkServer::get_maxDelay()
extern "C"  float NetworkServer_get_maxDelay_m1752883182_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_maxDelay(System.Single)
extern "C"  void NetworkServer_set_maxDelay_m_1489882091_0 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkServer::get_networkConnectionClass()
extern "C"  Type_t * NetworkServer_get_networkConnectionClass_m508138089_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServer_Configure_m166395944_0 (Object_t * __this /* static, unused */, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServer_Configure_m_639518088_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Reset()
extern "C"  void NetworkServer_Reset_m1532382967_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Shutdown()
extern "C"  void NetworkServer_Shutdown_m_2082087920_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(UnityEngine.Networking.Match.MatchInfo,System.Int32)
extern "C"  bool NetworkServer_Listen_m560096655_0 (Object_t * __this /* static, unused */, MatchInfo_t_629025159_0 * ___matchInfo, int32_t ___listenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterMessageHandlers()
extern "C"  void NetworkServer_RegisterMessageHandlers_m413517013_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_ListenRelay_m1684213091_0 (Object_t * __this /* static, unused */, String_t* ___relayIp, int32_t ___relayPort, uint64_t ___netGuid, uint64_t ___sourceId, uint16_t ___nodeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_InternalListenRelay_m_1906345920_0 (NetworkServer_t2024600396_0 * __this, String_t* ___relayIp, int32_t ___relayPort, uint64_t ___netGuid, uint64_t ___sourceId, uint16_t ___nodeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.Int32)
extern "C"  bool NetworkServer_Listen_m975666464_0 (Object_t * __this /* static, unused */, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.String,System.Int32)
extern "C"  bool NetworkServer_Listen_m1580458660_0 (Object_t * __this /* static, unused */, String_t* ___ipAddress, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalListen(System.String,System.Int32)
extern "C"  bool NetworkServer_InternalListen_m_40386751_0 (NetworkServer_t2024600396_0 * __this, String_t* ___ipAddress, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHost(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t1572714452_0 * NetworkServer_BecomeHost_m_2013275386_0 (Object_t * __this /* static, unused */, NetworkClient_t1572714452_0 * ___oldClient, int32_t ___port, MatchInfo_t_629025159_0 * ___matchInfo, int32_t ___oldConnectionId, PeerInfoMessageU5BU5D_t1683934211_0* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHostInternal(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t1572714452_0 * NetworkServer_BecomeHostInternal_m407854115_0 (NetworkServer_t2024600396_0 * __this, NetworkClient_t1572714452_0 * ___oldClient, int32_t ___port, MatchInfo_t_629025159_0 * ___matchInfo, int32_t ___oldConnectionId, PeerInfoMessageU5BU5D_t1683934211_0* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetMaxDelay(System.Single)
extern "C"  void NetworkServer_InternalSetMaxDelay_m565090047_0 (NetworkServer_t2024600396_0 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::AddLocalClient(UnityEngine.Networking.LocalClient)
extern "C"  int32_t NetworkServer_AddLocalClient_m_1596718396_0 (NetworkServer_t2024600396_0 * __this, LocalClient_t_33198575_0 * ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveLocalClient(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_RemoveLocalClient_m_1190218063_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___localClientConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetLocalObjectOnServer(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void NetworkServer_SetLocalObjectOnServer_m_1552532843_0 (NetworkServer_t2024600396_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ActivateLocalClientScene()
extern "C"  void NetworkServer_ActivateLocalClientScene_m250925347_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToAll_m_1834888178_0 (Object_t * __this /* static, unused */, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToObservers(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToObservers_m1577690156_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToReady_m_878704014_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void NetworkServer_SendWriterToReady_m_743783332_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToReady(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToReady_m_1250500230_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToPlayer(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToPlayer_m_2143771358_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___player, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToAll_m1128023825_0 (Object_t * __this /* static, unused */, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToReady_m_1037504305_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToAll(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToAll_m1670953979_0 (Object_t * __this /* static, unused */, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToReady_m802272115_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___contextObj, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DisconnectAll()
extern "C"  void NetworkServer_DisconnectAll_m803946637_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalDisconnectAll()
extern "C"  void NetworkServer_InternalDisconnectAll_m_1154094832_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Update()
extern "C"  void NetworkServer_Update_m1932228611_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UpdateServerObjects()
extern "C"  void NetworkServer_UpdateServerObjects_m1450834224_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::CheckForNullObjects()
extern "C"  void NetworkServer_CheckForNullObjects_m2038564436_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalUpdate()
extern "C"  void NetworkServer_InternalUpdate_m737545440_0 (NetworkServer_t2024600396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnConnected_m626668009_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnDisconnected_m_2019532277_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServer_OnData_m_1332600422_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateConnectError(System.Int32)
extern "C"  void NetworkServer_GenerateConnectError_m_2098498530_0 (NetworkServer_t2024600396_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDataError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDataError_m_1187848881_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDisconnectError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDisconnectError_m_1581204287_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateError_m406879109_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServer_RegisterHandler_m_433502523_0 (Object_t * __this /* static, unused */, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnregisterHandler(System.Int16)
extern "C"  void NetworkServer_UnregisterHandler_m_815579103_0 (Object_t * __this /* static, unused */, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearHandlers()
extern "C"  void NetworkServer_ClearHandlers_m630285502_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearSpawners()
extern "C"  void NetworkServer_ClearSpawners_m_20147744_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsOut_m819520749_0 (Object_t * __this /* static, unused */, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsIn_m1878254280_0 (Object_t * __this /* static, unused */, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClientOfPlayer(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClientOfPlayer_m941965912_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___player, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClient(System.Int32,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClient_m704147321_0 (Object_t * __this /* static, unused */, int32_t ___connectionId, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m_1773763502_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___player, int16_t ___playerControllerId, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m_290109692_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___player, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_AddPlayerForConnection_m_403598011_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___player, int16_t ___playerControllerId, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_AddPlayerForConnection_m1550997047_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___player, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalAddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalAddPlayerForConnection_m588781460_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___playerGameObject, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::CheckPlayerControllerIdForConnection(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool NetworkServer_CheckPlayerControllerIdForConnection_m1291353099_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SetupLocalPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.PlayerController)
extern "C"  bool NetworkServer_SetupLocalPlayerForConnection_m_923093152_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, PlayerController_t1101131586_0 * ___newPlayerController, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::FinishPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.GameObject)
extern "C"  void NetworkServer_FinishPlayerForConnection_m_2093695501_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, GameObject_t_184308134_0 * ___playerGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalReplacePlayerForConnection_m2142310881_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, GameObject_t_184308134_0 * ___playerGameObject, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::GetNetworkIdentity(UnityEngine.GameObject,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkServer_GetNetworkIdentity_m_479727611_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___go, NetworkIdentity_t_1494067577_0 ** ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReady_m_1848943577_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReadyInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReadyInternal_m542532548_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ShowForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_ShowForConnection_m1603743764_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::HideForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_HideForConnection_m_2050882663_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetAllClientsNotReady()
extern "C"  void NetworkServer_SetAllClientsNotReady_m_1378237951_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientNotReady_m1020083580_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_InternalSetClientNotReady_m553610623_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnClientReadyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnClientReadyMessage_m_2138487442_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnRemovePlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnRemovePlayerMessage_m835718155_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnCommandMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnCommandMessage_m677833441_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_SpawnObject_m1003130426_0 (NetworkServer_t2024600396_0 * __this, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendSpawnMessage(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendSpawnMessage_m1014596760_0 (NetworkServer_t2024600396_0 * __this, NetworkIdentity_t_1494067577_0 * ___uv, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyPlayersForConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_DestroyPlayersForConnection_m1466869966_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawnObject_m_1038935263_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkServer_UnSpawnObject_m_487975648_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_DestroyObject_m756954297_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkServer_DestroyObject_m1727860165_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, bool ___destroyServerObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearLocalObjects()
extern "C"  void NetworkServer_ClearLocalObjects_m1400444798_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_Spawn_m1915170139_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m892846087_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, GameObject_t_184308134_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m1157863718_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m_250893864_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, NetworkHash128_t1346402176_0  ___assetId, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkServer_Spawn_m711979369_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Destroy(UnityEngine.GameObject)
extern "C"  void NetworkServer_Destroy_m_1159897318_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawn_m_914803838_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkServer_InvokeBytes_m673502835_0 (NetworkServer_t2024600396_0 * __this, ULocalConnectionToServer_t966714903_0 * ___conn, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_InvokeHandlerOnServer_m1499872744_0 (NetworkServer_t2024600396_0 * __this, ULocalConnectionToServer_t966714903_0 * ___conn, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkServer::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t_184308134_0 * NetworkServer_FindLocalObject_m1082358575_0 (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkServer::GetConnectionStats()
extern "C"  Dictionary_2_t_1478993424_0 * NetworkServer_GetConnectionStats_m_470615254_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ResetConnectionStats()
extern "C"  void NetworkServer_ResetConnectionStats_m1482255436_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnection_m_86175685_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnectionInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnectionInternal_m_1681079336_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveExternalConnection(System.Int32)
extern "C"  void NetworkServer_RemoveExternalConnection_m_1582181000_0 (Object_t * __this /* static, unused */, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::RemoveExternalConnectionInternal(System.Int32)
extern "C"  bool NetworkServer_RemoveExternalConnectionInternal_m1320741347_0 (NetworkServer_t2024600396_0 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnObjects()
extern "C"  bool NetworkServer_SpawnObjects_m_538872863_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendCrc(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendCrc_m_375707605_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___targetConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendNetworkInfo(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendNetworkInfo_m_805801645_0 (NetworkServer_t2024600396_0 * __this, NetworkConnection_t_437512601_0 * ___targetConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
