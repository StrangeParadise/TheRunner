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

// Catch
struct  Catch_t2594297639  : public NetworkBehaviour_t3873055601
{
public:
	// System.Int32 Catch::distance
	int32_t ___distance_8;
	// UnityEngine.GameObject Catch::button
	GameObject_t1756533147 * ___button_9;
	// UnityEngine.GameObject[] Catch::players
	GameObjectU5BU5D_t3057952154* ___players_10;

public:
	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(Catch_t2594297639, ___distance_8)); }
	inline int32_t get_distance_8() const { return ___distance_8; }
	inline int32_t* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(int32_t value)
	{
		___distance_8 = value;
	}

	inline static int32_t get_offset_of_button_9() { return static_cast<int32_t>(offsetof(Catch_t2594297639, ___button_9)); }
	inline GameObject_t1756533147 * get_button_9() const { return ___button_9; }
	inline GameObject_t1756533147 ** get_address_of_button_9() { return &___button_9; }
	inline void set_button_9(GameObject_t1756533147 * value)
	{
		___button_9 = value;
		Il2CppCodeGenWriteBarrier(&___button_9, value);
	}

	inline static int32_t get_offset_of_players_10() { return static_cast<int32_t>(offsetof(Catch_t2594297639, ___players_10)); }
	inline GameObjectU5BU5D_t3057952154* get_players_10() const { return ___players_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_players_10() { return &___players_10; }
	inline void set_players_10(GameObjectU5BU5D_t3057952154* value)
	{
		___players_10 = value;
		Il2CppCodeGenWriteBarrier(&___players_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
