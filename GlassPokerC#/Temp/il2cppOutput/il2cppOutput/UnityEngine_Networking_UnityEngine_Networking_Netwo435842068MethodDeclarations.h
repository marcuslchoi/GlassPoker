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

// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t1612569412_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t487934349_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo848969301.h"

// System.Void UnityEngine.Networking.NetworkBehaviour::.ctor()
extern "C"  void NetworkBehaviour__ctor_m1416383612_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::.cctor()
extern "C"  void NetworkBehaviour__cctor_m476122801_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_localPlayerAuthority()
extern "C"  bool NetworkBehaviour_get_localPlayerAuthority_m1932878682_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
extern "C"  bool NetworkBehaviour_get_isServer_m166341488_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
extern "C"  bool NetworkBehaviour_get_isClient_m_304353800_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isLocalPlayer()
extern "C"  bool NetworkBehaviour_get_isLocalPlayer_m1900866497_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_hasAuthority()
extern "C"  bool NetworkBehaviour_get_hasAuthority_m_1757049812_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkBehaviour::get_netId()
extern "C"  NetworkInstanceId_t1240163353_0  NetworkBehaviour_get_netId_m_1153729563_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToServer()
extern "C"  NetworkConnection_t_437512601_0 * NetworkBehaviour_get_connectionToServer_m565754271_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToClient()
extern "C"  NetworkConnection_t_437512601_0 * NetworkBehaviour_get_connectionToClient_m95058983_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkBehaviour::get_playerControllerId()
extern "C"  int16_t NetworkBehaviour_get_playerControllerId_m_1511624857_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkBehaviour::get_syncVarDirtyBits()
extern "C"  uint32_t NetworkBehaviour_get_syncVarDirtyBits_m_34230334_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_syncVarHookGuard()
extern "C"  bool NetworkBehaviour_get_syncVarHookGuard_m1704457273_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::set_syncVarHookGuard(System.Boolean)
extern "C"  void NetworkBehaviour_set_syncVarHookGuard_m_14003982_0 (NetworkBehaviour_t435842068_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::get_myView()
extern "C"  NetworkIdentity_t_1494067577_0 * NetworkBehaviour_get_myView_m1279046484_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendCommandInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendCommandInternal_m977225367_0 (NetworkBehaviour_t435842068_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, String_t* ___cmdName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommand_m87124076_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendRPCInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendRPCInternal_m_113034051_0 (NetworkBehaviour_t435842068_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, String_t* ___rpcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRPC_m_199057390_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendEventInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendEventInternal_m304813032_0 (NetworkBehaviour_t435842068_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___channelId, String_t* ___eventName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEvent_m_1339725256_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncList_m_1608895460_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterCommandDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterCommandDelegate_m1780633519_0 (Object_t * __this /* static, unused */, Type_t * ___invokeClass, int32_t ___cmdHash, CmdDelegate_t1612569412_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterRpcDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterRpcDelegate_m106624457_0 (Object_t * __this /* static, unused */, Type_t * ___invokeClass, int32_t ___cmdHash, CmdDelegate_t1612569412_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterEventDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterEventDelegate_m_641385666_0 (Object_t * __this /* static, unused */, Type_t * ___invokeClass, int32_t ___cmdHash, CmdDelegate_t1612569412_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterSyncListDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterSyncListDelegate_m429814929_0 (Object_t * __this /* static, unused */, Type_t * ___invokeClass, int32_t ___cmdHash, CmdDelegate_t1612569412_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetInvoker(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetInvoker_m_1553438694_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashCommand(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashCommand_m_1092401044_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, Type_t ** ___invokeClass, CmdDelegate_t1612569412_0 ** ___invokeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashClientRpc(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashClientRpc_m1777035195_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, Type_t ** ___invokeClass, CmdDelegate_t1612569412_0 ** ___invokeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncList(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncList_m_1272580882_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, Type_t ** ___invokeClass, CmdDelegate_t1612569412_0 ** ___invokeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncEvent(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncEvent_m_1436094368_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, Type_t ** ___invokeClass, CmdDelegate_t1612569412_0 ** ___invokeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHash(System.Int32,UnityEngine.Networking.NetworkBehaviour/UNetInvokeType,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHash_m_462329332_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, int32_t ___invokeType, Type_t ** ___invokeClass, CmdDelegate_t1612569412_0 ** ___invokeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::DumpInvokers()
extern "C"  void NetworkBehaviour_DumpInvokers_m665037269_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::ContainsCommandDelegate(System.Int32)
extern "C"  bool NetworkBehaviour_ContainsCommandDelegate_m_1291671414_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommandDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommandDelegate_m52576423_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRpcDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRpcDelegate_m1484385869_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEventDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEventDelegate_m_452086157_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncListDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncListDelegate_m1763466327_0 (NetworkBehaviour_t435842068_0 * __this, int32_t ___cmdHash, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashHandlerName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashHandlerName_m1168512497_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashPrefixName(System.Int32,System.String)
extern "C"  String_t* NetworkBehaviour_GetCmdHashPrefixName_m_1969929311_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashCmdName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashCmdName_m_690837279_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashRpcName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashRpcName_m2097425612_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashEventName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashEventName_m_1241305151_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashListName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashListName_m1764249777_0 (Object_t * __this /* static, unused */, int32_t ___cmdHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetSyncVarGameObject(UnityEngine.GameObject,UnityEngine.GameObject&,System.UInt32,UnityEngine.Networking.NetworkInstanceId&)
extern "C"  void NetworkBehaviour_SetSyncVarGameObject_m1994840574_0 (NetworkBehaviour_t435842068_0 * __this, GameObject_t_184308134_0 * ___newGameObject, GameObject_t_184308134_0 ** ___gameObjectField, uint32_t ___dirtyBit, NetworkInstanceId_t1240163353_0 * ___netIdField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetDirtyBit(System.UInt32)
extern "C"  void NetworkBehaviour_SetDirtyBit_m_758215581_0 (NetworkBehaviour_t435842068_0 * __this, uint32_t ___dirtyBit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::ClearAllDirtyBits()
extern "C"  void NetworkBehaviour_ClearAllDirtyBits_m1085538654_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetDirtyChannel()
extern "C"  int32_t NetworkBehaviour_GetDirtyChannel_m_466587191_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkBehaviour_OnSerialize_m1265309202_0 (NetworkBehaviour_t435842068_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkBehaviour_OnDeserialize_m798309169_0 (NetworkBehaviour_t435842068_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::PreStartClient()
extern "C"  void NetworkBehaviour_PreStartClient_m895837746_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnNetworkDestroy()
extern "C"  void NetworkBehaviour_OnNetworkDestroy_m104809907_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartServer()
extern "C"  void NetworkBehaviour_OnStartServer_m2081422848_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartClient()
extern "C"  void NetworkBehaviour_OnStartClient_m1610727560_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartLocalPlayer()
extern "C"  void NetworkBehaviour_OnStartLocalPlayer_m_575392975_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartAuthority()
extern "C"  void NetworkBehaviour_OnStartAuthority_m_1535617144_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStopAuthority()
extern "C"  void NetworkBehaviour_OnStopAuthority_m_1061157988_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkBehaviour_OnRebuildObservers_m_834576303_0 (NetworkBehaviour_t435842068_0 * __this, HashSet_1_t487934349_0 * ___observers, bool ___initialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkBehaviour_OnSetLocalVisibility_m1810368281_0 (NetworkBehaviour_t435842068_0 * __this, bool ___vis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkBehaviour_OnCheckObserver_m875756062_0 (NetworkBehaviour_t435842068_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel()
extern "C"  int32_t NetworkBehaviour_GetNetworkChannel_m132444461_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval()
extern "C"  float NetworkBehaviour_GetNetworkSendInterval_m1612300353_0 (NetworkBehaviour_t435842068_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
