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

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t_1780099799_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::.ctor()
extern "C"  void CRCMessage__ctor_m_787124729_0 (CRCMessage_t_1780099799_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void CRCMessage_Deserialize_m_1683221258_0 (CRCMessage_t_1780099799_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void CRCMessage_Serialize_m451818215_0 (CRCMessage_t_1780099799_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
