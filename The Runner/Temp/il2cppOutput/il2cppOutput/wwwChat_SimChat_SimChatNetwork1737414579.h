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
// System.String[]
struct StringU5BU5D_t1642385972;
// SimpleMessage[]
struct SimpleMessageU5BU5D_t2566712870;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Action`1<SimpleMessage[]>
struct Action_1_t2368512252;
// System.Action`1<System.String[]>
struct Action_1_t1444185354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimChat/SimChatNetwork
struct  SimChatNetwork_t1737414579  : public Il2CppObject
{
public:
	// System.Int64 SimChat/SimChatNetwork::latest
	int64_t ___latest_3;
	// SimpleMessage[] SimChat/SimChatNetwork::receiveMessages
	SimpleMessageU5BU5D_t2566712870* ___receiveMessages_5;
	// UnityEngine.MonoBehaviour SimChat/SimChatNetwork::mb
	MonoBehaviour_t1158329972 * ___mb_6;
	// System.String SimChat/SimChatNetwork::name
	String_t* ___name_7;
	// System.Action`1<SimpleMessage[]> SimChat/SimChatNetwork::outMessageFunk
	Action_1_t2368512252 * ___outMessageFunk_8;
	// System.Boolean SimChat/SimChatNetwork::outputFunction
	bool ___outputFunction_9;
	// System.Action`1<System.String[]> SimChat/SimChatNetwork::receiveSenderNames
	Action_1_t1444185354 * ___receiveSenderNames_10;
	// System.Boolean SimChat/SimChatNetwork::senderFunctionSet
	bool ___senderFunctionSet_11;

public:
	inline static int32_t get_offset_of_latest_3() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___latest_3)); }
	inline int64_t get_latest_3() const { return ___latest_3; }
	inline int64_t* get_address_of_latest_3() { return &___latest_3; }
	inline void set_latest_3(int64_t value)
	{
		___latest_3 = value;
	}

	inline static int32_t get_offset_of_receiveMessages_5() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___receiveMessages_5)); }
	inline SimpleMessageU5BU5D_t2566712870* get_receiveMessages_5() const { return ___receiveMessages_5; }
	inline SimpleMessageU5BU5D_t2566712870** get_address_of_receiveMessages_5() { return &___receiveMessages_5; }
	inline void set_receiveMessages_5(SimpleMessageU5BU5D_t2566712870* value)
	{
		___receiveMessages_5 = value;
		Il2CppCodeGenWriteBarrier(&___receiveMessages_5, value);
	}

	inline static int32_t get_offset_of_mb_6() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___mb_6)); }
	inline MonoBehaviour_t1158329972 * get_mb_6() const { return ___mb_6; }
	inline MonoBehaviour_t1158329972 ** get_address_of_mb_6() { return &___mb_6; }
	inline void set_mb_6(MonoBehaviour_t1158329972 * value)
	{
		___mb_6 = value;
		Il2CppCodeGenWriteBarrier(&___mb_6, value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier(&___name_7, value);
	}

	inline static int32_t get_offset_of_outMessageFunk_8() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___outMessageFunk_8)); }
	inline Action_1_t2368512252 * get_outMessageFunk_8() const { return ___outMessageFunk_8; }
	inline Action_1_t2368512252 ** get_address_of_outMessageFunk_8() { return &___outMessageFunk_8; }
	inline void set_outMessageFunk_8(Action_1_t2368512252 * value)
	{
		___outMessageFunk_8 = value;
		Il2CppCodeGenWriteBarrier(&___outMessageFunk_8, value);
	}

	inline static int32_t get_offset_of_outputFunction_9() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___outputFunction_9)); }
	inline bool get_outputFunction_9() const { return ___outputFunction_9; }
	inline bool* get_address_of_outputFunction_9() { return &___outputFunction_9; }
	inline void set_outputFunction_9(bool value)
	{
		___outputFunction_9 = value;
	}

	inline static int32_t get_offset_of_receiveSenderNames_10() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___receiveSenderNames_10)); }
	inline Action_1_t1444185354 * get_receiveSenderNames_10() const { return ___receiveSenderNames_10; }
	inline Action_1_t1444185354 ** get_address_of_receiveSenderNames_10() { return &___receiveSenderNames_10; }
	inline void set_receiveSenderNames_10(Action_1_t1444185354 * value)
	{
		___receiveSenderNames_10 = value;
		Il2CppCodeGenWriteBarrier(&___receiveSenderNames_10, value);
	}

	inline static int32_t get_offset_of_senderFunctionSet_11() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579, ___senderFunctionSet_11)); }
	inline bool get_senderFunctionSet_11() const { return ___senderFunctionSet_11; }
	inline bool* get_address_of_senderFunctionSet_11() { return &___senderFunctionSet_11; }
	inline void set_senderFunctionSet_11(bool value)
	{
		___senderFunctionSet_11 = value;
	}
};

struct SimChatNetwork_t1737414579_StaticFields
{
public:
	// System.String SimChat/SimChatNetwork::url
	String_t* ___url_0;
	// System.String[] SimChat/SimChatNetwork::splt
	StringU5BU5D_t1642385972* ___splt_1;
	// System.String[] SimChat/SimChatNetwork::senders
	StringU5BU5D_t1642385972* ___senders_2;
	// System.String SimChat/SimChatNetwork::key
	String_t* ___key_4;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579_StaticFields, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_splt_1() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579_StaticFields, ___splt_1)); }
	inline StringU5BU5D_t1642385972* get_splt_1() const { return ___splt_1; }
	inline StringU5BU5D_t1642385972** get_address_of_splt_1() { return &___splt_1; }
	inline void set_splt_1(StringU5BU5D_t1642385972* value)
	{
		___splt_1 = value;
		Il2CppCodeGenWriteBarrier(&___splt_1, value);
	}

	inline static int32_t get_offset_of_senders_2() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579_StaticFields, ___senders_2)); }
	inline StringU5BU5D_t1642385972* get_senders_2() const { return ___senders_2; }
	inline StringU5BU5D_t1642385972** get_address_of_senders_2() { return &___senders_2; }
	inline void set_senders_2(StringU5BU5D_t1642385972* value)
	{
		___senders_2 = value;
		Il2CppCodeGenWriteBarrier(&___senders_2, value);
	}

	inline static int32_t get_offset_of_key_4() { return static_cast<int32_t>(offsetof(SimChatNetwork_t1737414579_StaticFields, ___key_4)); }
	inline String_t* get_key_4() const { return ___key_4; }
	inline String_t** get_address_of_key_4() { return &___key_4; }
	inline void set_key_4(String_t* value)
	{
		___key_4 = value;
		Il2CppCodeGenWriteBarrier(&___key_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
