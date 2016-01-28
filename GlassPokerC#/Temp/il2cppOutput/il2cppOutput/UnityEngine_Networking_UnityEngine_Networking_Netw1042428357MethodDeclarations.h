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

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t1042428357_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::.ctor()
extern "C"  void ClientAuthorityMessage__ctor_m449975659_0 (ClientAuthorityMessage_t1042428357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ClientAuthorityMessage_Deserialize_m926367578_0 (ClientAuthorityMessage_t1042428357_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ClientAuthorityMessage_Serialize_m1665705547_0 (ClientAuthorityMessage_t1042428357_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
