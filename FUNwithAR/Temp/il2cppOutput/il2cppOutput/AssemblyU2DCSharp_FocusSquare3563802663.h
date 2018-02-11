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
#include "AssemblyU2DCSharp_FocusSquare_FocusState737906503.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FocusSquare
struct  FocusSquare_t3563802663  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FocusSquare::findingSquare
	GameObject_t1756533147 * ___findingSquare_2;
	// UnityEngine.GameObject FocusSquare::foundSquare
	GameObject_t1756533147 * ___foundSquare_3;
	// System.Single FocusSquare::maxRayDistance
	float ___maxRayDistance_4;
	// UnityEngine.LayerMask FocusSquare::collisionLayerMask
	LayerMask_t3188175821  ___collisionLayerMask_5;
	// System.Single FocusSquare::findingSquareDist
	float ___findingSquareDist_6;
	// FocusSquare/FocusState FocusSquare::squareState
	int32_t ___squareState_7;
	// System.Boolean FocusSquare::trackingInitialized
	bool ___trackingInitialized_8;

public:
	inline static int32_t get_offset_of_findingSquare_2() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___findingSquare_2)); }
	inline GameObject_t1756533147 * get_findingSquare_2() const { return ___findingSquare_2; }
	inline GameObject_t1756533147 ** get_address_of_findingSquare_2() { return &___findingSquare_2; }
	inline void set_findingSquare_2(GameObject_t1756533147 * value)
	{
		___findingSquare_2 = value;
		Il2CppCodeGenWriteBarrier(&___findingSquare_2, value);
	}

	inline static int32_t get_offset_of_foundSquare_3() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___foundSquare_3)); }
	inline GameObject_t1756533147 * get_foundSquare_3() const { return ___foundSquare_3; }
	inline GameObject_t1756533147 ** get_address_of_foundSquare_3() { return &___foundSquare_3; }
	inline void set_foundSquare_3(GameObject_t1756533147 * value)
	{
		___foundSquare_3 = value;
		Il2CppCodeGenWriteBarrier(&___foundSquare_3, value);
	}

	inline static int32_t get_offset_of_maxRayDistance_4() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___maxRayDistance_4)); }
	inline float get_maxRayDistance_4() const { return ___maxRayDistance_4; }
	inline float* get_address_of_maxRayDistance_4() { return &___maxRayDistance_4; }
	inline void set_maxRayDistance_4(float value)
	{
		___maxRayDistance_4 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_5() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___collisionLayerMask_5)); }
	inline LayerMask_t3188175821  get_collisionLayerMask_5() const { return ___collisionLayerMask_5; }
	inline LayerMask_t3188175821 * get_address_of_collisionLayerMask_5() { return &___collisionLayerMask_5; }
	inline void set_collisionLayerMask_5(LayerMask_t3188175821  value)
	{
		___collisionLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_findingSquareDist_6() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___findingSquareDist_6)); }
	inline float get_findingSquareDist_6() const { return ___findingSquareDist_6; }
	inline float* get_address_of_findingSquareDist_6() { return &___findingSquareDist_6; }
	inline void set_findingSquareDist_6(float value)
	{
		___findingSquareDist_6 = value;
	}

	inline static int32_t get_offset_of_squareState_7() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___squareState_7)); }
	inline int32_t get_squareState_7() const { return ___squareState_7; }
	inline int32_t* get_address_of_squareState_7() { return &___squareState_7; }
	inline void set_squareState_7(int32_t value)
	{
		___squareState_7 = value;
	}

	inline static int32_t get_offset_of_trackingInitialized_8() { return static_cast<int32_t>(offsetof(FocusSquare_t3563802663, ___trackingInitialized_8)); }
	inline bool get_trackingInitialized_8() const { return ___trackingInitialized_8; }
	inline bool* get_address_of_trackingInitialized_8() { return &___trackingInitialized_8; }
	inline void set_trackingInitialized_8(bool value)
	{
		___trackingInitialized_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
