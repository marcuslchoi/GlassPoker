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

// UnityEngine.Networking.SyncListBool
struct SyncListBool_t1537722568_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.SyncListBool::.ctor()
extern "C"  void SyncListBool__ctor_m_293156664_0 (SyncListBool_t1537722568_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void SyncListBool_SerializeItem_m_2027627774_0 (SyncListBool_t1537722568_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  bool SyncListBool_DeserializeItem_m_105541320_0 (SyncListBool_t1537722568_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListBool_t1537722568_0 * SyncListBool_ReadInstance_m_1886701876_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_ReadReference_m_1774373293_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, SyncListBool_t1537722568_0 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_WriteInstance_m1558565154_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, SyncListBool_t1537722568_0 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
