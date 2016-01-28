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

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t1542048493_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t139052538_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t956281371_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t_1478993424_0;
// System.String
struct String_t;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t831174055_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_QosType_1499104930.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Channel9255827.h"

// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
extern "C"  void NetworkConnection__ctor_m_994505201_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::get_visList()
extern "C"  HashSet_1_t1542048493_0 * NetworkConnection_get_visList_m1732321882_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::get_playerControllers()
extern "C"  List_1_t139052538_0 * NetworkConnection_get_playerControllers_m_747279297_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::get_clientOwnedObjects()
extern "C"  HashSet_1_t956281371_0 * NetworkConnection_get_clientOwnedObjects_m305972178_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::get_isConnected()
extern "C"  bool NetworkConnection_get_isConnected_m_278811051_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::get_packetStats()
extern "C"  Dictionary_2_t_1478993424_0 * NetworkConnection_get_packetStats_m_438093002_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Initialize(System.String,System.Int32,System.Int32,UnityEngine.Networking.HostTopology)
extern "C"  void NetworkConnection_Initialize_m1325597135_0 (NetworkConnection_t_437512601_0 * __this, String_t* ___networkAddress, int32_t ___networkHostId, int32_t ___networkConnectionId, HostTopology_t_147370200_0 * ___hostTopology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Finalize()
extern "C"  void NetworkConnection_Finalize_m_517528589_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose()
extern "C"  void NetworkConnection_Dispose_m1956491916_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose(System.Boolean)
extern "C"  void NetworkConnection_Dispose_m1411580675_0 (NetworkConnection_t_437512601_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::IsReliableQoS(UnityEngine.Networking.QosType)
extern "C"  bool NetworkConnection_IsReliableQoS_m_1733998828_0 (Object_t * __this /* static, unused */, int32_t ___qos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SetChannelOption(System.Int32,UnityEngine.Networking.ChannelOption,System.Int32)
extern "C"  bool NetworkConnection_SetChannelOption_m350743376_0 (NetworkConnection_t_437512601_0 * __this, int32_t ___channelId, int32_t ___option, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Disconnect()
extern "C"  void NetworkConnection_Disconnect_m1044853745_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetHandlers(UnityEngine.Networking.NetworkMessageHandlers)
extern "C"  void NetworkConnection_SetHandlers_m_1110312075_0 (NetworkConnection_t_437512601_0 * __this, NetworkMessageHandlers_t831174055_0 * ___handlers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckHandler(System.Int16)
extern "C"  bool NetworkConnection_CheckHandler_m2085430288_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandlerNoData(System.Int16)
extern "C"  bool NetworkConnection_InvokeHandlerNoData_m_619808889_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(System.Int16,UnityEngine.Networking.NetworkReader,System.Int32)
extern "C"  bool NetworkConnection_InvokeHandler_m2138164699_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, NetworkReader_t1995447500_0 * ___reader, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(UnityEngine.Networking.NetworkMessage)
extern "C"  bool NetworkConnection_InvokeHandler_m737675525_0 (NetworkConnection_t_437512601_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkConnection_RegisterHandler_m_1711120886_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::UnregisterHandler(System.Int16)
extern "C"  void NetworkConnection_UnregisterHandler_m_201479450_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetPlayerController(UnityEngine.Networking.PlayerController)
extern "C"  void NetworkConnection_SetPlayerController_m101256454_0 (NetworkConnection_t_437512601_0 * __this, PlayerController_t1101131586_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemovePlayerController(System.Int16)
extern "C"  void NetworkConnection_RemovePlayerController_m_865591455_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool NetworkConnection_GetPlayerController_m_695467037_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___playerControllerId, PlayerController_t1101131586_0 ** ___playerController, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::FlushChannels()
extern "C"  void NetworkConnection_FlushChannels_m483596577_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetMaxDelay(System.Single)
extern "C"  void NetworkConnection_SetMaxDelay_m776981885_0 (NetworkConnection_t_437512601_0 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_Send_m_355378981_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_SendUnreliable_m_961983048_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkConnection_SendByChannel_m_657128876_0 (NetworkConnection_t_437512601_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkConnection_SendBytes_m_1296457721_0 (NetworkConnection_t_437512601_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkConnection_SendWriter_m217860599_0 (NetworkConnection_t_437512601_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::LogSend(System.Byte[])
extern "C"  void NetworkConnection_LogSend_m_16630192_0 (NetworkConnection_t_437512601_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckChannel(System.Int32)
extern "C"  bool NetworkConnection_CheckChannel_m1425561871_0 (NetworkConnection_t_437512601_0 * __this, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::ResetStats()
extern "C"  void NetworkConnection_ResetStats_m_65118491_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleBytes_m770431321_0 (NetworkConnection_t_437512601_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleReader(UnityEngine.Networking.NetworkReader,System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleReader_m_1775620718_0 (NetworkConnection_t_437512601_0 * __this, NetworkReader_t1995447500_0 * ___reader, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsOut_m_571784888_0 (NetworkConnection_t_437512601_0 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsIn_m_919750515_0 (NetworkConnection_t_437512601_0 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkConnection::ToString()
extern "C"  String_t* NetworkConnection_ToString_m_320612188_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddToVisList(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddToVisList_m_1054156466_0 (NetworkConnection_t_437512601_0 * __this, NetworkIdentity_t_1494067577_0 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveFromVisList(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkConnection_RemoveFromVisList_m_1738569879_0 (NetworkConnection_t_437512601_0 * __this, NetworkIdentity_t_1494067577_0 * ___uv, bool ___isDestroyed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveObservers()
extern "C"  void NetworkConnection_RemoveObservers_m_195492314_0 (NetworkConnection_t_437512601_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::TransportRecieve(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_TransportRecieve_m1771390274_0 (NetworkConnection_t_437512601_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::TransportSend(System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkConnection_TransportSend_m789750702_0 (NetworkConnection_t_437512601_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddOwnedObject_m58540015_0 (NetworkConnection_t_437512601_0 * __this, NetworkIdentity_t_1494067577_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_RemoveOwnedObject_m_1692227068_0 (NetworkConnection_t_437512601_0 * __this, NetworkIdentity_t_1494067577_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
