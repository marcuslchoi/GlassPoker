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

// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t514828959_0;
// UnityEngine.Networking.LocalClient
struct LocalClient_t_33198575_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.ULocalConnectionToClient::.ctor(UnityEngine.Networking.LocalClient)
extern "C"  void ULocalConnectionToClient__ctor_m_176471874_0 (ULocalConnectionToClient_t514828959_0 * __this, LocalClient_t_33198575_0 * ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LocalClient UnityEngine.Networking.ULocalConnectionToClient::get_localClient()
extern "C"  LocalClient_t_33198575_0 * ULocalConnectionToClient_get_localClient_m1682296960_0 (ULocalConnectionToClient_t514828959_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToClient_Send_m_693217671_0 (ULocalConnectionToClient_t514828959_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ULocalConnectionToClient_SendUnreliable_m2035572182_0 (ULocalConnectionToClient_t514828959_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendByChannel_m113431922_0 (ULocalConnectionToClient_t514828959_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendBytes_m_134170839_0 (ULocalConnectionToClient_t514828959_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ULocalConnectionToClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool ULocalConnectionToClient_SendWriter_m_2134324843_0 (ULocalConnectionToClient_t514828959_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToClient_GetStatsOut_m_1890969274_0 (ULocalConnectionToClient_t514828959_0 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ULocalConnectionToClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void ULocalConnectionToClient_GetStatsIn_m679247823_0 (ULocalConnectionToClient_t514828959_0 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
