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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>
struct Transform_1_t1253906464_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21061272202.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1822322144.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_1434979214_0_gshared (Transform_1_t1253906464_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_1434979214_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1253906464_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_1434979214_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1061272202_0  Transform_1_Invoke_m_295249466_0_gshared (Transform_1_t1253906464_0 * __this, int32_t ___key, ConnectionPendingPlayers_t_1822322144_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_295249466_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t1061272202_0  (*) (Transform_1_t1253906464_0 *, int32_t, ConnectionPendingPlayers_t_1822322144_0 , const MethodInfo*))Transform_1_Invoke_m_295249466_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_198182927_0_gshared (Transform_1_t1253906464_0 * __this, int32_t ___key, ConnectionPendingPlayers_t_1822322144_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_198182927_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1253906464_0 *, int32_t, ConnectionPendingPlayers_t_1822322144_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_198182927_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1061272202_0  Transform_1_EndInvoke_m_921170172_0_gshared (Transform_1_t1253906464_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_921170172_0(__this, ___result, method) ((  KeyValuePair_2_t1061272202_0  (*) (Transform_1_t1253906464_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_921170172_0_gshared)(__this, ___result, method)
