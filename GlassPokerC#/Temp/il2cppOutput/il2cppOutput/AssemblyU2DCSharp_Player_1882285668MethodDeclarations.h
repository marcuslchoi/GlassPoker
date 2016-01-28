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

// Player
struct Player_t_1882285668_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::.cctor()
extern "C"  void Player__cctor_m770995251_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m_181155910_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnStartLocalPlayer()
extern "C"  void Player_OnStartLocalPlayer_m_85891661_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::GeneratePlayerPosList()
extern "C"  void Player_GeneratePlayerPosList_m_1227279788_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::PlacePlayersInPosition()
extern "C"  void Player_PlacePlayersInPosition_m1078646595_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m_1315013741_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::UNetVersion()
extern "C"  void Player_UNetVersion_m_1617338008_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool Player_OnSerialize_m_1056603690_0 (Player_t_1882285668_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___forceAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void Player_OnDeserialize_m_914204109_0 (Player_t_1882285668_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
