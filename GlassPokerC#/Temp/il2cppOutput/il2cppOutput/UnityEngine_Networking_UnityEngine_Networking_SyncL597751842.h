﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t435842068_0;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t_334386290_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.SyncList`1<System.Int32>
struct  SyncList_1_t597751842_0  : public Object_t
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t_1321712961_0 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t435842068_0 * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t_334386290_0 * ___m_Callback_3;
};
