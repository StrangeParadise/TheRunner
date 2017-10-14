#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleMessage
struct  SimpleMessage_t1037894399  : public Il2CppObject
{
public:
	// System.Int64 SimpleMessage::time
	int64_t ___time_0;
	// System.String SimpleMessage::sender
	String_t* ___sender_1;
	// System.String SimpleMessage::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(SimpleMessage_t1037894399, ___time_0)); }
	inline int64_t get_time_0() const { return ___time_0; }
	inline int64_t* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(int64_t value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_sender_1() { return static_cast<int32_t>(offsetof(SimpleMessage_t1037894399, ___sender_1)); }
	inline String_t* get_sender_1() const { return ___sender_1; }
	inline String_t** get_address_of_sender_1() { return &___sender_1; }
	inline void set_sender_1(String_t* value)
	{
		___sender_1 = value;
		Il2CppCodeGenWriteBarrier(&___sender_1, value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(SimpleMessage_t1037894399, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
