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

// Utils.serializableFaceGeometry
struct  serializableFaceGeometry_t2736682040  : public Il2CppObject
{
public:
	// System.Byte[] Utils.serializableFaceGeometry::vertices
	ByteU5BU5D_t3397334013* ___vertices_0;
	// System.Byte[] Utils.serializableFaceGeometry::texCoords
	ByteU5BU5D_t3397334013* ___texCoords_1;
	// System.Byte[] Utils.serializableFaceGeometry::triIndices
	ByteU5BU5D_t3397334013* ___triIndices_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t2736682040, ___vertices_0)); }
	inline ByteU5BU5D_t3397334013* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t3397334013* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t2736682040, ___texCoords_1)); }
	inline ByteU5BU5D_t3397334013* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t3397334013* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier(&___texCoords_1, value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t2736682040, ___triIndices_2)); }
	inline ByteU5BU5D_t3397334013* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t3397334013* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier(&___triIndices_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
