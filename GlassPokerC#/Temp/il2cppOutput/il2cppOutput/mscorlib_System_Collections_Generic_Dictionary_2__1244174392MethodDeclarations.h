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

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct Dictionary_2_t_1244174392_0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkInstanceId>
struct IEqualityComparer_1_t397875197_0;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct IDictionary_2_t194026715_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.NetworkInstanceId>
struct ICollection_1_t_1609267372_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkInstanceId,System.Object>[]
struct KeyValuePair_2U5BU5D_t_1686658784_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkInstanceId,System.Object>>
struct IEnumerator_1_t_36759963_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct KeyCollection_t_1618011402_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.NetworkInstanceId,System.Object>
struct ValueCollection_t1660016776_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21933438270.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1240163353.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2042228757.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m_1429637304_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_1429637304_0(__this, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2__ctor_m_1429637304_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_561972801_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_561972801_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_561972801_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m_225561776_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m_225561776_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_225561776_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_659128167_0_gshared (Dictionary_2_t_1244174392_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_659128167_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_659128167_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_286310739_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_286310739_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_286310739_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1904393353_0_gshared (Dictionary_2_t_1244174392_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1904393353_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m1904393353_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_333833584_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_333833584_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_333833584_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m_177219092_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m_177219092_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m_177219092_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_2047389898_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_2047389898_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_2047389898_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m572073701_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m572073701_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m572073701_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_665871284_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_665871284_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_665871284_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_539912730_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_539912730_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_539912730_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m335022883_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m335022883_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m335022883_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486_0(__this, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2108445486_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m343090080_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_2019731982_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_2019731982_0(__this, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_2019731982_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_1798469063_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2_t1933438270_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_1798469063_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2_t1933438270_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_1798469063_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_43128211_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2_t1933438270_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_43128211_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2_t1933438270_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_43128211_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2U5BU5D_t_1686658784_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2U5BU5D_t_1686658784_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1280032221_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2_t1933438270_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2_t1933438270_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1717422290_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388_0_gshared (Dictionary_2_t_1244174392_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1628571388_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_372405493_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_372405493_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_372405493_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1816868866_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1790753487_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_292070040_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_292070040_0(__this, method) ((  int32_t (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_get_Count_m_292070040_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m1265530399_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1265530399_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , const MethodInfo*))Dictionary_2_get_Item_m1265530399_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m_1156100344_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m_1156100344_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_set_Item_m_1156100344_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m631246528_0_gshared (Dictionary_2_t_1244174392_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m631246528_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m631246528_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_1074455305_0_gshared (Dictionary_2_t_1244174392_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_1074455305_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_1074455305_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_1391821645_0_gshared (Dictionary_2_t_1244174392_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_1391821645_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_1391821645_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1933438270_0  Dictionary_2_make_pair_m_690965177_0_gshared (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m_690965177_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1933438270_0  (*) (Object_t * /* static, unused */, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_make_pair_m_690965177_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::pick_key(TKey,TValue)
extern "C"  NetworkInstanceId_t1240163353_0  Dictionary_2_pick_key_m1118535319_0_gshared (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1118535319_0(__this /* static, unused */, ___key, ___value, method) ((  NetworkInstanceId_t1240163353_0  (*) (Object_t * /* static, unused */, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1118535319_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m925951283_0_gshared (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m925951283_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_value_m925951283_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_2144648260_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2U5BU5D_t_1686658784_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_2144648260_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2U5BU5D_t_1686658784_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_2144648260_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m_1311286800_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_1311286800_0(__this, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_Resize_m_1311286800_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1415877011_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1415877011_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_Add_m_1415877011_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m271463283_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m271463283_0(__this, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_Clear_m271463283_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m_1688416163_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m_1688416163_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , const MethodInfo*))Dictionary_2_ContainsKey_m_1688416163_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m_101798435_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m_101798435_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m_101798435_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m_370709786_0_gshared (Dictionary_2_t_1244174392_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m_370709786_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m_370709786_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1944382_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1944382_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1944382_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m49275507_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49275507_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , const MethodInfo*))Dictionary_2_Remove_m49275507_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m99974070_0_gshared (Dictionary_2_t_1244174392_0 * __this, NetworkInstanceId_t1240163353_0  ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m99974070_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, NetworkInstanceId_t1240163353_0 , Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m99974070_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Keys()
extern "C"  KeyCollection_t_1618011402_0 * Dictionary_2_get_Keys_m_837916251_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m_837916251_0(__this, method) ((  KeyCollection_t_1618011402_0 * (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_get_Keys_m_837916251_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::get_Values()
extern "C"  ValueCollection_t1660016776_0 * Dictionary_2_get_Values_m1956817537_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1956817537_0(__this, method) ((  ValueCollection_t1660016776_0 * (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_get_Values_m1956817537_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ToTKey(System.Object)
extern "C"  NetworkInstanceId_t1240163353_0  Dictionary_2_ToTKey_m568394226_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m568394226_0(__this, ___key, method) ((  NetworkInstanceId_t1240163353_0  (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m568394226_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m_761734578_0_gshared (Dictionary_2_t_1244174392_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m_761734578_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t_1244174392_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m_761734578_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1107556438_0_gshared (Dictionary_2_t_1244174392_0 * __this, KeyValuePair_2_t1933438270_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1107556438_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_1244174392_0 *, KeyValuePair_2_t1933438270_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1107556438_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2042228757_0  Dictionary_2_GetEnumerator_m1573238227_0_gshared (Dictionary_2_t_1244174392_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1573238227_0(__this, method) ((  Enumerator_t2042228757_0  (*) (Dictionary_2_t_1244174392_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1573238227_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m1108432266_0_gshared (Object_t * __this /* static, unused */, NetworkInstanceId_t1240163353_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1108432266_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, NetworkInstanceId_t1240163353_0 , Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1108432266_0_gshared)(__this /* static, unused */, ___key, ___value, method)
