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

// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t1305823158_0;
// UnityEngine.Networking.GlobalConfigInternal
struct GlobalConfigInternal_t840916115_0;
// System.String
struct String_t;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t1057214981_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t2102474327_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1479454492.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp_758289193.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C"  bool NetworkTransport_DoesEndPointUsePlatformProtocols_m885513828_0 (Object_t * __this /* static, unused */, EndPoint_t_1941440085_0 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectEndPoint_m_1269355479_0 (Object_t * __this /* static, unused */, int32_t ___hostId, EndPoint_t_1941440085_0 * ___endPoint, int32_t ___exceptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C"  void NetworkTransport_Init_m_89802928_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C"  void NetworkTransport_Init_m_1852516838_0 (Object_t * __this /* static, unused */, GlobalConfig_t1305823158_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C"  void NetworkTransport_InitWithNoParameters_m_1769580639_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::InitWithParameters(UnityEngine.Networking.GlobalConfigInternal)
extern "C"  void NetworkTransport_InitWithParameters_m_2008801619_0 (Object_t * __this /* static, unused */, GlobalConfigInternal_t840916115_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
extern "C"  void NetworkTransport_Shutdown_m_1851758698_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  void NetworkTransport_ConnectAsNetworkHost_m414745677_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, uint64_t ___network, uint64_t ___source, uint16_t ___node, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveRelayEventFromHost_m_60951348_0 (Object_t * __this /* static, unused */, int32_t ___hostId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Int32,System.Single,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m854362358_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exceptionConnectionId, int32_t ___relaySlotId, uint64_t ___network, uint64_t ___source, uint16_t ___node, int32_t ___bytesPerSec, float ___bucketSizeFactor, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m255385212_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exceptionConnectionId, int32_t ___relaySlotId, uint64_t ___network, uint64_t ___source, uint16_t ___node, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRtt(System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_GetCurrentRtt_m1132321970_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C"  void NetworkTransport_GetConnectionInfo_m_1884516852_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, String_t** ___address, int32_t* ___port, uint64_t* ___network, uint16_t* ___dstNode, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
extern "C"  String_t* NetworkTransport_GetConnectionInfo_m1339913196_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t* ___port, uint64_t* ___network, uint16_t* ___dstNode, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
extern "C"  int32_t NetworkTransport_AddWsHostWrapper_m1168384174_0 (Object_t * __this /* static, unused */, HostTopologyInternal_t1057214981_0 * ___topologyInt, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32)
extern "C"  int32_t NetworkTransport_AddWsHostWrapperWithoutIp_m413354655_0 (Object_t * __this /* static, unused */, HostTopologyInternal_t1057214981_0 * ___topologyInt, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m482650189_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m_1963538999_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWrapper_m_2079284854_0 (Object_t * __this /* static, unused */, HostTopologyInternal_t1057214981_0 * ___topologyInt, String_t* ___ip, int32_t ___port, int32_t ___minTimeout, int32_t ___maxTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWrapperWithoutIp_m_660991805_0 (Object_t * __this /* static, unused */, HostTopologyInternal_t1057214981_0 * ___topologyInt, int32_t ___port, int32_t ___minTimeout, int32_t ___maxTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddHost_m639728426_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHost_m_1830366746_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m1608577268_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___minTimeout, int32_t ___maxTimeout, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m_2129174992_0 (Object_t * __this /* static, unused */, HostTopology_t_147370200_0 * ___topology, int32_t ___minTimeout, int32_t ___maxTimeout, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C"  bool NetworkTransport_RemoveHost_m_152239753_0 (Object_t * __this /* static, unused */, int32_t ___hostId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C"  bool NetworkTransport_get_IsStarted_m_2058016170_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Connect_m16029358_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exeptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Internal_ConnectEndPoint_m_2060564053_0 (Object_t * __this /* static, unused */, int32_t ___hostId, IntPtr_t ___sockAddrStorage, int32_t ___sockAddrStorageLen, int32_t ___exceptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C"  int32_t NetworkTransport_ConnectWithSimulator_m317164795_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exeptionConnectionId, uint8_t* ___error, ConnectionSimulatorConfig_t2102474327_0 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Disconnect_m1220901079_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Send_m693132326_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t ___channelId, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___size, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_SendWrapper_m351008951_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t ___channelId, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___size, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveFromHost_m_861078726_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t* ___connectionId, int32_t* ___channelId, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___bufferSize, int32_t* ___receivedSize, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_StartBroadcastDiscovery_m_654462534_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___broadcastPort, int32_t ___key, int32_t ___version, int32_t ___subversion, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___size, int32_t ___timeout, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C"  void NetworkTransport_StopBroadcastDiscovery_m1711182289_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C"  void NetworkTransport_SetBroadcastCredentials_m_1278021856_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t ___key, int32_t ___version, int32_t ___subversion, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)
extern "C"  String_t* NetworkTransport_GetBroadcastConnectionInfo_m1548702413_0 (Object_t * __this /* static, unused */, int32_t ___hostId, int32_t* ___port, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionInfo_m1149228074_0 (Object_t * __this /* static, unused */, int32_t ___hostId, String_t** ___address, int32_t* ___port, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionMessage_m_1731315569_0 (Object_t * __this /* static, unused */, int32_t ___hostId, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___bufferSize, int32_t* ___receivedSize, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
