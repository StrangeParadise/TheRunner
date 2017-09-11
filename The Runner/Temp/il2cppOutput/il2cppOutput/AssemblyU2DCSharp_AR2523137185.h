#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Gyroscope
struct Gyroscope_t1705362817;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3114550109;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AR
struct  AR_t2523137185  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Gyroscope AR::gyro
	Gyroscope_t1705362817 * ___gyro_2;
	// UnityEngine.GameObject AR::cameraContainer
	GameObject_t1756533147 * ___cameraContainer_3;
	// UnityEngine.Quaternion AR::gyroRotation
	Quaternion_t4030073918  ___gyroRotation_4;
	// UnityEngine.WebCamTexture AR::cam
	WebCamTexture_t1079476942 * ___cam_5;
	// UnityEngine.UI.RawImage AR::background
	RawImage_t2749640213 * ___background_6;
	// UnityEngine.UI.AspectRatioFitter AR::fit
	AspectRatioFitter_t3114550109 * ___fit_7;
	// System.Boolean AR::arReady
	bool ___arReady_8;

public:
	inline static int32_t get_offset_of_gyro_2() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___gyro_2)); }
	inline Gyroscope_t1705362817 * get_gyro_2() const { return ___gyro_2; }
	inline Gyroscope_t1705362817 ** get_address_of_gyro_2() { return &___gyro_2; }
	inline void set_gyro_2(Gyroscope_t1705362817 * value)
	{
		___gyro_2 = value;
		Il2CppCodeGenWriteBarrier(&___gyro_2, value);
	}

	inline static int32_t get_offset_of_cameraContainer_3() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___cameraContainer_3)); }
	inline GameObject_t1756533147 * get_cameraContainer_3() const { return ___cameraContainer_3; }
	inline GameObject_t1756533147 ** get_address_of_cameraContainer_3() { return &___cameraContainer_3; }
	inline void set_cameraContainer_3(GameObject_t1756533147 * value)
	{
		___cameraContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraContainer_3, value);
	}

	inline static int32_t get_offset_of_gyroRotation_4() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___gyroRotation_4)); }
	inline Quaternion_t4030073918  get_gyroRotation_4() const { return ___gyroRotation_4; }
	inline Quaternion_t4030073918 * get_address_of_gyroRotation_4() { return &___gyroRotation_4; }
	inline void set_gyroRotation_4(Quaternion_t4030073918  value)
	{
		___gyroRotation_4 = value;
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___cam_5)); }
	inline WebCamTexture_t1079476942 * get_cam_5() const { return ___cam_5; }
	inline WebCamTexture_t1079476942 ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(WebCamTexture_t1079476942 * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier(&___cam_5, value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___background_6)); }
	inline RawImage_t2749640213 * get_background_6() const { return ___background_6; }
	inline RawImage_t2749640213 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(RawImage_t2749640213 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier(&___background_6, value);
	}

	inline static int32_t get_offset_of_fit_7() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___fit_7)); }
	inline AspectRatioFitter_t3114550109 * get_fit_7() const { return ___fit_7; }
	inline AspectRatioFitter_t3114550109 ** get_address_of_fit_7() { return &___fit_7; }
	inline void set_fit_7(AspectRatioFitter_t3114550109 * value)
	{
		___fit_7 = value;
		Il2CppCodeGenWriteBarrier(&___fit_7, value);
	}

	inline static int32_t get_offset_of_arReady_8() { return static_cast<int32_t>(offsetof(AR_t2523137185, ___arReady_8)); }
	inline bool get_arReady_8() const { return ___arReady_8; }
	inline bool* get_address_of_arReady_8() { return &___arReady_8; }
	inline void set_arReady_8(bool value)
	{
		___arReady_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
