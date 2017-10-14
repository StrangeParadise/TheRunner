#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaneMove
struct  PlaneMove_t3901225937  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlaneMove::BoxPrefab
	GameObject_t1756533147 * ___BoxPrefab_2;
	// System.Boolean PlaneMove::isBoxThrew
	bool ___isBoxThrew_3;
	// System.Int32 PlaneMove::boxThrowX
	int32_t ___boxThrowX_4;
	// System.Int32 PlaneMove::planeEndX
	int32_t ___planeEndX_5;
	// System.Int32 PlaneMove::planeFlyTime
	int32_t ___planeFlyTime_6;

public:
	inline static int32_t get_offset_of_BoxPrefab_2() { return static_cast<int32_t>(offsetof(PlaneMove_t3901225937, ___BoxPrefab_2)); }
	inline GameObject_t1756533147 * get_BoxPrefab_2() const { return ___BoxPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_BoxPrefab_2() { return &___BoxPrefab_2; }
	inline void set_BoxPrefab_2(GameObject_t1756533147 * value)
	{
		___BoxPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___BoxPrefab_2, value);
	}

	inline static int32_t get_offset_of_isBoxThrew_3() { return static_cast<int32_t>(offsetof(PlaneMove_t3901225937, ___isBoxThrew_3)); }
	inline bool get_isBoxThrew_3() const { return ___isBoxThrew_3; }
	inline bool* get_address_of_isBoxThrew_3() { return &___isBoxThrew_3; }
	inline void set_isBoxThrew_3(bool value)
	{
		___isBoxThrew_3 = value;
	}

	inline static int32_t get_offset_of_boxThrowX_4() { return static_cast<int32_t>(offsetof(PlaneMove_t3901225937, ___boxThrowX_4)); }
	inline int32_t get_boxThrowX_4() const { return ___boxThrowX_4; }
	inline int32_t* get_address_of_boxThrowX_4() { return &___boxThrowX_4; }
	inline void set_boxThrowX_4(int32_t value)
	{
		___boxThrowX_4 = value;
	}

	inline static int32_t get_offset_of_planeEndX_5() { return static_cast<int32_t>(offsetof(PlaneMove_t3901225937, ___planeEndX_5)); }
	inline int32_t get_planeEndX_5() const { return ___planeEndX_5; }
	inline int32_t* get_address_of_planeEndX_5() { return &___planeEndX_5; }
	inline void set_planeEndX_5(int32_t value)
	{
		___planeEndX_5 = value;
	}

	inline static int32_t get_offset_of_planeFlyTime_6() { return static_cast<int32_t>(offsetof(PlaneMove_t3901225937, ___planeFlyTime_6)); }
	inline int32_t get_planeFlyTime_6() const { return ___planeFlyTime_6; }
	inline int32_t* get_address_of_planeFlyTime_6() { return &___planeFlyTime_6; }
	inline void set_planeFlyTime_6(int32_t value)
	{
		___planeFlyTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
