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
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1229412621_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"

// UnityEngine.Networking.Match.MatchInfo
struct  MatchInfo_t_629025159_0  : public Object_t
{
	// System.String UnityEngine.Networking.Match.MatchInfo::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_1;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Match.MatchInfo::<accessToken>k__BackingField
	NetworkAccessToken_t1229412621_0 * ___U3CaccessTokenU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Networking.Match.MatchInfo::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_5;
};
