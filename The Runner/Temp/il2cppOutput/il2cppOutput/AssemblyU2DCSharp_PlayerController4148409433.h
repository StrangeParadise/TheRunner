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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas PlayerController::mapCanvas
	Canvas_t209405766 * ___mapCanvas_2;
	// UnityEngine.GameObject PlayerController::map
	GameObject_t1756533147 * ___map_3;
	// UnityEngine.Camera PlayerController::mainCam
	Camera_t189460977 * ___mainCam_4;
	// UnityEngine.Camera PlayerController::backgroundCam
	Camera_t189460977 * ___backgroundCam_5;
	// UnityEngine.Camera PlayerController::mapCam
	Camera_t189460977 * ___mapCam_6;
	// UnityEngine.GameObject PlayerController::PlayerDataPrefab
	GameObject_t1756533147 * ___PlayerDataPrefab_7;

public:
	inline static int32_t get_offset_of_mapCanvas_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___mapCanvas_2)); }
	inline Canvas_t209405766 * get_mapCanvas_2() const { return ___mapCanvas_2; }
	inline Canvas_t209405766 ** get_address_of_mapCanvas_2() { return &___mapCanvas_2; }
	inline void set_mapCanvas_2(Canvas_t209405766 * value)
	{
		___mapCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapCanvas_2, value);
	}

	inline static int32_t get_offset_of_map_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___map_3)); }
	inline GameObject_t1756533147 * get_map_3() const { return ___map_3; }
	inline GameObject_t1756533147 ** get_address_of_map_3() { return &___map_3; }
	inline void set_map_3(GameObject_t1756533147 * value)
	{
		___map_3 = value;
		Il2CppCodeGenWriteBarrier(&___map_3, value);
	}

	inline static int32_t get_offset_of_mainCam_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___mainCam_4)); }
	inline Camera_t189460977 * get_mainCam_4() const { return ___mainCam_4; }
	inline Camera_t189460977 ** get_address_of_mainCam_4() { return &___mainCam_4; }
	inline void set_mainCam_4(Camera_t189460977 * value)
	{
		___mainCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_4, value);
	}

	inline static int32_t get_offset_of_backgroundCam_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___backgroundCam_5)); }
	inline Camera_t189460977 * get_backgroundCam_5() const { return ___backgroundCam_5; }
	inline Camera_t189460977 ** get_address_of_backgroundCam_5() { return &___backgroundCam_5; }
	inline void set_backgroundCam_5(Camera_t189460977 * value)
	{
		___backgroundCam_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundCam_5, value);
	}

	inline static int32_t get_offset_of_mapCam_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___mapCam_6)); }
	inline Camera_t189460977 * get_mapCam_6() const { return ___mapCam_6; }
	inline Camera_t189460977 ** get_address_of_mapCam_6() { return &___mapCam_6; }
	inline void set_mapCam_6(Camera_t189460977 * value)
	{
		___mapCam_6 = value;
		Il2CppCodeGenWriteBarrier(&___mapCam_6, value);
	}

	inline static int32_t get_offset_of_PlayerDataPrefab_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___PlayerDataPrefab_7)); }
	inline GameObject_t1756533147 * get_PlayerDataPrefab_7() const { return ___PlayerDataPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_PlayerDataPrefab_7() { return &___PlayerDataPrefab_7; }
	inline void set_PlayerDataPrefab_7(GameObject_t1756533147 * value)
	{
		___PlayerDataPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerDataPrefab_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
