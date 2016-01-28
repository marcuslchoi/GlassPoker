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

// UnityEngine.Networking.NetworkManager
struct NetworkManager_t1484180676_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t_430663014_0;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t_851833179_0;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t461326897_0;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t1305823158_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType>
struct List_1_t_1188385898_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// UnityEngine.Networking.NetworkMigrationManager
struct NetworkMigrationManager_t1228815560_0;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t1572714452_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1603845406_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.PlayerController
struct PlayerController_t1101131586_0;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t337841264_0;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t_2022673010_0;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t1640172674_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_LogFil40381012.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play_681717418.h"

// System.Void UnityEngine.Networking.NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m19706124_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::.cctor()
extern "C"  void NetworkManager__cctor_m128793633_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_networkPort()
extern "C"  int32_t NetworkManager_get_networkPort_m414284248_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkPort(System.Int32)
extern "C"  void NetworkManager_set_networkPort_m1019540813_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_serverBindToIP()
extern "C"  bool NetworkManager_get_serverBindToIP_m1479657653_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindToIP(System.Boolean)
extern "C"  void NetworkManager_set_serverBindToIP_m1473159278_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_serverBindAddress()
extern "C"  String_t* NetworkManager_get_serverBindAddress_m_593248072_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_serverBindAddress(System.String)
extern "C"  void NetworkManager_set_serverBindAddress_m1558148865_0 (NetworkManager_t1484180676_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_networkAddress()
extern "C"  String_t* NetworkManager_get_networkAddress_m_554488508_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_networkAddress(System.String)
extern "C"  void NetworkManager_set_networkAddress_m_1889851929_0 (NetworkManager_t1484180676_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_dontDestroyOnLoad()
extern "C"  bool NetworkManager_get_dontDestroyOnLoad_m_1183741155_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_dontDestroyOnLoad(System.Boolean)
extern "C"  void NetworkManager_set_dontDestroyOnLoad_m384831378_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_runInBackground()
extern "C"  bool NetworkManager_get_runInBackground_m1252140301_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_runInBackground(System.Boolean)
extern "C"  void NetworkManager_set_runInBackground_m376888578_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_scriptCRCCheck()
extern "C"  bool NetworkManager_get_scriptCRCCheck_m_2055035950_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkManager_set_scriptCRCCheck_m_622902069_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_sendPeerInfo()
extern "C"  bool NetworkManager_get_sendPeerInfo_m_2106651285_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkManager_set_sendPeerInfo_m_657766620_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_maxDelay()
extern "C"  float NetworkManager_get_maxDelay_m_1148026284_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxDelay(System.Single)
extern "C"  void NetworkManager_set_maxDelay_m_406058025_0 (NetworkManager_t1484180676_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.LogFilter/FilterLevel UnityEngine.Networking.NetworkManager::get_logLevel()
extern "C"  int32_t NetworkManager_get_logLevel_m867128640_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_logLevel(UnityEngine.Networking.LogFilter/FilterLevel)
extern "C"  void NetworkManager_set_logLevel_m2024498239_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkManager::get_playerPrefab()
extern "C"  GameObject_t_184308134_0 * NetworkManager_get_playerPrefab_m_1817619145_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerPrefab(UnityEngine.GameObject)
extern "C"  void NetworkManager_set_playerPrefab_m1930241042_0 (NetworkManager_t1484180676_0 * __this, GameObject_t_184308134_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_autoCreatePlayer()
extern "C"  bool NetworkManager_get_autoCreatePlayer_m992612575_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_autoCreatePlayer(System.Boolean)
extern "C"  void NetworkManager_set_autoCreatePlayer_m1882431128_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.PlayerSpawnMethod UnityEngine.Networking.NetworkManager::get_playerSpawnMethod()
extern "C"  int32_t NetworkManager_get_playerSpawnMethod_m1319712475_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_playerSpawnMethod(UnityEngine.Networking.PlayerSpawnMethod)
extern "C"  void NetworkManager_set_playerSpawnMethod_m_450179568_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_offlineScene()
extern "C"  String_t* NetworkManager_get_offlineScene_m_2040360377_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_offlineScene(System.String)
extern "C"  void NetworkManager_set_offlineScene_m458789892_0 (NetworkManager_t1484180676_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_onlineScene()
extern "C"  String_t* NetworkManager_get_onlineScene_m2076823037_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_onlineScene(System.String)
extern "C"  void NetworkManager_set_onlineScene_m1780758300_0 (NetworkManager_t1484180676_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.Networking.NetworkManager::get_spawnPrefabs()
extern "C"  List_1_t_430663014_0 * NetworkManager_get_spawnPrefabs_m1973798874_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.Networking.NetworkManager::get_startPositions()
extern "C"  List_1_t_851833179_0 * NetworkManager_get_startPositions_m1570885337_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_customConfig()
extern "C"  bool NetworkManager_get_customConfig_m_861431834_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_customConfig(System.Boolean)
extern "C"  void NetworkManager_set_customConfig_m1421237855_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.NetworkManager::get_connectionConfig()
extern "C"  ConnectionConfig_t461326897_0 * NetworkManager_get_connectionConfig_m_1685679375_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.GlobalConfig UnityEngine.Networking.NetworkManager::get_globalConfig()
extern "C"  GlobalConfig_t1305823158_0 * NetworkManager_get_globalConfig_m_1271950853_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_maxConnections()
extern "C"  int32_t NetworkManager_get_maxConnections_m_1873433526_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_maxConnections(System.Int32)
extern "C"  void NetworkManager_set_maxConnections_m1828689399_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.QosType> UnityEngine.Networking.NetworkManager::get_channels()
extern "C"  List_1_t_1188385898_0 * NetworkManager_get_channels_m753743410_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint UnityEngine.Networking.NetworkManager::get_secureTunnelEndpoint()
extern "C"  EndPoint_t_1941440085_0 * NetworkManager_get_secureTunnelEndpoint_m_548009913_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_secureTunnelEndpoint(System.Net.EndPoint)
extern "C"  void NetworkManager_set_secureTunnelEndpoint_m_2100643132_0 (NetworkManager_t1484180676_0 * __this, EndPoint_t_1941440085_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useWebSockets()
extern "C"  bool NetworkManager_get_useWebSockets_m576036674_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useWebSockets(System.Boolean)
extern "C"  void NetworkManager_set_useWebSockets_m835456503_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::get_useSimulator()
extern "C"  bool NetworkManager_get_useSimulator_m271595920_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_useSimulator(System.Boolean)
extern "C"  void NetworkManager_set_useSimulator_m1942343305_0 (NetworkManager_t1484180676_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_simulatedLatency()
extern "C"  int32_t NetworkManager_get_simulatedLatency_m_1117966377_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_simulatedLatency(System.Int32)
extern "C"  void NetworkManager_set_simulatedLatency_m1404946180_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkManager::get_packetLossPercentage()
extern "C"  float NetworkManager_get_packetLossPercentage_m199473434_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_packetLossPercentage(System.Single)
extern "C"  void NetworkManager_set_packetLossPercentage_m2132182737_0 (NetworkManager_t1484180676_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkManager::get_matchHost()
extern "C"  String_t* NetworkManager_get_matchHost_m1214789841_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchHost(System.String)
extern "C"  void NetworkManager_set_matchHost_m477058696_0 (NetworkManager_t1484180676_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_matchPort()
extern "C"  int32_t NetworkManager_get_matchPort_m666648111_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::set_matchPort(System.Int32)
extern "C"  void NetworkManager_set_matchPort_m985999396_0 (NetworkManager_t1484180676_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMigrationManager UnityEngine.Networking.NetworkManager::get_migrationManager()
extern "C"  NetworkMigrationManager_t1228815560_0 * NetworkManager_get_migrationManager_m_1077565613_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkManager::get_numPlayers()
extern "C"  int32_t NetworkManager_get_numPlayers_m_43194491_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Awake()
extern "C"  void NetworkManager_Awake_m257311343_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::InitializeSingleton()
extern "C"  void NetworkManager_InitializeSingleton_m_196215291_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnValidate()
extern "C"  void NetworkManager_OnValidate_m157143117_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterServerMessages()
extern "C"  void NetworkManager_RegisterServerMessages_m1825049002_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetupMigrationManager(UnityEngine.Networking.NetworkMigrationManager)
extern "C"  void NetworkManager_SetupMigrationManager_m1238552476_0 (NetworkManager_t1484180676_0 * __this, NetworkMigrationManager_t1228815560_0 * ___man, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m601545381_0 (NetworkManager_t1484180676_0 * __this, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer()
extern "C"  bool NetworkManager_StartServer_m_1143319875_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo)
extern "C"  bool NetworkManager_StartServer_m72922678_0 (NetworkManager_t1484180676_0 * __this, MatchInfo_t_629025159_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::StartServer(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkManager_StartServer_m_1392302728_0 (NetworkManager_t1484180676_0 * __this, MatchInfo_t_629025159_0 * ___info, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterClientMessages(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_RegisterClientMessages_m1188458556_0 (NetworkManager_t1484180676_0 * __this, NetworkClient_t1572714452_0 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UseExternalClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_UseExternalClient_m_107234351_0 (NetworkManager_t1484180676_0 * __this, NetworkClient_t1572714452_0 * ___externalClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo,UnityEngine.Networking.ConnectionConfig)
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartClient_m_1204879654_0 (NetworkManager_t1484180676_0 * __this, MatchInfo_t_629025159_0 * ___info, ConnectionConfig_t461326897_0 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartClient_m576300625_0 (NetworkManager_t1484180676_0 * __this, MatchInfo_t_629025159_0 * ___matchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartClient()
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartClient_m1483497240_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartHost_m_1259787107_0 (NetworkManager_t1484180676_0 * __this, ConnectionConfig_t461326897_0 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost(UnityEngine.Networking.Match.MatchInfo)
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartHost_m_298755538_0 (NetworkManager_t1484180676_0 * __this, MatchInfo_t_629025159_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::StartHost()
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_StartHost_m_1076809547_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkManager::ConnectLocalClient()
extern "C"  NetworkClient_t1572714452_0 * NetworkManager_ConnectLocalClient_m_370882557_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopHost()
extern "C"  void NetworkManager_StopHost_m_1059549822_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopServer()
extern "C"  void NetworkManager_StopServer_m1360919069_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopClient()
extern "C"  void NetworkManager_StopClient_m890223781_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ServerChangeScene(System.String)
extern "C"  void NetworkManager_ServerChangeScene_m1322393087_0 (NetworkManager_t1484180676_0 * __this, String_t* ___newSceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::ClientChangeScene(System.String,System.Boolean)
extern "C"  void NetworkManager_ClientChangeScene_m_1409512426_0 (NetworkManager_t1484180676_0 * __this, String_t* ___newSceneName, bool ___forceReload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::FinishLoadScene()
extern "C"  void NetworkManager_FinishLoadScene_m_1061105123_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UpdateScene()
extern "C"  void NetworkManager_UpdateScene_m1866699757_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnDestroy()
extern "C"  void NetworkManager_OnDestroy_m_639164411_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::RegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_RegisterStartPosition_m_1749293429_0 (Object_t * __this /* static, unused */, Transform_t1584899523_0 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::UnRegisterStartPosition(UnityEngine.Transform)
extern "C"  void NetworkManager_UnRegisterStartPosition_m755942916_0 (Object_t * __this /* static, unused */, Transform_t1584899523_0 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkManager::IsClientConnected()
extern "C"  bool NetworkManager_IsClientConnected_m_1221471124_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::Shutdown()
extern "C"  void NetworkManager_Shutdown_m1078771726_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerConnectInternal_m56246407_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerDisconnectInternal_m_189267645_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerReadyMessageInternal_m_704132549_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerAddPlayerMessageInternal_m_1824918854_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayerMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerRemovePlayerMessageInternal_m1867216175_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnServerErrorInternal_m_117554711_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientConnectInternal_m41766671_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnectInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientDisconnectInternal_m_2058353221_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReadyMessageInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientNotReadyMessageInternal_m_518162430_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientErrorInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientErrorInternal_m1831031409_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneInternal(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkManager_OnClientSceneInternal_m_983317651_0 (NetworkManager_t1484180676_0 * __this, NetworkMessage_t1603845406_0 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerConnect_m_605164087_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerDisconnect_m594651021_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnServerReady_m2123984130_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkManager_OnServerAddPlayer_m1322413864_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, NetworkReader_t1995447500_0 * ___extraMessageReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayer_m_858700944_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerAddPlayerInternal(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkManager_OnServerAddPlayerInternal_m310410483_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkManager::GetStartPosition()
extern "C"  Transform_t1584899523_0 * NetworkManager_GetStartPosition_m_898422769_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerRemovePlayer(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.PlayerController)
extern "C"  void NetworkManager_OnServerRemovePlayer_m_252968062_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, PlayerController_t1101131586_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnServerError_m1600593168_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnServerSceneChanged(System.String)
extern "C"  void NetworkManager_OnServerSceneChanged_m_132460448_0 (NetworkManager_t1484180676_0 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientConnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientConnect_m1043196481_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientDisconnect_m_1751730155_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkManager_OnClientError_m_371776104_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientNotReady_m1655197001_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnClientSceneChanged(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkManager_OnClientSceneChanged_m_1605525311_0 (NetworkManager_t1484180676_0 * __this, NetworkConnection_t_437512601_0 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StartMatchMaker()
extern "C"  void NetworkManager_StartMatchMaker_m_1915426261_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::StopMatchMaker()
extern "C"  void NetworkManager_StopMatchMaker_m_1671530279_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::SetMatchHost(System.String,System.Int32,System.Boolean)
extern "C"  void NetworkManager_SetMatchHost_m_482163355_0 (NetworkManager_t1484180676_0 * __this, String_t* ___newHost, int32_t ___port, bool ___https, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartHost()
extern "C"  void NetworkManager_OnStartHost_m_258545995_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartServer()
extern "C"  void NetworkManager_OnStartServer_m_1968516464_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStartClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkManager_OnStartClient_m157304354_0 (NetworkManager_t1484180676_0 * __this, NetworkClient_t1572714452_0 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopServer()
extern "C"  void NetworkManager_OnStopServer_m_183352356_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopClient()
extern "C"  void NetworkManager_OnStopClient_m_654047644_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnStopHost()
extern "C"  void NetworkManager_OnStopHost_m_1467860223_0 (NetworkManager_t1484180676_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void NetworkManager_OnMatchCreate_m1170401102_0 (NetworkManager_t1484180676_0 * __this, CreateMatchResponse_t337841264_0 * ___matchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse)
extern "C"  void NetworkManager_OnMatchList_m_771586414_0 (NetworkManager_t1484180676_0 * __this, ListMatchResponse_t_2022673010_0 * ___matchList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkManager::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void NetworkManager_OnMatchJoined_m_1815985399_0 (NetworkManager_t1484180676_0 * __this, JoinMatchResponse_t1640172674_0 * ___matchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
