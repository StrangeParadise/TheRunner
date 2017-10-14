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
// GPSController
struct GPSController_t2272977524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapTools
struct  MapTools_t3308069217  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 MapTools::radius
	int32_t ___radius_2;
	// System.Int32 MapTools::range
	int32_t ___range_3;
	// System.Single MapTools::speed
	float ___speed_4;
	// System.Boolean MapTools::firsttime
	bool ___firsttime_9;
	// UnityEngine.Camera MapTools::mainCamera
	Camera_t189460977 * ___mainCamera_10;
	// GPSController MapTools::IGPSController
	GPSController_t2272977524 * ___IGPSController_11;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___radius_2)); }
	inline int32_t get_radius_2() const { return ___radius_2; }
	inline int32_t* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(int32_t value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___range_3)); }
	inline int32_t get_range_3() const { return ___range_3; }
	inline int32_t* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(int32_t value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_firsttime_9() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___firsttime_9)); }
	inline bool get_firsttime_9() const { return ___firsttime_9; }
	inline bool* get_address_of_firsttime_9() { return &___firsttime_9; }
	inline void set_firsttime_9(bool value)
	{
		___firsttime_9 = value;
	}

	inline static int32_t get_offset_of_mainCamera_10() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___mainCamera_10)); }
	inline Camera_t189460977 * get_mainCamera_10() const { return ___mainCamera_10; }
	inline Camera_t189460977 ** get_address_of_mainCamera_10() { return &___mainCamera_10; }
	inline void set_mainCamera_10(Camera_t189460977 * value)
	{
		___mainCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_10, value);
	}

	inline static int32_t get_offset_of_IGPSController_11() { return static_cast<int32_t>(offsetof(MapTools_t3308069217, ___IGPSController_11)); }
	inline GPSController_t2272977524 * get_IGPSController_11() const { return ___IGPSController_11; }
	inline GPSController_t2272977524 ** get_address_of_IGPSController_11() { return &___IGPSController_11; }
	inline void set_IGPSController_11(GPSController_t2272977524 * value)
	{
		___IGPSController_11 = value;
		Il2CppCodeGenWriteBarrier(&___IGPSController_11, value);
	}
};

struct MapTools_t3308069217_StaticFields
{
public:
	// System.Single MapTools::latitudeO
	float ___latitudeO_5;
	// System.Single MapTools::longitudeO
	float ___longitudeO_6;
	// System.Single MapTools::latitude
	float ___latitude_7;
	// System.Single MapTools::longitude
	float ___longitude_8;

public:
	inline static int32_t get_offset_of_latitudeO_5() { return static_cast<int32_t>(offsetof(MapTools_t3308069217_StaticFields, ___latitudeO_5)); }
	inline float get_latitudeO_5() const { return ___latitudeO_5; }
	inline float* get_address_of_latitudeO_5() { return &___latitudeO_5; }
	inline void set_latitudeO_5(float value)
	{
		___latitudeO_5 = value;
	}

	inline static int32_t get_offset_of_longitudeO_6() { return static_cast<int32_t>(offsetof(MapTools_t3308069217_StaticFields, ___longitudeO_6)); }
	inline float get_longitudeO_6() const { return ___longitudeO_6; }
	inline float* get_address_of_longitudeO_6() { return &___longitudeO_6; }
	inline void set_longitudeO_6(float value)
	{
		___longitudeO_6 = value;
	}

	inline static int32_t get_offset_of_latitude_7() { return static_cast<int32_t>(offsetof(MapTools_t3308069217_StaticFields, ___latitude_7)); }
	inline float get_latitude_7() const { return ___latitude_7; }
	inline float* get_address_of_latitude_7() { return &___latitude_7; }
	inline void set_latitude_7(float value)
	{
		___latitude_7 = value;
	}

	inline static int32_t get_offset_of_longitude_8() { return static_cast<int32_t>(offsetof(MapTools_t3308069217_StaticFields, ___longitude_8)); }
	inline float get_longitude_8() const { return ___longitude_8; }
	inline float* get_address_of_longitude_8() { return &___longitude_8; }
	inline void set_longitude_8(float value)
	{
		___longitude_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
