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
// System.Collections.Generic.List`1<SimpleMessage>
struct List_1_t407015531;
// System.String[]
struct StringU5BU5D_t1642385972;
// SimChat/SimChatNetwork
struct SimChatNetwork_t1737414579;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2368512252;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimChat
struct  SimChat_t2635359255  : public Il2CppObject
{
public:
	// System.String SimChat::message
	String_t* ___message_0;
	// System.Collections.Generic.List`1<SimpleMessage> SimChat::allMessages
	List_1_t407015531 * ___allMessages_1;
	// System.String[] SimChat::groupSenders
	StringU5BU5D_t1642385972* ___groupSenders_2;
	// SimChat/SimChatNetwork SimChat::scn
	SimChatNetwork_t1737414579 * ___scn_3;
	// System.Int32 SimChat::messageLength
	int32_t ___messageLength_4;
	// System.Single SimChat::delayTime
	float ___delayTime_5;
	// System.Boolean SimChat::continueToCheck
	bool ___continueToCheck_6;
	// UnityEngine.MonoBehaviour SimChat::mb
	MonoBehaviour_t1158329972 * ___mb_7;
	// System.Action`1<SimpleMessage[]> SimChat::receiveFunction
	Action_1_t2368512252 * ___receiveFunction_8;
	// System.Boolean SimChat::receiveFunctionSet
	bool ___receiveFunctionSet_9;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier(&___message_0, value);
	}

	inline static int32_t get_offset_of_allMessages_1() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___allMessages_1)); }
	inline List_1_t407015531 * get_allMessages_1() const { return ___allMessages_1; }
	inline List_1_t407015531 ** get_address_of_allMessages_1() { return &___allMessages_1; }
	inline void set_allMessages_1(List_1_t407015531 * value)
	{
		___allMessages_1 = value;
		Il2CppCodeGenWriteBarrier(&___allMessages_1, value);
	}

	inline static int32_t get_offset_of_groupSenders_2() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___groupSenders_2)); }
	inline StringU5BU5D_t1642385972* get_groupSenders_2() const { return ___groupSenders_2; }
	inline StringU5BU5D_t1642385972** get_address_of_groupSenders_2() { return &___groupSenders_2; }
	inline void set_groupSenders_2(StringU5BU5D_t1642385972* value)
	{
		___groupSenders_2 = value;
		Il2CppCodeGenWriteBarrier(&___groupSenders_2, value);
	}

	inline static int32_t get_offset_of_scn_3() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___scn_3)); }
	inline SimChatNetwork_t1737414579 * get_scn_3() const { return ___scn_3; }
	inline SimChatNetwork_t1737414579 ** get_address_of_scn_3() { return &___scn_3; }
	inline void set_scn_3(SimChatNetwork_t1737414579 * value)
	{
		___scn_3 = value;
		Il2CppCodeGenWriteBarrier(&___scn_3, value);
	}

	inline static int32_t get_offset_of_messageLength_4() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___messageLength_4)); }
	inline int32_t get_messageLength_4() const { return ___messageLength_4; }
	inline int32_t* get_address_of_messageLength_4() { return &___messageLength_4; }
	inline void set_messageLength_4(int32_t value)
	{
		___messageLength_4 = value;
	}

	inline static int32_t get_offset_of_delayTime_5() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___delayTime_5)); }
	inline float get_delayTime_5() const { return ___delayTime_5; }
	inline float* get_address_of_delayTime_5() { return &___delayTime_5; }
	inline void set_delayTime_5(float value)
	{
		___delayTime_5 = value;
	}

	inline static int32_t get_offset_of_continueToCheck_6() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___continueToCheck_6)); }
	inline bool get_continueToCheck_6() const { return ___continueToCheck_6; }
	inline bool* get_address_of_continueToCheck_6() { return &___continueToCheck_6; }
	inline void set_continueToCheck_6(bool value)
	{
		___continueToCheck_6 = value;
	}

	inline static int32_t get_offset_of_mb_7() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___mb_7)); }
	inline MonoBehaviour_t1158329972 * get_mb_7() const { return ___mb_7; }
	inline MonoBehaviour_t1158329972 ** get_address_of_mb_7() { return &___mb_7; }
	inline void set_mb_7(MonoBehaviour_t1158329972 * value)
	{
		___mb_7 = value;
		Il2CppCodeGenWriteBarrier(&___mb_7, value);
	}

	inline static int32_t get_offset_of_receiveFunction_8() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___receiveFunction_8)); }
	inline Action_1_t2368512252 * get_receiveFunction_8() const { return ___receiveFunction_8; }
	inline Action_1_t2368512252 ** get_address_of_receiveFunction_8() { return &___receiveFunction_8; }
	inline void set_receiveFunction_8(Action_1_t2368512252 * value)
	{
		___receiveFunction_8 = value;
		Il2CppCodeGenWriteBarrier(&___receiveFunction_8, value);
	}

	inline static int32_t get_offset_of_receiveFunctionSet_9() { return static_cast<int32_t>(offsetof(SimChat_t2635359255, ___receiveFunctionSet_9)); }
	inline bool get_receiveFunctionSet_9() const { return ___receiveFunctionSet_9; }
	inline bool* get_address_of_receiveFunctionSet_9() { return &___receiveFunctionSet_9; }
	inline void set_receiveFunctionSet_9(bool value)
	{
		___receiveFunctionSet_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
