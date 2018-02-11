#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t1608204732;
// Utils.serializableFaceGeometry
struct serializableFaceGeometry_t2736682040;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t3991289194;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARFaceAnchor
struct  serializableUnityARFaceAnchor_t771516563  : public Il2CppObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARFaceAnchor::worldTransform
	serializableUnityARMatrix4x4_t1608204732 * ___worldTransform_0;
	// Utils.serializableFaceGeometry Utils.serializableUnityARFaceAnchor::faceGeometry
	serializableFaceGeometry_t2736682040 * ___faceGeometry_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Utils.serializableUnityARFaceAnchor::arBlendShapes
	Dictionary_2_t3991289194 * ___arBlendShapes_2;
	// System.Byte[] Utils.serializableUnityARFaceAnchor::identifierStr
	ByteU5BU5D_t3397334013* ___identifierStr_3;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t771516563, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t1608204732 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t1608204732 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t1608204732 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&___worldTransform_0, value);
	}

	inline static int32_t get_offset_of_faceGeometry_1() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t771516563, ___faceGeometry_1)); }
	inline serializableFaceGeometry_t2736682040 * get_faceGeometry_1() const { return ___faceGeometry_1; }
	inline serializableFaceGeometry_t2736682040 ** get_address_of_faceGeometry_1() { return &___faceGeometry_1; }
	inline void set_faceGeometry_1(serializableFaceGeometry_t2736682040 * value)
	{
		___faceGeometry_1 = value;
		Il2CppCodeGenWriteBarrier(&___faceGeometry_1, value);
	}

	inline static int32_t get_offset_of_arBlendShapes_2() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t771516563, ___arBlendShapes_2)); }
	inline Dictionary_2_t3991289194 * get_arBlendShapes_2() const { return ___arBlendShapes_2; }
	inline Dictionary_2_t3991289194 ** get_address_of_arBlendShapes_2() { return &___arBlendShapes_2; }
	inline void set_arBlendShapes_2(Dictionary_2_t3991289194 * value)
	{
		___arBlendShapes_2 = value;
		Il2CppCodeGenWriteBarrier(&___arBlendShapes_2, value);
	}

	inline static int32_t get_offset_of_identifierStr_3() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_t771516563, ___identifierStr_3)); }
	inline ByteU5BU5D_t3397334013* get_identifierStr_3() const { return ___identifierStr_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_identifierStr_3() { return &___identifierStr_3; }
	inline void set_identifierStr_3(ByteU5BU5D_t3397334013* value)
	{
		___identifierStr_3 = value;
		Il2CppCodeGenWriteBarrier(&___identifierStr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
