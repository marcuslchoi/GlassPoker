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

// UnityEngine.Networking.SyncListString
struct SyncListString_t774041199_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.SyncListString::.ctor()
extern "C"  void SyncListString__ctor_m1906589633_0 (SyncListString_t774041199_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
extern "C"  void SyncListString_SerializeItem_m_2115683888_0 (SyncListString_t774041199_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  String_t* SyncListString_DeserializeItem_m108999558_0 (SyncListString_t774041199_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListString_t774041199_0 * SyncListString_ReadInstance_m1719474266_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_ReadReference_m_210250811_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, SyncListString_t774041199_0 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_WriteInstance_m_1302006060_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, SyncListString_t774041199_0 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
