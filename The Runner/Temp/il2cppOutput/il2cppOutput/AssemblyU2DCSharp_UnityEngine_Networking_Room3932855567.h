#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Networking.NetworkManager
struct NetworkManager_t3335581469;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Room
struct  Room_t3932855567  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Networking.NetworkManager UnityEngine.Networking.Room::manager
	NetworkManager_t3335581469 * ___manager_2;
	// UnityEngine.GameObject UnityEngine.Networking.Room::nameText
	GameObject_t1756533147 * ___nameText_3;
	// UnityEngine.GameObject UnityEngine.Networking.Room::parent
	GameObject_t1756533147 * ___parent_4;
	// UnityEngine.GameObject UnityEngine.Networking.Room::ui
	GameObject_t1756533147 * ___ui_5;
	// UnityEngine.GameObject UnityEngine.Networking.Room::chat
	GameObject_t1756533147 * ___chat_6;
	// UnityEngine.Color UnityEngine.Networking.Room::color
	Color_t2020392075  ___color_7;
	// System.Boolean UnityEngine.Networking.Room::finded
	bool ___finded_8;

public:
	inline static int32_t get_offset_of_manager_2() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___manager_2)); }
	inline NetworkManager_t3335581469 * get_manager_2() const { return ___manager_2; }
	inline NetworkManager_t3335581469 ** get_address_of_manager_2() { return &___manager_2; }
	inline void set_manager_2(NetworkManager_t3335581469 * value)
	{
		___manager_2 = value;
		Il2CppCodeGenWriteBarrier(&___manager_2, value);
	}

	inline static int32_t get_offset_of_nameText_3() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___nameText_3)); }
	inline GameObject_t1756533147 * get_nameText_3() const { return ___nameText_3; }
	inline GameObject_t1756533147 ** get_address_of_nameText_3() { return &___nameText_3; }
	inline void set_nameText_3(GameObject_t1756533147 * value)
	{
		___nameText_3 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_3, value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___parent_4)); }
	inline GameObject_t1756533147 * get_parent_4() const { return ___parent_4; }
	inline GameObject_t1756533147 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(GameObject_t1756533147 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier(&___parent_4, value);
	}

	inline static int32_t get_offset_of_ui_5() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___ui_5)); }
	inline GameObject_t1756533147 * get_ui_5() const { return ___ui_5; }
	inline GameObject_t1756533147 ** get_address_of_ui_5() { return &___ui_5; }
	inline void set_ui_5(GameObject_t1756533147 * value)
	{
		___ui_5 = value;
		Il2CppCodeGenWriteBarrier(&___ui_5, value);
	}

	inline static int32_t get_offset_of_chat_6() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___chat_6)); }
	inline GameObject_t1756533147 * get_chat_6() const { return ___chat_6; }
	inline GameObject_t1756533147 ** get_address_of_chat_6() { return &___chat_6; }
	inline void set_chat_6(GameObject_t1756533147 * value)
	{
		___chat_6 = value;
		Il2CppCodeGenWriteBarrier(&___chat_6, value);
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_finded_8() { return static_cast<int32_t>(offsetof(Room_t3932855567, ___finded_8)); }
	inline bool get_finded_8() const { return ___finded_8; }
	inline bool* get_address_of_finded_8() { return &___finded_8; }
	inline void set_finded_8(bool value)
	{
		___finded_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
