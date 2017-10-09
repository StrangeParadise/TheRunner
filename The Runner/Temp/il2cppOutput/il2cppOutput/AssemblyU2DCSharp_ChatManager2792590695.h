#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatManager
struct  ChatManager_t2792590695  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ChatManager::textFieldUI
	GameObject_t1756533147 * ___textFieldUI_2;
	// UnityEngine.GameObject ChatManager::outputFieldUI
	GameObject_t1756533147 * ___outputFieldUI_3;
	// UnityEngine.UI.Text ChatManager::textField
	Text_t356221433 * ___textField_4;
	// UnityEngine.UI.Text ChatManager::outputField
	Text_t356221433 * ___outputField_5;
	// System.String ChatManager::output
	String_t* ___output_6;
	// System.String ChatManager::text
	String_t* ___text_7;

public:
	inline static int32_t get_offset_of_textFieldUI_2() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___textFieldUI_2)); }
	inline GameObject_t1756533147 * get_textFieldUI_2() const { return ___textFieldUI_2; }
	inline GameObject_t1756533147 ** get_address_of_textFieldUI_2() { return &___textFieldUI_2; }
	inline void set_textFieldUI_2(GameObject_t1756533147 * value)
	{
		___textFieldUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___textFieldUI_2, value);
	}

	inline static int32_t get_offset_of_outputFieldUI_3() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___outputFieldUI_3)); }
	inline GameObject_t1756533147 * get_outputFieldUI_3() const { return ___outputFieldUI_3; }
	inline GameObject_t1756533147 ** get_address_of_outputFieldUI_3() { return &___outputFieldUI_3; }
	inline void set_outputFieldUI_3(GameObject_t1756533147 * value)
	{
		___outputFieldUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___outputFieldUI_3, value);
	}

	inline static int32_t get_offset_of_textField_4() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___textField_4)); }
	inline Text_t356221433 * get_textField_4() const { return ___textField_4; }
	inline Text_t356221433 ** get_address_of_textField_4() { return &___textField_4; }
	inline void set_textField_4(Text_t356221433 * value)
	{
		___textField_4 = value;
		Il2CppCodeGenWriteBarrier(&___textField_4, value);
	}

	inline static int32_t get_offset_of_outputField_5() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___outputField_5)); }
	inline Text_t356221433 * get_outputField_5() const { return ___outputField_5; }
	inline Text_t356221433 ** get_address_of_outputField_5() { return &___outputField_5; }
	inline void set_outputField_5(Text_t356221433 * value)
	{
		___outputField_5 = value;
		Il2CppCodeGenWriteBarrier(&___outputField_5, value);
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___output_6)); }
	inline String_t* get_output_6() const { return ___output_6; }
	inline String_t** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(String_t* value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier(&___output_6, value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ChatManager_t2792590695, ___text_7)); }
	inline String_t* get_text_7() const { return ___text_7; }
	inline String_t** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(String_t* value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
