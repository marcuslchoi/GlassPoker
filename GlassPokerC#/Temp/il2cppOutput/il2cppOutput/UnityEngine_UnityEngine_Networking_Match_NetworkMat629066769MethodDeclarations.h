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

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t629066769_0;
// System.Uri
struct Uri_t124633547_0;
// UnityEngine.Coroutine
struct Coroutine_t_748028625_0;
struct Coroutine_t_748028625_0_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t2058177337_0;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t_1099188096_0;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t1987488807_0;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t_1749914066_0;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t108422299_0;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t_1452428382_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"

// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C"  Uri_t124633547_0 * NetworkMatch_get_baseUri_m_1204322511_0 (NetworkMatch_t629066769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C"  void NetworkMatch_set_baseUri_m948711566_0 (NetworkMatch_t629066769_0 * __this, Uri_t124633547_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_CreateMatch_m_1299933820_0 (NetworkMatch_t629066769_0 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t2058177337_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_CreateMatch_m_1712940617_0 (NetworkMatch_t629066769_0 * __this, CreateMatchRequest_t_1099188096_0 * ___req, ResponseDelegate_1_t2058177337_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_JoinMatch_m_735390980_0 (NetworkMatch_t629066769_0 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t1987488807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_JoinMatch_m_1554593079_0 (NetworkMatch_t629066769_0 * __this, JoinMatchRequest_t_1749914066_0 * ___req, ResponseDelegate_1_t1987488807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_ListMatches_m319350175_0 (NetworkMatch_t629066769_0 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t108422299_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C"  Coroutine_t_748028625_0 * NetworkMatch_ListMatches_m_1171892029_0 (NetworkMatch_t629066769_0 * __this, ListMatchRequest_t_1452428382_0 * ___req, ResponseDelegate_1_t108422299_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
