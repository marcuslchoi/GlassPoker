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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t2070618241_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::.ctor()
extern "C"  void ObjectSpawnMessage__ctor_m2022213807_0 (ObjectSpawnMessage_t2070618241_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnMessage_Deserialize_m1536122270_0 (ObjectSpawnMessage_t2070618241_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnMessage_Serialize_m_1596226161_0 (ObjectSpawnMessage_t2070618241_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
