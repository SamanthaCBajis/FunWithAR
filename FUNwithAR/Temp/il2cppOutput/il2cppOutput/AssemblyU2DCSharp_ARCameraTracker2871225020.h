#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARCameraTracker
struct  ARCameraTracker_t2871225020  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera ARCameraTracker::trackedCamera
	Camera_t189460977 * ___trackedCamera_2;
	// System.Boolean ARCameraTracker::sessionStarted
	bool ___sessionStarted_3;

public:
	inline static int32_t get_offset_of_trackedCamera_2() { return static_cast<int32_t>(offsetof(ARCameraTracker_t2871225020, ___trackedCamera_2)); }
	inline Camera_t189460977 * get_trackedCamera_2() const { return ___trackedCamera_2; }
	inline Camera_t189460977 ** get_address_of_trackedCamera_2() { return &___trackedCamera_2; }
	inline void set_trackedCamera_2(Camera_t189460977 * value)
	{
		___trackedCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___trackedCamera_2, value);
	}

	inline static int32_t get_offset_of_sessionStarted_3() { return static_cast<int32_t>(offsetof(ARCameraTracker_t2871225020, ___sessionStarted_3)); }
	inline bool get_sessionStarted_3() const { return ___sessionStarted_3; }
	inline bool* get_address_of_sessionStarted_3() { return &___sessionStarted_3; }
	inline void set_sessionStarted_3(bool value)
	{
		___sessionStarted_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
