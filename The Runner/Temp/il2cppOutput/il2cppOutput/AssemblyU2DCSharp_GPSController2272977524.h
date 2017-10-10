#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GPSData
struct GPSData_t207763284;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPSController
struct  GPSController_t2272977524  : public MonoBehaviour_t1158329972
{
public:
	// GPSData GPSController::gps
	GPSData_t207763284 * ___gps_2;
	// System.Int32 GPSController::counter
	int32_t ___counter_3;

public:
	inline static int32_t get_offset_of_gps_2() { return static_cast<int32_t>(offsetof(GPSController_t2272977524, ___gps_2)); }
	inline GPSData_t207763284 * get_gps_2() const { return ___gps_2; }
	inline GPSData_t207763284 ** get_address_of_gps_2() { return &___gps_2; }
	inline void set_gps_2(GPSData_t207763284 * value)
	{
		___gps_2 = value;
		Il2CppCodeGenWriteBarrier(&___gps_2, value);
	}

	inline static int32_t get_offset_of_counter_3() { return static_cast<int32_t>(offsetof(GPSController_t2272977524, ___counter_3)); }
	inline int32_t get_counter_3() const { return ___counter_3; }
	inline int32_t* get_address_of_counter_3() { return &___counter_3; }
	inline void set_counter_3(int32_t value)
	{
		___counter_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
