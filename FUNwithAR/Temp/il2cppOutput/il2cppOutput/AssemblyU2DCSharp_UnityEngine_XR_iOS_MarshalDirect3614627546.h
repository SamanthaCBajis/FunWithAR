﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t3614627546 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_t2243707581  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	IntPtr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3614627546, ___primaryDirAndIntensity_0)); }
	inline Vector4_t2243707581  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_t2243707581 * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_t2243707581  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t3614627546, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline IntPtr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline IntPtr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(IntPtr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
