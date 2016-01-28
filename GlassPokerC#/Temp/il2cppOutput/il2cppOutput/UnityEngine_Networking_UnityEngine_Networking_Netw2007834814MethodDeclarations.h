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

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t2007834814_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::.ctor(System.Object,System.IntPtr)
extern "C"  void ClientMoveCallback3D__ctor_m_1168236790_0 (ClientMoveCallback3D_t2007834814_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::Invoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  bool ClientMoveCallback3D_Invoke_m1369516815_0 (ClientMoveCallback3D_t2007834814_0 * __this, Vector3_t_725341337_0 * ___position, Vector3_t_725341337_0 * ___velocity, Quaternion_t1989680039_0 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_ClientMoveCallback3D_t2007834814_0(Il2CppObject* delegate, Vector3_t_725341337_0 * ___position, Vector3_t_725341337_0 * ___velocity, Quaternion_t1989680039_0 * ___rotation);
// System.IAsyncResult UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.AsyncCallback,System.Object)
extern "C"  Object_t * ClientMoveCallback3D_BeginInvoke_m_832599868_0 (ClientMoveCallback3D_t2007834814_0 * __this, Vector3_t_725341337_0 * ___position, Vector3_t_725341337_0 * ___velocity, Quaternion_t1989680039_0 * ___rotation, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D::EndInvoke(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.IAsyncResult)
extern "C"  bool ClientMoveCallback3D_EndInvoke_m_1805032477_0 (ClientMoveCallback3D_t2007834814_0 * __this, Vector3_t_725341337_0 * ___position, Vector3_t_725341337_0 * ___velocity, Quaternion_t1989680039_0 * ___rotation, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
