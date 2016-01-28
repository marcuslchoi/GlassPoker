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

// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t296217_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Net.IPHostEntry
struct IPHostEntry_t_1615694227_0;
// System.Net.IPAddress
struct IPAddress_t125139831_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m_2051373686_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostAddresses(System.String,System.AsyncCallback,System.Object)
extern "C"  Object_t * Dns_BeginGetHostAddresses_m_1872195142_0 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, AsyncCallback_t_266361018_0 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::EndGetHostAddresses(System.IAsyncResult)
extern "C"  IPAddressU5BU5D_t296217_0* Dns_EndGetHostAddresses_m1749643331_0 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m_597064159_0 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t_816028754_0** ___h_aliases, StringU5BU5D_t_816028754_0** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByAddr_internal_m516933499_0 (Object_t * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t_816028754_0** ___h_aliases, StringU5BU5D_t_816028754_0** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t_1615694227_0 * Dns_hostent_to_IPHostEntry_m818428846_0 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t_816028754_0* ___h_aliases, StringU5BU5D_t_816028754_0* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C"  IPHostEntry_t_1615694227_0 * Dns_GetHostByAddressFromString_m1166485506_0 (Object_t * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t_1615694227_0 * Dns_GetHostEntry_m1150532033_0 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C"  IPHostEntry_t_1615694227_0 * Dns_GetHostEntry_m_582252988_0 (Object_t * __this /* static, unused */, IPAddress_t125139831_0 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C"  IPAddressU5BU5D_t296217_0* Dns_GetHostAddresses_m1512328765_0 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t_1615694227_0 * Dns_GetHostByName_m840368461_0 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
