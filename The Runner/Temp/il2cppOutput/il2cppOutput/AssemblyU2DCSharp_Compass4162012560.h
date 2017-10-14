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

// Compass
struct  Compass_t4162012560  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Compass::mcamera
	Camera_t189460977 * ___mcamera_2;

public:
	inline static int32_t get_offset_of_mcamera_2() { return static_cast<int32_t>(offsetof(Compass_t4162012560, ___mcamera_2)); }
	inline Camera_t189460977 * get_mcamera_2() const { return ___mcamera_2; }
	inline Camera_t189460977 ** get_address_of_mcamera_2() { return &___mcamera_2; }
	inline void set_mcamera_2(Camera_t189460977 * value)
	{
		___mcamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___mcamera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
