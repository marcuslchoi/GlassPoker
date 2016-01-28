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

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t_545914471_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_QosType_1499104930.h"

// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C"  void ConnectionConfig__ctor_m_850710273_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m921396976_0 (ConnectionConfig_t461326897_0 * __this, ConnectionConfig_t461326897_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m_1205405068_0 (Object_t * __this /* static, unused */, ConnectionConfig_t461326897_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m1802127970_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C"  uint16_t ConnectionConfig_get_FragmentSize_m_975991766_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C"  uint32_t ConnectionConfig_get_ResendTimeout_m1905474613_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C"  uint32_t ConnectionConfig_get_DisconnectTimeout_m248911348_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C"  uint32_t ConnectionConfig_get_ConnectTimeout_m_2133330422_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C"  uint32_t ConnectionConfig_get_MinUpdateTimeout_m702701529_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfig_set_MinUpdateTimeout_m907216114_0 (ConnectionConfig_t461326897_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C"  uint32_t ConnectionConfig_get_PingTimeout_m968482910_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C"  uint32_t ConnectionConfig_get_ReducedPingTimeout_m_411477404_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C"  uint32_t ConnectionConfig_get_AllCostTimeout_m2006970982_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C"  uint8_t ConnectionConfig_get_NetworkDropThreshold_m_1546524144_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C"  uint8_t ConnectionConfig_get_OverflowDropThreshold_m2018655770_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C"  uint8_t ConnectionConfig_get_MaxConnectionAttempt_m1132259629_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C"  uint32_t ConnectionConfig_get_AckDelay_m1369416749_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m_745630354_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m1507604260_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C"  uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m_1490619664_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_IsAcksLong()
extern "C"  bool ConnectionConfig_get_IsAcksLong_m1409954680_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C"  bool ConnectionConfig_get_UsePlatformSpecificProtocols_m_604369449_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfig_set_UsePlatformSpecificProtocols_m371961256_0 (ConnectionConfig_t461326897_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C"  int32_t ConnectionConfig_get_ChannelCount_m_449590086_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfig_AddChannel_m_1368879825_0 (ConnectionConfig_t461326897_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C"  int32_t ConnectionConfig_GetChannel_m_1562827620_0 (ConnectionConfig_t461326897_0 * __this, uint8_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C"  List_1_t_545914471_0 * ConnectionConfig_get_Channels_m814037302_0 (ConnectionConfig_t461326897_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
