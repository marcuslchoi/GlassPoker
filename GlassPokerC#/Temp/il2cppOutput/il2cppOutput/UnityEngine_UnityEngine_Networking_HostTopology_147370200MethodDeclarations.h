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

// UnityEngine.Networking.HostTopology
struct HostTopology_t_147370200_0;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  void HostTopology__ctor_m1444034768_0 (HostTopology_t_147370200_0 * __this, ConnectionConfig_t461326897_0 * ___defaultConfig, int32_t ___maxDefaultConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C"  void HostTopology__ctor_m1912184936_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t461326897_0 * HostTopology_get_DefaultConfig_m_760288208_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C"  int32_t HostTopology_get_MaxDefaultConnections_m1407421045_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C"  int32_t HostTopology_get_SpecialConnectionConfigsCount_m_1054184814_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C"  ConnectionConfig_t461326897_0 * HostTopology_GetSpecialConnectionConfig_m_288759008_0 (HostTopology_t_147370200_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C"  uint16_t HostTopology_get_ReceivedMessagePoolSize_m_80716619_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C"  uint16_t HostTopology_get_SentMessagePoolSize_m_1065354146_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C"  float HostTopology_get_MessagePoolSizeGrowthFactor_m_1706858205_0 (HostTopology_t_147370200_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
