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

// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t1488459396_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t_1638018920_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Single[]
struct SingleU5BU5D_t_2105059803_0;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t1476562758_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync_578466740.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
extern "C"  void SyncList_1__ctor_m_1510270062_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m_1510270062_0(__this, method) ((  void (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1__ctor_m_1510270062_0_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_66060871_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_66060871_0(__this, method) ((  Object_t * (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_66060871_0_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m_1841040466_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m_1841040466_0(__this, method) ((  int32_t (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_get_Count_m_1841040466_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1562226933_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1562226933_0(__this, method) ((  bool (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1562226933_0_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
extern "C"  SyncListChanged_t_1638018920_0 * SyncList_1_get_Callback_m1279275786_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1279275786_0(__this, method) ((  SyncListChanged_t_1638018920_0 * (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_get_Callback_m1279275786_0_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m_374333209_0_gshared (SyncList_1_t1488459396_0 * __this, SyncListChanged_t_1638018920_0 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m_374333209_0(__this, ___value, method) ((  void (*) (SyncList_1_t1488459396_0 *, SyncListChanged_t_1638018920_0 *, const MethodInfo*))SyncList_1_set_Callback_m_374333209_0_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m_1882145196_0_gshared (SyncList_1_t1488459396_0 * __this, NetworkBehaviour_t435842068_0 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m_1882145196_0(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t1488459396_0 *, NetworkBehaviour_t435842068_0 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m_1882145196_0_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m_2009027609_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___op, int32_t ___itemIndex, float ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m_2009027609_0(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, int32_t, float, const MethodInfo*))SyncList_1_SendMsg_m_2009027609_0_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m_1195385329_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m_1195385329_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m_1195385329_0_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m690752955_0_gshared (SyncList_1_t1488459396_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m690752955_0(__this, ___reader, method) ((  void (*) (SyncList_1_t1488459396_0 *, NetworkReader_t1995447500_0 *, const MethodInfo*))SyncList_1_HandleMsg_m690752955_0_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m_1334966608_0_gshared (SyncList_1_t1488459396_0 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m_1334966608_0(__this, ___item, method) ((  void (*) (SyncList_1_t1488459396_0 *, float, const MethodInfo*))SyncList_1_AddInternal_m_1334966608_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
extern "C"  void SyncList_1_Add_m2019633837_0_gshared (SyncList_1_t1488459396_0 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Add_m2019633837_0(__this, ___item, method) ((  void (*) (SyncList_1_t1488459396_0 *, float, const MethodInfo*))SyncList_1_Add_m2019633837_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
extern "C"  void SyncList_1_Clear_m190830525_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m190830525_0(__this, method) ((  void (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_Clear_m190830525_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
extern "C"  bool SyncList_1_Contains_m_900180065_0_gshared (SyncList_1_t1488459396_0 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Contains_m_900180065_0(__this, ___item, method) ((  bool (*) (SyncList_1_t1488459396_0 *, float, const MethodInfo*))SyncList_1_Contains_m_900180065_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m1064608093_0_gshared (SyncList_1_t1488459396_0 * __this, SingleU5BU5D_t_2105059803_0* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m1064608093_0(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t1488459396_0 *, SingleU5BU5D_t_2105059803_0*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m1064608093_0_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m1193430893_0_gshared (SyncList_1_t1488459396_0 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m1193430893_0(__this, ___item, method) ((  int32_t (*) (SyncList_1_t1488459396_0 *, float, const MethodInfo*))SyncList_1_IndexOf_m1193430893_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m898984724_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define SyncList_1_Insert_m898984724_0(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, float, const MethodInfo*))SyncList_1_Insert_m898984724_0_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
extern "C"  bool SyncList_1_Remove_m_1565756582_0_gshared (SyncList_1_t1488459396_0 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Remove_m_1565756582_0(__this, ___item, method) ((  bool (*) (SyncList_1_t1488459396_0 *, float, const MethodInfo*))SyncList_1_Remove_m_1565756582_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m_1227162406_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m_1227162406_0(__this, ___index, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m_1227162406_0_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m_133744045_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m_133744045_0(__this, ___index, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m_133744045_0_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
extern "C"  float SyncList_1_get_Item_m_381499682_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m_381499682_0(__this, ___i, method) ((  float (*) (SyncList_1_t1488459396_0 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m_381499682_0_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m_1849477397_0_gshared (SyncList_1_t1488459396_0 * __this, int32_t ___i, float ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m_1849477397_0(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t1488459396_0 *, int32_t, float, const MethodInfo*))SyncList_1_set_Item_m_1849477397_0_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
extern "C"  Object_t* SyncList_1_GetEnumerator_m_1574729906_0_gshared (SyncList_1_t1488459396_0 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m_1574729906_0(__this, method) ((  Object_t* (*) (SyncList_1_t1488459396_0 *, const MethodInfo*))SyncList_1_GetEnumerator_m_1574729906_0_gshared)(__this, method)
