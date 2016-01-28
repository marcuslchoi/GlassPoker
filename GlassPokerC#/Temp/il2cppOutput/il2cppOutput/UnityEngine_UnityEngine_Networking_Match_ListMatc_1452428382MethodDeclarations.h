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

// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t_1452428382_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t625076989_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C"  void ListMatchRequest__ctor_m_1077397266_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C"  int32_t ListMatchRequest_get_pageSize_m1261391023_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C"  void ListMatchRequest_set_pageSize_m1444444532_0 (ListMatchRequest_t_1452428382_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C"  int32_t ListMatchRequest_get_pageNum_m_1764699782_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C"  void ListMatchRequest_set_pageNum_m1626311511_0 (ListMatchRequest_t_1452428382_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C"  String_t* ListMatchRequest_get_nameFilter_m204473055_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C"  void ListMatchRequest_set_nameFilter_m1675608236_0 (ListMatchRequest_t_1452428382_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_includePasswordMatches()
extern "C"  bool ListMatchRequest_get_includePasswordMatches_m_1703061719_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C"  Dictionary_2_t625076989_0 * ListMatchRequest_get_matchAttributeFilterLessThan_m1016084548_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C"  Dictionary_2_t625076989_0 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m_398099597_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C"  String_t* ListMatchRequest_ToString_m_101475201_0 (ListMatchRequest_t_1452428382_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
