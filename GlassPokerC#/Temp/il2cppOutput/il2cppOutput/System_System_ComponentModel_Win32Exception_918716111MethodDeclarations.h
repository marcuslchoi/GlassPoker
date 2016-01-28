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

// System.ComponentModel.Win32Exception
struct Win32Exception_t_918716111_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
extern "C"  void Win32Exception__ctor_m_1727958523_0 (Win32Exception_t_918716111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern "C"  void Win32Exception__ctor_m931350486_0 (Win32Exception_t_918716111_0 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Win32Exception__ctor_m655557062_0 (Win32Exception_t_918716111_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern "C"  int32_t Win32Exception_get_NativeErrorCode_m1057550088_0 (Win32Exception_t_918716111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Win32Exception_GetObjectData_m_709811421_0 (Win32Exception_t_918716111_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
extern "C"  String_t* Win32Exception_W32ErrorMessage_m_1705683834_0 (Object_t * __this /* static, unused */, int32_t ___error_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
