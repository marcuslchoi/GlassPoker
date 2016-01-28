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

// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t_2078304139_0;
// System.Object
struct Object_t;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientAuthorityCallback__ctor_m_967010303_0 (ClientAuthorityCallback_t_2078304139_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::Invoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void ClientAuthorityCallback_Invoke_m540939218_0 (ClientAuthorityCallback_t_2078304139_0 * __this, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, bool ___authorityState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ClientAuthorityCallback_t_2078304139_0(Il2CppObject* delegate, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, bool ___authorityState);
// System.IAsyncResult UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::BeginInvoke(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * ClientAuthorityCallback_BeginInvoke_m1868262143_0 (ClientAuthorityCallback_t_2078304139_0 * __this, NetworkConnection_t_437512601_0 * ___conn, NetworkIdentity_t_1494067577_0 * ___uv, bool ___authorityState, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ClientAuthorityCallback_EndInvoke_m922104465_0 (ClientAuthorityCallback_t_2078304139_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
