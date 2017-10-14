#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TheRunner_Utilities_Singleton_1_g342423049.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPSData
struct  GPSData_t207763284  : public Singleton_1_t342423049
{
public:
	// System.Single GPSData::latitude
	float ___latitude_4;
	// System.Single GPSData::longitude
	float ___longitude_5;

public:
	inline static int32_t get_offset_of_latitude_4() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___latitude_4)); }
	inline float get_latitude_4() const { return ___latitude_4; }
	inline float* get_address_of_latitude_4() { return &___latitude_4; }
	inline void set_latitude_4(float value)
	{
		___latitude_4 = value;
	}

	inline static int32_t get_offset_of_longitude_5() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___longitude_5)); }
	inline float get_longitude_5() const { return ___longitude_5; }
	inline float* get_address_of_longitude_5() { return &___longitude_5; }
	inline void set_longitude_5(float value)
	{
		___longitude_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
