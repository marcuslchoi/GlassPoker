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

// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t428363838_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
extern "C"  void SyncListFloat__ctor_m1597503384_0 (SyncListFloat_t428363838_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
extern "C"  void SyncListFloat_SerializeItem_m_1396274800_0 (SyncListFloat_t428363838_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, float ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  float SyncListFloat_DeserializeItem_m1430319278_0 (SyncListFloat_t428363838_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListFloat_t428363838_0 * SyncListFloat_ReadInstance_m1110221632_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_ReadReference_m_122070231_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, SyncListFloat_t428363838_0 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_WriteInstance_m119806522_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, SyncListFloat_t428363838_0 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
