#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPSData
struct  GPSData_t207763284  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GPSData::latitude
	float ___latitude_2;
	// System.Single GPSData::longitude
	float ___longitude_3;

public:
	inline static int32_t get_offset_of_latitude_2() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___latitude_2)); }
	inline float get_latitude_2() const { return ___latitude_2; }
	inline float* get_address_of_latitude_2() { return &___latitude_2; }
	inline void set_latitude_2(float value)
	{
		___latitude_2 = value;
	}

	inline static int32_t get_offset_of_longitude_3() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___longitude_3)); }
	inline float get_longitude_3() const { return ___longitude_3; }
	inline float* get_address_of_longitude_3() { return &___longitude_3; }
	inline void set_longitude_3(float value)
	{
		___longitude_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
