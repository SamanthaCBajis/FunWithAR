#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARFaceAn2991923452.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t3991289194;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_t245332630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_t4162019119  : public Il2CppObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t2991923452  ___faceAnchorData_0;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t4162019119, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t2991923452  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t2991923452 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t2991923452  value)
	{
		___faceAnchorData_0 = value;
	}
};

struct ARFaceAnchor_t4162019119_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_t3991289194 * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mg$cache0
	DictionaryVisitorHandler_t245332630 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t4162019119_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_t3991289194 * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_t3991289194 ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_t3991289194 * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&___blendshapesDictionary_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_t4162019119_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline DictionaryVisitorHandler_t245332630 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline DictionaryVisitorHandler_t245332630 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(DictionaryVisitorHandler_t245332630 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
