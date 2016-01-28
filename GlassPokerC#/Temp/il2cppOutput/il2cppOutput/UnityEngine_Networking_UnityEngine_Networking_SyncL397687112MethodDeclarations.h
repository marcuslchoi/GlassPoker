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

// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t397687112_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t_2033860172_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Boolean[]
struct BooleanU5BU5D_t_1574345617_0;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t28891334_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL747486336.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
extern "C"  void SyncList_1__ctor_m_1332785784_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m_1332785784_0(__this, method) ((  void (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1__ctor_m_1332785784_0_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335_0(__this, method) ((  Object_t * (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335_0_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m2082540404_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m2082540404_0(__this, method) ((  int32_t (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_get_Count_m2082540404_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m_729779741_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m_729779741_0(__this, method) ((  bool (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m_729779741_0_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Boolean>::get_Callback()
extern "C"  SyncListChanged_t_2033860172_0 * SyncList_1_get_Callback_m_1872873600_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m_1872873600_0(__this, method) ((  SyncListChanged_t_2033860172_0 * (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_get_Callback_m_1872873600_0_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m_1272005327_0_gshared (SyncList_1_t397687112_0 * __this, SyncListChanged_t_2033860172_0 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m_1272005327_0(__this, ___value, method) ((  void (*) (SyncList_1_t397687112_0 *, SyncListChanged_t_2033860172_0 *, const MethodInfo*))SyncList_1_set_Callback_m_1272005327_0_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m_637429046_0_gshared (SyncList_1_t397687112_0 * __this, NetworkBehaviour_t435842068_0 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m_637429046_0(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t397687112_0 *, NetworkBehaviour_t435842068_0 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m_637429046_0_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m2116293425_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___op, int32_t ___itemIndex, bool ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m2116293425_0(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, int32_t, bool, const MethodInfo*))SyncList_1_SendMsg_m2116293425_0_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m_569864231_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m_569864231_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m_569864231_0_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m_639331919_0_gshared (SyncList_1_t397687112_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m_639331919_0(__this, ___reader, method) ((  void (*) (SyncList_1_t397687112_0 *, NetworkReader_t1995447500_0 *, const MethodInfo*))SyncList_1_HandleMsg_m_639331919_0_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m1129436154_0_gshared (SyncList_1_t397687112_0 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m1129436154_0(__this, ___item, method) ((  void (*) (SyncList_1_t397687112_0 *, bool, const MethodInfo*))SyncList_1_AddInternal_m1129436154_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Add(T)
extern "C"  void SyncList_1_Add_m639885815_0_gshared (SyncList_1_t397687112_0 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Add_m639885815_0(__this, ___item, method) ((  void (*) (SyncList_1_t397687112_0 *, bool, const MethodInfo*))SyncList_1_Add_m639885815_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
extern "C"  void SyncList_1_Clear_m368314803_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m368314803_0(__this, method) ((  void (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_Clear_m368314803_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Contains(T)
extern "C"  bool SyncList_1_Contains_m109066737_0_gshared (SyncList_1_t397687112_0 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Contains_m109066737_0(__this, ___item, method) ((  bool (*) (SyncList_1_t397687112_0 *, bool, const MethodInfo*))SyncList_1_Contains_m109066737_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m_2631129_0_gshared (SyncList_1_t397687112_0 * __this, BooleanU5BU5D_t_1574345617_0* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m_2631129_0(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t397687112_0 *, BooleanU5BU5D_t_1574345617_0*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m_2631129_0_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m_1728043289_0_gshared (SyncList_1_t397687112_0 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m_1728043289_0(__this, ___item, method) ((  int32_t (*) (SyncList_1_t397687112_0 *, bool, const MethodInfo*))SyncList_1_IndexOf_m_1728043289_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m_568045986_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___index, bool ___item, const MethodInfo* method);
#define SyncList_1_Insert_m_568045986_0(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, bool, const MethodInfo*))SyncList_1_Insert_m_568045986_0_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Remove(T)
extern "C"  bool SyncList_1_Remove_m_1649622484_0_gshared (SyncList_1_t397687112_0 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Remove_m_1649622484_0(__this, ___item, method) ((  bool (*) (SyncList_1_t397687112_0 *, bool, const MethodInfo*))SyncList_1_Remove_m_1649622484_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m1600774180_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m1600774180_0(__this, ___index, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m1600774180_0_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m180497225_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m180497225_0(__this, ___index, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m180497225_0_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
extern "C"  bool SyncList_1_get_Item_m_286598774_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m_286598774_0(__this, ___i, method) ((  bool (*) (SyncList_1_t397687112_0 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m_286598774_0_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1378250677_0_gshared (SyncList_1_t397687112_0 * __this, int32_t ___i, bool ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1378250677_0(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t397687112_0 *, int32_t, bool, const MethodInfo*))SyncList_1_set_Item_m1378250677_0_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Boolean>::GetEnumerator()
extern "C"  Object_t* SyncList_1_GetEnumerator_m_19679492_0_gshared (SyncList_1_t397687112_0 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m_19679492_0(__this, method) ((  Object_t* (*) (SyncList_1_t397687112_0 *, const MethodInfo*))SyncList_1_GetEnumerator_m_19679492_0_gshared)(__this, method)
