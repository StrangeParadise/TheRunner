#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1445386684;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveData
struct  SaveData_t450951007  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct SaveData_t450951007_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> SaveData::dead
	Dictionary_2_t1445386684 * ___dead_2;

public:
	inline static int32_t get_offset_of_dead_2() { return static_cast<int32_t>(offsetof(SaveData_t450951007_StaticFields, ___dead_2)); }
	inline Dictionary_2_t1445386684 * get_dead_2() const { return ___dead_2; }
	inline Dictionary_2_t1445386684 ** get_address_of_dead_2() { return &___dead_2; }
	inline void set_dead_2(Dictionary_2_t1445386684 * value)
	{
		___dead_2 = value;
		Il2CppCodeGenWriteBarrier(&___dead_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
