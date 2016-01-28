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

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t_43847896_0;
// System.Object
struct Object_t;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.ResolveEventArgs
struct ResolveEventArgs_t362672006_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ModuleResolveEventHandler__ctor_m1364124346_0 (ModuleResolveEventHandler_t_43847896_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Module_t_2083915884_0 * ModuleResolveEventHandler_Invoke_m_1744587811_0 (ModuleResolveEventHandler_t_43847896_0 * __this, Object_t * ___sender, ResolveEventArgs_t362672006_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Module_t_2083915884_0 * pinvoke_delegate_wrapper_ModuleResolveEventHandler_t_43847896_0(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t362672006_0 * ___e);
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * ModuleResolveEventHandler_BeginInvoke_m_1009855641_0 (ModuleResolveEventHandler_t_43847896_0 * __this, Object_t * ___sender, ResolveEventArgs_t362672006_0 * ___e, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Module_t_2083915884_0 * ModuleResolveEventHandler_EndInvoke_m236958287_0 (ModuleResolveEventHandler_t_43847896_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
