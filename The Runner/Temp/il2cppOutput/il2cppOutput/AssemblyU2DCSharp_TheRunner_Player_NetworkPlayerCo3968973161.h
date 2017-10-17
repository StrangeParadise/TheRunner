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

// TheRunner.Player.NetworkPlayerController
struct  NetworkPlayerController_t3968973161  : public NetworkBehaviour_t3873055601
{
public:
	// System.String TheRunner.Player.NetworkPlayerController::playerName
	String_t* ___playerName_8;

public:
	inline static int32_t get_offset_of_playerName_8() { return static_cast<int32_t>(offsetof(NetworkPlayerController_t3968973161, ___playerName_8)); }
	inline String_t* get_playerName_8() const { return ___playerName_8; }
	inline String_t** get_address_of_playerName_8() { return &___playerName_8; }
	inline void set_playerName_8(String_t* value)
	{
		___playerName_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
