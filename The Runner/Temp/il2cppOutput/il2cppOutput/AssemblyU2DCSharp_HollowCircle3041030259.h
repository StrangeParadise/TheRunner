#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HollowCircle
struct  HollowCircle_t3041030259  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HollowCircle::segments
	int32_t ___segments_2;
	// System.Single HollowCircle::xradius
	float ___xradius_3;
	// System.Single HollowCircle::yradius
	float ___yradius_4;
	// UnityEngine.LineRenderer HollowCircle::line
	LineRenderer_t849157671 * ___line_5;

public:
	inline static int32_t get_offset_of_segments_2() { return static_cast<int32_t>(offsetof(HollowCircle_t3041030259, ___segments_2)); }
	inline int32_t get_segments_2() const { return ___segments_2; }
	inline int32_t* get_address_of_segments_2() { return &___segments_2; }
	inline void set_segments_2(int32_t value)
	{
		___segments_2 = value;
	}

	inline static int32_t get_offset_of_xradius_3() { return static_cast<int32_t>(offsetof(HollowCircle_t3041030259, ___xradius_3)); }
	inline float get_xradius_3() const { return ___xradius_3; }
	inline float* get_address_of_xradius_3() { return &___xradius_3; }
	inline void set_xradius_3(float value)
	{
		___xradius_3 = value;
	}

	inline static int32_t get_offset_of_yradius_4() { return static_cast<int32_t>(offsetof(HollowCircle_t3041030259, ___yradius_4)); }
	inline float get_yradius_4() const { return ___yradius_4; }
	inline float* get_address_of_yradius_4() { return &___yradius_4; }
	inline void set_yradius_4(float value)
	{
		___yradius_4 = value;
	}

	inline static int32_t get_offset_of_line_5() { return static_cast<int32_t>(offsetof(HollowCircle_t3041030259, ___line_5)); }
	inline LineRenderer_t849157671 * get_line_5() const { return ___line_5; }
	inline LineRenderer_t849157671 ** get_address_of_line_5() { return &___line_5; }
	inline void set_line_5(LineRenderer_t849157671 * value)
	{
		___line_5 = value;
		Il2CppCodeGenWriteBarrier(&___line_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
