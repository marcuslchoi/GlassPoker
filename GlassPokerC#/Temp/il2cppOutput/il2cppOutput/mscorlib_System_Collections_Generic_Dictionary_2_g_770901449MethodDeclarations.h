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

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>
struct Dictionary_2_t_770901449_0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkHash128>
struct IEqualityComparer_1_t_1208878330_0;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>
struct IDictionary_2_t280434180_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.NetworkHash128>
struct ICollection_1_t1977066255_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,System.Object>[]
struct KeyValuePair_2U5BU5D_t2018461603_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,System.Object>>
struct IEnumerator_1_t1578468952_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.NetworkHash128,System.Object>
struct KeyCollection_t60802505_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.NetworkHash128,System.Object>
struct ValueCollection_t1488339319_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21539528833.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1346402176.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1220484362.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m_85083713_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_85083713_0(__this, method) ((  void (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2__ctor_m_85083713_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_323961162_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_323961162_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_323961162_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m_1437135559_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m_1437135559_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_1437135559_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_1183856496_0_gshared (Dictionary_2_t_770901449_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_1183856496_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_770901449_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_1183856496_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_1786624924_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_1786624924_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_1786624924_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_1272447360_0_gshared (Dictionary_2_t_770901449_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_1272447360_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_770901449_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_1272447360_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m_2042492978_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m_2042492978_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m_2042492978_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m244714947_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m244714947_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m244714947_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1714355667_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1714355667_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1714355667_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m_1217798644_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m_1217798644_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m_1217798644_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689_0(__this, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213_0(__this, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2_t1539528833_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2_t1539528833_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1763866144_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2_t1539528833_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1763866144_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2_t1539528833_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1763866144_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2U5BU5D_t2018461603_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2U5BU5D_t2018461603_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2_t1539528833_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2_t1539528833_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m_208026523_0_gshared (Dictionary_2_t_770901449_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m_208026523_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m_208026523_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1157509216_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1157509216_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1157509216_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_49763427_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_49763427_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_49763427_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1208421064_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1208421064_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1208421064_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_309977689_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_309977689_0(__this, method) ((  int32_t (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_get_Count_m_309977689_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m1893321572_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1893321572_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , const MethodInfo*))Dictionary_2_get_Item_m1893321572_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1386116415_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1386116415_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1386116415_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m_692774601_0_gshared (Dictionary_2_t_770901449_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m_692774601_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_770901449_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m_692774601_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m946681696_0_gshared (Dictionary_2_t_770901449_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m946681696_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_770901449_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m946681696_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m390835036_0_gshared (Dictionary_2_t_770901449_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m390835036_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m390835036_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1539528833_0  Dictionary_2_make_pair_m68853416_0_gshared (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m68853416_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1539528833_0  (*) (Object_t * /* static, unused */, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_make_pair_m68853416_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::pick_key(TKey,TValue)
extern "C"  NetworkHash128_t1346402176_0  Dictionary_2_pick_key_m_2121216946_0_gshared (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m_2121216946_0(__this /* static, unused */, ___key, ___value, method) ((  NetworkHash128_t1346402176_0  (*) (Object_t * /* static, unused */, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_key_m_2121216946_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m880848270_0_gshared (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m880848270_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_value_m880848270_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_489269005_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2U5BU5D_t2018461603_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_489269005_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2U5BU5D_t2018461603_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_489269005_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1715168857_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1715168857_0(__this, method) ((  void (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_Resize_m1715168857_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1052442154_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1052442154_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_Add_m_1052442154_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1616016874_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1616016874_0(__this, method) ((  void (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_Clear_m1616016874_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1278473296_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1278473296_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , const MethodInfo*))Dictionary_2_ContainsKey_m1278473296_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1641848912_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1641848912_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1641848912_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m633521629_0_gshared (Dictionary_2_t_770901449_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m633521629_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_770901449_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m633521629_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1139625127_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1139625127_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1139625127_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1861800608_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1861800608_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , const MethodInfo*))Dictionary_2_Remove_m1861800608_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m133102761_0_gshared (Dictionary_2_t_770901449_0 * __this, NetworkHash128_t1346402176_0  ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m133102761_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, NetworkHash128_t1346402176_0 , Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m133102761_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Keys()
extern "C"  KeyCollection_t60802505_0 * Dictionary_2_get_Keys_m1744555766_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1744555766_0(__this, method) ((  KeyCollection_t60802505_0 * (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1744555766_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Values()
extern "C"  ValueCollection_t1488339319_0 * Dictionary_2_get_Values_m1267670006_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1267670006_0(__this, method) ((  ValueCollection_t1488339319_0 * (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_get_Values_m1267670006_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ToTKey(System.Object)
extern "C"  NetworkHash128_t1346402176_0  Dictionary_2_ToTKey_m1623609257_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1623609257_0(__this, ___key, method) ((  NetworkHash128_t1346402176_0  (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1623609257_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m_806837591_0_gshared (Dictionary_2_t_770901449_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m_806837591_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t_770901449_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m_806837591_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m_1724579709_0_gshared (Dictionary_2_t_770901449_0 * __this, KeyValuePair_2_t1539528833_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m_1724579709_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_770901449_0 *, KeyValuePair_2_t1539528833_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m_1724579709_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1220484362_0  Dictionary_2_GetEnumerator_m_193934396_0_gshared (Dictionary_2_t_770901449_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m_193934396_0(__this, method) ((  Enumerator_t1220484362_0  (*) (Dictionary_2_t_770901449_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m_193934396_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m1751776019_0_gshared (Object_t * __this /* static, unused */, NetworkHash128_t1346402176_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1751776019_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, NetworkHash128_t1346402176_0 , Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1751776019_0_gshared)(__this /* static, unused */, ___key, ___value, method)
