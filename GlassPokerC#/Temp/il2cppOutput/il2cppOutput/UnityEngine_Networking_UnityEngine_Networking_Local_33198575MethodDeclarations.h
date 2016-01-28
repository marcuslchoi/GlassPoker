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

// UnityEngine.Networking.LocalClient
struct LocalClient_t_33198575_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.LocalClient::.ctor()
extern "C"  void LocalClient__ctor_m1603469285_0 (LocalClient_t_33198575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Disconnect()
extern "C"  void LocalClient_Disconnect_m807991259_0 (LocalClient_t_33198575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InternalConnectLocalServer(System.Boolean)
extern "C"  void LocalClient_InternalConnectLocalServer_m1413322839_0 (LocalClient_t_33198575_0 * __this, bool ___generateConnectMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::Update()
extern "C"  void LocalClient_Update_m_105197624_0 (LocalClient_t_33198575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::AddLocalPlayer(UnityEngine.Networking.PlayerController)
extern "C"  void LocalClient_AddLocalPlayer_m_107226040_0 (LocalClient_t_33198575_0 * __this, PlayerController_t1101131586_0 * ___localPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Byte[],System.Int32)
extern "C"  void LocalClient_PostInternalMessage_m_423091653_0 (LocalClient_t_33198575_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::PostInternalMessage(System.Int16)
extern "C"  void LocalClient_PostInternalMessage_m899796888_0 (LocalClient_t_33198575_0 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::ProcessInternalMessages()
extern "C"  void LocalClient_ProcessInternalMessages_m_1959993797_0 (LocalClient_t_33198575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeHandlerOnClient(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  void LocalClient_InvokeHandlerOnClient_m1197928464_0 (LocalClient_t_33198575_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.LocalClient::InvokeBytesOnClient(System.Byte[],System.Int32)
extern "C"  void LocalClient_InvokeBytesOnClient_m19278958_0 (LocalClient_t_33198575_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
