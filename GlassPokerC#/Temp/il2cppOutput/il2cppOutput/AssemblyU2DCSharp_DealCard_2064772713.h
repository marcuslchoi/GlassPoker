#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// DealCard
struct  DealCard_t_2064772713_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject DealCard::card
	GameObject_t_184308134_0 * ___card_2;
	// System.Single DealCard::speed
	float ___speed_3;
	// System.Int32 DealCard::order
	int32_t ___order_4;
	// UnityEngine.Transform DealCard::target
	Transform_t1584899523_0 * ___target_5;
};
