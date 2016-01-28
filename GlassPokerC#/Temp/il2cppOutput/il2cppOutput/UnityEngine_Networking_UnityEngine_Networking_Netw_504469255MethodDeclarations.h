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

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t_504469255_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::.ctor()
extern "C"  void AnimationMessage__ctor_m1024444023_0 (AnimationMessage_t_504469255_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationMessage_Deserialize_m970514790_0 (AnimationMessage_t_504469255_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationMessage_Serialize_m432233303_0 (AnimationMessage_t_504469255_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
