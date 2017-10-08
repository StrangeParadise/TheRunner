#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMove
struct  PlayerMove_t195622780  : public NetworkBehaviour_t3873055601
{
public:
	// UnityEngine.Camera PlayerMove::mainCamera
	Camera_t189460977 * ___mainCamera_8;

public:
	inline static int32_t get_offset_of_mainCamera_8() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___mainCamera_8)); }
	inline Camera_t189460977 * get_mainCamera_8() const { return ___mainCamera_8; }
	inline Camera_t189460977 ** get_address_of_mainCamera_8() { return &___mainCamera_8; }
	inline void set_mainCamera_8(Camera_t189460977 * value)
	{
		___mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
