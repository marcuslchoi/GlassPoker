#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t_678772473_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t343577157_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct Dictionary_2_t2079163440_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate>
struct Dictionary_2_t643572393_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.NetworkScene
struct  NetworkScene_t_488951965_0  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::m_LocalObjects
	Dictionary_2_t_678772473_0 * ___m_LocalObjects_0;
};
struct NetworkScene_t_488951965_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.NetworkScene::s_GuidToPrefab
	Dictionary_2_t343577157_0 * ___s_GuidToPrefab_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate> UnityEngine.Networking.NetworkScene::s_SpawnHandlers
	Dictionary_2_t2079163440_0 * ___s_SpawnHandlers_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate> UnityEngine.Networking.NetworkScene::s_UnspawnHandlers
	Dictionary_2_t643572393_0 * ___s_UnspawnHandlers_3;
};
