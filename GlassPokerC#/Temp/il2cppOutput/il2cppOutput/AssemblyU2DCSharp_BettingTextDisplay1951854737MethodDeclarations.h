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

// BettingTextDisplay
struct BettingTextDisplay_t1951854737_0;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t_2144114564_0;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t1995447500_0;

#include "codegen/il2cpp-codegen.h"

// System.Void BettingTextDisplay::.ctor()
extern "C"  void BettingTextDisplay__ctor_m1248458469_0 (BettingTextDisplay_t1951854737_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BettingTextDisplay::.cctor()
extern "C"  void BettingTextDisplay__cctor_m_434589336_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BettingTextDisplay::ActivatePlayers()
extern "C"  void BettingTextDisplay_ActivatePlayers_m962349826_0 (BettingTextDisplay_t1951854737_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BettingTextDisplay::UNetVersion()
extern "C"  void BettingTextDisplay_UNetVersion_m_805036717_0 (BettingTextDisplay_t1951854737_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BettingTextDisplay::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool BettingTextDisplay_OnSerialize_m1683893771_0 (BettingTextDisplay_t1951854737_0 * __this, NetworkWriter_t_2144114564_0 * ___writer, bool ___forceAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BettingTextDisplay::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void BettingTextDisplay_OnDeserialize_m336837416_0 (BettingTextDisplay_t1951854737_0 * __this, NetworkReader_t1995447500_0 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
