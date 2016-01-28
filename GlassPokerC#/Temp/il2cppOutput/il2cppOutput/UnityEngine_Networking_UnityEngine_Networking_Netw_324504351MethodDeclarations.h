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

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t_324504351_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
extern "C"  void PeerInfoMessage__ctor_m_1434725291_0 (PeerInfoMessage_t_324504351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerInfoMessage_Deserialize_m1101183428_0 (PeerInfoMessage_t_324504351_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerInfoMessage_Serialize_m_1069305035_0 (PeerInfoMessage_t_324504351_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
extern "C"  String_t* PeerInfoMessage_ToString_m1620338718_0 (PeerInfoMessage_t_324504351_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
