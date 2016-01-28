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

// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.MessageBase::.ctor()
extern "C"  void MessageBase__ctor_m462418371_0 (MessageBase_t_1858254221_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.MessageBase::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void MessageBase_Deserialize_m90189234_0 (MessageBase_t_1858254221_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void MessageBase_Serialize_m520702627_0 (MessageBase_t_1858254221_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
