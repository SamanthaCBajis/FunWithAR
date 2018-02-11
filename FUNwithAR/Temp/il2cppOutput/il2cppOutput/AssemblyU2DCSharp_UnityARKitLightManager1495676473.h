#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonic364136731.h"

// UnityEngine.Light[]
struct LightU5BU5D_t1037744493;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARKitLightManager
struct  UnityARKitLightManager_t1495676473  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light[] UnityARKitLightManager::lightsInScene
	LightU5BU5D_t1037744493* ___lightsInScene_2;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityARKitLightManager::shl
	SphericalHarmonicsL2_t364136731  ___shl_3;

public:
	inline static int32_t get_offset_of_lightsInScene_2() { return static_cast<int32_t>(offsetof(UnityARKitLightManager_t1495676473, ___lightsInScene_2)); }
	inline LightU5BU5D_t1037744493* get_lightsInScene_2() const { return ___lightsInScene_2; }
	inline LightU5BU5D_t1037744493** get_address_of_lightsInScene_2() { return &___lightsInScene_2; }
	inline void set_lightsInScene_2(LightU5BU5D_t1037744493* value)
	{
		___lightsInScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightsInScene_2, value);
	}

	inline static int32_t get_offset_of_shl_3() { return static_cast<int32_t>(offsetof(UnityARKitLightManager_t1495676473, ___shl_3)); }
	inline SphericalHarmonicsL2_t364136731  get_shl_3() const { return ___shl_3; }
	inline SphericalHarmonicsL2_t364136731 * get_address_of_shl_3() { return &___shl_3; }
	inline void set_shl_3(SphericalHarmonicsL2_t364136731  value)
	{
		___shl_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
