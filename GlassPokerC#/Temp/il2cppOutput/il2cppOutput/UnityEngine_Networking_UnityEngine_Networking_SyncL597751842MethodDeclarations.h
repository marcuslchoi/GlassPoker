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

// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t597751842_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t_334386290_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1151557408_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1223813466.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
extern "C"  void SyncList_1__ctor_m_500198610_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m_500198610_0(__this, method) ((  void (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1__ctor_m_500198610_0_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_182248295_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_182248295_0(__this, method) ((  Object_t * (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_182248295_0_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m_339777510_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m_339777510_0(__this, method) ((  int32_t (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_get_Count_m_339777510_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m527137661_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m527137661_0(__this, method) ((  bool (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m527137661_0_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Int32>::get_Callback()
extern "C"  SyncListChanged_t_334386290_0 * SyncList_1_get_Callback_m1314062490_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1314062490_0(__this, method) ((  SyncListChanged_t_334386290_0 * (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_get_Callback_m1314062490_0_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m_355125301_0_gshared (SyncList_1_t597751842_0 * __this, SyncListChanged_t_334386290_0 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m_355125301_0(__this, ___value, method) ((  void (*) (SyncList_1_t597751842_0 *, SyncListChanged_t_334386290_0 *, const MethodInfo*))SyncList_1_set_Callback_m_355125301_0_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m_915218704_0_gshared (SyncList_1_t597751842_0 * __this, NetworkBehaviour_t435842068_0 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m_915218704_0(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t597751842_0 *, NetworkBehaviour_t435842068_0 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m_915218704_0_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m_1317556021_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___op, int32_t ___itemIndex, int32_t ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m_1317556021_0(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m_1317556021_0_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m83545075_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m83545075_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m83545075_0_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m1190639959_0_gshared (SyncList_1_t597751842_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m1190639959_0(__this, ___reader, method) ((  void (*) (SyncList_1_t597751842_0 *, NetworkReader_t1995447500_0 *, const MethodInfo*))SyncList_1_HandleMsg_m1190639959_0_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m181208980_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m181208980_0(__this, ___item, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_AddInternal_m181208980_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Add(T)
extern "C"  void SyncList_1_Add_m_164540527_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Add_m_164540527_0(__this, ___item, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_Add_m_164540527_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
extern "C"  void SyncList_1_Clear_m1200901977_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1200901977_0(__this, method) ((  void (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_Clear_m1200901977_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m279451671_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Contains_m279451671_0(__this, ___item, method) ((  bool (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_Contains_m279451671_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m180540737_0_gshared (SyncList_1_t597751842_0 * __this, Int32U5BU5D_t1872284309_0* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m180540737_0(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t597751842_0 *, Int32U5BU5D_t1872284309_0*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m180540737_0_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m_143614591_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m_143614591_0(__this, ___item, method) ((  int32_t (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_IndexOf_m_143614591_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m_840480776_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Insert_m_840480776_0(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_Insert_m_840480776_0_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m_2141064750_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Remove_m_2141064750_0(__this, ___item, method) ((  bool (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_Remove_m_2141064750_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m1328339390_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m1328339390_0(__this, ___index, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m1328339390_0_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m_971429905_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m_971429905_0(__this, ___index, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m_971429905_0_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t SyncList_1_get_Item_m_1201518748_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m_1201518748_0(__this, ___i, method) ((  int32_t (*) (SyncList_1_t597751842_0 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m_1201518748_0_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1561422543_0_gshared (SyncList_1_t597751842_0 * __this, int32_t ___i, int32_t ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1561422543_0(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t597751842_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_set_Item_m1561422543_0_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Int32>::GetEnumerator()
extern "C"  Object_t* SyncList_1_GetEnumerator_m_927707742_0_gshared (SyncList_1_t597751842_0 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m_927707742_0(__this, method) ((  Object_t* (*) (SyncList_1_t597751842_0 *, const MethodInfo*))SyncList_1_GetEnumerator_m_927707742_0_gshared)(__this, method)
