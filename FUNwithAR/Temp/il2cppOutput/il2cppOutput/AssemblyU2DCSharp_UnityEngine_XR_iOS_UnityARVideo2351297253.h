#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t2351297253  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t193706927 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t1204166949 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3542995729 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3542995729 * ____videoTextureCbCr_5;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t2933234003  ____displayTransform_6;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_7;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___m_ClearMaterial_2)); }
	inline Material_t193706927 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t193706927 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t193706927 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClearMaterial_2, value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t1204166949 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t1204166949 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t1204166949 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoCommandBuffer_3, value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ____videoTextureY_4)); }
	inline Texture2D_t3542995729 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t3542995729 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t3542995729 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier(&____videoTextureY_4, value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ____videoTextureCbCr_5)); }
	inline Texture2D_t3542995729 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t3542995729 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t3542995729 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier(&____videoTextureCbCr_5, value);
	}

	inline static int32_t get_offset_of__displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ____displayTransform_6)); }
	inline Matrix4x4_t2933234003  get__displayTransform_6() const { return ____displayTransform_6; }
	inline Matrix4x4_t2933234003 * get_address_of__displayTransform_6() { return &____displayTransform_6; }
	inline void set__displayTransform_6(Matrix4x4_t2933234003  value)
	{
		____displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t2351297253, ___bCommandBufferInitialized_7)); }
	inline bool get_bCommandBufferInitialized_7() const { return ___bCommandBufferInitialized_7; }
	inline bool* get_address_of_bCommandBufferInitialized_7() { return &___bCommandBufferInitialized_7; }
	inline void set_bCommandBufferInitialized_7(bool value)
	{
		___bCommandBufferInitialized_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
