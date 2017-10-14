#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupplyFall
struct  SupplyFall_t678318350  : public NetworkBehaviour_t3873055601
{
public:
	// System.Single SupplyFall::fallRange
	float ___fallRange_8;

public:
	inline static int32_t get_offset_of_fallRange_8() { return static_cast<int32_t>(offsetof(SupplyFall_t678318350, ___fallRange_8)); }
	inline float get_fallRange_8() const { return ___fallRange_8; }
	inline float* get_address_of_fallRange_8() { return &___fallRange_8; }
	inline void set_fallRange_8(float value)
	{
		___fallRange_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
