#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_LightDataType1811330778.h"

// Utils.serializableSHC
struct serializableSHC_t2792503765;
// Utils.SerializableVector4
struct SerializableVector4_t4294681242;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t4206051219  : public Il2CppObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t2792503765 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t4294681242 * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t4206051219, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t4206051219, ___lightSHC_1)); }
	inline serializableSHC_t2792503765 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t2792503765 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t2792503765 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier(&___lightSHC_1, value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t4206051219, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t4294681242 * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t4294681242 ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t4294681242 * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier(&___primaryLightDirAndIntensity_2, value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t4206051219, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t4206051219, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
