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

// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t723981840_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
extern "C"  void EmptyMessage__ctor_m1408520640_0 (EmptyMessage_t723981840_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void EmptyMessage_Deserialize_m1518879087_0 (EmptyMessage_t723981840_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void EmptyMessage_Serialize_m_1918031456_0 (EmptyMessage_t723981840_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
