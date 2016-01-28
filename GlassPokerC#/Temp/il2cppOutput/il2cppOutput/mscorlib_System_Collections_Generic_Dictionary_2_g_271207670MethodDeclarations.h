﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t_271207670_0;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t_533356922_0;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t_91552547_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1112529714_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t213406050_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t1181624099_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t_987356744_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t_1180544054_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21242678784.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2064968959.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En815691415.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C"  void Dictionary_2__ctor_m_691912314_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_691912314_0(__this, method) ((  void (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2__ctor_m_691912314_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m46121213_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m46121213_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m46121213_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1445483474_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1445483474_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1445483474_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_141828649_0_gshared (Dictionary_2_t_271207670_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_141828649_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_271207670_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_141828649_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1230990187_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1230990187_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1230990187_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_1879511609_0_gshared (Dictionary_2_t_271207670_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_1879511609_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_271207670_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_1879511609_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1788485586_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1788485586_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1788485586_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1283531310_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1283531310_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1283531310_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_715944968_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_715944968_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_715944968_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m609461607_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m609461607_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m609461607_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_1522756470_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_1522756470_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_1522756470_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1499127656_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1499127656_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1499127656_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1001639333_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1001639333_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1001639333_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_463910676_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_463910676_0(__this, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_463910676_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1077224606_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1077224606_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1077224606_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1663828528_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1663828528_0(__this, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1663828528_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m704422843_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2_t1242678784_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m704422843_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2_t1242678784_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m704422843_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1681399125_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2_t1242678784_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1681399125_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2_t1242678784_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_1681399125_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1479787809_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2U5BU5D_t213406050_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1479787809_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2U5BU5D_t213406050_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1479787809_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_1095452528_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2_t1242678784_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_1095452528_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2_t1242678784_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m_1095452528_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m834934398_0_gshared (Dictionary_2_t_271207670_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m834934398_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m834934398_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_872754803_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_872754803_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_872754803_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1396472388_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1396472388_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1396472388_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1732907311_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1732907311_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1732907311_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_775209050_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_775209050_0(__this, method) ((  int32_t (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_get_Count_m_775209050_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C"  KeyValuePair_2_t_2064968959_0  Dictionary_2_get_Item_m_162263391_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m_162263391_0(__this, ___key, method) ((  KeyValuePair_2_t_2064968959_0  (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m_162263391_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2047497414_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2047497414_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_set_Item_m2047497414_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2057824510_0_gshared (Dictionary_2_t_271207670_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2057824510_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_271207670_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m2057824510_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_1161931143_0_gshared (Dictionary_2_t_271207670_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_1161931143_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_271207670_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_1161931143_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m271051445_0_gshared (Dictionary_2_t_271207670_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m271051445_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m271051445_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1242678784_0  Dictionary_2_make_pair_m_1160724407_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m_1160724407_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1242678784_0  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_make_pair_m_1160724407_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_key_m533238869_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m533238869_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_pick_key_m533238869_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C"  KeyValuePair_2_t_2064968959_0  Dictionary_2_pick_value_m_1503543567_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m_1503543567_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t_2064968959_0  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_pick_value_m_1503543567_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_1842743430_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2U5BU5D_t213406050_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_1842743430_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2U5BU5D_t213406050_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_1842743430_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C"  void Dictionary_2_Resize_m83351410_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m83351410_0(__this, method) ((  void (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_Resize_m83351410_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1817228817_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1817228817_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_Add_m_1817228817_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C"  void Dictionary_2_Clear_m1009188273_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1009188273_0(__this, method) ((  void (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_Clear_m1009188273_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m_1514367589_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m_1514367589_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m_1514367589_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m_1739742181_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m_1739742181_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_ContainsValue_m_1739742181_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m875527716_0_gshared (Dictionary_2_t_271207670_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m875527716_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_271207670_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m875527716_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m_1453440320_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m_1453440320_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m_1453440320_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m394088053_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m394088053_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m394088053_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_749526284_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, KeyValuePair_2_t_2064968959_0 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_749526284_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, Object_t *, KeyValuePair_2_t_2064968959_0 *, const MethodInfo*))Dictionary_2_TryGetValue_m_749526284_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C"  KeyCollection_t_987356744_0 * Dictionary_2_get_Keys_m_1717044825_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m_1717044825_0(__this, method) ((  KeyCollection_t_987356744_0 * (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_get_Keys_m_1717044825_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C"  ValueCollection_t_1180544054_0 * Dictionary_2_get_Values_m_1581744765_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m_1581744765_0(__this, method) ((  ValueCollection_t_1180544054_0 * (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_get_Values_m_1581744765_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C"  Object_t * Dictionary_2_ToTKey_m_16902224_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_16902224_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_16902224_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C"  KeyValuePair_2_t_2064968959_0  Dictionary_2_ToTValue_m1103737868_0_gshared (Dictionary_2_t_271207670_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1103737868_0(__this, ___value, method) ((  KeyValuePair_2_t_2064968959_0  (*) (Dictionary_2_t_271207670_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1103737868_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m_793750440_0_gshared (Dictionary_2_t_271207670_0 * __this, KeyValuePair_2_t1242678784_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m_793750440_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_271207670_0 *, KeyValuePair_2_t1242678784_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m_793750440_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C"  Enumerator_t815691415_0  Dictionary_2_GetEnumerator_m1901102801_0_gshared (Dictionary_2_t_271207670_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1901102801_0(__this, method) ((  Enumerator_t815691415_0  (*) (Dictionary_2_t_271207670_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1901102801_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m_352053752_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m_352053752_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m_352053752_0_gshared)(__this /* static, unused */, ___key, ___value, method)
