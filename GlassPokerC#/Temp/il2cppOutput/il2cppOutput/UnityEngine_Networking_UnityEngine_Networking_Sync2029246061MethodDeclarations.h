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

// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t2029246061_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t_1097232255_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// System.Object
struct Object_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t_1283524286_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_SyncL_37680075.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
extern "C"  void SyncList_1__ctor_m_1168231991_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m_1168231991_0(__this, method) ((  void (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1__ctor_m_1168231991_0_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_663820382_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_663820382_0(__this, method) ((  Object_t * (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m_663820382_0_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m_164424091_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m_164424091_0(__this, method) ((  int32_t (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_get_Count_m_164424091_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1402644638_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1402644638_0(__this, method) ((  bool (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1402644638_0_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
extern "C"  SyncListChanged_t_1097232255_0 * SyncList_1_get_Callback_m_1111949069_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m_1111949069_0(__this, method) ((  SyncListChanged_t_1097232255_0 * (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_get_Callback_m_1111949069_0_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m_1715995568_0_gshared (SyncList_1_t2029246061_0 * __this, SyncListChanged_t_1097232255_0 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m_1715995568_0(__this, ___value, method) ((  void (*) (SyncList_1_t2029246061_0 *, SyncListChanged_t_1097232255_0 *, const MethodInfo*))SyncList_1_set_Callback_m_1715995568_0_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m1453845195_0_gshared (SyncList_1_t2029246061_0 * __this, NetworkBehaviour_t435842068_0 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m1453845195_0(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t2029246061_0 *, NetworkBehaviour_t435842068_0 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m1453845195_0_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m_257250608_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___op, int32_t ___itemIndex, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m_257250608_0(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, int32_t, Object_t *, const MethodInfo*))SyncList_1_SendMsg_m_257250608_0_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m_2042723528_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m_2042723528_0(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m_2042723528_0_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m_659922702_0_gshared (SyncList_1_t2029246061_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m_659922702_0(__this, ___reader, method) ((  void (*) (SyncList_1_t2029246061_0 *, NetworkReader_t1995447500_0 *, const MethodInfo*))SyncList_1_HandleMsg_m_659922702_0_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m568775833_0_gshared (SyncList_1_t2029246061_0 * __this, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m568775833_0(__this, ___item, method) ((  void (*) (SyncList_1_t2029246061_0 *, Object_t *, const MethodInfo*))SyncList_1_AddInternal_m568775833_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
extern "C"  void SyncList_1_Add_m783741334_0_gshared (SyncList_1_t2029246061_0 * __this, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_Add_m783741334_0(__this, ___item, method) ((  void (*) (SyncList_1_t2029246061_0 *, Object_t *, const MethodInfo*))SyncList_1_Add_m783741334_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
extern "C"  void SyncList_1_Clear_m532868596_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m532868596_0(__this, method) ((  void (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_Clear_m532868596_0_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
extern "C"  bool SyncList_1_Contains_m776436310_0_gshared (SyncList_1_t2029246061_0 * __this, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_Contains_m776436310_0(__this, ___item, method) ((  bool (*) (SyncList_1_t2029246061_0 *, Object_t *, const MethodInfo*))SyncList_1_Contains_m776436310_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m_499654650_0_gshared (SyncList_1_t2029246061_0 * __this, ObjectU5BU5D_t1774424924_0* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m_499654650_0(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t2029246061_0 *, ObjectU5BU5D_t1774424924_0*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m_499654650_0_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m_1107789354_0_gshared (SyncList_1_t2029246061_0 * __this, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m_1107789354_0(__this, ___item, method) ((  int32_t (*) (SyncList_1_t2029246061_0 *, Object_t *, const MethodInfo*))SyncList_1_IndexOf_m_1107789354_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m1849311229_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_Insert_m1849311229_0(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, Object_t *, const MethodInfo*))SyncList_1_Insert_m1849311229_0_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
extern "C"  bool SyncList_1_Remove_m715315153_0_gshared (SyncList_1_t2029246061_0 * __this, Object_t * ___item, const MethodInfo* method);
#define SyncList_1_Remove_m715315153_0(__this, ___item, method) ((  bool (*) (SyncList_1_t2029246061_0 *, Object_t *, const MethodInfo*))SyncList_1_Remove_m715315153_0_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m_276835901_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m_276835901_0(__this, ___index, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m_276835901_0_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m278902282_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m278902282_0(__this, ___index, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m278902282_0_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
extern "C"  Object_t * SyncList_1_get_Item_m568826823_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m568826823_0(__this, ___i, method) ((  Object_t * (*) (SyncList_1_t2029246061_0 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m568826823_0_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m881227156_0_gshared (SyncList_1_t2029246061_0 * __this, int32_t ___i, Object_t * ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m881227156_0(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t2029246061_0 *, int32_t, Object_t *, const MethodInfo*))SyncList_1_set_Item_m881227156_0_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
extern "C"  Object_t* SyncList_1_GetEnumerator_m1606710917_0_gshared (SyncList_1_t2029246061_0 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1606710917_0(__this, method) ((  Object_t* (*) (SyncList_1_t2029246061_0 *, const MethodInfo*))SyncList_1_GetEnumerator_m1606710917_0_gshared)(__this, method)
