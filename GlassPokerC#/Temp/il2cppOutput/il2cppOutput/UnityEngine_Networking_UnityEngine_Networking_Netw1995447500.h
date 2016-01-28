#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetBuffer
struct NetBuffer_t_996774408_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Text.Encoding
struct Encoding_t453909881_0;

#include "mscorlib_System_Object_887538054.h"

// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t1995447500_0  : public Object_t
{
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t_996774408_0 * ___m_buf_2;
};
struct NetworkReader_t1995447500_0_StaticFields{
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_t_1238178395_0* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t453909881_0 * ___s_Encoding_4;
};
