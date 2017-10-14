#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TheRunner.Chat.ChatManager
struct  ChatManager_t601750289  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField TheRunner.Chat.ChatManager::textFieldUI
	InputField_t1631627530 * ___textFieldUI_2;
	// UnityEngine.GameObject TheRunner.Chat.ChatManager::outputFieldUI
	GameObject_t1756533147 * ___outputFieldUI_3;
	// System.String TheRunner.Chat.ChatManager::text
	String_t* ___text_4;
	// UnityEngine.UI.Text TheRunner.Chat.ChatManager::outputField
	Text_t356221433 * ___outputField_5;
	// System.String TheRunner.Chat.ChatManager::output
	String_t* ___output_6;
	// System.String TheRunner.Chat.ChatManager::textLine
	String_t* ___textLine_7;
	// System.Single TheRunner.Chat.ChatManager::UPDATE_INTERVAL
	float ___UPDATE_INTERVAL_8;
	// System.Single TheRunner.Chat.ChatManager::updateCount
	float ___updateCount_9;
	// System.Boolean TheRunner.Chat.ChatManager::needsUpdate
	bool ___needsUpdate_10;

public:
	inline static int32_t get_offset_of_textFieldUI_2() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___textFieldUI_2)); }
	inline InputField_t1631627530 * get_textFieldUI_2() const { return ___textFieldUI_2; }
	inline InputField_t1631627530 ** get_address_of_textFieldUI_2() { return &___textFieldUI_2; }
	inline void set_textFieldUI_2(InputField_t1631627530 * value)
	{
		___textFieldUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___textFieldUI_2, value);
	}

	inline static int32_t get_offset_of_outputFieldUI_3() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___outputFieldUI_3)); }
	inline GameObject_t1756533147 * get_outputFieldUI_3() const { return ___outputFieldUI_3; }
	inline GameObject_t1756533147 ** get_address_of_outputFieldUI_3() { return &___outputFieldUI_3; }
	inline void set_outputFieldUI_3(GameObject_t1756533147 * value)
	{
		___outputFieldUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___outputFieldUI_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}

	inline static int32_t get_offset_of_outputField_5() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___outputField_5)); }
	inline Text_t356221433 * get_outputField_5() const { return ___outputField_5; }
	inline Text_t356221433 ** get_address_of_outputField_5() { return &___outputField_5; }
	inline void set_outputField_5(Text_t356221433 * value)
	{
		___outputField_5 = value;
		Il2CppCodeGenWriteBarrier(&___outputField_5, value);
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___output_6)); }
	inline String_t* get_output_6() const { return ___output_6; }
	inline String_t** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(String_t* value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier(&___output_6, value);
	}

	inline static int32_t get_offset_of_textLine_7() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___textLine_7)); }
	inline String_t* get_textLine_7() const { return ___textLine_7; }
	inline String_t** get_address_of_textLine_7() { return &___textLine_7; }
	inline void set_textLine_7(String_t* value)
	{
		___textLine_7 = value;
		Il2CppCodeGenWriteBarrier(&___textLine_7, value);
	}

	inline static int32_t get_offset_of_UPDATE_INTERVAL_8() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___UPDATE_INTERVAL_8)); }
	inline float get_UPDATE_INTERVAL_8() const { return ___UPDATE_INTERVAL_8; }
	inline float* get_address_of_UPDATE_INTERVAL_8() { return &___UPDATE_INTERVAL_8; }
	inline void set_UPDATE_INTERVAL_8(float value)
	{
		___UPDATE_INTERVAL_8 = value;
	}

	inline static int32_t get_offset_of_updateCount_9() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___updateCount_9)); }
	inline float get_updateCount_9() const { return ___updateCount_9; }
	inline float* get_address_of_updateCount_9() { return &___updateCount_9; }
	inline void set_updateCount_9(float value)
	{
		___updateCount_9 = value;
	}

	inline static int32_t get_offset_of_needsUpdate_10() { return static_cast<int32_t>(offsetof(ChatManager_t601750289, ___needsUpdate_10)); }
	inline bool get_needsUpdate_10() const { return ___needsUpdate_10; }
	inline bool* get_address_of_needsUpdate_10() { return &___needsUpdate_10; }
	inline void set_needsUpdate_10(bool value)
	{
		___needsUpdate_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
