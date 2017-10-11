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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// GPSController
struct GPSController_t2272977524;




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
	// UnityEngine.GameObject GameController::map
	GameObject_t1756533147 * ___map_3;
	// UnityEngine.Camera GameController::mainCam
	Camera_t189460977 * ___mainCam_4;
	// UnityEngine.Camera GameController::backgroundCam
	Camera_t189460977 * ___backgroundCam_5;
	// UnityEngine.Camera GameController::mapCam
	Camera_t189460977 * ___mapCam_6;
	// GPSController GameController::IGPSController
	GPSController_t2272977524 * ___IGPSController_7;

public:
	inline static int32_t get_offset_of_mapCanvas_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mapCanvas_2)); }
	inline Canvas_t209405766 * get_mapCanvas_2() const { return ___mapCanvas_2; }
	inline Canvas_t209405766 ** get_address_of_mapCanvas_2() { return &___mapCanvas_2; }
	inline void set_mapCanvas_2(Canvas_t209405766 * value)
	{
		___mapCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapCanvas_2, value);
	}

	inline static int32_t get_offset_of_map_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___map_3)); }
	inline GameObject_t1756533147 * get_map_3() const { return ___map_3; }
	inline GameObject_t1756533147 ** get_address_of_map_3() { return &___map_3; }
	inline void set_map_3(GameObject_t1756533147 * value)
	{
		___map_3 = value;
		Il2CppCodeGenWriteBarrier(&___map_3, value);
	}

	inline static int32_t get_offset_of_mainCam_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mainCam_4)); }
	inline Camera_t189460977 * get_mainCam_4() const { return ___mainCam_4; }
	inline Camera_t189460977 ** get_address_of_mainCam_4() { return &___mainCam_4; }
	inline void set_mainCam_4(Camera_t189460977 * value)
	{
		___mainCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_4, value);
	}

	inline static int32_t get_offset_of_backgroundCam_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___backgroundCam_5)); }
	inline Camera_t189460977 * get_backgroundCam_5() const { return ___backgroundCam_5; }
	inline Camera_t189460977 ** get_address_of_backgroundCam_5() { return &___backgroundCam_5; }
	inline void set_backgroundCam_5(Camera_t189460977 * value)
	{
		___backgroundCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundCam_5, value);
	}

	inline static int32_t get_offset_of_mapCam_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___mapCam_6)); }
	inline Camera_t189460977 * get_mapCam_6() const { return ___mapCam_6; }
	inline Camera_t189460977 ** get_address_of_mapCam_6() { return &___mapCam_6; }
	inline void set_mapCam_6(Camera_t189460977 * value)
	{
		___mapCam_6 = value;
		Il2CppCodeGenWriteBarrier(&___mapCam_6, value);
	}

	inline static int32_t get_offset_of_IGPSController_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___IGPSController_7)); }
	inline GPSController_t2272977524 * get_IGPSController_7() const { return ___IGPSController_7; }
	inline GPSController_t2272977524 ** get_address_of_IGPSController_7() { return &___IGPSController_7; }
	inline void set_IGPSController_7(GPSController_t2272977524 * value)
	{
		___IGPSController_7 = value;
		Il2CppCodeGenWriteBarrier(&___IGPSController_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
