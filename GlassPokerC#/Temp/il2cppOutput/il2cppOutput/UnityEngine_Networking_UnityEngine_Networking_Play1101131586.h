#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t_1494067577_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.PlayerController
struct  PlayerController_t1101131586_0  : public Object_t
{
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_2;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_t_1494067577_0 * ___unetView_3;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_t_184308134_0 * ___gameObject_4;
};
