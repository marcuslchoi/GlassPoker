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

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t_1378625369_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ResponseDelegate_1__ctor_m100065721_0_gshared (ResponseDelegate_1_t_1378625369_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m100065721_0(__this, ___object, ___method, method) ((  void (*) (ResponseDelegate_1_t_1378625369_0 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m100065721_0_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C"  void ResponseDelegate_1_Invoke_m_1435325333_0_gshared (ResponseDelegate_1_t_1378625369_0 * __this, Object_t * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m_1435325333_0(__this, ___response, method) ((  void (*) (ResponseDelegate_1_t_1378625369_0 *, Object_t *, const MethodInfo*))ResponseDelegate_1_Invoke_m_1435325333_0_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * ResponseDelegate_1_BeginInvoke_m1325125056_0_gshared (ResponseDelegate_1_t_1378625369_0 * __this, Object_t * ___response, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m1325125056_0(__this, ___response, ___callback, ___object, method) ((  Object_t * (*) (ResponseDelegate_1_t_1378625369_0 *, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m1325125056_0_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void ResponseDelegate_1_EndInvoke_m48896073_0_gshared (ResponseDelegate_1_t_1378625369_0 * __this, Object_t * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m48896073_0(__this, ___result, method) ((  void (*) (ResponseDelegate_1_t_1378625369_0 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m48896073_0_gshared)(__this, ___result, method)
