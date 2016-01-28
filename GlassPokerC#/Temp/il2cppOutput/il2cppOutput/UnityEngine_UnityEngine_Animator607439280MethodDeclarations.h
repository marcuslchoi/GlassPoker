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

// UnityEngine.Animator
struct Animator_t607439280_0;
// System.String
struct String_t;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t304420799_0;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t_2061686734_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo_306960113.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo323908979.h"

// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C"  float Animator_GetFloat_m_1329082591_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C"  void Animator_SetFloat_m57191598_0 (Animator_t607439280_0 * __this, int32_t ___id, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C"  bool Animator_GetBool_m1246282447_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C"  void Animator_SetBool_m1802007004_0 (Animator_t607439280_0 * __this, int32_t ___id, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
extern "C"  int32_t Animator_GetInteger_m_350788553_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
extern "C"  void Animator_SetInteger_m812217484_0 (Animator_t607439280_0 * __this, int32_t ___id, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C"  void Animator_SetTrigger_m_1383613147_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m_142545381_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t_306960113_0  Animator_GetCurrentAnimatorStateInfo_m_1233107848_0 (Animator_t607439280_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t_306960113_0  Animator_GetNextAnimatorStateInfo_m791156688_0 (Animator_t607439280_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
extern "C"  AnimatorTransitionInfo_t323908979_0  Animator_GetAnimatorTransitionInfo_m_436862585_0 (Animator_t607439280_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m_1685770439_0 (Animator_t607439280_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C"  AnimatorControllerParameterU5BU5D_t304420799_0* Animator_get_parameters_m_590259437_0 (Animator_t607439280_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m330123001_0 (Animator_t607439280_0 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t_2061686734_0 * Animator_get_runtimeAnimatorController_m1822082727_0 (Animator_t607439280_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m_274070198_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C"  void Animator_SetFloatID_m819072393_0 (Animator_t607439280_0 * __this, int32_t ___id, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C"  float Animator_GetFloatID_m373159228_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C"  void Animator_SetBoolID_m516262497_0 (Animator_t607439280_0 * __this, int32_t ___id, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C"  bool Animator_GetBoolID_m1397798250_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C"  void Animator_SetIntegerID_m276290769_0 (Animator_t607439280_0 * __this, int32_t ___id, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C"  int32_t Animator_GetIntegerID_m_84108078_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C"  void Animator_SetTriggerID_m_491097536_0 (Animator_t607439280_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
