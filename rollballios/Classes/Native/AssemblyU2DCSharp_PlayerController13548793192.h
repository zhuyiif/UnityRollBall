#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController1
struct  PlayerController1_t3548793192  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 PlayerController1::leftFingerPos
	Vector2_t2243707579  ___leftFingerPos_2;
	// UnityEngine.Vector2 PlayerController1::leftFingerLastPos
	Vector2_t2243707579  ___leftFingerLastPos_3;
	// UnityEngine.Vector2 PlayerController1::leftFingerMovedBy
	Vector2_t2243707579  ___leftFingerMovedBy_4;
	// System.Single PlayerController1::slideMagnitudeX
	float ___slideMagnitudeX_5;
	// System.Single PlayerController1::slideMagnitudeY
	float ___slideMagnitudeY_6;
	// UnityEngine.Rigidbody PlayerController1::rb
	Rigidbody_t4233889191 * ___rb_7;
	// System.Single PlayerController1::speed
	float ___speed_8;
	// System.Single PlayerController1::rotationRate
	float ___rotationRate_9;
	// UnityEngine.UI.Text PlayerController1::countText
	Text_t356221433 * ___countText_10;
	// UnityEngine.UI.Text PlayerController1::winText
	Text_t356221433 * ___winText_11;
	// System.Int32 PlayerController1::count
	int32_t ___count_12;

public:
	inline static int32_t get_offset_of_leftFingerPos_2() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___leftFingerPos_2)); }
	inline Vector2_t2243707579  get_leftFingerPos_2() const { return ___leftFingerPos_2; }
	inline Vector2_t2243707579 * get_address_of_leftFingerPos_2() { return &___leftFingerPos_2; }
	inline void set_leftFingerPos_2(Vector2_t2243707579  value)
	{
		___leftFingerPos_2 = value;
	}

	inline static int32_t get_offset_of_leftFingerLastPos_3() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___leftFingerLastPos_3)); }
	inline Vector2_t2243707579  get_leftFingerLastPos_3() const { return ___leftFingerLastPos_3; }
	inline Vector2_t2243707579 * get_address_of_leftFingerLastPos_3() { return &___leftFingerLastPos_3; }
	inline void set_leftFingerLastPos_3(Vector2_t2243707579  value)
	{
		___leftFingerLastPos_3 = value;
	}

	inline static int32_t get_offset_of_leftFingerMovedBy_4() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___leftFingerMovedBy_4)); }
	inline Vector2_t2243707579  get_leftFingerMovedBy_4() const { return ___leftFingerMovedBy_4; }
	inline Vector2_t2243707579 * get_address_of_leftFingerMovedBy_4() { return &___leftFingerMovedBy_4; }
	inline void set_leftFingerMovedBy_4(Vector2_t2243707579  value)
	{
		___leftFingerMovedBy_4 = value;
	}

	inline static int32_t get_offset_of_slideMagnitudeX_5() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___slideMagnitudeX_5)); }
	inline float get_slideMagnitudeX_5() const { return ___slideMagnitudeX_5; }
	inline float* get_address_of_slideMagnitudeX_5() { return &___slideMagnitudeX_5; }
	inline void set_slideMagnitudeX_5(float value)
	{
		___slideMagnitudeX_5 = value;
	}

	inline static int32_t get_offset_of_slideMagnitudeY_6() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___slideMagnitudeY_6)); }
	inline float get_slideMagnitudeY_6() const { return ___slideMagnitudeY_6; }
	inline float* get_address_of_slideMagnitudeY_6() { return &___slideMagnitudeY_6; }
	inline void set_slideMagnitudeY_6(float value)
	{
		___slideMagnitudeY_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___rb_7)); }
	inline Rigidbody_t4233889191 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t4233889191 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_rotationRate_9() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___rotationRate_9)); }
	inline float get_rotationRate_9() const { return ___rotationRate_9; }
	inline float* get_address_of_rotationRate_9() { return &___rotationRate_9; }
	inline void set_rotationRate_9(float value)
	{
		___rotationRate_9 = value;
	}

	inline static int32_t get_offset_of_countText_10() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___countText_10)); }
	inline Text_t356221433 * get_countText_10() const { return ___countText_10; }
	inline Text_t356221433 ** get_address_of_countText_10() { return &___countText_10; }
	inline void set_countText_10(Text_t356221433 * value)
	{
		___countText_10 = value;
		Il2CppCodeGenWriteBarrier(&___countText_10, value);
	}

	inline static int32_t get_offset_of_winText_11() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___winText_11)); }
	inline Text_t356221433 * get_winText_11() const { return ___winText_11; }
	inline Text_t356221433 ** get_address_of_winText_11() { return &___winText_11; }
	inline void set_winText_11(Text_t356221433 * value)
	{
		___winText_11 = value;
		Il2CppCodeGenWriteBarrier(&___winText_11, value);
	}

	inline static int32_t get_offset_of_count_12() { return static_cast<int32_t>(offsetof(PlayerController1_t3548793192, ___count_12)); }
	inline int32_t get_count_12() const { return ___count_12; }
	inline int32_t* get_address_of_count_12() { return &___count_12; }
	inline void set_count_12(int32_t value)
	{
		___count_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
