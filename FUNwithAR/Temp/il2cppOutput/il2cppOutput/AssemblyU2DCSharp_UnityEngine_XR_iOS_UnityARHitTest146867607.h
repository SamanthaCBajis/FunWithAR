#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t146867607  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t3275118058 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.UnityARHitTestExample::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.UnityARHitTestExample::collisionLayer
	LayerMask_t3188175821  ___collisionLayer_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t146867607, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t146867607, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayer_4() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t146867607, ___collisionLayer_4)); }
	inline LayerMask_t3188175821  get_collisionLayer_4() const { return ___collisionLayer_4; }
	inline LayerMask_t3188175821 * get_address_of_collisionLayer_4() { return &___collisionLayer_4; }
	inline void set_collisionLayer_4(LayerMask_t3188175821  value)
	{
		___collisionLayer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
