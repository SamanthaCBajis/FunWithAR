#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARKitPluginSettings
struct  UnityARKitPluginSettings_t857412912  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean UnityARKitPluginSettings::m_ARKitUsesFacetracking
	bool ___m_ARKitUsesFacetracking_2;
	// System.Boolean UnityARKitPluginSettings::AppRequiresARKit
	bool ___AppRequiresARKit_3;

public:
	inline static int32_t get_offset_of_m_ARKitUsesFacetracking_2() { return static_cast<int32_t>(offsetof(UnityARKitPluginSettings_t857412912, ___m_ARKitUsesFacetracking_2)); }
	inline bool get_m_ARKitUsesFacetracking_2() const { return ___m_ARKitUsesFacetracking_2; }
	inline bool* get_address_of_m_ARKitUsesFacetracking_2() { return &___m_ARKitUsesFacetracking_2; }
	inline void set_m_ARKitUsesFacetracking_2(bool value)
	{
		___m_ARKitUsesFacetracking_2 = value;
	}

	inline static int32_t get_offset_of_AppRequiresARKit_3() { return static_cast<int32_t>(offsetof(UnityARKitPluginSettings_t857412912, ___AppRequiresARKit_3)); }
	inline bool get_AppRequiresARKit_3() const { return ___AppRequiresARKit_3; }
	inline bool* get_address_of_AppRequiresARKit_3() { return &___AppRequiresARKit_3; }
	inline void set_AppRequiresARKit_3(bool value)
	{
		___AppRequiresARKit_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
