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

// UnityEngine.Networking.SyncListInt
struct SyncListInt_t1850725969_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.SyncListInt::.ctor()
extern "C"  void SyncListInt__ctor_m_1965432923_0 (SyncListInt_t1850725969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void SyncListInt_SerializeItem_m_355180193_0 (SyncListInt_t1850725969_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, int32_t ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  int32_t SyncListInt_DeserializeItem_m_1973354849_0 (SyncListInt_t1850725969_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListInt_t1850725969_0 * SyncListInt_ReadInstance_m_997018784_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_ReadReference_m1287562057_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, SyncListInt_t1850725969_0 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_WriteInstance_m_1237323110_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, SyncListInt_t1850725969_0 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
