#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t1894858435_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "UnityEngine_Networking_UnityEngine_Networking_Netwo435842068.h"

// UnityEngine.Networking.NetworkTransformVisualizer
struct  NetworkTransformVisualizer_t_386450431_0  : public NetworkBehaviour_t435842068_0
{
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_VisualizerPrefab
	GameObject_t_184308134_0 * ___m_VisualizerPrefab_8;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformVisualizer::m_NetworkTransform
	NetworkTransform_t1894858435_0 * ___m_NetworkTransform_9;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_Visualizer
	GameObject_t_184308134_0 * ___m_Visualizer_10;
};
struct NetworkTransformVisualizer_t_386450431_0_StaticFields{
	// UnityEngine.Material UnityEngine.Networking.NetworkTransformVisualizer::s_LineMaterial
	Material_t1701708784_0 * ___s_LineMaterial_11;
};
