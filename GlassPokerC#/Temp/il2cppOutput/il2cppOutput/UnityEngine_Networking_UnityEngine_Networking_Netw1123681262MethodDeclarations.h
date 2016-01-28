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

// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t1123681262_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkLobbyPlayer::.ctor()
extern "C"  void NetworkLobbyPlayer__ctor_m_1199523166_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkLobbyPlayer::get_slot()
extern "C"  uint8_t NetworkLobbyPlayer_get_slot_m_1135143491_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_slot(System.Byte)
extern "C"  void NetworkLobbyPlayer_set_slot_m355814542_0 (NetworkLobbyPlayer_t1123681262_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::get_readyToBegin()
extern "C"  bool NetworkLobbyPlayer_get_readyToBegin_m_928294072_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::set_readyToBegin(System.Boolean)
extern "C"  void NetworkLobbyPlayer_set_readyToBegin_m_17410239_0 (NetworkLobbyPlayer_t1123681262_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::Start()
extern "C"  void NetworkLobbyPlayer_Start_m2042581922_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnStartClient()
extern "C"  void NetworkLobbyPlayer_OnStartClient_m_638539602_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendReadyToBeginMessage_m784130580_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendNotReadyToBeginMessage()
extern "C"  void NetworkLobbyPlayer_SendNotReadyToBeginMessage_m_887404301_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::SendSceneLoadedMessage()
extern "C"  void NetworkLobbyPlayer_SendSceneLoadedMessage_m1716127072_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnLevelWasLoaded()
extern "C"  void NetworkLobbyPlayer_OnLevelWasLoaded_m_1960072309_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::RemovePlayer()
extern "C"  void NetworkLobbyPlayer_RemovePlayer_m1865753767_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientEnterLobby()
extern "C"  void NetworkLobbyPlayer_OnClientEnterLobby_m_1326177110_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientExitLobby()
extern "C"  void NetworkLobbyPlayer_OnClientExitLobby_m1721367470_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnClientReady(System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnClientReady_m1176103280_0 (NetworkLobbyPlayer_t1123681262_0 * __this, bool ___readyState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkLobbyPlayer::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkLobbyPlayer_OnSerialize_m861405740_0 (NetworkLobbyPlayer_t1123681262_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkLobbyPlayer_OnDeserialize_m_1259061941_0 (NetworkLobbyPlayer_t1123681262_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkLobbyPlayer::OnGUI()
extern "C"  void NetworkLobbyPlayer_OnGUI_m_1704124516_0 (NetworkLobbyPlayer_t1123681262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
