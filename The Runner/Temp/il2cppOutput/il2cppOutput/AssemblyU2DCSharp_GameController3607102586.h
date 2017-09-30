#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas GameController::mapCanvas
	Canvas_t209405766 * ___mapCanvas_2;
	// UnityEngine.Camera GameController::mainCamera
	Camera_t189460977 * ___mainCamera_3;

public:
	inline static int32_t get_offset_of_mapCanvas_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mapCanvas_2)); }
	inline Canvas_t209405766 * get_mapCanvas_2() const { return ___mapCanvas_2; }
	inline Canvas_t209405766 ** get_address_of_mapCanvas_2() { return &___mapCanvas_2; }
	inline void set_mapCanvas_2(Canvas_t209405766 * value)
	{
		___mapCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapCanvas_2, value);
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mainCamera_3)); }
	inline Camera_t189460977 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline Camera_t189460977 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(Camera_t189460977 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
