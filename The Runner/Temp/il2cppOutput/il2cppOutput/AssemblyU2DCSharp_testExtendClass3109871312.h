#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SimpleChat
struct SimpleChat_t403391640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testExtendClass
struct  testExtendClass_t3109871312  : public MonoBehaviour_t1158329972
{
public:
	// SimpleChat testExtendClass::sc
	SimpleChat_t403391640 * ___sc_2;

public:
	inline static int32_t get_offset_of_sc_2() { return static_cast<int32_t>(offsetof(testExtendClass_t3109871312, ___sc_2)); }
	inline SimpleChat_t403391640 * get_sc_2() const { return ___sc_2; }
	inline SimpleChat_t403391640 ** get_address_of_sc_2() { return &___sc_2; }
	inline void set_sc_2(SimpleChat_t403391640 * value)
	{
		___sc_2 = value;
		Il2CppCodeGenWriteBarrier(&___sc_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
