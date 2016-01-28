#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Networking.NetworkBroadcastResult>
struct Dictionary_2_t524698538_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UnityEngine.Networking.NetworkDiscovery
struct  NetworkDiscovery_t720984327_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_BroadcastPort
	int32_t ___m_BroadcastPort_3;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_BroadcastKey
	int32_t ___m_BroadcastKey_4;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_BroadcastVersion
	int32_t ___m_BroadcastVersion_5;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_BroadcastSubVersion
	int32_t ___m_BroadcastSubVersion_6;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_BroadcastInterval
	int32_t ___m_BroadcastInterval_7;
	// System.Boolean UnityEngine.Networking.NetworkDiscovery::m_UseNetworkManager
	bool ___m_UseNetworkManager_8;
	// System.String UnityEngine.Networking.NetworkDiscovery::m_BroadcastData
	String_t* ___m_BroadcastData_9;
	// System.Boolean UnityEngine.Networking.NetworkDiscovery::m_ShowGUI
	bool ___m_ShowGUI_10;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_OffsetX
	int32_t ___m_OffsetX_11;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_OffsetY
	int32_t ___m_OffsetY_12;
	// System.Int32 UnityEngine.Networking.NetworkDiscovery::m_HostId
	int32_t ___m_HostId_13;
	// System.Boolean UnityEngine.Networking.NetworkDiscovery::m_Running
	bool ___m_Running_14;
	// System.Boolean UnityEngine.Networking.NetworkDiscovery::m_IsServer
	bool ___m_IsServer_15;
	// System.Boolean UnityEngine.Networking.NetworkDiscovery::m_IsClient
	bool ___m_IsClient_16;
	// System.Byte[] UnityEngine.Networking.NetworkDiscovery::m_MsgOutBuffer
	ByteU5BU5D_t_1238178395_0* ___m_MsgOutBuffer_17;
	// System.Byte[] UnityEngine.Networking.NetworkDiscovery::m_MsgInBuffer
	ByteU5BU5D_t_1238178395_0* ___m_MsgInBuffer_18;
	// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkDiscovery::m_DefaultTopology
	HostTopology_t_147370200_0 * ___m_DefaultTopology_19;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Networking.NetworkBroadcastResult> UnityEngine.Networking.NetworkDiscovery::m_BroadcastsReceived
	Dictionary_2_t524698538_0 * ___m_BroadcastsReceived_20;
};
