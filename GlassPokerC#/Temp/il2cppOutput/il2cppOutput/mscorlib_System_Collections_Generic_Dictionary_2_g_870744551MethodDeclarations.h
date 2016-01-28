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

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>
struct Dictionary_2_t_870744551_0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkSceneId>
struct IEqualityComparer_1_t_2131488152_0;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>
struct IDictionary_2_t180591078_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.NetworkSceneId>
struct ICollection_1_t1054456433_0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>[]
struct KeyValuePair_2U5BU5D_t558521093_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>
struct IEnumerator_1_t_1516667210_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.NetworkSceneId,System.Object>
struct KeyCollection_t_39040597_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.NetworkSceneId,System.Object>
struct ValueCollection_t1388496217_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21439685731.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Net_1731400738.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1120641260.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m_870681571_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m_870681571_0(__this, method) ((  void (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2__ctor_m_870681571_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1080141332_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1080141332_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1080141332_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m_859631205_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m_859631205_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_859631205_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_277748242_0_gshared (Dictionary_2_t_870744551_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_277748242_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_870744551_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_277748242_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_1961412286_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_1961412286_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_1961412286_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_1049251874_0_gshared (Dictionary_2_t_870744551_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_1049251874_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_870744551_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_1049251874_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_2096255599_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_2096255599_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m_2096255599_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2071378577_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2071378577_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m2071378577_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_1882602037_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_1882602037_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_1882602037_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1352436272_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1352436272_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1352436272_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_962062815_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_962062815_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_962062815_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_1182370891_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_1182370891_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_1182370891_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m_729193362_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m_729193362_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m_729193362_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_834805825_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_834805825_0(__this, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_834805825_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1137049963_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1137049963_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1137049963_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1277109437_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1277109437_0(__this, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_1277109437_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m476938756_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2_t1439685731_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m476938756_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2_t1439685731_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m476938756_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_818075202_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2_t1439685731_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_818075202_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2_t1439685731_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m_818075202_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1150777576_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2U5BU5D_t558521093_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1150777576_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2U5BU5D_t558521093_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1150777576_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m921086051_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2_t1439685731_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m921086051_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2_t1439685731_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m921086051_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1036568519_0_gshared (Dictionary_2_t_870744551_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1036568519_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1036568519_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_296335486_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_296335486_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_296335486_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m277455871_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m277455871_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m277455871_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_347247334_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_347247334_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_347247334_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_1963820795_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_1963820795_0(__this, method) ((  int32_t (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_get_Count_m_1963820795_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m_176796858_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m_176796858_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , const MethodInfo*))Dictionary_2_get_Item_m_176796858_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m277787421_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m277787421_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_set_Item_m277787421_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m_245374059_0_gshared (Dictionary_2_t_870744551_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m_245374059_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_870744551_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m_245374059_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_1868774206_0_gshared (Dictionary_2_t_870744551_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_1868774206_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_870744551_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_1868774206_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m817833278_0_gshared (Dictionary_2_t_870744551_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m817833278_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m817833278_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1439685731_0  Dictionary_2_make_pair_m70392970_0_gshared (Object_t * __this /* static, unused */, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m70392970_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t1439685731_0  (*) (Object_t * /* static, unused */, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_make_pair_m70392970_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::pick_key(TKey,TValue)
extern "C"  NetworkSceneId_t_1731400738_0  Dictionary_2_pick_key_m1065421356_0_gshared (Object_t * __this /* static, unused */, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1065421356_0(__this /* static, unused */, ___key, ___value, method) ((  NetworkSceneId_t_1731400738_0  (*) (Object_t * /* static, unused */, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1065421356_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m928574444_0_gshared (Object_t * __this /* static, unused */, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m928574444_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_pick_value_m928574444_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_313826095_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2U5BU5D_t558521093_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_313826095_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2U5BU5D_t558521093_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_313826095_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m_1163528261_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_1163528261_0(__this, method) ((  void (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_Resize_m_1163528261_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1866395336_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1866395336_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_Add_m_1866395336_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m830419016_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m830419016_0(__this, method) ((  void (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_Clear_m830419016_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1815728430_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1815728430_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , const MethodInfo*))Dictionary_2_ContainsKey_m1815728430_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m533519918_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m533519918_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m533519918_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1475361083_0_gshared (Dictionary_2_t_870744551_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1475361083_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_870744551_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m1475361083_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1886541833_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1886541833_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1886541833_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2132271874_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2132271874_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , const MethodInfo*))Dictionary_2_Remove_m2132271874_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_1246684281_0_gshared (Dictionary_2_t_870744551_0 * __this, NetworkSceneId_t_1731400738_0  ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_1246684281_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, NetworkSceneId_t_1731400738_0 , Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m_1246684281_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::get_Keys()
extern "C"  KeyCollection_t_39040597_0 * Dictionary_2_get_Keys_m1275563992_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1275563992_0(__this, method) ((  KeyCollection_t_39040597_0 * (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1275563992_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::get_Values()
extern "C"  ValueCollection_t1388496217_0 * Dictionary_2_get_Values_m1538141272_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1538141272_0(__this, method) ((  ValueCollection_t1388496217_0 * (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_get_Values_m1538141272_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::ToTKey(System.Object)
extern "C"  NetworkSceneId_t_1731400738_0  Dictionary_2_ToTKey_m515280263_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m515280263_0(__this, ___key, method) ((  NetworkSceneId_t_1731400738_0  (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m515280263_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m_759111417_0_gshared (Dictionary_2_t_870744551_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m_759111417_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t_870744551_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m_759111417_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m_333446939_0_gshared (Dictionary_2_t_870744551_0 * __this, KeyValuePair_2_t1439685731_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m_333446939_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_870744551_0 *, KeyValuePair_2_t1439685731_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m_333446939_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1120641260_0  Dictionary_2_GetEnumerator_m56903714_0_gshared (Dictionary_2_t_870744551_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m56903714_0(__this, method) ((  Enumerator_t1120641260_0  (*) (Dictionary_2_t_870744551_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m56903714_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m371988977_0_gshared (Object_t * __this /* static, unused */, NetworkSceneId_t_1731400738_0  ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m371988977_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, NetworkSceneId_t_1731400738_0 , Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m371988977_0_gshared)(__this /* static, unused */, ___key, ___value, method)
