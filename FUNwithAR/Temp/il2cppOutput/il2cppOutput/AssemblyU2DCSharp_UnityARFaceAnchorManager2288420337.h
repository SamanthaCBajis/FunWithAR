#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARFaceAnchorManager
struct  UnityARFaceAnchorManager_t2288420337  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UnityARFaceAnchorManager::anchorPrefab
	GameObject_t1756533147 * ___anchorPrefab_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARFaceAnchorManager::m_session
	UnityARSessionNativeInterface_t1130867170 * ___m_session_3;

public:
	inline static int32_t get_offset_of_anchorPrefab_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorManager_t2288420337, ___anchorPrefab_2)); }
	inline GameObject_t1756533147 * get_anchorPrefab_2() const { return ___anchorPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_anchorPrefab_2() { return &___anchorPrefab_2; }
	inline void set_anchorPrefab_2(GameObject_t1756533147 * value)
	{
		___anchorPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___anchorPrefab_2, value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorManager_t2288420337, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_session_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
