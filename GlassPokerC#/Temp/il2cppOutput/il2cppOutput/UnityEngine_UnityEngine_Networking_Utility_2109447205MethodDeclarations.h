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

// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1229412621_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1479454492.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID1028970518.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"

// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C"  void Utility__cctor_m782813746_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C"  uint64_t Utility_GetSourceID_m_632885344_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern "C"  uint64_t Utility_GetAppID_m_990567750_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void Utility_SetAccessTokenForNetwork_m1264070461_0 (Object_t * __this /* static, unused */, uint64_t ___netId, NetworkAccessToken_t1229412621_0 * ___accessToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
