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

// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t_1947302445_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t_778813465_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.UInt32[]
struct UInt32U5BU5D_t_1239494474_0;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t_1959199083_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL280738715.h"

// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
extern "C"  void SyncList_1__ctor_m_365202141_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m_365202141_0(__this, method) ((  void (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1__ctor_m_365202141_0_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264_0(__this, method) ((  Object_t * (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264_0_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m_1532289857_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m_1532289857_0(__this, method) ((  int32_t (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_get_Count_m_1532289857_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m_959804796_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m_959804796_0(__this, method) ((  bool (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m_959804796_0_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
extern "C"  SyncListChanged_t_778813465_0 * SyncList_1_get_Callback_m_551279527_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m_551279527_0(__this, method) ((  SyncListChanged_t_778813465_0 * (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_get_Callback_m_551279527_0_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m_1219864394_0_gshared (SyncList_1_t_1947302445_0 * __this, SyncListChanged_t_778813465_0 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m_1219864394_0(__this, ___value, method) ((  void (*) (SyncList_1_t_1947302445_0 *, SyncListChanged_t_778813465_0 *, const MethodInfo*))SyncList_1_set_Callback_m_1219864394_0_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m_2136084571_0_gshared (SyncList_1_t_1947302445_0 * __this, NetworkBehaviour_t435842068_0 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m_2136084571_0(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t_1947302445_0 *, NetworkBehaviour_t435842068_0 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m_2136084571_0_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m189555766_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___op, int32_t ___itemIndex, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m189555766_0(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, int32_t, uint32_t, const MethodInfo*))SyncList_1_SendMsg_m189555766_0_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m_2002035170_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m_2002035170_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m_2002035170_0_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m_2095594932_0_gshared (SyncList_1_t_1947302445_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m_2095594932_0(__this, ___reader, method) ((  void (*) (SyncList_1_t_1947302445_0 *, NetworkReader_t1995447500_0 *, const MethodInfo*))SyncList_1_HandleMsg_m_2095594932_0_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m1129445375_0_gshared (SyncList_1_t_1947302445_0 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m1129445375_0(__this, ___item, method) ((  void (*) (SyncList_1_t_1947302445_0 *, uint32_t, const MethodInfo*))SyncList_1_AddInternal_m1129445375_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
extern "C"  void SyncList_1_Add_m_2099848452_0_gshared (SyncList_1_t_1947302445_0 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Add_m_2099848452_0(__this, ___item, method) ((  void (*) (SyncList_1_t_1947302445_0 *, uint32_t, const MethodInfo*))SyncList_1_Add_m_2099848452_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
extern "C"  void SyncList_1_Clear_m1335898446_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1335898446_0(__this, method) ((  void (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_Clear_m1335898446_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m_591429456_0_gshared (SyncList_1_t_1947302445_0 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Contains_m_591429456_0(__this, ___item, method) ((  bool (*) (SyncList_1_t_1947302445_0 *, uint32_t, const MethodInfo*))SyncList_1_Contains_m_591429456_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m292715500_0_gshared (SyncList_1_t_1947302445_0 * __this, UInt32U5BU5D_t_1239494474_0* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m292715500_0(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t_1947302445_0 *, UInt32U5BU5D_t_1239494474_0*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m292715500_0_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m_1013366724_0_gshared (SyncList_1_t_1947302445_0 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m_1013366724_0(__this, ___item, method) ((  int32_t (*) (SyncList_1_t_1947302445_0 *, uint32_t, const MethodInfo*))SyncList_1_IndexOf_m_1013366724_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m1662426467_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Insert_m1662426467_0(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_Insert_m1662426467_0_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m_667112277_0_gshared (SyncList_1_t_1947302445_0 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Remove_m_667112277_0(__this, ___item, method) ((  bool (*) (SyncList_1_t_1947302445_0 *, uint32_t, const MethodInfo*))SyncList_1_Remove_m_667112277_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m_463720663_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m_463720663_0(__this, ___index, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m_463720663_0_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m_2118073756_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m_2118073756_0(__this, ___index, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m_2118073756_0_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
extern "C"  uint32_t SyncList_1_get_Item_m381942061_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m381942061_0(__this, ___i, method) ((  uint32_t (*) (SyncList_1_t_1947302445_0 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m381942061_0_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1673597306_0_gshared (SyncList_1_t_1947302445_0 * __this, int32_t ___i, uint32_t ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1673597306_0(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t_1947302445_0 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_set_Item_m1673597306_0_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
extern "C"  Object_t* SyncList_1_GetEnumerator_m1807597535_0_gshared (SyncList_1_t_1947302445_0 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1807597535_0(__this, method) ((  Object_t* (*) (SyncList_1_t_1947302445_0 *, const MethodInfo*))SyncList_1_GetEnumerator_m1807597535_0_gshared)(__this, method)
