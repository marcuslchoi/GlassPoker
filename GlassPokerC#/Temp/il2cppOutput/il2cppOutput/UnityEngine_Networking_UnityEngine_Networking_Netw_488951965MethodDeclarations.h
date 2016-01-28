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

// UnityEngine.Networking.NetworkScene
struct NetworkScene_t_488951965_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t_678772473_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t343577157_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct Dictionary_2_t2079163440_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate>
struct Dictionary_2_t643572393_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t392749659_0;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t_1364778622_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.NetworkScene::.ctor()
extern "C"  void NetworkScene__ctor_m_63070067_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::.cctor()
extern "C"  void NetworkScene__cctor_m1857699008_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::get_localObjects()
extern "C"  Dictionary_2_t_678772473_0 * NetworkScene_get_localObjects_m235534171_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.NetworkScene::get_guidToPrefab()
extern "C"  Dictionary_2_t343577157_0 * NetworkScene_get_guidToPrefab_m_1125416648_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate> UnityEngine.Networking.NetworkScene::get_spawnHandlers()
extern "C"  Dictionary_2_t2079163440_0 * NetworkScene_get_spawnHandlers_m393107627_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate> UnityEngine.Networking.NetworkScene::get_unspawnHandlers()
extern "C"  Dictionary_2_t643572393_0 * NetworkScene_get_unspawnHandlers_m214242649_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::Shutdown()
extern "C"  void NetworkScene_Shutdown_m404493549_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NetworkScene_SetLocalObject_m968426906_0 (NetworkScene_t_488951965_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, GameObject_t_184308134_0 * ___obj, bool ___isClient, bool ___isServer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t_184308134_0 * NetworkScene_FindLocalObject_m1411438320_0 (NetworkScene_t_488951965_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetNetworkIdentity(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkScene_GetNetworkIdentity_m_1732054989_0 (NetworkScene_t_488951965_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, NetworkIdentity_t_1494067577_0 ** ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObject_m_1515577404_0 (NetworkScene_t_488951965_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObjectAndDestroy(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObjectAndDestroy_m854182087_0 (NetworkScene_t_488951965_0 * __this, NetworkInstanceId_t1240163353_0  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearLocalObjects()
extern "C"  void NetworkScene_ClearLocalObjects_m271091521_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_RegisterPrefab_m_798349148_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, NetworkHash128_t1346402176_0  ___newAssetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_RegisterPrefab_m_339552042_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetPrefab(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject&)
extern "C"  bool NetworkScene_GetPrefab_m1414906383_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, GameObject_t_184308134_0 ** ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearSpawners()
extern "C"  void NetworkScene_ClearSpawners_m_1529324765_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_UnregisterSpawnHandler_m_1553324590_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterSpawnHandler_m721762532_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, SpawnDelegate_t392749659_0 * ___spawnHandler, UnSpawnDelegate_t_1364778622_0 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_UnregisterPrefab_m_1440088273_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterPrefab_m1010988719_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, SpawnDelegate_t392749659_0 * ___spawnHandler, UnSpawnDelegate_t_1364778622_0 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate&)
extern "C"  bool NetworkScene_GetSpawnHandler_m1228325593_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, SpawnDelegate_t392749659_0 ** ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::InvokeUnSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject)
extern "C"  bool NetworkScene_InvokeUnSpawnHandler_m_684318573_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DestroyAllClientObjects()
extern "C"  void NetworkScene_DestroyAllClientObjects_m_941115027_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DumpAllClientObjects()
extern "C"  void NetworkScene_DumpAllClientObjects_m586963_0 (NetworkScene_t_488951965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
