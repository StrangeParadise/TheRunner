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

// GameController
struct  GameController_t3607102586  : public NetworkBehaviour_t3873055601
{
public:
	// System.Int32 GameController::elapsedTime
	int32_t ___elapsedTime_9;
	// UnityEngine.GameObject GameController::countDownPrefab
	GameObject_t1756533147 * ___countDownPrefab_10;
	// CountDownController GameController::countdownController_I
	CountDownController_t1675675739 * ___countdownController_I_11;
	// System.Boolean GameController::isGameStarted
	bool ___isGameStarted_12;
	// UnityEngine.GameObject GameController::PlaneFlyingPrefab
	GameObject_t1756533147 * ___PlaneFlyingPrefab_13;
	// System.Int32 GameController::time_Runner_Runs
	int32_t ___time_Runner_Runs_14;
	// System.Boolean GameController::sch_Runner_Runs
	bool ___sch_Runner_Runs_15;
	// System.Int32 GameController::time_Box_1_Fall
	int32_t ___time_Box_1_Fall_16;
	// System.Boolean GameController::sch_Box_1_Fall
	bool ___sch_Box_1_Fall_17;
	// System.Int32 GameController::time_Box_2_Fall
	int32_t ___time_Box_2_Fall_18;
	// System.Boolean GameController::sch_Box_2_Fall
	bool ___sch_Box_2_Fall_19;
	// System.Int32 GameController::time_Box_3_Fall
	int32_t ___time_Box_3_Fall_20;
	// System.Boolean GameController::sch_Box_3_Fall
	bool ___sch_Box_3_Fall_21;
	// System.Int32 GameController::time_Toxic_Atm_Spread
	int32_t ___time_Toxic_Atm_Spread_22;
	// System.Boolean GameController::sch_Toxic_Atm_Spread
	bool ___sch_Toxic_Atm_Spread_23;

public:
	inline static int32_t get_offset_of_elapsedTime_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___elapsedTime_9)); }
	inline int32_t get_elapsedTime_9() const { return ___elapsedTime_9; }
	inline int32_t* get_address_of_elapsedTime_9() { return &___elapsedTime_9; }
	inline void set_elapsedTime_9(int32_t value)
	{
		___elapsedTime_9 = value;
	}

	inline static int32_t get_offset_of_countDownPrefab_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___countDownPrefab_10)); }
	inline GameObject_t1756533147 * get_countDownPrefab_10() const { return ___countDownPrefab_10; }
	inline GameObject_t1756533147 ** get_address_of_countDownPrefab_10() { return &___countDownPrefab_10; }
	inline void set_countDownPrefab_10(GameObject_t1756533147 * value)
	{
		___countDownPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___countDownPrefab_10, value);
	}

	inline static int32_t get_offset_of_countdownController_I_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___countdownController_I_11)); }
	inline CountDownController_t1675675739 * get_countdownController_I_11() const { return ___countdownController_I_11; }
	inline CountDownController_t1675675739 ** get_address_of_countdownController_I_11() { return &___countdownController_I_11; }
	inline void set_countdownController_I_11(CountDownController_t1675675739 * value)
	{
		___countdownController_I_11 = value;
		Il2CppCodeGenWriteBarrier(&___countdownController_I_11, value);
	}

	inline static int32_t get_offset_of_isGameStarted_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___isGameStarted_12)); }
	inline bool get_isGameStarted_12() const { return ___isGameStarted_12; }
	inline bool* get_address_of_isGameStarted_12() { return &___isGameStarted_12; }
	inline void set_isGameStarted_12(bool value)
	{
		___isGameStarted_12 = value;
	}

	inline static int32_t get_offset_of_PlaneFlyingPrefab_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PlaneFlyingPrefab_13)); }
	inline GameObject_t1756533147 * get_PlaneFlyingPrefab_13() const { return ___PlaneFlyingPrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_PlaneFlyingPrefab_13() { return &___PlaneFlyingPrefab_13; }
	inline void set_PlaneFlyingPrefab_13(GameObject_t1756533147 * value)
	{
		___PlaneFlyingPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___PlaneFlyingPrefab_13, value);
	}

	inline static int32_t get_offset_of_time_Runner_Runs_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___time_Runner_Runs_14)); }
	inline int32_t get_time_Runner_Runs_14() const { return ___time_Runner_Runs_14; }
	inline int32_t* get_address_of_time_Runner_Runs_14() { return &___time_Runner_Runs_14; }
	inline void set_time_Runner_Runs_14(int32_t value)
	{
		___time_Runner_Runs_14 = value;
	}

	inline static int32_t get_offset_of_sch_Runner_Runs_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sch_Runner_Runs_15)); }
	inline bool get_sch_Runner_Runs_15() const { return ___sch_Runner_Runs_15; }
	inline bool* get_address_of_sch_Runner_Runs_15() { return &___sch_Runner_Runs_15; }
	inline void set_sch_Runner_Runs_15(bool value)
	{
		___sch_Runner_Runs_15 = value;
	}

	inline static int32_t get_offset_of_time_Box_1_Fall_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___time_Box_1_Fall_16)); }
	inline int32_t get_time_Box_1_Fall_16() const { return ___time_Box_1_Fall_16; }
	inline int32_t* get_address_of_time_Box_1_Fall_16() { return &___time_Box_1_Fall_16; }
	inline void set_time_Box_1_Fall_16(int32_t value)
	{
		___time_Box_1_Fall_16 = value;
	}

	inline static int32_t get_offset_of_sch_Box_1_Fall_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sch_Box_1_Fall_17)); }
	inline bool get_sch_Box_1_Fall_17() const { return ___sch_Box_1_Fall_17; }
	inline bool* get_address_of_sch_Box_1_Fall_17() { return &___sch_Box_1_Fall_17; }
	inline void set_sch_Box_1_Fall_17(bool value)
	{
		___sch_Box_1_Fall_17 = value;
	}

	inline static int32_t get_offset_of_time_Box_2_Fall_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___time_Box_2_Fall_18)); }
	inline int32_t get_time_Box_2_Fall_18() const { return ___time_Box_2_Fall_18; }
	inline int32_t* get_address_of_time_Box_2_Fall_18() { return &___time_Box_2_Fall_18; }
	inline void set_time_Box_2_Fall_18(int32_t value)
	{
		___time_Box_2_Fall_18 = value;
	}

	inline static int32_t get_offset_of_sch_Box_2_Fall_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sch_Box_2_Fall_19)); }
	inline bool get_sch_Box_2_Fall_19() const { return ___sch_Box_2_Fall_19; }
	inline bool* get_address_of_sch_Box_2_Fall_19() { return &___sch_Box_2_Fall_19; }
	inline void set_sch_Box_2_Fall_19(bool value)
	{
		___sch_Box_2_Fall_19 = value;
	}

	inline static int32_t get_offset_of_time_Box_3_Fall_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___time_Box_3_Fall_20)); }
	inline int32_t get_time_Box_3_Fall_20() const { return ___time_Box_3_Fall_20; }
	inline int32_t* get_address_of_time_Box_3_Fall_20() { return &___time_Box_3_Fall_20; }
	inline void set_time_Box_3_Fall_20(int32_t value)
	{
		___time_Box_3_Fall_20 = value;
	}

	inline static int32_t get_offset_of_sch_Box_3_Fall_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sch_Box_3_Fall_21)); }
	inline bool get_sch_Box_3_Fall_21() const { return ___sch_Box_3_Fall_21; }
	inline bool* get_address_of_sch_Box_3_Fall_21() { return &___sch_Box_3_Fall_21; }
	inline void set_sch_Box_3_Fall_21(bool value)
	{
		___sch_Box_3_Fall_21 = value;
	}

	inline static int32_t get_offset_of_time_Toxic_Atm_Spread_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___time_Toxic_Atm_Spread_22)); }
	inline int32_t get_time_Toxic_Atm_Spread_22() const { return ___time_Toxic_Atm_Spread_22; }
	inline int32_t* get_address_of_time_Toxic_Atm_Spread_22() { return &___time_Toxic_Atm_Spread_22; }
	inline void set_time_Toxic_Atm_Spread_22(int32_t value)
	{
		___time_Toxic_Atm_Spread_22 = value;
	}

	inline static int32_t get_offset_of_sch_Toxic_Atm_Spread_23() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___sch_Toxic_Atm_Spread_23)); }
	inline bool get_sch_Toxic_Atm_Spread_23() const { return ___sch_Toxic_Atm_Spread_23; }
	inline bool* get_address_of_sch_Toxic_Atm_Spread_23() { return &___sch_Toxic_Atm_Spread_23; }
	inline void set_sch_Toxic_Atm_Spread_23(bool value)
	{
		___sch_Toxic_Atm_Spread_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
