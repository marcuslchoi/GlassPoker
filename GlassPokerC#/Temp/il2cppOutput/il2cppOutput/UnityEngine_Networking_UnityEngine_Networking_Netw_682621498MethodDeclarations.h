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

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t_682621498_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
extern "C"  void ReconnectMessage__ctor_m613236810_0 (ReconnectMessage_t_682621498_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ReconnectMessage_Deserialize_m1465738105_0 (ReconnectMessage_t_682621498_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ReconnectMessage_Serialize_m_1667807702_0 (ReconnectMessage_t_682621498_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
