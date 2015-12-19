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
#include "mscorlib_System_Array1621492670.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AndroidTorch278378516.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AndroidTorch278378516MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "mscorlib_System_Boolean_19515315.h"
#include "mscorlib_System_Single_766435453.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iOSTorch1076593814.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iOSTorch1076593814MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SystemInfo_38097914MethodDeclarations.h"
#include "mscorlib_System_String_756155572MethodDeclarations.h"
#include "mscorlib_System_Char_224738991MethodDeclarations.h"
#include "mscorlib_System_Int321628762099MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String_756155572.h"
#include "mscorlib_System_Int321628762099.h"
#include "mscorlib_System_Char_224738991.h"
#include "UnityEngine_UnityEngine_Debug_388328406MethodDeclarations.h"
#include "mscorlib_System_Object_887538054.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AndroidTorch::.cctor()
extern "C"  void AndroidTorch__cctor_m1709182187_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean AndroidTorch::HasPermission()
extern "C"  bool AndroidTorch_HasPermission_m2070334157_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean AndroidTorch::Get()
extern "C"  bool AndroidTorch_Get_m_2019486054_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (bool)0;
	}
}
// System.Void AndroidTorch::Set(System.Single)
extern "C"  void AndroidTorch_Set_m170475817_0 (Object_t * __this /* static, unused */, float ___level, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidTorch::On(System.Single)
extern "C"  void AndroidTorch_On_m_1536204054_0 (Object_t * __this /* static, unused */, float ___level, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidTorch::Off()
extern "C"  void AndroidTorch_Off_m_610644593_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidTorch::Init()
extern "C"  void AndroidTorch_Init_m_1914337518_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AndroidTorch::Cleanup()
extern "C"  void AndroidTorch_Cleanup_m1878914564_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single AndroidTorch::get_Level()
extern "C"  float AndroidTorch_get_Level_m2145344239_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (0.0f);
	}
}
// System.Void AndroidTorch::set_Level(System.Single)
extern "C"  void AndroidTorch_set_Level_m_493816636_0 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iOSTorch::.cctor()
extern TypeInfo* CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var;
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch__cctor_m677039469_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t_816028754_0* V_0 = {0};
	String_t* V_1 = {0};
	StringU5BU5D_t_816028754_0* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = SystemInfo_get_operatingSystem_m_1756139214_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t_1225802637_0* L_1 = ((CharU5BU5D_t_1225802637_0*)SZArrayNew(CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)32);
		NullCheck(L_0);
		StringU5BU5D_t_816028754_0* L_2 = String_Split_m290179486_0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t_816028754_0* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_004e;
	}

IL_001f:
	{
		StringU5BU5D_t_816028754_0* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6, sizeof(String_t*)));
		String_t* L_7 = V_1;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m_1279625435_0(L_7, 0, /*hidden argument*/NULL);
		V_5 = L_8;
		String_t* L_9 = Char_ToString_m2089191214_0((&V_5), /*hidden argument*/NULL);
		Int32_TryParse_m695344220_0(NULL /*static, unused*/, L_9, (&V_4), /*hidden argument*/NULL);
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_11 = V_4;
		((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0 = L_11;
	}

IL_004a:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_13 = V_3;
		StringU5BU5D_t_816028754_0* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_14)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// System.Void iOSTorch::_Init()
