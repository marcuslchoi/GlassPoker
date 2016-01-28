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

// System.Net.Dns/GetHostAddressesCallback
struct GetHostAddressesCallback_t_97474811_0;
// System.Object
struct Object_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t296217_0;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_String_756155572.h"

// System.Void System.Net.Dns/GetHostAddressesCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetHostAddressesCallback__ctor_m123273879_0 (GetHostAddressesCallback_t_97474811_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::Invoke(System.String)
extern "C"  IPAddressU5BU5D_t296217_0* GetHostAddressesCallback_Invoke_m_1151036079_0 (GetHostAddressesCallback_t_97474811_0 * __this, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPAddressU5BU5D_t296217_0* pinvoke_delegate_wrapper_GetHostAddressesCallback_t_97474811_0(Il2CppObject* delegate, String_t* ___hostName);
// System.IAsyncResult System.Net.Dns/GetHostAddressesCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Object_t * GetHostAddressesCallback_BeginInvoke_m_695345666_0 (GetHostAddressesCallback_t_97474811_0 * __this, String_t* ___hostName, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::EndInvoke(System.IAsyncResult)
extern "C"  IPAddressU5BU5D_t296217_0* GetHostAddressesCallback_EndInvoke_m_751855673_0 (GetHostAddressesCallback_t_97474811_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
