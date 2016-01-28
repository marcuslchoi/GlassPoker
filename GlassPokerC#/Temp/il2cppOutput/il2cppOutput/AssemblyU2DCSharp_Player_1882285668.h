#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo435842068.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Player
struct  Player_t_1882285668_0  : public NetworkBehaviour_t435842068_0
{
	// UnityEngine.Vector3 Player::inputValue
	Vector3_t_725341337_0  ___inputValue_8;
	// System.Int32 Player::myPlayerNumber
	int32_t ___myPlayerNumber_9;
	// System.Collections.Generic.List`1<System.Int32> Player::allPlayerPosList
	List_1_t_1321712961_0 * ___allPlayerPosList_12;
	// System.Collections.Generic.List`1<System.Int32> Player::testPosList
	List_1_t_1321712961_0 * ___testPosList_13;
};
struct Player_t_1882285668_0_StaticFields{
	// System.Int32 Player::players
	int32_t ___players_10;
	// System.Collections.Generic.List`1<System.Int32> Player::playerNumbers
	List_1_t_1321712961_0 * ___playerNumbers_11;
};
