#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t_802455554_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t1872459683_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID1028970518.h"

// UnityEngine.Networking.Utility
struct  Utility_t_2109447205_0  : public Object_t
{
};
struct Utility_t_2109447205_0_StaticFields{
	// System.Random UnityEngine.Networking.Utility::s_randomGenerator
	Random_t_802455554_0 * ___s_randomGenerator_0;
	// System.Boolean UnityEngine.Networking.Utility::s_useRandomSourceID
	bool ___s_useRandomSourceID_1;
	// System.Int32 UnityEngine.Networking.Utility::s_randomSourceComponent
	int32_t ___s_randomSourceComponent_2;
	// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::s_programAppID
	uint64_t ___s_programAppID_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken> UnityEngine.Networking.Utility::s_dictTokens
	Dictionary_2_t1872459683_0 * ___s_dictTokens_4;
};
