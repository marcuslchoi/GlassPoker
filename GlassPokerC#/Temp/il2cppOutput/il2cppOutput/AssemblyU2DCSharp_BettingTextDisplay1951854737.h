#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text[]
struct TextU5BU5D_t985283287_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo435842068.h"

// BettingTextDisplay
struct  BettingTextDisplay_t1951854737_0  : public NetworkBehaviour_t435842068_0
{
	// UnityEngine.UI.Text[] BettingTextDisplay::chipAmountText
	TextU5BU5D_t985283287_0* ___chipAmountText_8;
	// UnityEngine.UI.Text[] BettingTextDisplay::betAmountText
	TextU5BU5D_t985283287_0* ___betAmountText_9;
	// System.Int32 BettingTextDisplay::currentSmallBlindPos
	int32_t ___currentSmallBlindPos_10;
	// System.Int32 BettingTextDisplay::currentBigBlindPos
	int32_t ___currentBigBlindPos_11;
	// System.Int32 BettingTextDisplay::smallBlind
	int32_t ___smallBlind_12;
	// System.Collections.Generic.List`1<System.Int32> BettingTextDisplay::allPlayerPosList
	List_1_t_1321712961_0 * ___allPlayerPosList_19;
};
struct BettingTextDisplay_t1951854737_0_StaticFields{
	// System.Int32 BettingTextDisplay::currentPlayerPos
	int32_t ___currentPlayerPos_13;
	// System.Int32 BettingTextDisplay::previousPlayerPos
	int32_t ___previousPlayerPos_14;
	// System.Int32 BettingTextDisplay::currentMinRaise
	int32_t ___currentMinRaise_15;
	// System.Collections.Generic.List`1<System.Int32> BettingTextDisplay::activePlayerList
	List_1_t_1321712961_0 * ___activePlayerList_16;
	// System.Collections.Generic.List`1<System.Int32> BettingTextDisplay::activePlayerPosList
	List_1_t_1321712961_0 * ___activePlayerPosList_17;
	// UnityEngine.UI.Text BettingTextDisplay::potAmountText
	Text_t_204341102_0 * ___potAmountText_18;
};
