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
// GameController
struct GameController_t3607102586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountDownController
struct  CountDownController_t1675675739  : public NetworkBehaviour_t3873055601
{
public:
	// UnityEngine.GameObject CountDownController::IGameManager
	GameObject_t1756533147 * ___IGameManager_8;
	// GameController CountDownController::gameController
	GameController_t3607102586 * ___gameController_9;

public:
	inline static int32_t get_offset_of_IGameManager_8() { return static_cast<int32_t>(offsetof(CountDownController_t1675675739, ___IGameManager_8)); }
	inline GameObject_t1756533147 * get_IGameManager_8() const { return ___IGameManager_8; }
	inline GameObject_t1756533147 ** get_address_of_IGameManager_8() { return &___IGameManager_8; }
	inline void set_IGameManager_8(GameObject_t1756533147 * value)
	{
		___IGameManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___IGameManager_8, value);
	}

	inline static int32_t get_offset_of_gameController_9() { return static_cast<int32_t>(offsetof(CountDownController_t1675675739, ___gameController_9)); }
	inline GameController_t3607102586 * get_gameController_9() const { return ___gameController_9; }
	inline GameController_t3607102586 ** get_address_of_gameController_9() { return &___gameController_9; }
	inline void set_gameController_9(GameController_t3607102586 * value)
	{
		___gameController_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_9, value);
	}
};

struct CountDownController_t1675675739_StaticFields
{
public:
	// System.Int32 CountDownController::kRpcRpcUpdateCountdown
	int32_t ___kRpcRpcUpdateCountdown_10;

public:
	inline static int32_t get_offset_of_kRpcRpcUpdateCountdown_10() { return static_cast<int32_t>(offsetof(CountDownController_t1675675739_StaticFields, ___kRpcRpcUpdateCountdown_10)); }
	inline int32_t get_kRpcRpcUpdateCountdown_10() const { return ___kRpcRpcUpdateCountdown_10; }
	inline int32_t* get_address_of_kRpcRpcUpdateCountdown_10() { return &___kRpcRpcUpdateCountdown_10; }
	inline void set_kRpcRpcUpdateCountdown_10(int32_t value)
	{
		___kRpcRpcUpdateCountdown_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
