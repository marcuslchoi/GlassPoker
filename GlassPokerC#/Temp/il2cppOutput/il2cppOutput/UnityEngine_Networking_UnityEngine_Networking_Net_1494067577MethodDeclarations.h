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

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t2097057352_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.NetworkIdentity::.ctor()
extern "C"  void NetworkIdentity__ctor_m662035119_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::.cctor()
extern "C"  void NetworkIdentity__cctor_m_1433844002_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isClient()
extern "C"  bool NetworkIdentity_get_isClient_m_1275831231_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
extern "C"  bool NetworkIdentity_get_isServer_m_805135943_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_hasAuthority()
extern "C"  bool NetworkIdentity_get_hasAuthority_m_1552175627_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
extern "C"  NetworkInstanceId_t1240163353_0  NetworkIdentity_get_netId_m_192032992_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::get_sceneId()
extern "C"  NetworkSceneId_t_1731400738_0  NetworkIdentity_get_sceneId_m1185549012_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_serverOnly()
extern "C"  bool NetworkIdentity_get_serverOnly_m804698875_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_serverOnly(System.Boolean)
extern "C"  void NetworkIdentity_set_serverOnly_m_1768263208_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_localPlayerAuthority()
extern "C"  bool NetworkIdentity_get_localPlayerAuthority_m628468771_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_localPlayerAuthority(System.Boolean)
extern "C"  void NetworkIdentity_set_localPlayerAuthority_m1486562688_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_clientAuthorityOwner()
extern "C"  NetworkConnection_t_437512601_0 * NetworkIdentity_get_clientAuthorityOwner_m1579756455_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::get_assetId()
extern "C"  NetworkHash128_t1346402176_0  NetworkIdentity_get_assetId_m_489207462_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetDynamicAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkIdentity_SetDynamicAssetId_m_1544395847_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkHash128_t1346402176_0  ___newAssetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetClientOwner(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetClientOwner_m1888187762_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearClientOwner()
extern "C"  void NetworkIdentity_ClearClientOwner_m_185328368_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceAuthority(System.Boolean)
extern "C"  void NetworkIdentity_ForceAuthority_m18303236_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___authority, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isLocalPlayer()
extern "C"  bool NetworkIdentity_get_isLocalPlayer_m_337968360_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkIdentity::get_playerControllerId()
extern "C"  int16_t NetworkIdentity_get_playerControllerId_m_1868684520_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToServer()
extern "C"  NetworkConnection_t_437512601_0 * NetworkIdentity_get_connectionToServer_m1178853096_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToClient()
extern "C"  NetworkConnection_t_437512601_0 * NetworkIdentity_get_connectionToClient_m708157808_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::get_observers()
extern "C"  ReadOnlyCollection_1_t2097057352_0 * NetworkIdentity_get_observers_m1210396756_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::GetNextNetworkId()
extern "C"  NetworkInstanceId_t1240163353_0  NetworkIdentity_GetNextNetworkId_m_881838799_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::CacheBehaviours()
extern "C"  void NetworkIdentity_CacheBehaviours_m_1393097915_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddNetworkId(System.UInt32)
extern "C"  void NetworkIdentity_AddNetworkId_m_1227178723_0 (Object_t * __this /* static, unused */, uint32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNetworkInstanceId(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkIdentity_SetNetworkInstanceId_m_1263933258_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkInstanceId_t1240163353_0  ___newNetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceSceneId(System.Int32)
extern "C"  void NetworkIdentity_ForceSceneId_m_1193068830_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___newSceneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UpdateClientServer(System.Boolean,System.Boolean)
extern "C"  void NetworkIdentity_UpdateClientServer_m2005526106_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___isClientFlag, bool ___isServerFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNoServer()
extern "C"  void NetworkIdentity_SetNoServer_m597329971_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNotLocalPlayer()
extern "C"  void NetworkIdentity_SetNotLocalPlayer_m_2059506328_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserverInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserverInternal_m1802432675_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnDestroy()
extern "C"  void NetworkIdentity_OnDestroy_m_26427352_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartServer(System.Boolean)
extern "C"  void NetworkIdentity_OnStartServer_m_1395734166_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___allowNonZeroNetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartClient()
extern "C"  void NetworkIdentity_OnStartClient_m_1723896901_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartAuthority()
extern "C"  void NetworkIdentity_OnStartAuthority_m_739378315_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStopAuthority()
extern "C"  void NetworkIdentity_OnStopAuthority_m_1589662193_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkIdentity_OnSetLocalVisibility_m1796696518_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___vis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_OnCheckObserver_m_1177823179_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetSerializeAllVars(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkIdentity_UNetSerializeAllVars_m1011138892_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleClientAuthority(System.Boolean)
extern "C"  void NetworkIdentity_HandleClientAuthority_m616058612_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___authority, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::GetInvokeComponent(System.Int32,System.Type,UnityEngine.Networking.NetworkBehaviour&)
extern "C"  bool NetworkIdentity_GetInvokeComponent_m_1547084196_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___cmdHash, Type_t * ___invokeClass, NetworkBehaviour_t435842068_0 ** ___invokeComponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncEvent_m_2142597149_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncList_m859057425_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleCommand_m_248906537_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleRPC_m_103538179_0 (NetworkIdentity_t_1494067577_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetUpdate()
extern "C"  void NetworkIdentity_UNetUpdate_m1972515142_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnUpdateVars(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkIdentity_OnUpdateVars_m_1523372542_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetLocalPlayer(System.Int16)
extern "C"  void NetworkIdentity_SetLocalPlayer_m_1008166550_0 (NetworkIdentity_t_1494067577_0 * __this, int16_t ___localPlayerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToServer(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetConnectionToServer_m1150110274_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToClient(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkIdentity_SetConnectionToClient_m1953155399_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___newPlayerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnNetworkDestroy()
extern "C"  void NetworkIdentity_OnNetworkDestroy_m901048736_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearObservers()
extern "C"  void NetworkIdentity_ClearObservers_m1587905605_0 (NetworkIdentity_t_1494067577_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_AddObserver_m_1744116229_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserver_m273823750_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RebuildObservers(System.Boolean)
extern "C"  void NetworkIdentity_RebuildObservers_m271768046_0 (NetworkIdentity_t_1494067577_0 * __this, bool ___initialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::RemoveClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_RemoveClientAuthority_m1366693290_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::AssignClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_AssignClientAuthority_m1957836703_0 (NetworkIdentity_t_1494067577_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetStaticUpdate()
extern "C"  void NetworkIdentity_UNetStaticUpdate_m_343746348_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
