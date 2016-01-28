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

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t936640626_0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t_1835763993_0;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t_831693243_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t_1855729666_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t1346125002_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t_1534065989_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t949659424_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t_2041339598_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_454464664.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkI_1915302941.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1754908673.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m_252773090_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_252773090_0(__this, method) ((  void (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2__ctor_m_252773090_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1500405909_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1500405909_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1500405909_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m_716331206_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m_716331206_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_716331206_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_2092698257_0_gshared (Dictionary_2_t936640626_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_2092698257_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t936640626_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_2092698257_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_57448189_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_57448189_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_57448189_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m443946335_0_gshared (Dictionary_2_t936640626_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m443946335_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t936640626_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m443946335_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m306433338_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m306433338_0(__this, method) ((  Object_t* (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m306433338_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m631786902_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m631786902_0(__this, method) ((  Object_t* (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m631786902_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1460336992_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1460336992_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1460336992_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m440602831_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m440602831_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m440602831_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_1109284830_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_1109284830_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_1109284830_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_606775088_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_606775088_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_606775088_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m745998605_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m745998605_0(__this, ___key, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m745998605_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1207465852_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1207465852_0(__this, method) ((  bool (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_1207465852_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1548647882_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1548647882_0(__this, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1548647882_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1252987848_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1252987848_0(__this, method) ((  bool (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1252987848_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1681722147_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2_t_454464664_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1681722147_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2_t_454464664_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1681722147_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m775447619_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2_t_454464664_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m775447619_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2_t_454464664_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m775447619_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_325543865_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2U5BU5D_t1346125002_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_325543865_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2U5BU5D_t1346125002_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_325543865_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_704069592_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2_t_454464664_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_704069592_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2_t_454464664_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_704069592_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m767653350_0_gshared (Dictionary_2_t936640626_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m767653350_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t936640626_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m767653350_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1863326987_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1863326987_0(__this, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1863326987_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1505068628_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1505068628_0(__this, method) ((  Object_t* (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1505068628_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_385198023_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_385198023_0(__this, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_385198023_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1334566718_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1334566718_0(__this, method) ((  int32_t (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_get_Count_m1334566718_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m1904435209_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1904435209_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m1904435209_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m_132454818_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m_132454818_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t936640626_0 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m_132454818_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m992732310_0_gshared (Dictionary_2_t936640626_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m992732310_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t936640626_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m992732310_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m81608161_0_gshared (Dictionary_2_t936640626_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m81608161_0(__this, ___size, method) ((  void (*) (Dictionary_2_t936640626_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m81608161_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_875971555_0_gshared (Dictionary_2_t936640626_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_875971555_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t936640626_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_875971555_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t_454464664_0  Dictionary_2_make_pair_m1821569457_0_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1821569457_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t_454464664_0  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1821569457_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C"  uint64_t Dictionary_2_pick_key_m531244525_0_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m531244525_0(__this /* static, unused */, ___key, ___value, method) ((  uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m531244525_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m_894205303_0_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m_894205303_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m_894205303_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_919019246_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2U5BU5D_t1346125002_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_919019246_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2U5BU5D_t1346125002_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_919019246_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m811765466_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m811765466_0(__this, method) ((  void (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_Resize_m811765466_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_599778985_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_599778985_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t936640626_0 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m_599778985_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1448327497_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1448327497_0(__this, method) ((  void (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_Clear_m1448327497_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m509754163_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m509754163_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t936640626_0 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m509754163_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1408679347_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1408679347_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1408679347_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1731694012_0_gshared (Dictionary_2_t936640626_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1731694012_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t936640626_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m1731694012_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m_244104664_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m_244104664_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m_244104664_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2040302045_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2040302045_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t936640626_0 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m2040302045_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_81416052_0_gshared (Dictionary_2_t936640626_0 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_81416052_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t936640626_0 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m_81416052_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C"  KeyCollection_t949659424_0 * Dictionary_2_get_Keys_m1700407055_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1700407055_0(__this, method) ((  KeyCollection_t949659424_0 * (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1700407055_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C"  ValueCollection_t_2041339598_0 * Dictionary_2_get_Values_m1677928683_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1677928683_0(__this, method) ((  ValueCollection_t_2041339598_0 * (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_get_Values_m1677928683_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C"  uint64_t Dictionary_2_ToTKey_m_18896568_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_18896568_0(__this, ___key, method) ((  uint64_t (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_18896568_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m1713076132_0_gshared (Dictionary_2_t936640626_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1713076132_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t936640626_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1713076132_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1900040128_0_gshared (Dictionary_2_t936640626_0 * __this, KeyValuePair_2_t_454464664_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1900040128_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t936640626_0 *, KeyValuePair_2_t_454464664_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1900040128_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C"  Enumerator_t_1754908673_0  Dictionary_2_GetEnumerator_m_1350519191_0_gshared (Dictionary_2_t936640626_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m_1350519191_0(__this, method) ((  Enumerator_t_1754908673_0  (*) (Dictionary_2_t936640626_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m_1350519191_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m117962656_0_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m117962656_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m117962656_0_gshared)(__this /* static, unused */, ___key, ___value, method)
