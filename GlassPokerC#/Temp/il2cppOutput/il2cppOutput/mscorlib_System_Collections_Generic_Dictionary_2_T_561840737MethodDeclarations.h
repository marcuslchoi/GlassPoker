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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>
struct Transform_1_t_561840737_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1522184811_0_gshared (Transform_1_t_561840737_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1522184811_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_561840737_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1522184811_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::Invoke(TKey,TValue)
extern "C"  int16_t Transform_1_Invoke_m_2109589327_0_gshared (Transform_1_t_561840737_0 * __this, int16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_2109589327_0(__this, ___key, ___value, method) ((  int16_t (*) (Transform_1_t_561840737_0 *, int16_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m_2109589327_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1782298256_0_gshared (Transform_1_t_561840737_0 * __this, int16_t ___key, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1782298256_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_561840737_0 *, int16_t, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1782298256_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int16,System.Object,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C"  int16_t Transform_1_EndInvoke_m422100793_0_gshared (Transform_1_t_561840737_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m422100793_0(__this, ___result, method) ((  int16_t (*) (Transform_1_t_561840737_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m422100793_0_gshared)(__this, ___result, method)
