#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GPS
struct GPS_t3691620964;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPS
struct  GPS_t3691620964  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GPS::latitude
	float ___latitude_3;
	// System.Single GPS::longitude
	float ___longitude_4;

public:
	inline static int32_t get_offset_of_latitude_3() { return static_cast<int32_t>(offsetof(GPS_t3691620964, ___latitude_3)); }
	inline float get_latitude_3() const { return ___latitude_3; }
	inline float* get_address_of_latitude_3() { return &___latitude_3; }
	inline void set_latitude_3(float value)
	{
		___latitude_3 = value;
	}

	inline static int32_t get_offset_of_longitude_4() { return static_cast<int32_t>(offsetof(GPS_t3691620964, ___longitude_4)); }
	inline float get_longitude_4() const { return ___longitude_4; }
	inline float* get_address_of_longitude_4() { return &___longitude_4; }
	inline void set_longitude_4(float value)
	{
		___longitude_4 = value;
	}
};

struct GPS_t3691620964_StaticFields
{
public:
	// GPS GPS::<Instance>k__BackingField
	GPS_t3691620964 * ___U3CInstanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GPS_t3691620964_StaticFields, ___U3CInstanceU3Ek__BackingField_2)); }
	inline GPS_t3691620964 * get_U3CInstanceU3Ek__BackingField_2() const { return ___U3CInstanceU3Ek__BackingField_2; }
	inline GPS_t3691620964 ** get_address_of_U3CInstanceU3Ek__BackingField_2() { return &___U3CInstanceU3Ek__BackingField_2; }
	inline void set_U3CInstanceU3Ek__BackingField_2(GPS_t3691620964 * value)
	{
		___U3CInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
