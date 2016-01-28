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

// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t1648427203_0;
// System.Object
struct Object_t;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.NetworkMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void NetworkMessageDelegate__ctor_m1044889877_0 (NetworkMessageDelegate_t1648427203_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::Invoke(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkMessageDelegate_Invoke_m632497895_0 (NetworkMessageDelegate_t1648427203_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NetworkMessageDelegate_t1648427203_0(Il2CppObject* delegate, NetworkMessage_t1603845406_0 * ___netMsg);
// System.IAsyncResult UnityEngine.Networking.NetworkMessageDelegate::BeginInvoke(UnityEngine.Networking.NetworkMessage,System.AsyncCallback,System.Object)
extern "C"  Object_t * NetworkMessageDelegate_BeginInvoke_m_1425098484_0 (NetworkMessageDelegate_t1648427203_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void NetworkMessageDelegate_EndInvoke_m_1721170523_0 (NetworkMessageDelegate_t1648427203_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
