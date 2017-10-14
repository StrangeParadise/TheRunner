#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupplyFall/<MoveOverSeconds>c__Iterator1
struct  U3CMoveOverSecondsU3Ec__Iterator1_t2784243099  : public Il2CppObject
{
public:
	// System.Single SupplyFall/<MoveOverSeconds>c__Iterator1::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_0;
	// UnityEngine.GameObject SupplyFall/<MoveOverSeconds>c__Iterator1::objectToMove
	GameObject_t1756533147 * ___objectToMove_1;
	// UnityEngine.Vector3 SupplyFall/<MoveOverSeconds>c__Iterator1::<startingPos>__0
	Vector3_t2243707580  ___U3CstartingPosU3E__0_2;
	// System.Single SupplyFall/<MoveOverSeconds>c__Iterator1::seconds
	float ___seconds_3;
	// UnityEngine.Vector3 SupplyFall/<MoveOverSeconds>c__Iterator1::end
	Vector3_t2243707580  ___end_4;
	// System.Object SupplyFall/<MoveOverSeconds>c__Iterator1::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean SupplyFall/<MoveOverSeconds>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SupplyFall/<MoveOverSeconds>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___U3CelapsedTimeU3E__0_0)); }
	inline float get_U3CelapsedTimeU3E__0_0() const { return ___U3CelapsedTimeU3E__0_0; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_0() { return &___U3CelapsedTimeU3E__0_0; }
	inline void set_U3CelapsedTimeU3E__0_0(float value)
	{
		___U3CelapsedTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_objectToMove_1() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___objectToMove_1)); }
	inline GameObject_t1756533147 * get_objectToMove_1() const { return ___objectToMove_1; }
	inline GameObject_t1756533147 ** get_address_of_objectToMove_1() { return &___objectToMove_1; }
	inline void set_objectToMove_1(GameObject_t1756533147 * value)
	{
		___objectToMove_1 = value;
		Il2CppCodeGenWriteBarrier(&___objectToMove_1, value);
	}

	inline static int32_t get_offset_of_U3CstartingPosU3E__0_2() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___U3CstartingPosU3E__0_2)); }
	inline Vector3_t2243707580  get_U3CstartingPosU3E__0_2() const { return ___U3CstartingPosU3E__0_2; }
	inline Vector3_t2243707580 * get_address_of_U3CstartingPosU3E__0_2() { return &___U3CstartingPosU3E__0_2; }
	inline void set_U3CstartingPosU3E__0_2(Vector3_t2243707580  value)
	{
		___U3CstartingPosU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_seconds_3() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___seconds_3)); }
	inline float get_seconds_3() const { return ___seconds_3; }
	inline float* get_address_of_seconds_3() { return &___seconds_3; }
	inline void set_seconds_3(float value)
	{
		___seconds_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___end_4)); }
	inline Vector3_t2243707580  get_end_4() const { return ___end_4; }
	inline Vector3_t2243707580 * get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(Vector3_t2243707580  value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CMoveOverSecondsU3Ec__Iterator1_t2784243099, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
