#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARAlignm2379988631.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARPlaneDe612575857.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t2138856896  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t189460977 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t1130867170 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t193706927 * ___savedClearMaterial_4;
	// UnityEngine.XR.iOS.UnityARAlignment UnityARCameraManager::startAlignment
	int32_t ___startAlignment_5;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityARCameraManager::planeDetection
	int32_t ___planeDetection_6;
	// System.Boolean UnityARCameraManager::getPointCloud
	bool ___getPointCloud_7;
	// System.Boolean UnityARCameraManager::enableLightEstimation
	bool ___enableLightEstimation_8;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___m_camera_2)); }
	inline Camera_t189460977 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t189460977 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t189460977 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_2, value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_session_3, value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___savedClearMaterial_4)); }
	inline Material_t193706927 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t193706927 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t193706927 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___savedClearMaterial_4, value);
	}

	inline static int32_t get_offset_of_startAlignment_5() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___startAlignment_5)); }
	inline int32_t get_startAlignment_5() const { return ___startAlignment_5; }
	inline int32_t* get_address_of_startAlignment_5() { return &___startAlignment_5; }
	inline void set_startAlignment_5(int32_t value)
	{
		___startAlignment_5 = value;
	}

	inline static int32_t get_offset_of_planeDetection_6() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___planeDetection_6)); }
	inline int32_t get_planeDetection_6() const { return ___planeDetection_6; }
	inline int32_t* get_address_of_planeDetection_6() { return &___planeDetection_6; }
	inline void set_planeDetection_6(int32_t value)
	{
		___planeDetection_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloud_7() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___getPointCloud_7)); }
	inline bool get_getPointCloud_7() const { return ___getPointCloud_7; }
	inline bool* get_address_of_getPointCloud_7() { return &___getPointCloud_7; }
	inline void set_getPointCloud_7(bool value)
	{
		___getPointCloud_7 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_8() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___enableLightEstimation_8)); }
	inline bool get_enableLightEstimation_8() const { return ___enableLightEstimation_8; }
	inline bool* get_address_of_enableLightEstimation_8() { return &___enableLightEstimation_8; }
	inline void set_enableLightEstimation_8(bool value)
	{
		___enableLightEstimation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
