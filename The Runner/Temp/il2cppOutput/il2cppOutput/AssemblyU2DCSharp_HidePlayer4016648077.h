#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HidePlayer
struct  HidePlayer_t4016648077  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HidePlayer::range
	float ___range_2;
	// UnityEngine.Camera HidePlayer::mcamera
	Camera_t189460977 * ___mcamera_3;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(HidePlayer_t4016648077, ___range_2)); }
	inline float get_range_2() const { return ___range_2; }
	inline float* get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(float value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_mcamera_3() { return static_cast<int32_t>(offsetof(HidePlayer_t4016648077, ___mcamera_3)); }
	inline Camera_t189460977 * get_mcamera_3() const { return ___mcamera_3; }
	inline Camera_t189460977 ** get_address_of_mcamera_3() { return &___mcamera_3; }
	inline void set_mcamera_3(Camera_t189460977 * value)
	{
		___mcamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mcamera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
