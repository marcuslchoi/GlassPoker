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

// UnityEngine.Networking.ConnectionArray
struct ConnectionArray_t619959190_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2007138745_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.ConnectionArray::.ctor()
extern "C"  void ConnectionArray__ctor_m119447168_0 (ConnectionArray_t619959190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_localConnections()
extern "C"  List_1_t2007138745_0 * ConnectionArray_get_localConnections_m_57300237_0 (ConnectionArray_t619959190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_connections()
extern "C"  List_1_t2007138745_0 * ConnectionArray_get_connections_m2138568846_0 (ConnectionArray_t619959190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_Count()
extern "C"  int32_t ConnectionArray_get_Count_m1996770716_0 (ConnectionArray_t619959190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_LocalIndex()
extern "C"  int32_t ConnectionArray_get_LocalIndex_m1501989788_0 (ConnectionArray_t619959190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::Add(System.Int32,UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_Add_m_715178315_0 (ConnectionArray_t619959190_0 * __this, int32_t ___connId, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::Get(System.Int32)
extern "C"  NetworkConnection_t_437512601_0 * ConnectionArray_Get_m313525591_0 (ConnectionArray_t619959190_0 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::GetUnsafe(System.Int32)
extern "C"  NetworkConnection_t_437512601_0 * ConnectionArray_GetUnsafe_m_156172067_0 (ConnectionArray_t619959190_0 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionArray::Remove(System.Int32)
extern "C"  void ConnectionArray_Remove_m_263427367_0 (ConnectionArray_t619959190_0 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::AddLocal(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_AddLocal_m_219855795_0 (ConnectionArray_t619959190_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionArray::ContainsPlayer(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection&)
extern "C"  bool ConnectionArray_ContainsPlayer_m_1064278983_0 (ConnectionArray_t619959190_0 * __this, GameObject_t_184308134_0 * ___player, NetworkConnection_t_437512601_0 ** ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
