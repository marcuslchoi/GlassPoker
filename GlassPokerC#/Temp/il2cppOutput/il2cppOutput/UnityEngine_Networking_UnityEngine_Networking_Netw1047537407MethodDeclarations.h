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

// UnityEngine.Networking.NetworkProximityChecker
struct NetworkProximityChecker_t1047537407_0;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t_437512601_0;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t487934349_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkProximityChecker::.ctor()
extern "C"  void NetworkProximityChecker__ctor_m152473143_0 (NetworkProximityChecker_t1047537407_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::Update()
extern "C"  void NetworkProximityChecker_Update_m_2136405066_0 (NetworkProximityChecker_t1047537407_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkProximityChecker_OnCheckObserver_m_2103244867_0 (NetworkProximityChecker_t1047537407_0 * __this, NetworkConnection_t_437512601_0 * ___newObserver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkProximityChecker_OnRebuildObservers_m_401079056_0 (NetworkProximityChecker_t1047537407_0 * __this, HashSet_1_t487934349_0 * ___observers, bool ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkProximityChecker_OnSetLocalVisibility_m_2060270786_0 (NetworkProximityChecker_t1047537407_0 * __this, bool ___vis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::SetVis(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkProximityChecker_SetVis_m_1668276774_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___go, bool ___vis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
