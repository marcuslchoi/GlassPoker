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

// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t_2033860172_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL747486336.h"

// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void SyncListChanged__ctor_m749131270_0_gshared (SyncListChanged_t_2033860172_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define SyncListChanged__ctor_m749131270_0(__this, ___object, ___method, method) ((  void (*) (SyncListChanged_t_2033860172_0 *, Object_t *, IntPtr_t, const MethodInfo*))SyncListChanged__ctor_m749131270_0_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::Invoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncListChanged_Invoke_m867323736_0_gshared (SyncListChanged_t_2033860172_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncListChanged_Invoke_m867323736_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncListChanged_t_2033860172_0 *, int32_t, int32_t, const MethodInfo*))SyncListChanged_Invoke_m867323736_0_gshared)(__this, ___op, ___itemIndex, method)
// System.IAsyncResult UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::BeginInvoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SyncListChanged_BeginInvoke_m_1917767687_0_gshared (SyncListChanged_t_2033860172_0 * __this, int32_t ___op, int32_t ___itemIndex, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define SyncListChanged_BeginInvoke_m_1917767687_0(__this, ___op, ___itemIndex, ___callback, ___object, method) ((  Object_t * (*) (SyncListChanged_t_2033860172_0 *, int32_t, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))SyncListChanged_BeginInvoke_m_1917767687_0_gshared)(__this, ___op, ___itemIndex, ___callback, ___object, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void SyncListChanged_EndInvoke_m_1556989162_0_gshared (SyncListChanged_t_2033860172_0 * __this, Object_t * ___result, const MethodInfo* method);
#define SyncListChanged_EndInvoke_m_1556989162_0(__this, ___result, method) ((  void (*) (SyncListChanged_t_2033860172_0 *, Object_t *, const MethodInfo*))SyncListChanged_EndInvoke_m_1556989162_0_gshared)(__this, ___result, method)
