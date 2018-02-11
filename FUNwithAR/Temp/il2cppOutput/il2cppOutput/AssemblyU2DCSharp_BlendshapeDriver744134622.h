#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t4220419316;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t3991289194;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlendshapeDriver
struct  BlendshapeDriver_t744134622  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SkinnedMeshRenderer BlendshapeDriver::skinnedMeshRenderer
	SkinnedMeshRenderer_t4220419316 * ___skinnedMeshRenderer_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> BlendshapeDriver::currentBlendShapes
	Dictionary_2_t3991289194 * ___currentBlendShapes_3;

public:
	inline static int32_t get_offset_of_skinnedMeshRenderer_2() { return static_cast<int32_t>(offsetof(BlendshapeDriver_t744134622, ___skinnedMeshRenderer_2)); }
	inline SkinnedMeshRenderer_t4220419316 * get_skinnedMeshRenderer_2() const { return ___skinnedMeshRenderer_2; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of_skinnedMeshRenderer_2() { return &___skinnedMeshRenderer_2; }
	inline void set_skinnedMeshRenderer_2(SkinnedMeshRenderer_t4220419316 * value)
	{
		___skinnedMeshRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinnedMeshRenderer_2, value);
	}

	inline static int32_t get_offset_of_currentBlendShapes_3() { return static_cast<int32_t>(offsetof(BlendshapeDriver_t744134622, ___currentBlendShapes_3)); }
	inline Dictionary_2_t3991289194 * get_currentBlendShapes_3() const { return ___currentBlendShapes_3; }
	inline Dictionary_2_t3991289194 ** get_address_of_currentBlendShapes_3() { return &___currentBlendShapes_3; }
	inline void set_currentBlendShapes_3(Dictionary_2_t3991289194 * value)
	{
		___currentBlendShapes_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentBlendShapes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
