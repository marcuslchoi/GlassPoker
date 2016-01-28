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

// UnityEngine.Networking.ChannelBuffer
struct ChannelBuffer_t_358725794_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Channel9255827.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Channe23527334.h"

// System.Void UnityEngine.Networking.ChannelBuffer::.ctor(UnityEngine.Networking.NetworkConnection,System.Int32,System.Byte,System.Boolean)
extern "C"  void ChannelBuffer__ctor_m_1904229808_0 (ChannelBuffer_t_358725794_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___bufferSize, uint8_t ___cid, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::.cctor()
extern "C"  void ChannelBuffer__cctor_m_353479115_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numMsgsOut()
extern "C"  int32_t ChannelBuffer_get_numMsgsOut_m_1404318445_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numMsgsOut(System.Int32)
extern "C"  void ChannelBuffer_set_numMsgsOut_m354488432_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBufferedMsgsOut()
extern "C"  int32_t ChannelBuffer_get_numBufferedMsgsOut_m_30453516_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBufferedMsgsOut(System.Int32)
extern "C"  void ChannelBuffer_set_numBufferedMsgsOut_m_1950646575_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBytesOut()
extern "C"  int32_t ChannelBuffer_get_numBytesOut_m1959864238_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBytesOut(System.Int32)
extern "C"  void ChannelBuffer_set_numBytesOut_m2101577459_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numMsgsIn()
extern "C"  int32_t ChannelBuffer_get_numMsgsIn_m_1846603742_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numMsgsIn(System.Int32)
extern "C"  void ChannelBuffer_set_numMsgsIn_m_2123395481_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBytesIn()
extern "C"  int32_t ChannelBuffer_get_numBytesIn_m1448506919_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBytesIn(System.Int32)
extern "C"  void ChannelBuffer_set_numBytesIn_m565361540_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBufferedPerSecond()
extern "C"  int32_t ChannelBuffer_get_numBufferedPerSecond_m1644171529_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_numBufferedPerSecond_m959730790_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_lastBufferedPerSecond()
extern "C"  int32_t ChannelBuffer_get_lastBufferedPerSecond_m_1955984575_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_lastBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_lastBufferedPerSecond_m_1400797946_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose()
extern "C"  void ChannelBuffer_Dispose_m_409554251_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose(System.Boolean)
extern "C"  void ChannelBuffer_Dispose_m58722156_0 (ChannelBuffer_t_358725794_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SetOption(UnityEngine.Networking.ChannelOption,System.Int32)
extern "C"  bool ChannelBuffer_SetOption_m_388730323_0 (ChannelBuffer_t_358725794_0 * __this, int32_t ___option, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::CheckInternalBuffer()
extern "C"  void ChannelBuffer_CheckInternalBuffer_m_894567397_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendWriter(UnityEngine.Networking.NetworkWriter)
extern "C"  bool ChannelBuffer_SendWriter_m1606199703_0 (ChannelBuffer_t_358725794_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ChannelBuffer_Send_m_44447612_0 (ChannelBuffer_t_358725794_0 * __this, int16_t ___msgType, MessageBase_t_1858254221_0 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendBytes(System.Byte[],System.Int32)
extern "C"  bool ChannelBuffer_SendBytes_m_1905594247_0 (ChannelBuffer_t_358725794_0 * __this, ByteU5BU5D_t_1238178395_0* ___bytes, int32_t ___bytesToSend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::QueuePacket()
extern "C"  void ChannelBuffer_QueuePacket_m_1287779185_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ChannelPacket UnityEngine.Networking.ChannelBuffer::AllocPacket()
extern "C"  ChannelPacket_t23527334_0  ChannelBuffer_AllocPacket_m_463809212_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::FreePacket(UnityEngine.Networking.ChannelPacket)
extern "C"  void ChannelBuffer_FreePacket_m1968246296_0 (Object_t * __this /* static, unused */, ChannelPacket_t23527334_0  ___packet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendInternalBuffer()
extern "C"  bool ChannelBuffer_SendInternalBuffer_m1269505055_0 (ChannelBuffer_t_358725794_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
