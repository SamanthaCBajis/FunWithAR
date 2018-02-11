#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableSHC
struct  serializableSHC_t2792503765  : public Il2CppObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_t3397334013* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t2792503765, ___shcData_0)); }
	inline ByteU5BU5D_t3397334013* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t3397334013* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier(&___shcData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
