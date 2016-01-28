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

// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t1380441051_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::.ctor()
extern "C"  void AddPlayerMessage__ctor_m2114744789_0 (AddPlayerMessage_t1380441051_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AddPlayerMessage_Deserialize_m1658222404_0 (AddPlayerMessage_t1380441051_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AddPlayerMessage_Serialize_m1313394869_0 (AddPlayerMessage_t1380441051_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
