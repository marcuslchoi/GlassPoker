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

// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t1068699893_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::.ctor()
extern "C"  void ErrorMessage__ctor_m1777584251_0 (ErrorMessage_t1068699893_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ErrorMessage_Deserialize_m564141674_0 (ErrorMessage_t1068699893_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ErrorMessage_Serialize_m92146011_0 (ErrorMessage_t1068699893_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
