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

// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t392749659_0;
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
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SpawnDelegate__ctor_m_1987728089_0 (SpawnDelegate_t392749659_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
extern "C"  GameObject_t_184308134_0 * SpawnDelegate_Invoke_m1159691543_0 (SpawnDelegate_t392749659_0 * __this, Vector3_t_725341337_0  ___position, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" GameObject_t_184308134_0 * pinvoke_delegate_wrapper_SpawnDelegate_t392749659_0(Il2CppObject* delegate, Vector3_t_725341337_0  ___position, NetworkHash128_t1346402176_0  ___assetId);
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
extern "C"  Object_t * SpawnDelegate_BeginInvoke_m287551329_0 (SpawnDelegate_t392749659_0 * __this, Vector3_t_725341337_0  ___position, NetworkHash128_t1346402176_0  ___assetId, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
extern "C"  GameObject_t_184308134_0 * SpawnDelegate_EndInvoke_m1564502918_0 (SpawnDelegate_t392749659_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
