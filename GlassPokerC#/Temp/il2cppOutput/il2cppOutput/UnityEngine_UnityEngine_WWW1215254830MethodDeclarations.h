﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.WWW
struct WWW_t1215254830_0;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// System.Text.Encoding
struct Encoding_t453909881_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C"  void WWW__ctor_m_1091013656_0 (WWW_t1215254830_0 * __this, String_t* ___url, WWWForm_t_251098350_0 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m_1848288929_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382_0 (WWW_t1215254830_0 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m_700683048_0 (WWW_t1215254830_0 * __this, String_t* ___url, ByteU5BU5D_t_1238178395_0* ___postData, StringU5BU5D_t_816028754_0* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C"  Dictionary_2_t_1640843327_0 * WWW_get_responseHeaders_m_1806817252_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C"  String_t* WWW_get_responseHeadersString_m_1830506928_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C"  String_t* WWW_get_text_m_78917771_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t453909881_0 * WWW_get_DefaultEncoding_m_1787603003_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C"  Encoding_t453909881_0 * WWW_GetTextEncoder_m1656865633_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C"  ByteU5BU5D_t_1238178395_0* WWW_get_bytes_m2080623436_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m1787423074_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C"  bool WWW_get_isDone_m634060017_0 (WWW_t1215254830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  StringU5BU5D_t_816028754_0* WWW_FlattenedHeadersFrom_m_1065347809_0 (Object_t * __this /* static, unused */, Dictionary_2_t_1640843327_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C"  Dictionary_2_t_1640843327_0 * WWW_ParseHTTPHeaderString_m_599079575_0 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
