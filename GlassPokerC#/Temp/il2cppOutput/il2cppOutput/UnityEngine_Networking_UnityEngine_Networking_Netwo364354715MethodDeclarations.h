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

// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t364354715_0;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2024600396_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ServerSimpleWrapper__ctor_m490437485_0 (ServerSimpleWrapper_t364354715_0 * __this, NetworkServer_t2024600396_0 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnectError(System.Int32,System.Byte)
extern "C"  void ServerSimpleWrapper_OnConnectError_m478327804_0 (ServerSimpleWrapper_t364354715_0 * __this, int32_t ___connectionId, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void ServerSimpleWrapper_OnDataError_m_745507820_0 (ServerSimpleWrapper_t364354715_0 * __this, NetworkConnection_t_437512601_0 * ___conn, uint8_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnConnected_m473470010_0 (ServerSimpleWrapper_t364354715_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnDisconnected_m_390884838_0 (ServerSimpleWrapper_t364354715_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void ServerSimpleWrapper_OnData_m305466345_0 (ServerSimpleWrapper_t364354715_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
