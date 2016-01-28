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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t2007834783_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback2D__ctor_m1493926507_0 (ClientMoveCallback2D_t2007834783_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::Invoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&)
extern "C"  bool ClientMoveCallback2D_Invoke_m_1946794924_0 (ClientMoveCallback2D_t2007834783_0 * __this, Vector2_t_725341338_0 * ___position, Vector2_t_725341338_0 * ___velocity, float* ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_ClientMoveCallback2D_t2007834783_0(Il2CppObject* delegate, Vector2_t_725341338_0 * ___position, Vector2_t_725341338_0 * ___velocity, float* ___rotation);
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::BeginInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.AsyncCallback,System.Object)
extern "C"  Object_t * ClientMoveCallback2D_BeginInvoke_m_2074238177_0 (ClientMoveCallback2D_t2007834783_0 * __this, Vector2_t_725341338_0 * ___position, Vector2_t_725341338_0 * ___velocity, float* ___rotation, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D::EndInvoke(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback2D_EndInvoke_m433115000_0 (ClientMoveCallback2D_t2007834783_0 * __this, Vector2_t_725341338_0 * ___position, Vector2_t_725341338_0 * ___velocity, float* ___rotation, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
