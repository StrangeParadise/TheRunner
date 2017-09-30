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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tools
struct  Tools_t3958882517  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Tools::radius
	int32_t ___radius_2;
	// System.Int32 Tools::range
	int32_t ___range_3;
	// System.Single Tools::latitudeO
	float ___latitudeO_4;
	// System.Single Tools::longitudeO
	float ___longitudeO_5;
	// System.Boolean Tools::firsttime
	bool ___firsttime_6;
	// UnityEngine.Camera Tools::mainCamera
	Camera_t189460977 * ___mainCamera_7;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___radius_2)); }
	inline int32_t get_radius_2() const { return ___radius_2; }
	inline int32_t* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(int32_t value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___range_3)); }
	inline int32_t get_range_3() const { return ___range_3; }
	inline int32_t* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(int32_t value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_latitudeO_4() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___latitudeO_4)); }
	inline float get_latitudeO_4() const { return ___latitudeO_4; }
	inline float* get_address_of_latitudeO_4() { return &___latitudeO_4; }
	inline void set_latitudeO_4(float value)
	{
		___latitudeO_4 = value;
	}

	inline static int32_t get_offset_of_longitudeO_5() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___longitudeO_5)); }
	inline float get_longitudeO_5() const { return ___longitudeO_5; }
	inline float* get_address_of_longitudeO_5() { return &___longitudeO_5; }
	inline void set_longitudeO_5(float value)
	{
		___longitudeO_5 = value;
	}

	inline static int32_t get_offset_of_firsttime_6() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___firsttime_6)); }
	inline bool get_firsttime_6() const { return ___firsttime_6; }
	inline bool* get_address_of_firsttime_6() { return &___firsttime_6; }
	inline void set_firsttime_6(bool value)
	{
		___firsttime_6 = value;
	}

	inline static int32_t get_offset_of_mainCamera_7() { return static_cast<int32_t>(offsetof(Tools_t3958882517, ___mainCamera_7)); }
	inline Camera_t189460977 * get_mainCamera_7() const { return ___mainCamera_7; }
	inline Camera_t189460977 ** get_address_of_mainCamera_7() { return &___mainCamera_7; }
	inline void set_mainCamera_7(Camera_t189460977 * value)
	{
		___mainCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
