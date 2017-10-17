#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerUI
struct PlayerUI_t3700805861;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMove
struct  PlayerMove_t195622780  : public NetworkBehaviour_t3873055601
{
public:
	// UnityEngine.GameObject PlayerMove::player
	GameObject_t1756533147 * ___player_8;
	// PlayerUI PlayerMove::ui
	PlayerUI_t3700805861 * ___ui_9;
	// System.Boolean PlayerMove::isSeeker
	bool ___isSeeker_10;
	// System.Boolean PlayerMove::isDead
	bool ___isDead_11;
	// System.Single PlayerMove::latitudeO
	float ___latitudeO_12;
	// System.Single PlayerMove::longitudeO
	float ___longitudeO_13;
	// System.Single PlayerMove::latitude
	float ___latitude_14;
	// System.Single PlayerMove::longitude
	float ___longitude_15;
	// System.String PlayerMove::name
	String_t* ___name_16;
	// UnityEngine.Color PlayerMove::color
	Color_t2020392075  ___color_17;

public:
	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___player_8)); }
	inline GameObject_t1756533147 * get_player_8() const { return ___player_8; }
	inline GameObject_t1756533147 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t1756533147 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_ui_9() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___ui_9)); }
	inline PlayerUI_t3700805861 * get_ui_9() const { return ___ui_9; }
	inline PlayerUI_t3700805861 ** get_address_of_ui_9() { return &___ui_9; }
	inline void set_ui_9(PlayerUI_t3700805861 * value)
	{
		___ui_9 = value;
		Il2CppCodeGenWriteBarrier(&___ui_9, value);
	}

	inline static int32_t get_offset_of_isSeeker_10() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___isSeeker_10)); }
	inline bool get_isSeeker_10() const { return ___isSeeker_10; }
	inline bool* get_address_of_isSeeker_10() { return &___isSeeker_10; }
	inline void set_isSeeker_10(bool value)
	{
		___isSeeker_10 = value;
	}

	inline static int32_t get_offset_of_isDead_11() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___isDead_11)); }
	inline bool get_isDead_11() const { return ___isDead_11; }
	inline bool* get_address_of_isDead_11() { return &___isDead_11; }
	inline void set_isDead_11(bool value)
	{
		___isDead_11 = value;
	}

	inline static int32_t get_offset_of_latitudeO_12() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___latitudeO_12)); }
	inline float get_latitudeO_12() const { return ___latitudeO_12; }
	inline float* get_address_of_latitudeO_12() { return &___latitudeO_12; }
	inline void set_latitudeO_12(float value)
	{
		___latitudeO_12 = value;
	}

	inline static int32_t get_offset_of_longitudeO_13() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___longitudeO_13)); }
	inline float get_longitudeO_13() const { return ___longitudeO_13; }
	inline float* get_address_of_longitudeO_13() { return &___longitudeO_13; }
	inline void set_longitudeO_13(float value)
	{
		___longitudeO_13 = value;
	}

	inline static int32_t get_offset_of_latitude_14() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___latitude_14)); }
	inline float get_latitude_14() const { return ___latitude_14; }
	inline float* get_address_of_latitude_14() { return &___latitude_14; }
	inline void set_latitude_14(float value)
	{
		___latitude_14 = value;
	}

	inline static int32_t get_offset_of_longitude_15() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___longitude_15)); }
	inline float get_longitude_15() const { return ___longitude_15; }
	inline float* get_address_of_longitude_15() { return &___longitude_15; }
	inline void set_longitude_15(float value)
	{
		___longitude_15 = value;
	}

	inline static int32_t get_offset_of_name_16() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___name_16)); }
	inline String_t* get_name_16() const { return ___name_16; }
	inline String_t** get_address_of_name_16() { return &___name_16; }
	inline void set_name_16(String_t* value)
	{
		___name_16 = value;
		Il2CppCodeGenWriteBarrier(&___name_16, value);
	}

	inline static int32_t get_offset_of_color_17() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___color_17)); }
	inline Color_t2020392075  get_color_17() const { return ___color_17; }
	inline Color_t2020392075 * get_address_of_color_17() { return &___color_17; }
	inline void set_color_17(Color_t2020392075  value)
	{
		___color_17 = value;
	}
};

struct PlayerMove_t195622780_StaticFields
{
public:
	// System.Int32 PlayerMove::kCmdCmdSetP
	int32_t ___kCmdCmdSetP_18;
	// System.Int32 PlayerMove::kCmdCmdSetName
	int32_t ___kCmdCmdSetName_19;

public:
	inline static int32_t get_offset_of_kCmdCmdSetP_18() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780_StaticFields, ___kCmdCmdSetP_18)); }
	inline int32_t get_kCmdCmdSetP_18() const { return ___kCmdCmdSetP_18; }
	inline int32_t* get_address_of_kCmdCmdSetP_18() { return &___kCmdCmdSetP_18; }
	inline void set_kCmdCmdSetP_18(int32_t value)
	{
		___kCmdCmdSetP_18 = value;
	}

	inline static int32_t get_offset_of_kCmdCmdSetName_19() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780_StaticFields, ___kCmdCmdSetName_19)); }
	inline int32_t get_kCmdCmdSetName_19() const { return ___kCmdCmdSetName_19; }
	inline int32_t* get_address_of_kCmdCmdSetName_19() { return &___kCmdCmdSetName_19; }
	inline void set_kCmdCmdSetName_19(int32_t value)
	{
		___kCmdCmdSetName_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
