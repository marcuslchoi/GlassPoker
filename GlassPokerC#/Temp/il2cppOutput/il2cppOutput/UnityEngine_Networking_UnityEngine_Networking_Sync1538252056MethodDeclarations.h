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

// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t1538252056_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
extern "C"  void SyncListUInt__ctor_m_1958179208_0 (SyncListUInt_t1538252056_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
extern "C"  void SyncListUInt_SerializeItem_m_48678977_0 (SyncListUInt_t1538252056_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, uint32_t ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  uint32_t SyncListUInt_DeserializeItem_m_2095791435_0 (SyncListUInt_t1538252056_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListUInt_t1538252056_0 * SyncListUInt_ReadInstance_m1772250988_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_ReadReference_m_1131245133_0 (Object_t * __this /* static, unused */, NetworkReader_t1995447500_0 * ___reader, SyncListUInt_t1538252056_0 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_WriteInstance_m_2093273982_0 (Object_t * __this /* static, unused */, NetworkWriter_t_2144114564_0 * ___writer, SyncListUInt_t1538252056_0 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
