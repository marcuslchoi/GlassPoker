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

// UnityEngine.Networking.NetworkBehaviour/EventDelegate
struct EventDelegate_t416835428_0;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t_1016062538_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate__ctor_m_1439143882_0 (EventDelegate_t416835428_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::Invoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader)
extern "C"  void EventDelegate_Invoke_m185017568_0 (EventDelegate_t416835428_0 * __this, List_1_t_1016062538_0 * ___targets, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/EventDelegate::BeginInvoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Object_t * EventDelegate_BeginInvoke_m_772802415_0 (EventDelegate_t416835428_0 * __this, List_1_t_1016062538_0 * ___targets, NetworkReader_t1995447500_0 * ___reader, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_EndInvoke_m658793798_0 (EventDelegate_t416835428_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
