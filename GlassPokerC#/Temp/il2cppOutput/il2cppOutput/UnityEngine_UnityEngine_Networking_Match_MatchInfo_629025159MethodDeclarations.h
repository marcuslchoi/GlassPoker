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

// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t_629025159_0;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t337841264_0;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t1640172674_0;
// System.String
struct String_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1229412621_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"

// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void MatchInfo__ctor_m304684511_0 (MatchInfo_t_629025159_0 * __this, CreateMatchResponse_t337841264_0 * ___matchResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void MatchInfo__ctor_m1051586957_0 (MatchInfo_t_629025159_0 * __this, JoinMatchResponse_t1640172674_0 * ___matchResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C"  String_t* MatchInfo_get_address_m125495171_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C"  void MatchInfo_set_address_m833340976_0 (MatchInfo_t_629025159_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C"  int32_t MatchInfo_get_port_m427749201_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C"  void MatchInfo_set_port_m1929060886_0 (MatchInfo_t_629025159_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C"  uint64_t MatchInfo_get_networkId_m1146515261_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfo_set_networkId_m1969107286_0 (MatchInfo_t_629025159_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void MatchInfo_set_accessToken_m1951145920_0 (MatchInfo_t_629025159_0 * __this, NetworkAccessToken_t1229412621_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C"  uint16_t MatchInfo_get_nodeId_m1980131307_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfo_set_nodeId_m_2108329572_0 (MatchInfo_t_629025159_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C"  bool MatchInfo_get_usingRelay_m2033125731_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C"  void MatchInfo_set_usingRelay_m_1631838552_0 (MatchInfo_t_629025159_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::ToString()
extern "C"  String_t* MatchInfo_ToString_m_241725770_0 (MatchInfo_t_629025159_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
