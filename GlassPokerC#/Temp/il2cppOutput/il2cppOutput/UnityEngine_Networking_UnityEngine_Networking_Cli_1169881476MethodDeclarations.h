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

// UnityEngine.Networking.ClientScene
struct ClientScene_t_1169881476_0;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t1683934211_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t139052538_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t_678772473_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t343577157_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t978308258_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.MessageBase
struct MessageBase_t_1858254221_0;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t392749659_0;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t_1364778622_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityEngine.Networking.ClientScene::.ctor()
extern "C"  void ClientScene__ctor_m_1341083686_0 (ClientScene_t_1169881476_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::.cctor()
extern "C"  void ClientScene__cctor_m893982483_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetReconnectId(System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  void ClientScene_SetReconnectId_m_164181802_0 (Object_t * __this /* static, unused */, int32_t ___newReconnectId, PeerInfoMessageU5BU5D_t1683934211_0* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetNotReady()
extern "C"  void ClientScene_SetNotReady_m575056970_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.ClientScene::get_localPlayers()
extern "C"  List_1_t139052538_0 * ClientScene_get_localPlayers_m1390619029_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::get_ready()
extern "C"  bool ClientScene_get_ready_m2062577540_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::get_readyConnection()
extern "C"  NetworkConnection_t_437512601_0 * ClientScene_get_readyConnection_m1071402530_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ClientScene::get_reconnectId()
extern "C"  int32_t ClientScene_get_reconnectId_m_1962549607_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_objects()
extern "C"  Dictionary_2_t_678772473_0 * ClientScene_get_objects_m_1919594443_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.ClientScene::get_prefabs()
extern "C"  Dictionary_2_t343577157_0 * ClientScene_get_prefabs_m_1960270450_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_spawnableObjects()
extern "C"  Dictionary_2_t978308258_0 * ClientScene_get_spawnableObjects_m1715261861_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::Shutdown()
extern "C"  void ClientScene_Shutdown_m1985848960_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool ClientScene_GetPlayerController_m1765553336_0 (Object_t * __this /* static, unused */, int16_t ___playerControllerId, PlayerController_t1101131586_0 ** ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::InternalAddPlayer(UnityEngine.Networking.NetworkIdentity,System.Int16)
extern "C"  void ClientScene_InternalAddPlayer_m1675219645_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___view, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(System.Int16)
extern "C"  bool ClientScene_AddPlayer_m_1490384617_0 (Object_t * __this /* static, unused */, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool ClientScene_AddPlayer_m748316558_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___readyConn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ClientScene_AddPlayer_m_935984061_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___readyConn, int16_t ___playerControllerId, MessageBase_t_1858254221_0 * ___extraMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::RemovePlayer(System.Int16)
extern "C"  bool ClientScene_RemovePlayer_m562578696_0 (Object_t * __this /* static, unused */, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::Ready(UnityEngine.Networking.NetworkConnection)
extern "C"  bool ClientScene_Ready_m1441059108_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ConnectLocalServer()
extern "C"  NetworkClient_t1572714452_0 * ClientScene_ConnectLocalServer_m1143649359_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ReconnectLocalServer()
extern "C"  NetworkClient_t1572714452_0 * ClientScene_ReconnectLocalServer_m_242315134_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearLocalPlayers()
extern "C"  void ClientScene_ClearLocalPlayers_m_210085844_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::HandleClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void ClientScene_HandleClientDisconnect_m1570817168_0 (Object_t * __this /* static, unused */, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::PrepareToSpawnSceneObjects()
extern "C"  void ClientScene_PrepareToSpawnSceneObjects_m828382571_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.ClientScene::SpawnSceneObject(UnityEngine.Networking.NetworkSceneId)
extern "C"  NetworkIdentity_t_1494067577_0 * ClientScene_SpawnSceneObject_m1817560206_0 (Object_t * __this /* static, unused */, NetworkSceneId_t_1731400738_0  ___sceneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSystemHandlers(UnityEngine.Networking.NetworkClient,System.Boolean)
extern "C"  void ClientScene_RegisterSystemHandlers_m_1935106386_0 (Object_t * __this /* static, unused */, NetworkClient_t1572714452_0 * ___client, bool ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.ClientScene::GetStringForAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  String_t* ClientScene_GetStringForAssetId_m1425273814_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_RegisterPrefab_m_509769353_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, NetworkHash128_t1346402176_0  ___newAssetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_RegisterPrefab_m1204887529_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterPrefab_m_675700414_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, SpawnDelegate_t392749659_0 * ___spawnHandler, UnSpawnDelegate_t_1364778622_0 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_UnregisterPrefab_m1002622338_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterSpawnHandler_m1599502385_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, SpawnDelegate_t392749659_0 * ___spawnHandler, UnSpawnDelegate_t_1364778622_0 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_UnregisterSpawnHandler_m_1168533153_0 (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearSpawners()
extern "C"  void ClientScene_ClearSpawners_m1891749232_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::DestroyAllClientObjects()
extern "C"  void ClientScene_DestroyAllClientObjects_m619999098_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_SetLocalObject_m_667215097_0 (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___netId, GameObject_t_184308134_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.ClientScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t_184308134_0 * ClientScene_FindLocalObject_m1402635007_0 (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ApplySpawnPayload(UnityEngine.Networking.NetworkIdentity,UnityEngine.Vector3,System.Byte[],UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_ApplySpawnPayload_m_865770983_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, Vector3_t_725341337_0  ___position, ByteU5BU5D_t_1238178395_0* ___payload, NetworkInstanceId_t1240163353_0  ___netId, GameObject_t_184308134_0 * ___newGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawn_m_215551615_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnScene_m_903584323_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnFinished(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnFinished_m_1216659281_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectDestroy_m869776994_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectDestroy_m1692294728_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectHide(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectHide_m912922054_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawn_m889213671_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawnScene_m_66194409_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnUpdateVarsMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnUpdateVarsMessage_m1776269963_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnRPCMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnRPCMessage_m815668107_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncEventMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncEventMessage_m_1262491931_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncListMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncListMessage_m1579788495_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnClientAuthority_m_1083008571_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnOwnerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnOwnerMessage_m_882431527_0 (Object_t * __this /* static, unused */, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::CheckForOwner(UnityEngine.Networking.NetworkIdentity)
extern "C"  void ClientScene_CheckForOwner_m619717121_0 (Object_t * __this /* static, unused */, NetworkIdentity_t_1494067577_0 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
