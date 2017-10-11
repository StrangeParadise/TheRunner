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
// Map
struct Map_t4262919222;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandMapController
struct  HandMapController_t222498385  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HandMapController::perspectiveZoomSpeed
	float ___perspectiveZoomSpeed_2;
	// System.Single HandMapController::orthoZoomSpeed
	float ___orthoZoomSpeed_3;
	// UnityEngine.Camera HandMapController::mapCam
	Camera_t189460977 * ___mapCam_4;
	// Map HandMapController::mapScript
	Map_t4262919222 * ___mapScript_5;

public:
	inline static int32_t get_offset_of_perspectiveZoomSpeed_2() { return static_cast<int32_t>(offsetof(HandMapController_t222498385, ___perspectiveZoomSpeed_2)); }
	inline float get_perspectiveZoomSpeed_2() const { return ___perspectiveZoomSpeed_2; }
	inline float* get_address_of_perspectiveZoomSpeed_2() { return &___perspectiveZoomSpeed_2; }
	inline void set_perspectiveZoomSpeed_2(float value)
	{
		___perspectiveZoomSpeed_2 = value;
	}

	inline static int32_t get_offset_of_orthoZoomSpeed_3() { return static_cast<int32_t>(offsetof(HandMapController_t222498385, ___orthoZoomSpeed_3)); }
	inline float get_orthoZoomSpeed_3() const { return ___orthoZoomSpeed_3; }
	inline float* get_address_of_orthoZoomSpeed_3() { return &___orthoZoomSpeed_3; }
	inline void set_orthoZoomSpeed_3(float value)
	{
		___orthoZoomSpeed_3 = value;
	}

	inline static int32_t get_offset_of_mapCam_4() { return static_cast<int32_t>(offsetof(HandMapController_t222498385, ___mapCam_4)); }
	inline Camera_t189460977 * get_mapCam_4() const { return ___mapCam_4; }
	inline Camera_t189460977 ** get_address_of_mapCam_4() { return &___mapCam_4; }
	inline void set_mapCam_4(Camera_t189460977 * value)
	{
		___mapCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___mapCam_4, value);
	}

	inline static int32_t get_offset_of_mapScript_5() { return static_cast<int32_t>(offsetof(HandMapController_t222498385, ___mapScript_5)); }
	inline Map_t4262919222 * get_mapScript_5() const { return ___mapScript_5; }
	inline Map_t4262919222 ** get_address_of_mapScript_5() { return &___mapScript_5; }
	inline void set_mapScript_5(Map_t4262919222 * value)
	{
		___mapScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___mapScript_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
