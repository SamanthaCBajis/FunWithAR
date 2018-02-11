#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARCamera4198559457.h"

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t496507918;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t2646854145;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3886071158;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t142665927;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t4216008690;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t1104644293;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t1656212632;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t3921442036;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t3345519745;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t3012063082;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t872580813;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3370800699;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t1333006279;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3296518558;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1558153491;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1622117597;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t3705772742;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3189755211;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3999066834;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t1661963345;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t4166385952;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1146330100;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t2983102933;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t689428754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t1130867170  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	IntPtr_t ___m_NativeARSession_14;

public:
	inline static int32_t get_offset_of_m_NativeARSession_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170, ___m_NativeARSession_14)); }
	inline IntPtr_t get_m_NativeARSession_14() const { return ___m_NativeARSession_14; }
	inline IntPtr_t* get_address_of_m_NativeARSession_14() { return &___m_NativeARSession_14; }
	inline void set_m_NativeARSession_14(IntPtr_t value)
	{
		___m_NativeARSession_14 = value;
	}
};

struct UnityARSessionNativeInterface_t1130867170_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t496507918 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t2646854145 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3886071158 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t142665927 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t4216008690 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t1104644293 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t1656212632 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t3921442036 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t3345519745 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t3012063082 * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t872580813 * ___ARSessionFailedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3370800699 * ___ARSessionInterruptedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3370800699 * ___ARSessioninterruptionEndedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t1333006279 * ___ARSessionTrackingChangedEvent_13;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4198559457  ___s_Camera_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t1130867170 * ___s_UnityARSessionNativeInterface_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3296518558 * ___U3CU3Ef__mgU24cache0_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t872580813 * ___U3CU3Ef__mgU24cache1_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3370800699 * ___U3CU3Ef__mgU24cache2_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3370800699 * ___U3CU3Ef__mgU24cache3_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t1558153491 * ___U3CU3Ef__mgU24cache4_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t1622117597 * ___U3CU3Ef__mgU24cache5_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t3705772742 * ___U3CU3Ef__mgU24cache6_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t3189755211 * ___U3CU3Ef__mgU24cache7_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3999066834 * ___U3CU3Ef__mgU24cache8_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t1661963345 * ___U3CU3Ef__mgU24cache9_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t4166385952 * ___U3CU3Ef__mgU24cacheA_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARFaceAnchorAdded_t1146330100 * ___U3CU3Ef__mgU24cacheB_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARFaceAnchorUpdated_t2983102933 * ___U3CU3Ef__mgU24cacheC_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARFaceAnchorRemoved_t689428754 * ___U3CU3Ef__mgU24cacheD_30;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t496507918 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t496507918 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t496507918 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___ARFrameUpdatedEvent_0, value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t2646854145 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t2646854145 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t2646854145 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorAddedEvent_1, value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3886071158 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3886071158 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3886071158 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorUpdatedEvent_2, value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t142665927 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t142665927 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t142665927 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ARAnchorRemovedEvent_3, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t4216008690 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t4216008690 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t4216008690 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorAddedEvent_4, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t1104644293 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t1104644293 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t1104644293 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorUpdatedEvent_5, value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t1656212632 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t1656212632 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t1656212632 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___ARUserAnchorRemovedEvent_6, value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t3921442036 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t3921442036 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t3921442036 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___ARFaceAnchorAddedEvent_7, value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_t3345519745 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_t3345519745 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_t3345519745 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___ARFaceAnchorUpdatedEvent_8, value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t3012063082 * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t3012063082 ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t3012063082 * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___ARFaceAnchorRemovedEvent_9, value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionFailedEvent_10)); }
	inline ARSessionFailed_t872580813 * get_ARSessionFailedEvent_10() const { return ___ARSessionFailedEvent_10; }
	inline ARSessionFailed_t872580813 ** get_address_of_ARSessionFailedEvent_10() { return &___ARSessionFailedEvent_10; }
	inline void set_ARSessionFailedEvent_10(ARSessionFailed_t872580813 * value)
	{
		___ARSessionFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionFailedEvent_10, value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionInterruptedEvent_11)); }
	inline ARSessionCallback_t3370800699 * get_ARSessionInterruptedEvent_11() const { return ___ARSessionInterruptedEvent_11; }
	inline ARSessionCallback_t3370800699 ** get_address_of_ARSessionInterruptedEvent_11() { return &___ARSessionInterruptedEvent_11; }
	inline void set_ARSessionInterruptedEvent_11(ARSessionCallback_t3370800699 * value)
	{
		___ARSessionInterruptedEvent_11 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionInterruptedEvent_11, value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessioninterruptionEndedEvent_12)); }
	inline ARSessionCallback_t3370800699 * get_ARSessioninterruptionEndedEvent_12() const { return ___ARSessioninterruptionEndedEvent_12; }
	inline ARSessionCallback_t3370800699 ** get_address_of_ARSessioninterruptionEndedEvent_12() { return &___ARSessioninterruptionEndedEvent_12; }
	inline void set_ARSessioninterruptionEndedEvent_12(ARSessionCallback_t3370800699 * value)
	{
		___ARSessioninterruptionEndedEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessioninterruptionEndedEvent_12, value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___ARSessionTrackingChangedEvent_13)); }
	inline ARSessionTrackingChanged_t1333006279 * get_ARSessionTrackingChangedEvent_13() const { return ___ARSessionTrackingChangedEvent_13; }
	inline ARSessionTrackingChanged_t1333006279 ** get_address_of_ARSessionTrackingChangedEvent_13() { return &___ARSessionTrackingChangedEvent_13; }
	inline void set_ARSessionTrackingChangedEvent_13(ARSessionTrackingChanged_t1333006279 * value)
	{
		___ARSessionTrackingChangedEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___ARSessionTrackingChangedEvent_13, value);
	}

	inline static int32_t get_offset_of_s_Camera_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_Camera_15)); }
	inline UnityARCamera_t4198559457  get_s_Camera_15() const { return ___s_Camera_15; }
	inline UnityARCamera_t4198559457 * get_address_of_s_Camera_15() { return &___s_Camera_15; }
	inline void set_s_Camera_15(UnityARCamera_t4198559457  value)
	{
		___s_Camera_15 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___s_UnityARSessionNativeInterface_16)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_s_UnityARSessionNativeInterface_16() const { return ___s_UnityARSessionNativeInterface_16; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_s_UnityARSessionNativeInterface_16() { return &___s_UnityARSessionNativeInterface_16; }
	inline void set_s_UnityARSessionNativeInterface_16(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___s_UnityARSessionNativeInterface_16 = value;
		Il2CppCodeGenWriteBarrier(&___s_UnityARSessionNativeInterface_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline internal_ARFrameUpdate_t3296518558 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline internal_ARFrameUpdate_t3296518558 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(internal_ARFrameUpdate_t3296518558 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache1_18)); }
	inline ARSessionFailed_t872580813 * get_U3CU3Ef__mgU24cache1_18() const { return ___U3CU3Ef__mgU24cache1_18; }
	inline ARSessionFailed_t872580813 ** get_address_of_U3CU3Ef__mgU24cache1_18() { return &___U3CU3Ef__mgU24cache1_18; }
	inline void set_U3CU3Ef__mgU24cache1_18(ARSessionFailed_t872580813 * value)
	{
		___U3CU3Ef__mgU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache2_19)); }
	inline ARSessionCallback_t3370800699 * get_U3CU3Ef__mgU24cache2_19() const { return ___U3CU3Ef__mgU24cache2_19; }
	inline ARSessionCallback_t3370800699 ** get_address_of_U3CU3Ef__mgU24cache2_19() { return &___U3CU3Ef__mgU24cache2_19; }
	inline void set_U3CU3Ef__mgU24cache2_19(ARSessionCallback_t3370800699 * value)
	{
		___U3CU3Ef__mgU24cache2_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache3_20)); }
	inline ARSessionCallback_t3370800699 * get_U3CU3Ef__mgU24cache3_20() const { return ___U3CU3Ef__mgU24cache3_20; }
	inline ARSessionCallback_t3370800699 ** get_address_of_U3CU3Ef__mgU24cache3_20() { return &___U3CU3Ef__mgU24cache3_20; }
	inline void set_U3CU3Ef__mgU24cache3_20(ARSessionCallback_t3370800699 * value)
	{
		___U3CU3Ef__mgU24cache3_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache4_21)); }
	inline internal_ARSessionTrackingChanged_t1558153491 * get_U3CU3Ef__mgU24cache4_21() const { return ___U3CU3Ef__mgU24cache4_21; }
	inline internal_ARSessionTrackingChanged_t1558153491 ** get_address_of_U3CU3Ef__mgU24cache4_21() { return &___U3CU3Ef__mgU24cache4_21; }
	inline void set_U3CU3Ef__mgU24cache4_21(internal_ARSessionTrackingChanged_t1558153491 * value)
	{
		___U3CU3Ef__mgU24cache4_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache5_22)); }
	inline internal_ARAnchorAdded_t1622117597 * get_U3CU3Ef__mgU24cache5_22() const { return ___U3CU3Ef__mgU24cache5_22; }
	inline internal_ARAnchorAdded_t1622117597 ** get_address_of_U3CU3Ef__mgU24cache5_22() { return &___U3CU3Ef__mgU24cache5_22; }
	inline void set_U3CU3Ef__mgU24cache5_22(internal_ARAnchorAdded_t1622117597 * value)
	{
		___U3CU3Ef__mgU24cache5_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache6_23)); }
	inline internal_ARAnchorUpdated_t3705772742 * get_U3CU3Ef__mgU24cache6_23() const { return ___U3CU3Ef__mgU24cache6_23; }
	inline internal_ARAnchorUpdated_t3705772742 ** get_address_of_U3CU3Ef__mgU24cache6_23() { return &___U3CU3Ef__mgU24cache6_23; }
	inline void set_U3CU3Ef__mgU24cache6_23(internal_ARAnchorUpdated_t3705772742 * value)
	{
		___U3CU3Ef__mgU24cache6_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache7_24)); }
	inline internal_ARAnchorRemoved_t3189755211 * get_U3CU3Ef__mgU24cache7_24() const { return ___U3CU3Ef__mgU24cache7_24; }
	inline internal_ARAnchorRemoved_t3189755211 ** get_address_of_U3CU3Ef__mgU24cache7_24() { return &___U3CU3Ef__mgU24cache7_24; }
	inline void set_U3CU3Ef__mgU24cache7_24(internal_ARAnchorRemoved_t3189755211 * value)
	{
		___U3CU3Ef__mgU24cache7_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache8_25)); }
	inline internal_ARUserAnchorAdded_t3999066834 * get_U3CU3Ef__mgU24cache8_25() const { return ___U3CU3Ef__mgU24cache8_25; }
	inline internal_ARUserAnchorAdded_t3999066834 ** get_address_of_U3CU3Ef__mgU24cache8_25() { return &___U3CU3Ef__mgU24cache8_25; }
	inline void set_U3CU3Ef__mgU24cache8_25(internal_ARUserAnchorAdded_t3999066834 * value)
	{
		___U3CU3Ef__mgU24cache8_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cache9_26)); }
	inline internal_ARUserAnchorUpdated_t1661963345 * get_U3CU3Ef__mgU24cache9_26() const { return ___U3CU3Ef__mgU24cache9_26; }
	inline internal_ARUserAnchorUpdated_t1661963345 ** get_address_of_U3CU3Ef__mgU24cache9_26() { return &___U3CU3Ef__mgU24cache9_26; }
	inline void set_U3CU3Ef__mgU24cache9_26(internal_ARUserAnchorUpdated_t1661963345 * value)
	{
		___U3CU3Ef__mgU24cache9_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cacheA_27)); }
	inline internal_ARUserAnchorRemoved_t4166385952 * get_U3CU3Ef__mgU24cacheA_27() const { return ___U3CU3Ef__mgU24cacheA_27; }
	inline internal_ARUserAnchorRemoved_t4166385952 ** get_address_of_U3CU3Ef__mgU24cacheA_27() { return &___U3CU3Ef__mgU24cacheA_27; }
	inline void set_U3CU3Ef__mgU24cacheA_27(internal_ARUserAnchorRemoved_t4166385952 * value)
	{
		___U3CU3Ef__mgU24cacheA_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cacheB_28)); }
	inline internal_ARFaceAnchorAdded_t1146330100 * get_U3CU3Ef__mgU24cacheB_28() const { return ___U3CU3Ef__mgU24cacheB_28; }
	inline internal_ARFaceAnchorAdded_t1146330100 ** get_address_of_U3CU3Ef__mgU24cacheB_28() { return &___U3CU3Ef__mgU24cacheB_28; }
	inline void set_U3CU3Ef__mgU24cacheB_28(internal_ARFaceAnchorAdded_t1146330100 * value)
	{
		___U3CU3Ef__mgU24cacheB_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cacheC_29)); }
	inline internal_ARFaceAnchorUpdated_t2983102933 * get_U3CU3Ef__mgU24cacheC_29() const { return ___U3CU3Ef__mgU24cacheC_29; }
	inline internal_ARFaceAnchorUpdated_t2983102933 ** get_address_of_U3CU3Ef__mgU24cacheC_29() { return &___U3CU3Ef__mgU24cacheC_29; }
	inline void set_U3CU3Ef__mgU24cacheC_29(internal_ARFaceAnchorUpdated_t2983102933 * value)
	{
		___U3CU3Ef__mgU24cacheC_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t1130867170_StaticFields, ___U3CU3Ef__mgU24cacheD_30)); }
	inline internal_ARFaceAnchorRemoved_t689428754 * get_U3CU3Ef__mgU24cacheD_30() const { return ___U3CU3Ef__mgU24cacheD_30; }
	inline internal_ARFaceAnchorRemoved_t689428754 ** get_address_of_U3CU3Ef__mgU24cacheD_30() { return &___U3CU3Ef__mgU24cacheD_30; }
	inline void set_U3CU3Ef__mgU24cacheD_30(internal_ARFaceAnchorRemoved_t689428754 * value)
	{
		___U3CU3Ef__mgU24cacheD_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheD_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
