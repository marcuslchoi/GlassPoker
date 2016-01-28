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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Object>
struct Transform_1_t_1414434023_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_936235867_0_gshared (Transform_1_t_1414434023_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_936235867_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1414434023_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_936235867_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Object_t * Transform_1_Invoke_m1156387639_0_gshared (Transform_1_t_1414434023_0 * __this, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1156387639_0(__this, ___key, ___value, method) ((  Object_t * (*) (Transform_1_t_1414434023_0 *, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Transform_1_Invoke_m1156387639_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m202804886_0_gshared (Transform_1_t_1414434023_0 * __this, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m202804886_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1414434023_0 *, NetworkSceneId_t_1731400738_0 , Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m202804886_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Transform_1_EndInvoke_m906900723_0_gshared (Transform_1_t_1414434023_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m906900723_0(__this, ___result, method) ((  Object_t * (*) (Transform_1_t_1414434023_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m906900723_0_gshared)(__this, ___result, method)
