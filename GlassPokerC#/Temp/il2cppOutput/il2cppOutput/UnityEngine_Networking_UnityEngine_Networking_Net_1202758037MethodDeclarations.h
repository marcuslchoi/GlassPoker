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

// UnityEngine.Networking.NetworkCRC
struct NetworkCRC_t_1202758037_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t_264498709_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.NetworkCRC::.ctor()
extern "C"  void NetworkCRC__ctor_m_1072793147_0 (NetworkCRC_t_1202758037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkCRC UnityEngine.Networking.NetworkCRC::get_singleton()
extern "C"  NetworkCRC_t_1202758037_0 * NetworkCRC_get_singleton_m549672783_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.NetworkCRC::get_scripts()
extern "C"  Dictionary_2_t_1305703446_0 * NetworkCRC_get_scripts_m_1630255641_0 (NetworkCRC_t_1202758037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::get_scriptCRCCheck()
extern "C"  bool NetworkCRC_get_scriptCRCCheck_m1129142457_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkCRC_set_scriptCRCCheck_m741265522_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::ReinitializeScriptCRCs(System.Reflection.Assembly)
extern "C"  void NetworkCRC_ReinitializeScriptCRCs_m1666251874_0 (Object_t * __this /* static, unused */, Assembly_t_957553394_0 * ___callingAssembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::RegisterBehaviour(System.String,System.Int32)
extern "C"  void NetworkCRC_RegisterBehaviour_m_882586222_0 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::Validate(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_Validate_m1902541533_0 (Object_t * __this /* static, unused */, CRCMessageEntryU5BU5D_t_264498709_0* ___scripts, int32_t ___numChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::ValidateInternal(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_ValidateInternal_m902234144_0 (NetworkCRC_t_1202758037_0 * __this, CRCMessageEntryU5BU5D_t_264498709_0* ___remoteScripts, int32_t ___numChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::Dump(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[])
extern "C"  void NetworkCRC_Dump_m1062205990_0 (NetworkCRC_t_1202758037_0 * __this, CRCMessageEntryU5BU5D_t_264498709_0* ___remoteScripts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
