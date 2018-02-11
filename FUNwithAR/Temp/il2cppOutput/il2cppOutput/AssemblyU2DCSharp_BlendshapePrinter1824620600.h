#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t3991289194;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlendshapePrinter
struct  BlendshapePrinter_t1824620600  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BlendshapePrinter::shapeEnabled
	bool ___shapeEnabled_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> BlendshapePrinter::currentBlendShapes
	Dictionary_2_t3991289194 * ___currentBlendShapes_3;

public:
	inline static int32_t get_offset_of_shapeEnabled_2() { return static_cast<int32_t>(offsetof(BlendshapePrinter_t1824620600, ___shapeEnabled_2)); }
	inline bool get_shapeEnabled_2() const { return ___shapeEnabled_2; }
	inline bool* get_address_of_shapeEnabled_2() { return &___shapeEnabled_2; }
	inline void set_shapeEnabled_2(bool value)
	{
		___shapeEnabled_2 = value;
	}

	inline static int32_t get_offset_of_currentBlendShapes_3() { return static_cast<int32_t>(offsetof(BlendshapePrinter_t1824620600, ___currentBlendShapes_3)); }
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
