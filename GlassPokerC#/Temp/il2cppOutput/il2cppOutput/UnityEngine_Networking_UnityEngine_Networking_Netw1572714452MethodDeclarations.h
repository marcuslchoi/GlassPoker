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

// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t_1172906260_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t_291238575_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t_1478993424_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkClient::.ctor()
extern "C"  void NetworkClient__ctor_m_1238452030_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.ctor(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient__ctor_m_1076822759_0 (NetworkClient_t1572714452_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.cctor()
extern "C"  void NetworkClient__cctor_m_219403477_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::get_allClients()
extern "C"  List_1_t_1172906260_0 * NetworkClient_get_allClients_m_536925605_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C"  bool NetworkClient_get_active_m1501449599_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetHandlers(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient_SetHandlers_m450307106_0 (NetworkClient_t1572714452_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkClient::get_serverIp()
extern "C"  String_t* NetworkClient_get_serverIp_m877817560_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_serverPort()
extern "C"  int32_t NetworkClient_get_serverPort_m1193698423_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::get_connection()
extern "C"  NetworkConnection_t_437512601_0 * NetworkClient_get_connection_m743904375_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkClient::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t1683934211_0* NetworkClient_get_peers_m_1305000042_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_hostId()
extern "C"  int32_t NetworkClient_get_hostId_m2013719606_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkClient::get_handlers()
extern "C"  Dictionary_2_t_291238575_0 * NetworkClient_get_handlers_m_1143464296_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_numChannels()
extern "C"  int32_t NetworkClient_get_numChannels_m_461502171_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::get_hostTopology()
extern "C"  HostTopology_t_147370200_0 * NetworkClient_get_hostTopology_m_586946309_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_isConnected()
extern "C"  bool NetworkClient_get_isConnected_m1433706056_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkClient::get_networkConnectionClass()
extern "C"  Type_t * NetworkClient_get_networkConnectionClass_m475379953_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkClient_Configure_m340987040_0 (NetworkClient_t1572714452_0 * __this, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkClient_Configure_m2046054144_0 (NetworkClient_t1572714452_0 * __this, HostTopology_t_147370200_0 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_Connect_m1782442563_0 (NetworkClient_t1572714452_0 * __this, MatchInfo_t_629025159_0 * ___matchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::ReconnectToNewHost(System.String,System.Int32)
extern "C"  bool NetworkClient_ReconnectToNewHost_m321563963_0 (NetworkClient_t1572714452_0 * __this, String_t* ___serverIp, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithSimulator(System.String,System.Int32,System.Int32,System.Single)
extern "C"  void NetworkClient_ConnectWithSimulator_m672318641_0 (NetworkClient_t1572714452_0 * __this, String_t* ___serverIp, int32_t ___serverPort, int32_t ___latency, float ___packetLoss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::IsValidIpV6(System.String)
extern "C"  bool NetworkClient_IsValidIpV6_m348105335_0 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.String,System.Int32)
extern "C"  void NetworkClient_Connect_m358203679_0 (NetworkClient_t1572714452_0 * __this, String_t* ___serverIp, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.Net.EndPoint)
extern "C"  void NetworkClient_Connect_m373424803_0 (NetworkClient_t1572714452_0 * __this, EndPoint_t_1941440085_0 * ___secureTunnelEndPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect()
extern "C"  void NetworkClient_PrepareForConnect_m_896687704_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect(System.Boolean)
extern "C"  void NetworkClient_PrepareForConnect_m_939241185_0 (NetworkClient_t1572714452_0 * __this, bool ___usePlatformSpecificProtocols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetHostAddressesCallback(System.IAsyncResult)
extern "C"  void NetworkClient_GetHostAddressesCallback_m_1172237064_0 (Object_t * __this /* static, unused */, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ContinueConnect()
extern "C"  void NetworkClient_ContinueConnect_m_1422853981_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithRelay(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_ConnectWithRelay_m2130065692_0 (NetworkClient_t1572714452_0 * __this, MatchInfo_t_629025159_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Disconnect()
extern "C"  void NetworkClient_Disconnect_m926892318_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_Send_m_2035905714_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkClient_SendWriter_m_63088278_0 (NetworkClient_t1572714452_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkClient_SendBytes_m_2077771148_0 (NetworkClient_t1572714452_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_SendUnreliable_m_370914197_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkClient_SendByChannel_m_1155494777_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetMaxDelay(System.Single)
extern "C"  void NetworkClient_SetMaxDelay_m88000490_0 (NetworkClient_t1572714452_0 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Shutdown()
extern "C"  void NetworkClient_Shutdown_m1468798104_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Update()
extern "C"  void NetworkClient_Update_m1989554827_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateConnectError(System.Int32)
extern "C"  void NetworkClient_GenerateConnectError_m252875942_0 (NetworkClient_t1572714452_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDataError(System.Int32)
extern "C"  void NetworkClient_GenerateDataError_m494621562_0 (NetworkClient_t1572714452_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDisconnectError(System.Int32)
extern "C"  void NetworkClient_GenerateDisconnectError_m_102209080_0 (NetworkClient_t1572714452_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateError(System.Int32)
extern "C"  void NetworkClient_GenerateError_m1276535940_0 (NetworkClient_t1572714452_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsOut_m_1369578635_0 (NetworkClient_t1572714452_0 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsIn_m_413935808_0 (NetworkClient_t1572714452_0 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetConnectionStats()
extern "C"  Dictionary_2_t_1478993424_0 * NetworkClient_GetConnectionStats_m11676082_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ResetConnectionStats()
extern "C"  void NetworkClient_ResetConnectionStats_m1107761364_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::GetRTT()
extern "C"  int32_t NetworkClient_GetRTT_m_1788913114_0 (NetworkClient_t1572714452_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterSystemHandlers(System.Boolean)
extern "C"  void NetworkClient_RegisterSystemHandlers_m663487796_0 (NetworkClient_t1572714452_0 * __this, bool ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::OnCRC(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkClient_OnCRC_m_869130175_0 (NetworkClient_t1572714452_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandler_m_2041946307_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandlerSafe_m1919751786_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UnregisterHandler(System.Int16)
extern "C"  void NetworkClient_UnregisterHandler_m_1755632487_0 (NetworkClient_t1572714452_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetTotalConnectionStats()
extern "C"  Dictionary_2_t_1478993424_0 * NetworkClient_GetTotalConnectionStats_m_1466284114_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::AddClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkClient_AddClient_m_284514762_0 (Object_t * __this /* static, unused */, NetworkClient_t1572714452_0 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::RemoveClient(UnityEngine.Networking.NetworkClient)
extern "C"  bool NetworkClient_RemoveClient_m_324722487_0 (Object_t * __this /* static, unused */, NetworkClient_t1572714452_0 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UpdateClients()
extern "C"  void NetworkClient_UpdateClients_m_1360810977_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ShutdownAll()
extern "C"  void NetworkClient_ShutdownAll_m_137306293_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetActive(System.Boolean)
extern "C"  void NetworkClient_SetActive_m_2075432481_0 (Object_t * __this /* static, unused */, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
