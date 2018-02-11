#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.Mesh
struct Mesh_t1356156583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARFaceMeshManager
struct  UnityARFaceMeshManager_t3649703719  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.MeshFilter UnityARFaceMeshManager::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARFaceMeshManager::m_session
	UnityARSessionNativeInterface_t1130867170 * ___m_session_3;
	// UnityEngine.Mesh UnityARFaceMeshManager::faceMesh
	Mesh_t1356156583 * ___faceMesh_4;

public:
	inline static int32_t get_offset_of_meshFilter_2() { return static_cast<int32_t>(offsetof(UnityARFaceMeshManager_t3649703719, ___meshFilter_2)); }
	inline MeshFilter_t3026937449 * get_meshFilter_2() const { return ___meshFilter_2; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_2() { return &___meshFilter_2; }
	inline void set_meshFilter_2(MeshFilter_t3026937449 * value)
	{
		___meshFilter_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_2, value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARFaceMeshManager_t3649703719, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_session_3, value);
	}

	inline static int32_t get_offset_of_faceMesh_4() { return static_cast<int32_t>(offsetof(UnityARFaceMeshManager_t3649703719, ___faceMesh_4)); }
	inline Mesh_t1356156583 * get_faceMesh_4() const { return ___faceMesh_4; }
	inline Mesh_t1356156583 ** get_address_of_faceMesh_4() { return &___faceMesh_4; }
	inline void set_faceMesh_4(Mesh_t1356156583 * value)
	{
		___faceMesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___faceMesh_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
