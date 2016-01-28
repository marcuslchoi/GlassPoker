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

// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t2072556558_0;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_QosType_1499104930.h"

// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfigInternal__ctor_m_1381941299_0 (ConnectionConfigInternal_t2072556558_0 * __this, ConnectionConfig_t461326897_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C"  void ConnectionConfigInternal_InitWrapper_m_1626059453_0 (ConnectionConfigInternal_t2072556558_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfigInternal_AddChannel_m_108746612_0 (ConnectionConfigInternal_t2072556558_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitPacketSize_m_2136078023_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitFragmentSize_m_1738084687_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitResendTimeout_m936500068_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitDisconnectTimeout_m54179973_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitConnectTimeout_m_407321967_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitMinUpdateTimeout_m_2077578014_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitPingTimeout_m_1266084453_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitReducedPingTimeout_m1906190327_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitAllCostTimeout_m_360793163_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C"  void ConnectionConfigInternal_InitNetworkDropThreshold_m_1853378741_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C"  void ConnectionConfigInternal_InitOverflowDropThreshold_m666801953_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C"  void ConnectionConfigInternal_InitMaxConnectionAttempt_m913771534_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitAckDelay_m_229391858_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m1552603181_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m1875757385_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m576430589_0 (ConnectionConfigInternal_t2072556558_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitIsAcksLong(System.Boolean)
extern "C"  void ConnectionConfigInternal_InitIsAcksLong_m825252377_0 (ConnectionConfigInternal_t2072556558_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m333999032_0 (ConnectionConfigInternal_t2072556558_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C"  void ConnectionConfigInternal_Dispose_m1244853887_0 (ConnectionConfigInternal_t2072556558_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
extern "C"  void ConnectionConfigInternal_Finalize_m_1103471008_0 (ConnectionConfigInternal_t2072556558_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
