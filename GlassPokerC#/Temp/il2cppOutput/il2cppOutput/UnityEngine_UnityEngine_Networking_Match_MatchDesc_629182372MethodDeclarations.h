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

// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t_629182372_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t625076989_0;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t1242495576_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID_2090727229.h"

// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C"  void MatchDesc__ctor_m493457018_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C"  uint64_t MatchDesc_get_networkId_m460945338_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchDesc_set_networkId_m125039635_0 (MatchDesc_t_629182372_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C"  String_t* MatchDesc_get_name_m130862433_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C"  void MatchDesc_set_name_m1853525776_0 (MatchDesc_t_629182372_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C"  int32_t MatchDesc_get_averageEloScore_m_1001628522_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C"  int32_t MatchDesc_get_maxSize_m814909076_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C"  void MatchDesc_set_maxSize_m_820037007_0 (MatchDesc_t_629182372_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C"  int32_t MatchDesc_get_currentSize_m_1756552215_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C"  void MatchDesc_set_currentSize_m613308998_0 (MatchDesc_t_629182372_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C"  bool MatchDesc_get_isPrivate_m1087677026_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C"  void MatchDesc_set_isPrivate_m_921034357_0 (MatchDesc_t_629182372_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C"  Dictionary_2_t625076989_0 * MatchDesc_get_matchAttributes_m_398860889_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C"  uint16_t MatchDesc_get_hostNodeId_m1374429782_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C"  List_1_t1242495576_0 * MatchDesc_get_directConnectInfos_m_1311135136_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C"  void MatchDesc_set_directConnectInfos_m_571029467_0 (MatchDesc_t_629182372_0 * __this, List_1_t1242495576_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C"  String_t* MatchDesc_ToString_m_1423545319_0 (MatchDesc_t_629182372_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern "C"  void MatchDesc_Parse_m_1348260375_0 (MatchDesc_t_629182372_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
