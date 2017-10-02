#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPSData
struct  GPSData_t207763284  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Single> GPSData::lati_stack
	List_1_t1445631064 * ___lati_stack_2;
	// System.Collections.Generic.List`1<System.Single> GPSData::long_stack
	List_1_t1445631064 * ___long_stack_3;
	// System.Single GPSData::<latitude>k__BackingField
	float ___U3ClatitudeU3Ek__BackingField_4;
	// System.Single GPSData::<longtitude>k__BackingField
	float ___U3ClongtitudeU3Ek__BackingField_5;
	// System.Single GPSData::stablizedLong
	float ___stablizedLong_6;
	// System.Single GPSData::stablizedLati
	float ___stablizedLati_7;

public:
	inline static int32_t get_offset_of_lati_stack_2() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___lati_stack_2)); }
	inline List_1_t1445631064 * get_lati_stack_2() const { return ___lati_stack_2; }
	inline List_1_t1445631064 ** get_address_of_lati_stack_2() { return &___lati_stack_2; }
	inline void set_lati_stack_2(List_1_t1445631064 * value)
	{
		___lati_stack_2 = value;
		Il2CppCodeGenWriteBarrier(&___lati_stack_2, value);
	}

	inline static int32_t get_offset_of_long_stack_3() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___long_stack_3)); }
	inline List_1_t1445631064 * get_long_stack_3() const { return ___long_stack_3; }
	inline List_1_t1445631064 ** get_address_of_long_stack_3() { return &___long_stack_3; }
	inline void set_long_stack_3(List_1_t1445631064 * value)
	{
		___long_stack_3 = value;
		Il2CppCodeGenWriteBarrier(&___long_stack_3, value);
	}

	inline static int32_t get_offset_of_U3ClatitudeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___U3ClatitudeU3Ek__BackingField_4)); }
	inline float get_U3ClatitudeU3Ek__BackingField_4() const { return ___U3ClatitudeU3Ek__BackingField_4; }
	inline float* get_address_of_U3ClatitudeU3Ek__BackingField_4() { return &___U3ClatitudeU3Ek__BackingField_4; }
	inline void set_U3ClatitudeU3Ek__BackingField_4(float value)
	{
		___U3ClatitudeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3ClongtitudeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___U3ClongtitudeU3Ek__BackingField_5)); }
	inline float get_U3ClongtitudeU3Ek__BackingField_5() const { return ___U3ClongtitudeU3Ek__BackingField_5; }
	inline float* get_address_of_U3ClongtitudeU3Ek__BackingField_5() { return &___U3ClongtitudeU3Ek__BackingField_5; }
	inline void set_U3ClongtitudeU3Ek__BackingField_5(float value)
	{
		___U3ClongtitudeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_stablizedLong_6() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___stablizedLong_6)); }
	inline float get_stablizedLong_6() const { return ___stablizedLong_6; }
	inline float* get_address_of_stablizedLong_6() { return &___stablizedLong_6; }
	inline void set_stablizedLong_6(float value)
	{
		___stablizedLong_6 = value;
	}

	inline static int32_t get_offset_of_stablizedLati_7() { return static_cast<int32_t>(offsetof(GPSData_t207763284, ___stablizedLati_7)); }
	inline float get_stablizedLati_7() const { return ___stablizedLati_7; }
	inline float* get_address_of_stablizedLati_7() { return &___stablizedLati_7; }
	inline void set_stablizedLati_7(float value)
	{
		___stablizedLati_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
