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

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t1959189233_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
extern "C"  void PeerListMessage__ctor_m_339263419_0 (PeerListMessage_t1959189233_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerListMessage_Deserialize_m_70239820_0 (PeerListMessage_t1959189233_0 * __this, NetworkReader_t1995447500_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerListMessage_Serialize_m1655729957_0 (PeerListMessage_t1959189233_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
