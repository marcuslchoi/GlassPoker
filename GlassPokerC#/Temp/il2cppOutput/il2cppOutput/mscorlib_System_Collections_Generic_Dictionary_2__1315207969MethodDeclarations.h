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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>
struct Transform_1_t_1315207969_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m344022315_0_gshared (Transform_1_t_1315207969_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m344022315_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1315207969_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m344022315_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
extern "C"  uint64_t Transform_1_Invoke_m2102724849_0_gshared (Transform_1_t_1315207969_0 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2102724849_0(__this, ___key, ___value, method) ((  uint64_t (*) (Transform_1_t_1315207969_0 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m2102724849_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m798285264_0_gshared (Transform_1_t_1315207969_0 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m798285264_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1315207969_0 *, uint64_t, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m798285264_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
extern "C"  uint64_t Transform_1_EndInvoke_m563955449_0_gshared (Transform_1_t_1315207969_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m563955449_0(__this, ___result, method) ((  uint64_t (*) (Transform_1_t_1315207969_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m563955449_0_gshared)(__this, ___result, method)
