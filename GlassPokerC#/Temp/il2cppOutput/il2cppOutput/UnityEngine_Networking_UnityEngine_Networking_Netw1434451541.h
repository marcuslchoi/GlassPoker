#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_ValueType_103494864.h"

// UnityEngine.Networking.NetworkBroadcastResult
struct  NetworkBroadcastResult_t1434451541_0 
{
	// System.String UnityEngine.Networking.NetworkBroadcastResult::serverAddress
	String_t* ___serverAddress_0;
	// System.Byte[] UnityEngine.Networking.NetworkBroadcastResult::broadcastData
	ByteU5BU5D_t_1238178395_0* ___broadcastData_1;
};
// Native definition for marshalling of: UnityEngine.Networking.NetworkBroadcastResult
struct NetworkBroadcastResult_t1434451541_0_marshaled
{
	char* ___serverAddress_0;
	uint8_t* ___broadcastData_1;
};
