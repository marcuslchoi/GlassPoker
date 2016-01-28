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

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Channe23527334.h"

// System.Void UnityEngine.Networking.ChannelPacket::.ctor(System.Int32,System.Boolean)
extern "C"  void ChannelPacket__ctor_m_245606692_0 (ChannelPacket_t23527334_0 * __this, int32_t ___packetSize, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Reset()
extern "C"  void ChannelPacket_Reset_m1459324893_0 (ChannelPacket_t23527334_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::IsEmpty()
extern "C"  bool ChannelPacket_IsEmpty_m844917123_0 (ChannelPacket_t23527334_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Write(System.Byte[],System.Int32)
extern "C"  void ChannelPacket_Write_m370199515_0 (ChannelPacket_t23527334_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::HasSpace(System.Int32)
extern "C"  bool ChannelPacket_HasSpace_m_744244801_0 (ChannelPacket_t23527334_0 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::SendToTransport(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  bool ChannelPacket_SendToTransport_m_558630438_0 (ChannelPacket_t23527334_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ChannelPacket_t23527334_0_marshal(const ChannelPacket_t23527334_0& unmarshaled, ChannelPacket_t23527334_0_marshaled& marshaled);
extern "C" void ChannelPacket_t23527334_0_marshal_back(const ChannelPacket_t23527334_0_marshaled& marshaled, ChannelPacket_t23527334_0& unmarshaled);
extern "C" void ChannelPacket_t23527334_0_marshal_cleanup(ChannelPacket_t23527334_0_marshaled& marshaled);
