﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARTrackingSta2048880995.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARTrackingSta4227173799.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityVideoPar2644681676.h"

// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t1608204732;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t4206051219;
// Utils.serializablePointCloud
struct serializablePointCloud_t1992421910;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t2284676354  : public Il2CppObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t1608204732 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t1608204732 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t2644681676  ___videoParams_4;
	// Utils.serializableUnityARLightData Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t4206051219 * ___lightData_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t1992421910 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t1608204732 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t1608204732 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t1608204732 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t1608204732 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&___worldTransform_0, value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t1608204732 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t1608204732 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t1608204732 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier(&___projectionMatrix_1, value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___videoParams_4)); }
	inline UnityVideoParams_t2644681676  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t2644681676 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t2644681676  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___lightData_5)); }
	inline serializableUnityARLightData_t4206051219 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t4206051219 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t4206051219 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier(&___lightData_5, value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___pointCloud_6)); }
	inline serializablePointCloud_t1992421910 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t1992421910 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t1992421910 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointCloud_6, value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t2284676354, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t1608204732 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t1608204732 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t1608204732 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___displayTransform_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
