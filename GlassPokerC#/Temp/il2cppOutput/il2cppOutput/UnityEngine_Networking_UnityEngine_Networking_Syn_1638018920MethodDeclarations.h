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

// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t_1638018920_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync_578466740.h"

// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void SyncListChanged__ctor_m1015208804_0_gshared (SyncListChanged_t_1638018920_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define SyncListChanged__ctor_m1015208804_0(__this, ___object, ___method, method) ((  void (*) (SyncListChanged_t_1638018920_0 *, Object_t *, IntPtr_t, const MethodInfo*))SyncListChanged__ctor_m1015208804_0_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>::Invoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncListChanged_Invoke_m_1613435462_0_gshared (SyncListChanged_t_1638018920_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncListChanged_Invoke_m_1613435462_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncListChanged_t_1638018920_0 *, int32_t, int32_t, const MethodInfo*))SyncListChanged_Invoke_m_1613435462_0_gshared)(__this, ___op, ___itemIndex, method)
// System.IAsyncResult UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>::BeginInvoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SyncListChanged_BeginInvoke_m278976723_0_gshared (SyncListChanged_t_1638018920_0 * __this, int32_t ___op, int32_t ___itemIndex, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define SyncListChanged_BeginInvoke_m278976723_0(__this, ___op, ___itemIndex, ___callback, ___object, method) ((  Object_t * (*) (SyncListChanged_t_1638018920_0 *, int32_t, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))SyncListChanged_BeginInvoke_m278976723_0_gshared)(__this, ___op, ___itemIndex, ___callback, ___object, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void SyncListChanged_EndInvoke_m355704692_0_gshared (SyncListChanged_t_1638018920_0 * __this, Object_t * ___result, const MethodInfo* method);
#define SyncListChanged_EndInvoke_m355704692_0(__this, ___result, method) ((  void (*) (SyncListChanged_t_1638018920_0 *, Object_t *, const MethodInfo*))SyncListChanged_EndInvoke_m355704692_0_gshared)(__this, ___result, method)
