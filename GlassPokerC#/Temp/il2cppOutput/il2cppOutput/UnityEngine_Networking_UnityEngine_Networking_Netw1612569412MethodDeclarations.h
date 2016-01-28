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

// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t1612569412_0;
// System.Object
struct Object_t;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CmdDelegate__ctor_m_1535208234_0 (CmdDelegate_t1612569412_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::Invoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader)
extern "C"  void CmdDelegate_Invoke_m_337594104_0 (CmdDelegate_t1612569412_0 * __this, NetworkBehaviour_t435842068_0 * ___obj, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CmdDelegate_t1612569412_0(Il2CppObject* delegate, NetworkBehaviour_t435842068_0 * ___obj, NetworkReader_t1995447500_0 * ___reader);
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/CmdDelegate::BeginInvoke(UnityEngine.Networking.NetworkBehaviour,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Object_t * CmdDelegate_BeginInvoke_m_1017482357_0 (CmdDelegate_t1612569412_0 * __this, NetworkBehaviour_t435842068_0 * ___obj, NetworkReader_t1995447500_0 * ___reader, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/CmdDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CmdDelegate_EndInvoke_m_1747328538_0 (CmdDelegate_t1612569412_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
