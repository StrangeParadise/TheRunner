#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinLose
struct  WinLose_t1815095071  : public NetworkBehaviour_t3873055601
{
public:
	// UnityEngine.GameObject WinLose::winO
	GameObject_t1756533147 * ___winO_8;
	// UnityEngine.GameObject WinLose::loseO
	GameObject_t1756533147 * ___loseO_9;
	// UnityEngine.GameObject[] WinLose::players
	GameObjectU5BU5D_t3057952154* ___players_12;
	// System.Boolean WinLose::hiderIn
	bool ___hiderIn_13;

public:
	inline static int32_t get_offset_of_winO_8() { return static_cast<int32_t>(offsetof(WinLose_t1815095071, ___winO_8)); }
	inline GameObject_t1756533147 * get_winO_8() const { return ___winO_8; }
	inline GameObject_t1756533147 ** get_address_of_winO_8() { return &___winO_8; }
	inline void set_winO_8(GameObject_t1756533147 * value)
	{
		___winO_8 = value;
		Il2CppCodeGenWriteBarrier(&___winO_8, value);
	}

	inline static int32_t get_offset_of_loseO_9() { return static_cast<int32_t>(offsetof(WinLose_t1815095071, ___loseO_9)); }
	inline GameObject_t1756533147 * get_loseO_9() const { return ___loseO_9; }
	inline GameObject_t1756533147 ** get_address_of_loseO_9() { return &___loseO_9; }
	inline void set_loseO_9(GameObject_t1756533147 * value)
	{
		___loseO_9 = value;
		Il2CppCodeGenWriteBarrier(&___loseO_9, value);
	}

	inline static int32_t get_offset_of_players_12() { return static_cast<int32_t>(offsetof(WinLose_t1815095071, ___players_12)); }
	inline GameObjectU5BU5D_t3057952154* get_players_12() const { return ___players_12; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_players_12() { return &___players_12; }
	inline void set_players_12(GameObjectU5BU5D_t3057952154* value)
	{
		___players_12 = value;
		Il2CppCodeGenWriteBarrier(&___players_12, value);
	}

	inline static int32_t get_offset_of_hiderIn_13() { return static_cast<int32_t>(offsetof(WinLose_t1815095071, ___hiderIn_13)); }
	inline bool get_hiderIn_13() const { return ___hiderIn_13; }
	inline bool* get_address_of_hiderIn_13() { return &___hiderIn_13; }
	inline void set_hiderIn_13(bool value)
	{
		___hiderIn_13 = value;
	}
};

struct WinLose_t1815095071_StaticFields
{
public:
	// UnityEngine.GameObject WinLose::winUI
	GameObject_t1756533147 * ___winUI_10;
	// UnityEngine.GameObject WinLose::loseUI
	GameObject_t1756533147 * ___loseUI_11;

public:
	inline static int32_t get_offset_of_winUI_10() { return static_cast<int32_t>(offsetof(WinLose_t1815095071_StaticFields, ___winUI_10)); }
	inline GameObject_t1756533147 * get_winUI_10() const { return ___winUI_10; }
	inline GameObject_t1756533147 ** get_address_of_winUI_10() { return &___winUI_10; }
	inline void set_winUI_10(GameObject_t1756533147 * value)
	{
		___winUI_10 = value;
		Il2CppCodeGenWriteBarrier(&___winUI_10, value);
	}

	inline static int32_t get_offset_of_loseUI_11() { return static_cast<int32_t>(offsetof(WinLose_t1815095071_StaticFields, ___loseUI_11)); }
	inline GameObject_t1756533147 * get_loseUI_11() const { return ___loseUI_11; }
	inline GameObject_t1756533147 ** get_address_of_loseUI_11() { return &___loseUI_11; }
	inline void set_loseUI_11(GameObject_t1756533147 * value)
	{
		___loseUI_11 = value;
		Il2CppCodeGenWriteBarrier(&___loseUI_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
