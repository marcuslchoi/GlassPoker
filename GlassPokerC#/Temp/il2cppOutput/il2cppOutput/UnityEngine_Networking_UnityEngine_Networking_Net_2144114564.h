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
// System.Text.Encoding
struct Encoding_t453909881_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UIn_1959918339.h"

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t_2144114564_0  : public Object_t
{
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t_996774408_0 * ___m_Buffer_1;
};
struct NetworkWriter_t_2144114564_0_StaticFields{
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t453909881_0 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_t_1238178395_0* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_t_1959918339_0  ___s_FloatConverter_4;
};
