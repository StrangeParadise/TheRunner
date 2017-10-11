#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// SimChat
struct SimChat_t2635359255;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// UnityScript.Lang.Array
struct Array_t1396575355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testSingleChat
struct  testSingleChat_t1743952810  : public MonoBehaviour_t1158329972
{
public:
	// SimChat testSingleChat::sc
	SimChat_t2635359255 * ___sc_2;
	// System.String[] testSingleChat::names
	StringU5BU5D_t1642385972* ___names_3;
	// System.String testSingleChat::chatName
	String_t* ___chatName_4;
	// System.Boolean testSingleChat::show
	bool ___show_5;
	// UnityEngine.Vector2 testSingleChat::sp
	Vector2_t2243707579  ___sp_6;
	// UnityEngine.Rect testSingleChat::chatRect
	Rect_t3681755626  ___chatRect_7;
	// UnityEngine.Color testSingleChat::c
	Color_t2020392075  ___c_8;
	// System.Single testSingleChat::rt
	float ___rt_9;
	// UnityScript.Lang.Array testSingleChat::sendingMessages
	Array_t1396575355 * ___sendingMessages_10;

public:
	inline static int32_t get_offset_of_sc_2() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___sc_2)); }
	inline SimChat_t2635359255 * get_sc_2() const { return ___sc_2; }
	inline SimChat_t2635359255 ** get_address_of_sc_2() { return &___sc_2; }
	inline void set_sc_2(SimChat_t2635359255 * value)
	{
		___sc_2 = value;
		Il2CppCodeGenWriteBarrier(&___sc_2, value);
	}

	inline static int32_t get_offset_of_names_3() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___names_3)); }
	inline StringU5BU5D_t1642385972* get_names_3() const { return ___names_3; }
	inline StringU5BU5D_t1642385972** get_address_of_names_3() { return &___names_3; }
	inline void set_names_3(StringU5BU5D_t1642385972* value)
	{
		___names_3 = value;
		Il2CppCodeGenWriteBarrier(&___names_3, value);
	}

	inline static int32_t get_offset_of_chatName_4() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___chatName_4)); }
	inline String_t* get_chatName_4() const { return ___chatName_4; }
	inline String_t** get_address_of_chatName_4() { return &___chatName_4; }
	inline void set_chatName_4(String_t* value)
	{
		___chatName_4 = value;
		Il2CppCodeGenWriteBarrier(&___chatName_4, value);
	}

	inline static int32_t get_offset_of_show_5() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___show_5)); }
	inline bool get_show_5() const { return ___show_5; }
	inline bool* get_address_of_show_5() { return &___show_5; }
	inline void set_show_5(bool value)
	{
		___show_5 = value;
	}

	inline static int32_t get_offset_of_sp_6() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___sp_6)); }
	inline Vector2_t2243707579  get_sp_6() const { return ___sp_6; }
	inline Vector2_t2243707579 * get_address_of_sp_6() { return &___sp_6; }
	inline void set_sp_6(Vector2_t2243707579  value)
	{
		___sp_6 = value;
	}

	inline static int32_t get_offset_of_chatRect_7() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___chatRect_7)); }
	inline Rect_t3681755626  get_chatRect_7() const { return ___chatRect_7; }
	inline Rect_t3681755626 * get_address_of_chatRect_7() { return &___chatRect_7; }
	inline void set_chatRect_7(Rect_t3681755626  value)
	{
		___chatRect_7 = value;
	}

	inline static int32_t get_offset_of_c_8() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___c_8)); }
	inline Color_t2020392075  get_c_8() const { return ___c_8; }
	inline Color_t2020392075 * get_address_of_c_8() { return &___c_8; }
	inline void set_c_8(Color_t2020392075  value)
	{
		___c_8 = value;
	}

	inline static int32_t get_offset_of_rt_9() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___rt_9)); }
	inline float get_rt_9() const { return ___rt_9; }
	inline float* get_address_of_rt_9() { return &___rt_9; }
	inline void set_rt_9(float value)
	{
		___rt_9 = value;
	}

	inline static int32_t get_offset_of_sendingMessages_10() { return static_cast<int32_t>(offsetof(testSingleChat_t1743952810, ___sendingMessages_10)); }
	inline Array_t1396575355 * get_sendingMessages_10() const { return ___sendingMessages_10; }
	inline Array_t1396575355 ** get_address_of_sendingMessages_10() { return &___sendingMessages_10; }
	inline void set_sendingMessages_10(Array_t1396575355 * value)
	{
		___sendingMessages_10 = value;
		Il2CppCodeGenWriteBarrier(&___sendingMessages_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
