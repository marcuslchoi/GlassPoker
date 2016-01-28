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

// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t_1364778622_0;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UnSpawnDelegate__ctor_m_249875058_0 (UnSpawnDelegate_t_1364778622_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void UnSpawnDelegate_Invoke_m1795565792_0 (UnSpawnDelegate_t_1364778622_0 * __this, GameObject_t_184308134_0 * ___spawned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnSpawnDelegate_t_1364778622_0(Il2CppObject* delegate, GameObject_t_184308134_0 * ___spawned);
// System.IAsyncResult UnityEngine.Networking.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * UnSpawnDelegate_BeginInvoke_m1541638251_0 (UnSpawnDelegate_t_1364778622_0 * __this, GameObject_t_184308134_0 * ___spawned, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UnSpawnDelegate_EndInvoke_m93560478_0 (UnSpawnDelegate_t_1364778622_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
