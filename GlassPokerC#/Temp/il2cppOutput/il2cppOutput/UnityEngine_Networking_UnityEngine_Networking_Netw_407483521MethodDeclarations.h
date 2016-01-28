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

// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t_407483521_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor()
extern "C"  void IntegerMessage__ctor_m209365489_0 (IntegerMessage_t_407483521_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor(System.Int32)
extern "C"  void IntegerMessage__ctor_m1152122306_0 (IntegerMessage_t_407483521_0 * __this, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void IntegerMessage_Deserialize_m1797704800_0 (IntegerMessage_t_407483521_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void IntegerMessage_Serialize_m_1046233903_0 (IntegerMessage_t_407483521_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
