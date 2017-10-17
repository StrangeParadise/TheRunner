﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// GPSController
struct GPSController_t2272977524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateGPS
struct  UpdateGPS_t2150053955  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextMesh UpdateGPS::terminal
	TextMesh_t1641806576 * ___terminal_2;
	// GPSController UpdateGPS::IGPSController
	GPSController_t2272977524 * ___IGPSController_3;

public:
	inline static int32_t get_offset_of_terminal_2() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___terminal_2)); }
	inline TextMesh_t1641806576 * get_terminal_2() const { return ___terminal_2; }
	inline TextMesh_t1641806576 ** get_address_of_terminal_2() { return &___terminal_2; }
	inline void set_terminal_2(TextMesh_t1641806576 * value)
	{
		___terminal_2 = value;
		Il2CppCodeGenWriteBarrier(&___terminal_2, value);
	}

	inline static int32_t get_offset_of_IGPSController_3() { return static_cast<int32_t>(offsetof(UpdateGPS_t2150053955, ___IGPSController_3)); }
	inline GPSController_t2272977524 * get_IGPSController_3() const { return ___IGPSController_3; }
	inline GPSController_t2272977524 ** get_address_of_IGPSController_3() { return &___IGPSController_3; }
	inline void set_IGPSController_3(GPSController_t2272977524 * value)
	{
		___IGPSController_3 = value;
		Il2CppCodeGenWriteBarrier(&___IGPSController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
