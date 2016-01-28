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

// UnityEngine.Networking.NetworkServerSimple
struct NetworkServerSimple_t434202654_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t2097057352_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t_291238575_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1479454492.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"

// System.Void UnityEngine.Networking.NetworkServerSimple::.ctor()
extern "C"  void NetworkServerSimple__ctor_m1236861304_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_listenPort()
extern "C"  int32_t NetworkServerSimple_get_listenPort_m1599825413_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_listenPort(System.Int32)
extern "C"  void NetworkServerSimple_set_listenPort_m1319820386_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServerSimple::get_serverHostId()
extern "C"  int32_t NetworkServerSimple_get_serverHostId_m_1627180381_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_serverHostId(System.Int32)
extern "C"  void NetworkServerSimple_set_serverHostId_m1366866176_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServerSimple::get_hostTopology()
extern "C"  HostTopology_t_147370200_0 * NetworkServerSimple_get_hostTopology_m_1066587195_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::get_useWebSockets()
extern "C"  bool NetworkServerSimple_get_useWebSockets_m_1262754094_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServerSimple_set_useWebSockets_m650604387_0 (NetworkServerSimple_t434202654_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::get_connections()
extern "C"  ReadOnlyCollection_1_t2097057352_0 * NetworkServerSimple_get_connections_m_1746976811_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServerSimple::get_handlers()
extern "C"  Dictionary_2_t_291238575_0 * NetworkServerSimple_get_handlers_m_546334174_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkServerSimple::get_messageBuffer()
extern "C"  ByteU5BU5D_t_1238178395_0* NetworkServerSimple_get_messageBuffer_m1965383242_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkServerSimple::get_messageReader()
extern "C"  NetworkReader_t1995447500_0 * NetworkServerSimple_get_messageReader_m699088814_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkServerSimple::get_networkConnectionClass()
extern "C"  Type_t * NetworkServerSimple_get_networkConnectionClass_m_1308310917_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Initialize()
extern "C"  void NetworkServerSimple_Initialize_m_1745780708_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServerSimple_Configure_m_1917133354_0 (NetworkServerSimple_t434202654_0 * __this, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServerSimple_Configure_m1966592778_0 (NetworkServerSimple_t434202654_0 * __this, HostTopology_t_147370200_0 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.String,System.Int32)
extern "C"  bool NetworkServerSimple_Listen_m_938686922_0 (NetworkServerSimple_t434202654_0 * __this, String_t* ___ipAddress, int32_t ___serverListenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.Int32)
extern "C"  bool NetworkServerSimple_Listen_m_1843779534_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___serverListenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::Listen(System.Int32,UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServerSimple_Listen_m1781542692_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___serverListenPort, HostTopology_t_147370200_0 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServerSimple_ListenRelay_m788664821_0 (NetworkServerSimple_t434202654_0 * __this, String_t* ___relayIp, int32_t ___relayPort, uint64_t ___netGuid, uint64_t ___sourceId, uint16_t ___nodeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Stop()
extern "C"  void NetworkServerSimple_Stop_m_409293746_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandlerSafe_m1734711584_0 (NetworkServerSimple_t434202654_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServerSimple_RegisterHandler_m1965862131_0 (NetworkServerSimple_t434202654_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::UnregisterHandler(System.Int16)
extern "C"  void NetworkServerSimple_UnregisterHandler_m1021588303_0 (NetworkServerSimple_t434202654_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::ClearHandlers()
extern "C"  void NetworkServerSimple_ClearHandlers_m847934444_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::UpdateConnections()
extern "C"  void NetworkServerSimple_UpdateConnections_m537678050_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Update()
extern "C"  void NetworkServerSimple_Update_m1414856853_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkServerSimple::FindConnection(System.Int32)
extern "C"  NetworkConnection_t_437512601_0 * NetworkServerSimple_FindConnection_m681102338_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::SetConnectionAtIndex(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServerSimple_SetConnectionAtIndex_m_987462256_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServerSimple::RemoveConnectionAtIndex(System.Int32)
extern "C"  bool NetworkServerSimple_RemoveConnectionAtIndex_m_1970363178_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleConnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleConnect_m2084673966_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleDisconnect(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleDisconnect_m_510306522_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::HandleData(System.Int32,System.Int32,System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_HandleData_m_766880876_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, int32_t ___channelId, int32_t ___receivedSize, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::SendBytesTo(System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServerSimple_SendBytesTo_m2109251048_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::SendWriterTo(System.Int32,UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void NetworkServerSimple_SendWriterTo_m_437969726_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::Disconnect(System.Int32)
extern "C"  void NetworkServerSimple_Disconnect_m408138617_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::DisconnectAllConnections()
extern "C"  void NetworkServerSimple_DisconnectAllConnections_m_1903940100_0 (NetworkServerSimple_t434202654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnectError(System.Int32,System.Byte)
extern "C"  void NetworkServerSimple_OnConnectError_m_2091235713_0 (NetworkServerSimple_t434202654_0 * __this, int32_t ___connectionId, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDataError_m_533288207_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnectError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void NetworkServerSimple_OnDisconnectError_m1780978239_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnConnected_m_600019305_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServerSimple_OnDisconnected_m_384581987_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServerSimple::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServerSimple_OnData_m1100103084_0 (NetworkServerSimple_t434202654_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
