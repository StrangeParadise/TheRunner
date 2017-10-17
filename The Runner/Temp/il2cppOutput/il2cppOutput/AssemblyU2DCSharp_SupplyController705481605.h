#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupplyController
struct  SupplyController_t705481605  : public NetworkBehaviour_t3873055601
{
public:
	// System.String SupplyController::boxName
	String_t* ___boxName_8;
	// System.Single SupplyController::fallRange
	float ___fallRange_9;
	// System.Single SupplyController::unlockSpeed
	float ___unlockSpeed_10;
	// System.Single SupplyController::progress
	float ___progress_11;
	// System.Single SupplyController::MAX_PROGRESS
	float ___MAX_PROGRESS_12;

public:
	inline static int32_t get_offset_of_boxName_8() { return static_cast<int32_t>(offsetof(SupplyController_t705481605, ___boxName_8)); }
	inline String_t* get_boxName_8() const { return ___boxName_8; }
	inline String_t** get_address_of_boxName_8() { return &___boxName_8; }
	inline void set_boxName_8(String_t* value)
	{
		___boxName_8 = value;
		Il2CppCodeGenWriteBarrier(&___boxName_8, value);
	}

	inline static int32_t get_offset_of_fallRange_9() { return static_cast<int32_t>(offsetof(SupplyController_t705481605, ___fallRange_9)); }
	inline float get_fallRange_9() const { return ___fallRange_9; }
	inline float* get_address_of_fallRange_9() { return &___fallRange_9; }
	inline void set_fallRange_9(float value)
	{
		___fallRange_9 = value;
	}

	inline static int32_t get_offset_of_unlockSpeed_10() { return static_cast<int32_t>(offsetof(SupplyController_t705481605, ___unlockSpeed_10)); }
	inline float get_unlockSpeed_10() const { return ___unlockSpeed_10; }
	inline float* get_address_of_unlockSpeed_10() { return &___unlockSpeed_10; }
	inline void set_unlockSpeed_10(float value)
	{
		___unlockSpeed_10 = value;
	}

	inline static int32_t get_offset_of_progress_11() { return static_cast<int32_t>(offsetof(SupplyController_t705481605, ___progress_11)); }
	inline float get_progress_11() const { return ___progress_11; }
	inline float* get_address_of_progress_11() { return &___progress_11; }
	inline void set_progress_11(float value)
	{
		___progress_11 = value;
	}

	inline static int32_t get_offset_of_MAX_PROGRESS_12() { return static_cast<int32_t>(offsetof(SupplyController_t705481605, ___MAX_PROGRESS_12)); }
	inline float get_MAX_PROGRESS_12() const { return ___MAX_PROGRESS_12; }
	inline float* get_address_of_MAX_PROGRESS_12() { return &___MAX_PROGRESS_12; }
	inline void set_MAX_PROGRESS_12(float value)
	{
		___MAX_PROGRESS_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
