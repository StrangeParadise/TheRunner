#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Camera
struct Camera_t189460977;
// GPSController
struct GPSController_t2272977524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateGPS
struct  UpdateGPS_t2150053955  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text UpdateGPS::coordinate
	Text_t356221433 * ___coordinate_2;
	// UnityEngine.Camera UpdateGPS::main
	Camera_t189460977 * ___main_3;
	// GPSController UpdateGPS::IGPSController
	GPSController_t2272977524 * ___IGPSController_4;

public:
	inline static int32_t get_offset_of_coordinate_2() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___coordinate_2)); }
	inline Text_t356221433 * get_coordinate_2() const { return ___coordinate_2; }
	inline Text_t356221433 ** get_address_of_coordinate_2() { return &___coordinate_2; }
	inline void set_coordinate_2(Text_t356221433 * value)
	{
		___coordinate_2 = value;
		Il2CppCodeGenWriteBarrier(&___coordinate_2, value);
	}

	inline static int32_t get_offset_of_main_3() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___main_3)); }
	inline Camera_t189460977 * get_main_3() const { return ___main_3; }
	inline Camera_t189460977 ** get_address_of_main_3() { return &___main_3; }
	inline void set_main_3(Camera_t189460977 * value)
	{
		___main_3 = value;
		Il2CppCodeGenWriteBarrier(&___main_3, value);
	}

	inline static int32_t get_offset_of_IGPSController_4() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___IGPSController_4)); }
	inline GPSController_t2272977524 * get_IGPSController_4() const { return ___IGPSController_4; }
	inline GPSController_t2272977524 ** get_address_of_IGPSController_4() { return &___IGPSController_4; }
	inline void set_IGPSController_4(GPSController_t2272977524 * value)
	{
		___IGPSController_4 = value;
		Il2CppCodeGenWriteBarrier(&___IGPSController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
