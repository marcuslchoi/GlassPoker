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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t999614132_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2064968959.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m951636736_0_gshared (Transform_1_t999614132_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m951636736_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t999614132_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m951636736_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_Invoke_m_1673048900_0_gshared (Transform_1_t999614132_0 * __this, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_1673048900_0(__this, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t999614132_0 *, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Transform_1_Invoke_m_1673048900_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1740480411_0_gshared (Transform_1_t999614132_0 * __this, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1740480411_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t999614132_0 *, Object_t *, KeyValuePair_2_t_2064968959_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1740480411_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_EndInvoke_m798049870_0_gshared (Transform_1_t999614132_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m798049870_0(__this, ___result, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t999614132_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m798049870_0_gshared)(__this, ___result, method)
