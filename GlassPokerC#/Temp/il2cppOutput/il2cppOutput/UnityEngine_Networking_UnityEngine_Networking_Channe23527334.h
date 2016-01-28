#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_ValueType_103494864.h"

// UnityEngine.Networking.ChannelPacket
struct  ChannelPacket_t23527334_0 
{
	// System.Int32 UnityEngine.Networking.ChannelPacket::m_Position
	int32_t ___m_Position_0;
	// System.Byte[] UnityEngine.Networking.ChannelPacket::m_Buffer
	ByteU5BU5D_t_1238178395_0* ___m_Buffer_1;
	// System.Boolean UnityEngine.Networking.ChannelPacket::m_IsReliable
	bool ___m_IsReliable_2;
};
// Native definition for marshalling of: UnityEngine.Networking.ChannelPacket
struct ChannelPacket_t23527334_0_marshaled
{
	int32_t ___m_Position_0;
	uint8_t* ___m_Buffer_1;
	int32_t ___m_IsReliable_2;
};
