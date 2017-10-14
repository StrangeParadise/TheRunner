#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TheRunner.Data.PlayerDataManager
struct PlayerDataManager_t3660452126;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TheRunner.Utilities.Singleton`1<TheRunner.Data.PlayerDataManager>
struct  Singleton_1_t3795111891  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t3795111891_StaticFields
{
public:
	// T TheRunner.Utilities.Singleton`1::s_instance
	PlayerDataManager_t3660452126 * ___s_instance_2;
	// System.Action TheRunner.Utilities.Singleton`1::InstanceSet
	Action_t3226471752 * ___InstanceSet_3;

public:
	inline static int32_t get_offset_of_s_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3795111891_StaticFields, ___s_instance_2)); }
	inline PlayerDataManager_t3660452126 * get_s_instance_2() const { return ___s_instance_2; }
	inline PlayerDataManager_t3660452126 ** get_address_of_s_instance_2() { return &___s_instance_2; }
	inline void set_s_instance_2(PlayerDataManager_t3660452126 * value)
	{
		___s_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_instance_2, value);
	}

	inline static int32_t get_offset_of_InstanceSet_3() { return static_cast<int32_t>(offsetof(Singleton_1_t3795111891_StaticFields, ___InstanceSet_3)); }
	inline Action_t3226471752 * get_InstanceSet_3() const { return ___InstanceSet_3; }
	inline Action_t3226471752 ** get_address_of_InstanceSet_3() { return &___InstanceSet_3; }
	inline void set_InstanceSet_3(Action_t3226471752 * value)
	{
		___InstanceSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___InstanceSet_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
