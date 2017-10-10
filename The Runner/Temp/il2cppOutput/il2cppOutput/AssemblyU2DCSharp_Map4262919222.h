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
// GPSController
struct GPSController_t2272977524;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
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
	// GPSController Map::gpsController
	GPSController_t2272977524 * ___gpsController_3;
	// System.Single Map::latitude
	float ___latitude_4;
	// System.Single Map::longitude
	float ___longitude_5;
	// System.Int32 Map::zoom
	int32_t ___zoom_6;
	// System.Int32 Map::mapWidth
	int32_t ___mapWidth_7;
	// System.Int32 Map::mapHeight
	int32_t ___mapHeight_8;
	// Map/mapType Map::mapSelected
	int32_t ___mapSelected_9;
	// UnityEngine.UI.RawImage Map::myMap
	RawImage_t2749640213 * ___myMap_10;
	// UnityEngine.TextMesh Map::terminal
	TextMesh_t1641806576 * ___terminal_11;
	// System.Collections.IEnumerator Map::mapCoroutine
	Il2CppObject * ___mapCoroutine_12;
	// System.Boolean Map::showMap
	bool ___showMap_13;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_gpsController_3() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___gpsController_3)); }
	inline GPSController_t2272977524 * get_gpsController_3() const { return ___gpsController_3; }
	inline GPSController_t2272977524 ** get_address_of_gpsController_3() { return &___gpsController_3; }
	inline void set_gpsController_3(GPSController_t2272977524 * value)
	{
		___gpsController_3 = value;
		Il2CppCodeGenWriteBarrier(&___gpsController_3, value);
	}

	inline static int32_t get_offset_of_latitude_4() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___latitude_4)); }
	inline float get_latitude_4() const { return ___latitude_4; }
	inline float* get_address_of_latitude_4() { return &___latitude_4; }
	inline void set_latitude_4(float value)
	{
		___latitude_4 = value;
	}

	inline static int32_t get_offset_of_longitude_5() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___longitude_5)); }
	inline float get_longitude_5() const { return ___longitude_5; }
	inline float* get_address_of_longitude_5() { return &___longitude_5; }
	inline void set_longitude_5(float value)
	{
		___longitude_5 = value;
	}

	inline static int32_t get_offset_of_zoom_6() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___zoom_6)); }
	inline int32_t get_zoom_6() const { return ___zoom_6; }
	inline int32_t* get_address_of_zoom_6() { return &___zoom_6; }
	inline void set_zoom_6(int32_t value)
	{
		___zoom_6 = value;
	}

	inline static int32_t get_offset_of_mapWidth_7() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapWidth_7)); }
	inline int32_t get_mapWidth_7() const { return ___mapWidth_7; }
	inline int32_t* get_address_of_mapWidth_7() { return &___mapWidth_7; }
	inline void set_mapWidth_7(int32_t value)
	{
		___mapWidth_7 = value;
	}

	inline static int32_t get_offset_of_mapHeight_8() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapHeight_8)); }
	inline int32_t get_mapHeight_8() const { return ___mapHeight_8; }
	inline int32_t* get_address_of_mapHeight_8() { return &___mapHeight_8; }
	inline void set_mapHeight_8(int32_t value)
	{
		___mapHeight_8 = value;
	}

	inline static int32_t get_offset_of_mapSelected_9() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapSelected_9)); }
	inline int32_t get_mapSelected_9() const { return ___mapSelected_9; }
	inline int32_t* get_address_of_mapSelected_9() { return &___mapSelected_9; }
	inline void set_mapSelected_9(int32_t value)
	{
		___mapSelected_9 = value;
	}

	inline static int32_t get_offset_of_myMap_10() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___myMap_10)); }
	inline RawImage_t2749640213 * get_myMap_10() const { return ___myMap_10; }
	inline RawImage_t2749640213 ** get_address_of_myMap_10() { return &___myMap_10; }
	inline void set_myMap_10(RawImage_t2749640213 * value)
	{
		___myMap_10 = value;
		Il2CppCodeGenWriteBarrier(&___myMap_10, value);
	}

	inline static int32_t get_offset_of_terminal_11() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___terminal_11)); }
	inline TextMesh_t1641806576 * get_terminal_11() const { return ___terminal_11; }
	inline TextMesh_t1641806576 ** get_address_of_terminal_11() { return &___terminal_11; }
	inline void set_terminal_11(TextMesh_t1641806576 * value)
	{
		___terminal_11 = value;
		Il2CppCodeGenWriteBarrier(&___terminal_11, value);
	}

	inline static int32_t get_offset_of_mapCoroutine_12() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapCoroutine_12)); }
	inline Il2CppObject * get_mapCoroutine_12() const { return ___mapCoroutine_12; }
	inline Il2CppObject ** get_address_of_mapCoroutine_12() { return &___mapCoroutine_12; }
	inline void set_mapCoroutine_12(Il2CppObject * value)
	{
		___mapCoroutine_12 = value;
		Il2CppCodeGenWriteBarrier(&___mapCoroutine_12, value);
	}

	inline static int32_t get_offset_of_showMap_13() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___showMap_13)); }
	inline bool get_showMap_13() const { return ___showMap_13; }
	inline bool* get_address_of_showMap_13() { return &___showMap_13; }
	inline void set_showMap_13(bool value)
	{
		___showMap_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
