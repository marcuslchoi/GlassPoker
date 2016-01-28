#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelPacket>
struct List_1_t_1953066662_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Channe23527334.h"

// UnityEngine.Networking.ChannelBuffer
struct  ChannelBuffer_t_358725794_0  : public Object_t
{
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ChannelBuffer::m_Connection
	NetworkConnection_t_437512601_0 * ___m_Connection_3;
	// UnityEngine.Networking.ChannelPacket UnityEngine.Networking.ChannelBuffer::m_CurrentPacket
	ChannelPacket_t23527334_0  ___m_CurrentPacket_4;
	// System.Single UnityEngine.Networking.ChannelBuffer::m_LastFlushTime
	float ___m_LastFlushTime_5;
	// System.Byte UnityEngine.Networking.ChannelBuffer::m_ChannelId
	uint8_t ___m_ChannelId_6;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::m_MaxPacketSize
	int32_t ___m_MaxPacketSize_7;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_IsReliable
	bool ___m_IsReliable_8;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_IsBroken
	bool ___m_IsBroken_9;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::m_MaxPendingPacketCount
	int32_t ___m_MaxPendingPacketCount_10;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelPacket> UnityEngine.Networking.ChannelBuffer::m_PendingPackets
	List_1_t_1953066662_0 * ___m_PendingPackets_11;
	// System.Single UnityEngine.Networking.ChannelBuffer::maxDelay
	float ___maxDelay_14;
	// System.Single UnityEngine.Networking.ChannelBuffer::m_LastBufferedMessageCountTimer
	float ___m_LastBufferedMessageCountTimer_15;
	// System.Boolean UnityEngine.Networking.ChannelBuffer::m_Disposed
	bool ___m_Disposed_17;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numMsgsOut>k__BackingField
	int32_t ___U3CnumMsgsOutU3Ek__BackingField_18;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBufferedMsgsOut>k__BackingField
	int32_t ___U3CnumBufferedMsgsOutU3Ek__BackingField_19;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBytesOut>k__BackingField
	int32_t ___U3CnumBytesOutU3Ek__BackingField_20;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numMsgsIn>k__BackingField
	int32_t ___U3CnumMsgsInU3Ek__BackingField_21;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBytesIn>k__BackingField
	int32_t ___U3CnumBytesInU3Ek__BackingField_22;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<numBufferedPerSecond>k__BackingField
	int32_t ___U3CnumBufferedPerSecondU3Ek__BackingField_23;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::<lastBufferedPerSecond>k__BackingField
	int32_t ___U3ClastBufferedPerSecondU3Ek__BackingField_24;
};
struct ChannelBuffer_t_358725794_0_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelPacket> UnityEngine.Networking.ChannelBuffer::s_FreePackets
	List_1_t_1953066662_0 * ___s_FreePackets_12;
	// System.Int32 UnityEngine.Networking.ChannelBuffer::pendingPacketCount
	int32_t ___pendingPacketCount_13;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.ChannelBuffer::s_SendWriter
	NetworkWriter_t_2144114564_0 * ___s_SendWriter_16;
};
