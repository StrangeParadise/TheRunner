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
// CountDownController
struct CountDownController_t1675675739;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountDownServer
struct  CountDownServer_t3870323248  : public NetworkBehaviour_t3873055601
{
public:
	// UnityEngine.GameObject CountDownServer::countDownPrefab
	GameObject_t1756533147 * ___countDownPrefab_9;
	// CountDownController CountDownServer::countdownController_I
	CountDownController_t1675675739 * ___countdownController_I_10;

public:
	inline static int32_t get_offset_of_countDownPrefab_9() { return static_cast<int32_t>(offsetof(CountDownServer_t3870323248, ___countDownPrefab_9)); }
	inline GameObject_t1756533147 * get_countDownPrefab_9() const { return ___countDownPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_countDownPrefab_9() { return &___countDownPrefab_9; }
	inline void set_countDownPrefab_9(GameObject_t1756533147 * value)
	{
		___countDownPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___countDownPrefab_9, value);
	}

	inline static int32_t get_offset_of_countdownController_I_10() { return static_cast<int32_t>(offsetof(CountDownServer_t3870323248, ___countdownController_I_10)); }
	inline CountDownController_t1675675739 * get_countdownController_I_10() const { return ___countdownController_I_10; }
	inline CountDownController_t1675675739 ** get_address_of_countdownController_I_10() { return &___countdownController_I_10; }
	inline void set_countdownController_I_10(CountDownController_t1675675739 * value)
	{
		___countdownController_I_10 = value;
		Il2CppCodeGenWriteBarrier(&___countdownController_I_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
