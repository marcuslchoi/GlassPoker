#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2007138745_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t2097057352_0;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t831174055_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.NetworkServerSimple
struct  NetworkServerSimple_t434202654_0  : public Object_t
{
	// System.Boolean UnityEngine.Networking.NetworkServerSimple::m_Initialized
	bool ___m_Initialized_0;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_ListenPort
	int32_t ___m_ListenPort_1;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_ServerHostId
	int32_t ___m_ServerHostId_2;
	// System.Int32 UnityEngine.Networking.NetworkServerSimple::m_RelaySlotId
	int32_t ___m_RelaySlotId_3;
	// System.Boolean UnityEngine.Networking.NetworkServerSimple::m_UseWebSockets
	bool ___m_UseWebSockets_4;
	// System.Byte[] UnityEngine.Networking.NetworkServerSimple::m_MsgBuffer
	ByteU5BU5D_t_1238178395_0* ___m_MsgBuffer_5;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkServerSimple::m_MsgReader
	NetworkReader_t1995447500_0 * ___m_MsgReader_6;
	// System.Type UnityEngine.Networking.NetworkServerSimple::m_NetworkConnectionClass
	Type_t * ___m_NetworkConnectionClass_7;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServerSimple::m_HostTopology
	HostTopology_t_147370200_0 * ___m_HostTopology_8;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::m_Connections
	List_1_t2007138745_0 * ___m_Connections_9;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServerSimple::m_ConnectionsReadOnly
	ReadOnlyCollection_1_t2097057352_0 * ___m_ConnectionsReadOnly_10;
	// UnityEngine.Networking.NetworkMessageHandlers UnityEngine.Networking.NetworkServerSimple::m_MessageHandlers
	NetworkMessageHandlers_t831174055_0 * ___m_MessageHandlers_11;
};
