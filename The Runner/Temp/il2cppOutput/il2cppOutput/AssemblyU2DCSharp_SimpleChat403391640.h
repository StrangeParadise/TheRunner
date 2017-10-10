#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "wwwChat_SimChat2635359255.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleChat
struct  SimpleChat_t403391640  : public SimChat_t2635359255
{
public:
	// System.Boolean SimpleChat::show
	bool ___show_10;
	// UnityEngine.Rect SimpleChat::chatRect
	Rect_t3681755626  ___chatRect_11;
	// System.Single SimpleChat::messageTime
	float ___messageTime_12;
	// System.Single SimpleChat::rt
	float ___rt_13;
	// System.Int32 SimpleChat::textSize
	int32_t ___textSize_14;
	// UnityEngine.Color SimpleChat::myColor
	Color_t2020392075  ___myColor_15;
	// UnityEngine.Color SimpleChat::theirColor
	Color_t2020392075  ___theirColor_16;
	// UnityEngine.Vector2 SimpleChat::sp
	Vector2_t2243707579  ___sp_17;
	// UnityEngine.Color SimpleChat::c
	Color_t2020392075  ___c_18;
	// System.Collections.Generic.List`1<System.String> SimpleChat::pending
	List_1_t1398341365 * ___pending_19;

public:
	inline static int32_t get_offset_of_show_10() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___show_10)); }
	inline bool get_show_10() const { return ___show_10; }
	inline bool* get_address_of_show_10() { return &___show_10; }
	inline void set_show_10(bool value)
	{
		___show_10 = value;
	}

	inline static int32_t get_offset_of_chatRect_11() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___chatRect_11)); }
	inline Rect_t3681755626  get_chatRect_11() const { return ___chatRect_11; }
	inline Rect_t3681755626 * get_address_of_chatRect_11() { return &___chatRect_11; }
	inline void set_chatRect_11(Rect_t3681755626  value)
	{
		___chatRect_11 = value;
	}

	inline static int32_t get_offset_of_messageTime_12() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___messageTime_12)); }
	inline float get_messageTime_12() const { return ___messageTime_12; }
	inline float* get_address_of_messageTime_12() { return &___messageTime_12; }
	inline void set_messageTime_12(float value)
	{
		___messageTime_12 = value;
	}

	inline static int32_t get_offset_of_rt_13() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___rt_13)); }
	inline float get_rt_13() const { return ___rt_13; }
	inline float* get_address_of_rt_13() { return &___rt_13; }
	inline void set_rt_13(float value)
	{
		___rt_13 = value;
	}

	inline static int32_t get_offset_of_textSize_14() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___textSize_14)); }
	inline int32_t get_textSize_14() const { return ___textSize_14; }
	inline int32_t* get_address_of_textSize_14() { return &___textSize_14; }
	inline void set_textSize_14(int32_t value)
	{
		___textSize_14 = value;
	}

	inline static int32_t get_offset_of_myColor_15() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___myColor_15)); }
	inline Color_t2020392075  get_myColor_15() const { return ___myColor_15; }
	inline Color_t2020392075 * get_address_of_myColor_15() { return &___myColor_15; }
	inline void set_myColor_15(Color_t2020392075  value)
	{
		___myColor_15 = value;
	}

	inline static int32_t get_offset_of_theirColor_16() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___theirColor_16)); }
	inline Color_t2020392075  get_theirColor_16() const { return ___theirColor_16; }
	inline Color_t2020392075 * get_address_of_theirColor_16() { return &___theirColor_16; }
	inline void set_theirColor_16(Color_t2020392075  value)
	{
		___theirColor_16 = value;
	}

	inline static int32_t get_offset_of_sp_17() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___sp_17)); }
	inline Vector2_t2243707579  get_sp_17() const { return ___sp_17; }
	inline Vector2_t2243707579 * get_address_of_sp_17() { return &___sp_17; }
	inline void set_sp_17(Vector2_t2243707579  value)
	{
		___sp_17 = value;
	}

	inline static int32_t get_offset_of_c_18() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___c_18)); }
	inline Color_t2020392075  get_c_18() const { return ___c_18; }
	inline Color_t2020392075 * get_address_of_c_18() { return &___c_18; }
	inline void set_c_18(Color_t2020392075  value)
	{
		___c_18 = value;
	}

	inline static int32_t get_offset_of_pending_19() { return static_cast<int32_t>(offsetof(SimpleChat_t403391640, ___pending_19)); }
	inline List_1_t1398341365 * get_pending_19() const { return ___pending_19; }
	inline List_1_t1398341365 ** get_address_of_pending_19() { return &___pending_19; }
	inline void set_pending_19(List_1_t1398341365 * value)
	{
		___pending_19 = value;
		Il2CppCodeGenWriteBarrier(&___pending_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
