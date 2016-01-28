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

// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t831174055_0;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t_291238575_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkMessageHandlers::.ctor()
extern "C"  void NetworkMessageHandlers__ctor_m_1181615479_0 (NetworkMessageHandlers_t831174055_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandlerSafe_m_1967658703_0 (NetworkMessageHandlers_t831174055_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandler_m_737956476_0 (NetworkMessageHandlers_t831174055_0 * __this, int16_t ___msgType, NetworkMessageDelegate_t1648427203_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::UnregisterHandler(System.Int16)
extern "C"  void NetworkMessageHandlers_UnregisterHandler_m1725385056_0 (NetworkMessageHandlers_t831174055_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkMessageHandlers::GetHandler(System.Int16)
extern "C"  NetworkMessageDelegate_t1648427203_0 * NetworkMessageHandlers_GetHandler_m1021852712_0 (NetworkMessageHandlers_t831174055_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkMessageHandlers::GetHandlers()
extern "C"  Dictionary_2_t_291238575_0 * NetworkMessageHandlers_GetHandlers_m_1838222838_0 (NetworkMessageHandlers_t831174055_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::ClearMessageHandlers()
extern "C"  void NetworkMessageHandlers_ClearMessageHandlers_m590738014_0 (NetworkMessageHandlers_t831174055_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
