#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_CollectionBase1101587467.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions2406697300.h"

// UnityScript.Lang.Array
struct Array_t1396575355;
// System.Collections.CollectionBase
struct CollectionBase_t1101587467;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
extern Il2CppCodeGenString* _stringLiteral372029314;
extern const uint32_t Array_ToString_m1547520517_MetadataUsageId;




// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m2525885291 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m740218359 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t4252133567 * CollectionBase_get_InnerList_m44314156 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern "C"  String_t* Builtins_join_m2036613869 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m1498215565 (Il2CppArray * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m2525885291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m754110913 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = CollectionBase_get_Count_m740218359(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m2367934489 (Array_t1396575355 * __this, Type_t * ___toType0, const MethodInfo* method)
{
	Il2CppArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsArray_m811277129(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppArray * L_4 = Array_ToBuiltin_m3086745688(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Il2CppArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		Il2CppArray * L_2 = VirtFuncInvoker1< Il2CppArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m3097471301 (Array_t1396575355 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m1547520517 (Array_t1396575355 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1547520517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Array_Join_m140080931(__this, _stringLiteral372029314, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2036613869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Il2CppObject * Array_get_Item_m3001262786 (Array_t1396575355 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m1064559095 (Array_t1396575355 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
extern "C"  int32_t Extensions_get_length_m2475420192 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___a0, const MethodInfo* method)
{
	{
		Il2CppArray * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m1498215565(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
