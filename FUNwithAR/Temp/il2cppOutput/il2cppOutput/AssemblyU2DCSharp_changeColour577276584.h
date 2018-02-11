#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// changeColour
struct  changeColour_t577276584  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] changeColour::materials
	MaterialU5BU5D_t3123989686* ___materials_2;
	// UnityEngine.Renderer changeColour::rend
	Renderer_t257310565 * ___rend_3;
	// System.Int32 changeColour::index
	int32_t ___index_4;

public:
	inline static int32_t get_offset_of_materials_2() { return static_cast<int32_t>(offsetof(changeColour_t577276584, ___materials_2)); }
	inline MaterialU5BU5D_t3123989686* get_materials_2() const { return ___materials_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_2() { return &___materials_2; }
	inline void set_materials_2(MaterialU5BU5D_t3123989686* value)
	{
		___materials_2 = value;
		Il2CppCodeGenWriteBarrier(&___materials_2, value);
	}

	inline static int32_t get_offset_of_rend_3() { return static_cast<int32_t>(offsetof(changeColour_t577276584, ___rend_3)); }
	inline Renderer_t257310565 * get_rend_3() const { return ___rend_3; }
	inline Renderer_t257310565 ** get_address_of_rend_3() { return &___rend_3; }
	inline void set_rend_3(Renderer_t257310565 * value)
	{
		___rend_3 = value;
		Il2CppCodeGenWriteBarrier(&___rend_3, value);
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(changeColour_t577276584, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
