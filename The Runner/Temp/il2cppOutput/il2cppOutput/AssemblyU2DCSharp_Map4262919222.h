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
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Texture
struct Texture_t2243626319;




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
	// UnityEngine.TextMesh Map::terminal
	TextMesh_t1641806576 * ___terminal_10;
	// System.Int32 Map::range
	int32_t ___range_11;
	// System.Collections.IEnumerator Map::mapCoroutine
	Il2CppObject * ___mapCoroutine_12;
	// System.String Map::key1
	String_t* ___key1_13;
	// System.String Map::key2
	String_t* ___key2_14;
	// System.String Map::key3
	String_t* ___key3_15;
	// System.Boolean Map::showMap
	bool ___showMap_16;
	// System.Single Map::time
	float ___time_17;
	// System.Int32 Map::updatePerSecond
	int32_t ___updatePerSecond_18;
	// UnityEngine.Texture Map::mapTexture
	Texture_t2243626319 * ___mapTexture_19;

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

	inline static int32_t get_offset_of_terminal_10() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___terminal_10)); }
	inline TextMesh_t1641806576 * get_terminal_10() const { return ___terminal_10; }
	inline TextMesh_t1641806576 ** get_address_of_terminal_10() { return &___terminal_10; }
	inline void set_terminal_10(TextMesh_t1641806576 * value)
	{
		___terminal_10 = value;
		Il2CppCodeGenWriteBarrier(&___terminal_10, value);
	}

	inline static int32_t get_offset_of_range_11() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___range_11)); }
	inline int32_t get_range_11() const { return ___range_11; }
	inline int32_t* get_address_of_range_11() { return &___range_11; }
	inline void set_range_11(int32_t value)
	{
		___range_11 = value;
	}

	inline static int32_t get_offset_of_mapCoroutine_12() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapCoroutine_12)); }
	inline Il2CppObject * get_mapCoroutine_12() const { return ___mapCoroutine_12; }
	inline Il2CppObject ** get_address_of_mapCoroutine_12() { return &___mapCoroutine_12; }
	inline void set_mapCoroutine_12(Il2CppObject * value)
	{
		___mapCoroutine_12 = value;
		Il2CppCodeGenWriteBarrier(&___mapCoroutine_12, value);
	}

	inline static int32_t get_offset_of_key1_13() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___key1_13)); }
	inline String_t* get_key1_13() const { return ___key1_13; }
	inline String_t** get_address_of_key1_13() { return &___key1_13; }
	inline void set_key1_13(String_t* value)
	{
		___key1_13 = value;
		Il2CppCodeGenWriteBarrier(&___key1_13, value);
	}

	inline static int32_t get_offset_of_key2_14() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___key2_14)); }
	inline String_t* get_key2_14() const { return ___key2_14; }
	inline String_t** get_address_of_key2_14() { return &___key2_14; }
	inline void set_key2_14(String_t* value)
	{
		___key2_14 = value;
		Il2CppCodeGenWriteBarrier(&___key2_14, value);
	}

	inline static int32_t get_offset_of_key3_15() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___key3_15)); }
	inline String_t* get_key3_15() const { return ___key3_15; }
	inline String_t** get_address_of_key3_15() { return &___key3_15; }
	inline void set_key3_15(String_t* value)
	{
		___key3_15 = value;
		Il2CppCodeGenWriteBarrier(&___key3_15, value);
	}

	inline static int32_t get_offset_of_showMap_16() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___showMap_16)); }
	inline bool get_showMap_16() const { return ___showMap_16; }
	inline bool* get_address_of_showMap_16() { return &___showMap_16; }
	inline void set_showMap_16(bool value)
	{
		___showMap_16 = value;
	}

	inline static int32_t get_offset_of_time_17() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___time_17)); }
	inline float get_time_17() const { return ___time_17; }
	inline float* get_address_of_time_17() { return &___time_17; }
	inline void set_time_17(float value)
	{
		___time_17 = value;
	}

	inline static int32_t get_offset_of_updatePerSecond_18() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___updatePerSecond_18)); }
	inline int32_t get_updatePerSecond_18() const { return ___updatePerSecond_18; }
	inline int32_t* get_address_of_updatePerSecond_18() { return &___updatePerSecond_18; }
	inline void set_updatePerSecond_18(int32_t value)
	{
		___updatePerSecond_18 = value;
	}

	inline static int32_t get_offset_of_mapTexture_19() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___mapTexture_19)); }
	inline Texture_t2243626319 * get_mapTexture_19() const { return ___mapTexture_19; }
	inline Texture_t2243626319 ** get_address_of_mapTexture_19() { return &___mapTexture_19; }
	inline void set_mapTexture_19(Texture_t2243626319 * value)
	{
		___mapTexture_19 = value;
		Il2CppCodeGenWriteBarrier(&___mapTexture_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
