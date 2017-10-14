#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TheRunner_Utilities_Singleton_1_3795111891.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TheRunner.Data.PlayerDataManager
struct  PlayerDataManager_t3660452126  : public Singleton_1_t3795111891
{
public:
	// System.String TheRunner.Data.PlayerDataManager::_PlayerName
	String_t* ____PlayerName_4;
	// System.Int32 TheRunner.Data.PlayerDataManager::_PlayerID
	int32_t ____PlayerID_5;
	// System.Int32 TheRunner.Data.PlayerDataManager::_PlayerLvl
	int32_t ____PlayerLvl_6;
	// System.Int32 TheRunner.Data.PlayerDataManager::_Currency
	int32_t ____Currency_7;

public:
	inline static int32_t get_offset_of__PlayerName_4() { return static_cast<int32_t>(offsetof(PlayerDataManager_t3660452126, ____PlayerName_4)); }
	inline String_t* get__PlayerName_4() const { return ____PlayerName_4; }
	inline String_t** get_address_of__PlayerName_4() { return &____PlayerName_4; }
	inline void set__PlayerName_4(String_t* value)
	{
		____PlayerName_4 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerName_4, value);
	}

	inline static int32_t get_offset_of__PlayerID_5() { return static_cast<int32_t>(offsetof(PlayerDataManager_t3660452126, ____PlayerID_5)); }
	inline int32_t get__PlayerID_5() const { return ____PlayerID_5; }
	inline int32_t* get_address_of__PlayerID_5() { return &____PlayerID_5; }
	inline void set__PlayerID_5(int32_t value)
	{
		____PlayerID_5 = value;
	}

	inline static int32_t get_offset_of__PlayerLvl_6() { return static_cast<int32_t>(offsetof(PlayerDataManager_t3660452126, ____PlayerLvl_6)); }
	inline int32_t get__PlayerLvl_6() const { return ____PlayerLvl_6; }
	inline int32_t* get_address_of__PlayerLvl_6() { return &____PlayerLvl_6; }
	inline void set__PlayerLvl_6(int32_t value)
	{
		____PlayerLvl_6 = value;
	}

	inline static int32_t get_offset_of__Currency_7() { return static_cast<int32_t>(offsetof(PlayerDataManager_t3660452126, ____Currency_7)); }
	inline int32_t get__Currency_7() const { return ____Currency_7; }
	inline int32_t* get_address_of__Currency_7() { return &____Currency_7; }
	inline void set__Currency_7(int32_t value)
	{
		____Currency_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
