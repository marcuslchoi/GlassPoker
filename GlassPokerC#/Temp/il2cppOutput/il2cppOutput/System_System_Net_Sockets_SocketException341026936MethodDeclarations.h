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

// System.Net.Sockets.SocketException
struct SocketException_t341026936_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
extern "C"  void SocketException__ctor_m_1590733986_0 (SocketException_t341026936_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern "C"  void SocketException__ctor_m2020928431_0 (SocketException_t341026936_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SocketException__ctor_m_425686113_0 (SocketException_t341026936_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern "C"  int32_t SocketException_WSAGetLastError_internal_m1272279121_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::get_ErrorCode()
extern "C"  int32_t SocketException_get_ErrorCode_m20460216_0 (SocketException_t341026936_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
extern "C"  String_t* SocketException_get_Message_m1491030231_0 (SocketException_t341026936_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
