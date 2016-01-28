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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"

// System.Void UnityEngine.Networking.NetworkHash128::Reset()
extern "C"  void NetworkHash128_Reset_m1514718333_0 (NetworkHash128_t1346402176_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkHash128::IsValid()
extern "C"  bool NetworkHash128_IsValid_m_1229224594_0 (NetworkHash128_t1346402176_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkHash128::HexToNumber(System.Char)
extern "C"  int32_t NetworkHash128_HexToNumber_m_1002649464_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkHash128::Parse(System.String)
extern "C"  NetworkHash128_t1346402176_0  NetworkHash128_Parse_m_324074964_0 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkHash128::ToString()
extern "C"  String_t* NetworkHash128_ToString_m_959039395_0 (NetworkHash128_t1346402176_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
