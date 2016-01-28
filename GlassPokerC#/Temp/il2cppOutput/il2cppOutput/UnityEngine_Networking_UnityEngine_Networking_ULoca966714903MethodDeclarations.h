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

// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t966714903_0;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t2024600396_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.ULocalConnectionToServer::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ULocalConnectionToServer__ctor_m1104830699_0 (ULocalConnectionToServer_t966714903_0 * __this, NetworkServer_t2024600396_0 * ___localServer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToServer_Send_m_244345855_0 (ULocalConnectionToServer_t966714903_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToServer_SendUnreliable_m1860981086_0 (ULocalConnectionToServer_t966714903_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendByChannel_m1721875706_0 (ULocalConnectionToServer_t966714903_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendBytes_m_2082756959_0 (ULocalConnectionToServer_t966714903_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToServer::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToServer_SendWriter_m1566048029_0 (ULocalConnectionToServer_t966714903_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToServer_GetStatsOut_m298130110_0 (ULocalConnectionToServer_t966714903_0 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToServer_GetStatsIn_m_1323529385_0 (ULocalConnectionToServer_t966714903_0 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
