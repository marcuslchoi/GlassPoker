#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.ChannelBuffer[]
struct ChannelBufferU5BU5D_t_1138101440_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t139052538_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t1542048493_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t_291238575_0;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t831174055_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t956281371_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t_1478993424_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.NetworkConnection
struct  NetworkConnection_t_437512601_0  : public Object_t
{
	// UnityEngine.Networking.ChannelBuffer[] UnityEngine.Networking.NetworkConnection::m_Channels
	ChannelBufferU5BU5D_t_1138101440_0* ___m_Channels_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::m_PlayerControllers
	List_1_t139052538_0 * ___m_PlayerControllers_2;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_NetMsg
	NetworkMessage_t1603845406_0 * ___m_NetMsg_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::m_VisList
	HashSet_1_t1542048493_0 * ___m_VisList_4;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkConnection::m_Writer
	NetworkWriter_t_2144114564_0 * ___m_Writer_5;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkConnection::m_MessageHandlersDict
	Dictionary_2_t_291238575_0 * ___m_MessageHandlersDict_6;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkConnection::m_MessageHandlers
	NetworkMessageHandlers_t831174055_0 * ___m_MessageHandlers_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::m_ClientOwnedObjects
	HashSet_1_t956281371_0 * ___m_ClientOwnedObjects_8;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.NetworkConnection::m_MessageInfo
	NetworkMessage_t1603845406_0 * ___m_MessageInfo_9;
	// System.Int32 UnityEngine.Networking.NetworkConnection::hostId
	int32_t ___hostId_10;
	// System.Int32 UnityEngine.Networking.NetworkConnection::connectionId
	int32_t ___connectionId_11;
	// System.Boolean UnityEngine.Networking.NetworkConnection::isReady
	bool ___isReady_12;
	// System.String UnityEngine.Networking.NetworkConnection::address
	String_t* ___address_13;
	// System.Single UnityEngine.Networking.NetworkConnection::lastMessageTime
	float ___lastMessageTime_14;
	// System.Boolean UnityEngine.Networking.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_15;
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::m_PacketStats
	Dictionary_2_t_1478993424_0 * ___m_PacketStats_16;
	// System.Boolean UnityEngine.Networking.NetworkConnection::m_Disposed
	bool ___m_Disposed_17;
};
