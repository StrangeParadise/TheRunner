#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.Texture
struct Texture_t2243626319;
// PlayerMove
struct PlayerMove_t195622780;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerUI
struct  PlayerUI_t3700805861  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.RawImage PlayerUI::image
	RawImage_t2749640213 * ___image_2;
	// UnityEngine.Texture PlayerUI::hide
	Texture_t2243626319 * ___hide_3;
	// UnityEngine.Texture PlayerUI::seek
	Texture_t2243626319 * ___seek_4;
	// PlayerMove PlayerUI::player
	PlayerMove_t195622780 * ___player_5;
	// UnityEngine.GameObject PlayerUI::text
	GameObject_t1756533147 * ___text_6;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(PlayerUI_t3700805861, ___image_2)); }
	inline RawImage_t2749640213 * get_image_2() const { return ___image_2; }
	inline RawImage_t2749640213 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(RawImage_t2749640213 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_hide_3() { return static_cast<int32_t>(offsetof(PlayerUI_t3700805861, ___hide_3)); }
	inline Texture_t2243626319 * get_hide_3() const { return ___hide_3; }
	inline Texture_t2243626319 ** get_address_of_hide_3() { return &___hide_3; }
	inline void set_hide_3(Texture_t2243626319 * value)
	{
		___hide_3 = value;
		Il2CppCodeGenWriteBarrier(&___hide_3, value);
	}

	inline static int32_t get_offset_of_seek_4() { return static_cast<int32_t>(offsetof(PlayerUI_t3700805861, ___seek_4)); }
	inline Texture_t2243626319 * get_seek_4() const { return ___seek_4; }
	inline Texture_t2243626319 ** get_address_of_seek_4() { return &___seek_4; }
	inline void set_seek_4(Texture_t2243626319 * value)
	{
		___seek_4 = value;
		Il2CppCodeGenWriteBarrier(&___seek_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerUI_t3700805861, ___player_5)); }
	inline PlayerMove_t195622780 * get_player_5() const { return ___player_5; }
	inline PlayerMove_t195622780 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerMove_t195622780 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(PlayerUI_t3700805861, ___text_6)); }
	inline GameObject_t1756533147 * get_text_6() const { return ___text_6; }
	inline GameObject_t1756533147 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(GameObject_t1756533147 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
