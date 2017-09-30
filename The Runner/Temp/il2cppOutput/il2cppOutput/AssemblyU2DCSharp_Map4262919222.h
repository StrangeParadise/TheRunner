#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Map_mapType3017953257.h"

// System.String
struct String_t;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Map
struct  Map_t4262919222  : public MonoBehaviour_t1158329972
{
public:
	// System.String Map::url
	String_t* ___url_2;
	// System.Single Map::latitude
	float ___latitude_3;
	// System.Single Map::longitude
	float ___longitude_4;
	// System.Int32 Map::zoom
	int32_t ___zoom_5;
	// System.Int32 Map::mapWidth
	int32_t ___mapWidth_6;
	// System.Int32 Map::mapHeight
	int32_t ___mapHeight_7;
	// Map/mapType Map::mapSelected
	int32_t ___mapSelected_8;
	// UnityEngine.UI.RawImage Map::myMap
	RawImage_t2749640213 * ___myMap_9;
	// UnityEngine.UI.Text Map::coordinate
	Text_t356221433 * ___coordinate_10;
	// System.Collections.IEnumerator Map::mapCoroutine
	Il2CppObject * ___mapCoroutine_11;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_latitude_3() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___latitude_3)); }
	inline float get_latitude_3() const { return ___latitude_3; }
	inline float* get_address_of_latitude_3() { return &___latitude_3; }
	inline void set_latitude_3(float value)
	{
		___latitude_3 = value;
	}

	inline static int32_t get_offset_of_longitude_4() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___longitude_4)); }
	inline float get_longitude_4() const { return ___longitude_4; }
	inline float* get_address_of_longitude_4() { return &___longitude_4; }
	inline void set_longitude_4(float value)
	{
		___longitude_4 = value;
	}

	inline static int32_t get_offset_of_zoom_5() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___zoom_5)); }
	inline int32_t get_zoom_5() const { return ___zoom_5; }
	inline int32_t* get_address_of_zoom_5() { return &___zoom_5; }
	inline void set_zoom_5(int32_t value)
	{
		___zoom_5 = value;
	}

	inline static int32_t get_offset_of_mapWidth_6() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapWidth_6)); }
	inline int32_t get_mapWidth_6() const { return ___mapWidth_6; }
	inline int32_t* get_address_of_mapWidth_6() { return &___mapWidth_6; }
	inline void set_mapWidth_6(int32_t value)
	{
		___mapWidth_6 = value;
	}

	inline static int32_t get_offset_of_mapHeight_7() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapHeight_7)); }
	inline int32_t get_mapHeight_7() const { return ___mapHeight_7; }
	inline int32_t* get_address_of_mapHeight_7() { return &___mapHeight_7; }
	inline void set_mapHeight_7(int32_t value)
	{
		___mapHeight_7 = value;
	}

	inline static int32_t get_offset_of_mapSelected_8() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapSelected_8)); }
	inline int32_t get_mapSelected_8() const { return ___mapSelected_8; }
	inline int32_t* get_address_of_mapSelected_8() { return &___mapSelected_8; }
	inline void set_mapSelected_8(int32_t value)
	{
		___mapSelected_8 = value;
	}

	inline static int32_t get_offset_of_myMap_9() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___myMap_9)); }
	inline RawImage_t2749640213 * get_myMap_9() const { return ___myMap_9; }
	inline RawImage_t2749640213 ** get_address_of_myMap_9() { return &___myMap_9; }
	inline void set_myMap_9(RawImage_t2749640213 * value)
	{
		___myMap_9 = value;
		Il2CppCodeGenWriteBarrier(&___myMap_9, value);
	}

	inline static int32_t get_offset_of_coordinate_10() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___coordinate_10)); }
	inline Text_t356221433 * get_coordinate_10() const { return ___coordinate_10; }
	inline Text_t356221433 ** get_address_of_coordinate_10() { return &___coordinate_10; }
	inline void set_coordinate_10(Text_t356221433 * value)
	{
		___coordinate_10 = value;
		Il2CppCodeGenWriteBarrier(&___coordinate_10, value);
	}

	inline static int32_t get_offset_of_mapCoroutine_11() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapCoroutine_11)); }
	inline Il2CppObject * get_mapCoroutine_11() const { return ___mapCoroutine_11; }
	inline Il2CppObject ** get_address_of_mapCoroutine_11() { return &___mapCoroutine_11; }
	inline void set_mapCoroutine_11(Il2CppObject * value)
	{
		___mapCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier(&___mapCoroutine_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
