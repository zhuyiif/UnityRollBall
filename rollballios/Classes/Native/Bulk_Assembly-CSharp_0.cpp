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

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Object
struct Il2CppObject;
// PlayerController1
struct PlayerController1_t3548793192;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "AssemblyU2DCSharp_PlayerController4148409433MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController13548793192.h"
#include "AssemblyU2DCSharp_PlayerController13548793192MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Touch407273883MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t PlayerController_Start_m3606284888_MetadataUsageId;
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m3606284888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		__this->set_rb_2(L_0);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern const uint32_t PlayerController_FixedUpdate_m1756102567_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m1756102567 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m1756102567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2638739322((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_4 = __this->get_rb_2();
		Vector3_t2243707580  L_5 = V_2;
		NullCheck(L_4);
		Rigidbody_AddForce_m2836187433(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController1::.ctor()
extern "C"  void PlayerController1__ctor_m1444136245 (PlayerController1_t3548793192 * __this, const MethodInfo* method)
{
	{
		Vector2_t2243707579  L_0 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_leftFingerPos_2(L_0);
		Vector2_t2243707579  L_1 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_leftFingerLastPos_3(L_1);
		Vector2_t2243707579  L_2 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_leftFingerMovedBy_4(L_2);
		__this->set_speed_8((1.0f));
		__this->set_rotationRate_9((3.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController1::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t PlayerController1_Start_m1192420653_MetadataUsageId;
extern "C"  void PlayerController1_Start_m1192420653 (PlayerController1_t3548793192 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController1_Start_m1192420653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		__this->set_rb_7(L_0);
		return;
	}
}
// System.Void PlayerController1::FixedUpdate()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern const uint32_t PlayerController1_FixedUpdate_m952215912_MetadataUsageId;
extern "C"  void PlayerController1_FixedUpdate_m952215912 (PlayerController1_t3548793192 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController1_FixedUpdate_m952215912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2638739322((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_4 = __this->get_rb_7();
		Vector3_t2243707580  L_5 = V_2;
		float L_6 = __this->get_speed_8();
		Vector3_t2243707580  L_7 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_m2836187433(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController1::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3700910530;
extern Il2CppCodeGenString* _stringLiteral2749306226;
extern Il2CppCodeGenString* _stringLiteral385347743;
extern Il2CppCodeGenString* _stringLiteral494135825;
extern Il2CppCodeGenString* _stringLiteral3223019180;
extern Il2CppCodeGenString* _stringLiteral3335956218;
extern const uint32_t PlayerController1_Update_m655462290_MetadataUsageId;
extern "C"  void PlayerController1_Update_m655462290 (PlayerController1_t3548793192 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController1_Update_m655462290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t407273883  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchU5BU5D_t3887265178* V_1 = NULL;
	int32_t V_2 = 0;
	Vector2_t2243707579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2243707579  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2243707579  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2243707579  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		TouchU5BU5D_t3887265178* L_0 = Input_get_touches_m388011594(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0134;
	}

IL_000d:
	{
		TouchU5BU5D_t3887265178* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		V_0 = (*(Touch_t407273883 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))));
		Vector2_t2243707579  L_3 = Touch_get_position_m2079703643((&V_0), /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = L_3;
		Il2CppObject * L_5 = Box(Vector2_t2243707579_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3700910530, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_7 = Touch_get_phase_m196706494((&V_0), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		Vector2_t2243707579  L_8 = Touch_get_position_m2079703643((&V_0), /*hidden argument*/NULL);
		Vector2_t2243707579  L_9 = L_8;
		Il2CppObject * L_10 = Box(Vector2_t2243707579_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2749306226, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_0061:
	{
		int32_t L_12 = Touch_get_phase_m196706494((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral385347743, /*hidden argument*/NULL);
		Vector2_t2243707579  L_13 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = (&V_3)->get_y_1();
		float L_15 = __this->get_rotationRate_9();
		float L_16 = ((float)((float)L_14*(float)L_15));
		Il2CppObject * L_17 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral494135825, L_17, /*hidden argument*/NULL);
		Debug_Log_m920475918(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Vector2_t2243707579  L_19 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20 = (&V_4)->get_x_0();
		float L_21 = __this->get_rotationRate_9();
		float L_22 = ((float)((float)L_20*(float)L_21));
		Il2CppObject * L_23 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3223019180, L_23, /*hidden argument*/NULL);
		Debug_Log_m920475918(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector2_t2243707579  L_25 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26 = (&V_6)->get_y_1();
		float L_27 = __this->get_rotationRate_9();
		Vector2_t2243707579  L_28 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_7 = L_28;
		float L_29 = (&V_7)->get_x_0();
		float L_30 = __this->get_rotationRate_9();
		Vector3__ctor_m2638739322((&V_5), ((float)((float)L_26*(float)L_27)), (0.0f), ((float)((float)L_29*(float)L_30)), /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_31 = __this->get_rb_7();
		Vector3_t2243707580  L_32 = V_5;
		NullCheck(L_31);
		Rigidbody_AddForce_m2836187433(L_31, L_32, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_0119:
	{
		int32_t L_33 = Touch_get_phase_m196706494((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)3))))
		{
			goto IL_0130;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3335956218, /*hidden argument*/NULL);
	}

IL_0130:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_0134:
	{
		int32_t L_35 = V_2;
		TouchU5BU5D_t3887265178* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_36)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
