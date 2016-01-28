#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t1612569412_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo848969301.h"

// UnityEngine.Networking.NetworkBehaviour/Invoker
struct  Invoker_t_561170465_0  : public Object_t
{
	// UnityEngine.Networking.NetworkBehaviour/UNetInvokeType UnityEngine.Networking.NetworkBehaviour/Invoker::invokeType
	int32_t ___invokeType_0;
	// System.Type UnityEngine.Networking.NetworkBehaviour/Invoker::invokeClass
	Type_t * ___invokeClass_1;
	// UnityEngine.Networking.NetworkBehaviour/CmdDelegate UnityEngine.Networking.NetworkBehaviour/Invoker::invokeFunction
	CmdDelegate_t1612569412_0 * ___invokeFunction_2;
};
