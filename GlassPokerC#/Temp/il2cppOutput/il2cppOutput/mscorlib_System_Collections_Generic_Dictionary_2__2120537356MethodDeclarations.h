﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>
struct Transform_1_t_2120537356_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__1009954996.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1434451541.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2021312518_0_gshared (Transform_1_t_2120537356_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2021312518_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_2120537356_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2021312518_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t_1009954996_0  Transform_1_Invoke_m1121246258_0_gshared (Transform_1_t_2120537356_0 * __this, Object_t * ___key, NetworkBroadcastResult_t1434451541_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1121246258_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t_1009954996_0  (*) (Transform_1_t_2120537356_0 *, Object_t *, NetworkBroadcastResult_t1434451541_0 , const MethodInfo*))Transform_1_Invoke_m1121246258_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_1299956771_0_gshared (Transform_1_t_2120537356_0 * __this, Object_t * ___key, NetworkBroadcastResult_t1434451541_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_1299956771_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_2120537356_0 *, Object_t *, NetworkBroadcastResult_t1434451541_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_1299956771_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Networking.NetworkBroadcastResult>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t_1009954996_0  Transform_1_EndInvoke_m_1507421928_0_gshared (Transform_1_t_2120537356_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_1507421928_0(__this, ___result, method) ((  KeyValuePair_2_t_1009954996_0  (*) (Transform_1_t_2120537356_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_1507421928_0_gshared)(__this, ___result, method)
