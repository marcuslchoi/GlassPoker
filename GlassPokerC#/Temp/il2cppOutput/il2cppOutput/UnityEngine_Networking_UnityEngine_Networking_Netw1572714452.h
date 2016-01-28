#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t_1172906260_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.String
struct String_t;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t_1780099799_0;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t831174055_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2037679170.h"

// UnityEngine.Networking.NetworkClient
struct  NetworkClient_t1572714452_0  : public Object_t
{
	// System.Type UnityEngine.Networking.NetworkClient::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_1;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::m_HostTopology
	HostTopology_t_147370200_0 * ___m_HostTopology_4;
	// System.Boolean UnityEngine.Networking.NetworkClient::m_UseSimulator
	bool ___m_UseSimulator_5;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_SimulatedLatency
	int32_t ___m_SimulatedLatency_6;
	// System.Single UnityEngine.Networking.NetworkClient::m_PacketLoss
	float ___m_PacketLoss_7;
	// System.String UnityEngine.Networking.NetworkClient::m_ServerIp
	String_t* ___m_ServerIp_8;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ServerPort
	int32_t ___m_ServerPort_9;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientId
	int32_t ___m_ClientId_10;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_ClientConnectionId
	int32_t ___m_ClientConnectionId_11;
	// System.Int32 UnityEngine.Networking.NetworkClient::m_StatResetTime
	int32_t ___m_StatResetTime_12;
	// System.Net.EndPoint UnityEngine.Networking.NetworkClient::m_RemoteEndPoint
	EndPoint_t_1941440085_0 * ___m_RemoteEndPoint_13;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkClient::m_MessageHandlers
	NetworkMessageHandlers_t831174055_0 * ___m_MessageHandlers_15;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::m_Connection
	NetworkConnection_t_437512601_0 * ___m_Connection_16;
	// System.Byte[] UnityEngine.Networking.NetworkClient::m_MsgBuffer
	ByteU5BU5D_t_1238178395_0* ___m_MsgBuffer_17;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkClient::m_MsgReader
	NetworkReader_t1995447500_0 * ___m_MsgReader_18;
	// UnityEngine.Networking.NetworkClient/ConnectState UnityEngine.Networking.NetworkClient::m_AsyncConnect
	int32_t ___m_AsyncConnect_19;
	// System.String UnityEngine.Networking.NetworkClient::m_RequestedServerHost
	String_t* ___m_RequestedServerHost_20;
};
struct NetworkClient_t1572714452_0_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::s_Clients
	List_1_t_1172906260_0 * ___s_Clients_2;
	// System.Boolean UnityEngine.Networking.NetworkClient::s_IsActive
	bool ___s_IsActive_3;
	// UnityEngine.Networking.NetworkSystem.CRCMessage UnityEngine.Networking.NetworkClient::s_CRCMessage
	CRCMessage_t_1780099799_0 * ___s_CRCMessage_14;
};
