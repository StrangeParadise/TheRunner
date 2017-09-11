#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateGPS
struct  UpdateGPS_t2150053955  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text UpdateGPS::coordinate
	Text_t356221433 * ___coordinate_2;

public:
	inline static int32_t get_offset_of_coordinate_2() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___coordinate_2)); }
	inline Text_t356221433 * get_coordinate_2() const { return ___coordinate_2; }
	inline Text_t356221433 ** get_address_of_coordinate_2() { return &___coordinate_2; }
	inline void set_coordinate_2(Text_t356221433 * value)
	{
		___coordinate_2 = value;
		Il2CppCodeGenWriteBarrier(&___coordinate_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