extern "C" {void DEFAULT_CALL _Init();}
extern "C"  void iOSTorch__Init_m_1837244979_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_Init;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_Init'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void iOSTorch::_Cleanup()
extern "C" {void DEFAULT_CALL _Cleanup();}
extern "C"  void iOSTorch__Cleanup_m735240553_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_Cleanup;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_Cleanup'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Boolean iOSTorch::_HasPermission()
extern "C" {int32_t DEFAULT_CALL _HasPermission();}
extern "C"  bool iOSTorch__HasPermission_m1640141098_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_HasPermission;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_HasPermission'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void iOSTorch::_SetTorch(System.Boolean)
extern "C" {void DEFAULT_CALL _SetTorch(int32_t);}
extern "C"  void iOSTorch__SetTorch_m1480377902_0 (Object_t * __this /* static, unused */, bool ___state, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetTorch;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetTorch'"));
		}
	}

	// Marshaling of parameter '___state' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___state);

	// Marshaling cleanup of parameter '___state' native representation

}
// System.Void iOSTorch::_TorchOnWithLevel(System.Single)
extern "C" {void DEFAULT_CALL _TorchOnWithLevel(float);}
extern "C"  void iOSTorch__TorchOnWithLevel_m_1079247349_0 (Object_t * __this /* static, unused */, float ___level, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_TorchOnWithLevel;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_TorchOnWithLevel'"));
		}
	}

	// Marshaling of parameter '___level' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___level);

	// Marshaling cleanup of parameter '___level' native representation

}
// System.Boolean iOSTorch::_GetTorch()
extern "C" {int32_t DEFAULT_CALL _GetTorch();}
extern "C"  bool iOSTorch__GetTorch_m_412066969_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GetTorch;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GetTorch'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Single iOSTorch::_GetTorchLevel()
extern "C" {float DEFAULT_CALL _GetTorchLevel();}
extern "C"  float iOSTorch__GetTorchLevel_m899555567_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_GetTorchLevel;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_GetTorchLevel'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	float _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Boolean iOSTorch::HasPermission()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  bool iOSTorch_HasPermission_m_1626577397_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		bool L_1 = iOSTorch__HasPermission_m1640141098_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Void iOSTorch::Set(System.Boolean)
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_Set_m_2048155657_0 (Object_t * __this /* static, unused */, bool ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = ___state;
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch__SetTorch_m1480377902_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void iOSTorch::Set(System.Single)
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_Set_m_1638480085_0 (Object_t * __this /* static, unused */, float ___level, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___level;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_Off_m413215821_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0015:
	{
		float L_1 = ___level;
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_On_m760747176_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean iOSTorch::Get()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  bool iOSTorch_Get_m_621410472_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		bool L_1 = iOSTorch__GetTorch_m_412066969_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Single iOSTorch::GetLevel()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  float iOSTorch_GetLevel_m_348444770_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)6)))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		float L_1 = iOSTorch__GetTorchLevel_m899555567_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		return (0.0f);
	}
}
// System.Void iOSTorch::On(System.Single)
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t_766435453_0_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t_388328406_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1783968407_0;
extern Il2CppCodeGenString* _stringLiteral_687425528_0;
extern Il2CppCodeGenString* _stringLiteral2048593083_0;
extern "C"  void iOSTorch_On_m760747176_0 (Object_t * __this /* static, unused */, float ___level, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		Single_t_766435453_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Debug_t_388328406_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(826);
		_stringLiteral1783968407_0 = il2cpp_codegen_string_literal_from_index(2769);
		_stringLiteral_687425528_0 = il2cpp_codegen_string_literal_from_index(2770);
		_stringLiteral2048593083_0 = il2cpp_codegen_string_literal_from_index(2771);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)6)))
		{
			goto IL_0073;
		}
	}
	{
		float L_1 = ___level;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		float L_2 = ___level;
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t_766435453_0_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m_1485633153_0(NULL /*static, unused*/, _stringLiteral1783968407_0, L_4, _stringLiteral_687425528_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t_388328406_0_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628_0(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___level = (0.001f);
		goto IL_0068;
	}

IL_003c:
	{
		float L_6 = ___level;
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		float L_7 = ___level;
		float L_8 = L_7;
		Object_t * L_9 = Box(Single_t_766435453_0_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m_1485633153_0(NULL /*static, unused*/, _stringLiteral1783968407_0, L_9, _stringLiteral2048593083_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t_388328406_0_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628_0(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		___level = (1.0f);
	}

IL_0068:
	{
		float L_11 = ___level;
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch__TorchOnWithLevel_m_1079247349_0(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_12 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_12) < ((int32_t)4)))
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_Set_m_2048155657_0(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
	}

IL_0084:
	{
		return;
	}
}
// System.Void iOSTorch::Off()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_Off_m413215821_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_Set_m_2048155657_0(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iOSTorch::Init()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_Init_m_239435756_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch__Init_m_1837244979_0(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Void iOSTorch::Cleanup()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_Cleanup_m_52738622_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((iOSTorch_t1076593814_0_StaticFields*)iOSTorch_t1076593814_0_il2cpp_TypeInfo_var->static_fields)->___iOSVersion_0;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch__Cleanup_m735240553_0(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean iOSTorch::get_CurrentState()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  bool iOSTorch_get_CurrentState_m_2116773183_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		bool L_0 = iOSTorch_Get_m_621410472_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void iOSTorch::set_CurrentState(System.Boolean)
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_set_CurrentState_m_10162608_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_Set_m_2048155657_0(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single iOSTorch::get_Level()
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  float iOSTorch_get_Level_m_2014991059_0 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		float L_0 = iOSTorch_GetLevel_m_348444770_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void iOSTorch::set_Level(System.Single)
extern TypeInfo* iOSTorch_t1076593814_0_il2cpp_TypeInfo_var;
extern "C"  void iOSTorch_set_Level_m_842108602_0 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iOSTorch_t1076593814_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(iOSTorch_t1076593814_0_il2cpp_TypeInfo_var);
		iOSTorch_On_m760747176_0(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
