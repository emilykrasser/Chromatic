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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t2597455733;
// System.String
struct String_t;
// Chromatic.InteractableObject
struct InteractableObject_t3462999176;
// DialogueController
struct DialogueController_t636671547;
// PressSomethingController
struct PressSomethingController_t2288251899;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t3872604895;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2541822629;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t496632877;
// GameManager
struct GameManager_t1536523654;
// UnityEngine.UI.Image
struct Image_t2670269651;
// NPCLines
struct NPCLines_t3086426555;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// Chromatic.Inventory
struct Inventory_t1829814915;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4087348596;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object>
struct Dictionary_2_t416264252;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t2205555946;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t3982445645;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// TimeCapsuleScript
struct TimeCapsuleScript_t4202324678;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CROSSPLATFORMINPUTMANAGER_T191731427_H
#define CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t191731427  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t191731427_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t2597455733 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t2597455733 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t2597455733 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t2597455733 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t2597455733 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t2597455733 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___activeInput_0), value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t2597455733 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t2597455733 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t2597455733 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TouchInput_1), value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t2597455733 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t2597455733 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t2597455733 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_HardwareInput_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifndef RAYHITCOMPARER_T2205555946_H
#define RAYHITCOMPARER_T2205555946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct  RayHitComparer_t2205555946  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYHITCOMPARER_T2205555946_H
#ifndef VIRTUALAXIS_T4087348596_H
#define VIRTUALAXIS_T4087348596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t4087348596  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T4087348596_H
#ifndef VIRTUALBUTTON_T2756566330_H
#define VIRTUALBUTTON_T2756566330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t2756566330  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T2756566330_H
#ifndef U3CCHECKHOLDU3EC__ITERATOR0_T2116908788_H
#define U3CCHECKHOLDU3EC__ITERATOR0_T2116908788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortHoleController/<CheckHold>c__Iterator0
struct  U3CCheckHoldU3Ec__Iterator0_t2116908788  : public RuntimeObject
{
public:
	// System.Object PortHoleController/<CheckHold>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean PortHoleController/<CheckHold>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 PortHoleController/<CheckHold>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CCheckHoldU3Ec__Iterator0_t2116908788, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CCheckHoldU3Ec__Iterator0_t2116908788, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CCheckHoldU3Ec__Iterator0_t2116908788, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCHECKHOLDU3EC__ITERATOR0_T2116908788_H
#ifndef U3CWAITFORPOPUPU3EC__ITERATOR0_T4064588412_H
#define U3CWAITFORPOPUPU3EC__ITERATOR0_T4064588412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.InteractableObject/<WaitForPopup>c__Iterator0
struct  U3CWaitForPopupU3Ec__Iterator0_t4064588412  : public RuntimeObject
{
public:
	// Chromatic.InteractableObject Chromatic.InteractableObject/<WaitForPopup>c__Iterator0::$this
	InteractableObject_t3462999176 * ___U24this_0;
	// System.Object Chromatic.InteractableObject/<WaitForPopup>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Chromatic.InteractableObject/<WaitForPopup>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Chromatic.InteractableObject/<WaitForPopup>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CWaitForPopupU3Ec__Iterator0_t4064588412, ___U24this_0)); }
	inline InteractableObject_t3462999176 * get_U24this_0() const { return ___U24this_0; }
	inline InteractableObject_t3462999176 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(InteractableObject_t3462999176 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitForPopupU3Ec__Iterator0_t4064588412, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitForPopupU3Ec__Iterator0_t4064588412, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitForPopupU3Ec__Iterator0_t4064588412, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORPOPUPU3EC__ITERATOR0_T4064588412_H
#ifndef U3CSHOWTEXTU3EC__ITERATOR0_T187290259_H
#define U3CSHOWTEXTU3EC__ITERATOR0_T187290259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueController/<ShowText>c__Iterator0
struct  U3CShowTextU3Ec__Iterator0_t187290259  : public RuntimeObject
{
public:
	// System.Int32 DialogueController/<ShowText>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// DialogueController DialogueController/<ShowText>c__Iterator0::$this
	DialogueController_t636671547 * ___U24this_1;
	// System.Object DialogueController/<ShowText>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean DialogueController/<ShowText>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 DialogueController/<ShowText>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ec__Iterator0_t187290259, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ec__Iterator0_t187290259, ___U24this_1)); }
	inline DialogueController_t636671547 * get_U24this_1() const { return ___U24this_1; }
	inline DialogueController_t636671547 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DialogueController_t636671547 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ec__Iterator0_t187290259, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ec__Iterator0_t187290259, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ec__Iterator0_t187290259, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWTEXTU3EC__ITERATOR0_T187290259_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CWAITFORANIMATIONU3EC__ITERATOR0_T1816432686_H
#define U3CWAITFORANIMATIONU3EC__ITERATOR0_T1816432686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PressSomethingController/<WaitForAnimation>c__Iterator0
struct  U3CWaitForAnimationU3Ec__Iterator0_t1816432686  : public RuntimeObject
{
public:
	// PressSomethingController PressSomethingController/<WaitForAnimation>c__Iterator0::$this
	PressSomethingController_t2288251899 * ___U24this_0;
	// System.Object PressSomethingController/<WaitForAnimation>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean PressSomethingController/<WaitForAnimation>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 PressSomethingController/<WaitForAnimation>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CWaitForAnimationU3Ec__Iterator0_t1816432686, ___U24this_0)); }
	inline PressSomethingController_t2288251899 * get_U24this_0() const { return ___U24this_0; }
	inline PressSomethingController_t2288251899 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(PressSomethingController_t2288251899 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CWaitForAnimationU3Ec__Iterator0_t1816432686, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CWaitForAnimationU3Ec__Iterator0_t1816432686, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CWaitForAnimationU3Ec__Iterator0_t1816432686, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORANIMATIONU3EC__ITERATOR0_T1816432686_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef AXISOPTION_T1372819835_H
#define AXISOPTION_T1372819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct  AxisOption_t1372819835 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t1372819835, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T1372819835_H
#ifndef MAPPINGTYPE_T2039944511_H
#define MAPPINGTYPE_T2039944511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct  MappingType_t2039944511 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2039944511, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPPINGTYPE_T2039944511_H
#ifndef AXISOPTIONS_T3101732129_H
#define AXISOPTIONS_T3101732129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct  AxisOptions_t3101732129 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOptions_t3101732129, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTIONS_T3101732129_H
#ifndef CONTROLSTYLE_T1372986211_H
#define CONTROLSTYLE_T1372986211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct  ControlStyle_t1372986211 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t1372986211, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLSTYLE_T1372986211_H
#ifndef UPDATETYPE_T2449601881_H
#define UPDATETYPE_T2449601881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
struct  UpdateType_t2449601881 
{
public:
	// System.Int32 UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateType_t2449601881, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T2449601881_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef VIRTUALINPUT_T2597455733_H
#define VIRTUALINPUT_T2597455733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t2597455733  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t3872604895 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t2541822629 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t3319525431 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t3872604895 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t3872604895 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t3872604895 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualAxes_1), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t2541822629 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t2541822629 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t2541822629 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtons_2), value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t3319525431 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t3319525431 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t3319525431 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlwaysUseVirtual_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T2597455733_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef ACTIVEINPUTMETHOD_T139315314_H
#define ACTIVEINPUTMETHOD_T139315314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct  ActiveInputMethod_t139315314 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t139315314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEINPUTMETHOD_T139315314_H
#ifndef AXISOPTION_T3128671669_H
#define AXISOPTION_T3128671669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct  AxisOption_t3128671669 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t3128671669, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T3128671669_H
#ifndef STANDALONEINPUT_T1343950252_H
#define STANDALONEINPUT_T1343950252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1343950252  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1343950252_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef AXISMAPPING_T3982445645_H
#define AXISMAPPING_T3982445645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct  AxisMapping_t3982445645  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISMAPPING_T3982445645_H
#ifndef MOBILEINPUT_T2025745297_H
#define MOBILEINPUT_T2025745297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t2025745297  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T2025745297_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PARALLAXING_T3243452385_H
#define PARALLAXING_T3243452385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Parallaxing
struct  Parallaxing_t3243452385  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform[] Parallaxing::backgrounds
	TransformU5BU5D_t807237628* ___backgrounds_2;
	// System.Single[] Parallaxing::parallaxScales
	SingleU5BU5D_t1444911251* ___parallaxScales_3;
	// System.Single Parallaxing::smoothing
	float ___smoothing_4;
	// UnityEngine.Transform Parallaxing::cam
	Transform_t3600365921 * ___cam_5;
	// UnityEngine.Vector3 Parallaxing::previousCamPos
	Vector3_t3722313464  ___previousCamPos_6;

public:
	inline static int32_t get_offset_of_backgrounds_2() { return static_cast<int32_t>(offsetof(Parallaxing_t3243452385, ___backgrounds_2)); }
	inline TransformU5BU5D_t807237628* get_backgrounds_2() const { return ___backgrounds_2; }
	inline TransformU5BU5D_t807237628** get_address_of_backgrounds_2() { return &___backgrounds_2; }
	inline void set_backgrounds_2(TransformU5BU5D_t807237628* value)
	{
		___backgrounds_2 = value;
		Il2CppCodeGenWriteBarrier((&___backgrounds_2), value);
	}

	inline static int32_t get_offset_of_parallaxScales_3() { return static_cast<int32_t>(offsetof(Parallaxing_t3243452385, ___parallaxScales_3)); }
	inline SingleU5BU5D_t1444911251* get_parallaxScales_3() const { return ___parallaxScales_3; }
	inline SingleU5BU5D_t1444911251** get_address_of_parallaxScales_3() { return &___parallaxScales_3; }
	inline void set_parallaxScales_3(SingleU5BU5D_t1444911251* value)
	{
		___parallaxScales_3 = value;
		Il2CppCodeGenWriteBarrier((&___parallaxScales_3), value);
	}

	inline static int32_t get_offset_of_smoothing_4() { return static_cast<int32_t>(offsetof(Parallaxing_t3243452385, ___smoothing_4)); }
	inline float get_smoothing_4() const { return ___smoothing_4; }
	inline float* get_address_of_smoothing_4() { return &___smoothing_4; }
	inline void set_smoothing_4(float value)
	{
		___smoothing_4 = value;
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(Parallaxing_t3243452385, ___cam_5)); }
	inline Transform_t3600365921 * get_cam_5() const { return ___cam_5; }
	inline Transform_t3600365921 ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(Transform_t3600365921 * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier((&___cam_5), value);
	}

	inline static int32_t get_offset_of_previousCamPos_6() { return static_cast<int32_t>(offsetof(Parallaxing_t3243452385, ___previousCamPos_6)); }
	inline Vector3_t3722313464  get_previousCamPos_6() const { return ___previousCamPos_6; }
	inline Vector3_t3722313464 * get_address_of_previousCamPos_6() { return &___previousCamPos_6; }
	inline void set_previousCamPos_6(Vector3_t3722313464  value)
	{
		___previousCamPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARALLAXING_T3243452385_H
#ifndef NPCLINES_T3086426555_H
#define NPCLINES_T3086426555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NPCLines
struct  NPCLines_t3086426555  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> NPCLines::characterLines
	List_1_t496632877 * ___characterLines_2;
	// System.Int32 NPCLines::interaction
	int32_t ___interaction_3;
	// System.Int32 NPCLines::line
	int32_t ___line_4;
	// System.Int32 NPCLines::numInteractions
	int32_t ___numInteractions_5;

public:
	inline static int32_t get_offset_of_characterLines_2() { return static_cast<int32_t>(offsetof(NPCLines_t3086426555, ___characterLines_2)); }
	inline List_1_t496632877 * get_characterLines_2() const { return ___characterLines_2; }
	inline List_1_t496632877 ** get_address_of_characterLines_2() { return &___characterLines_2; }
	inline void set_characterLines_2(List_1_t496632877 * value)
	{
		___characterLines_2 = value;
		Il2CppCodeGenWriteBarrier((&___characterLines_2), value);
	}

	inline static int32_t get_offset_of_interaction_3() { return static_cast<int32_t>(offsetof(NPCLines_t3086426555, ___interaction_3)); }
	inline int32_t get_interaction_3() const { return ___interaction_3; }
	inline int32_t* get_address_of_interaction_3() { return &___interaction_3; }
	inline void set_interaction_3(int32_t value)
	{
		___interaction_3 = value;
	}

	inline static int32_t get_offset_of_line_4() { return static_cast<int32_t>(offsetof(NPCLines_t3086426555, ___line_4)); }
	inline int32_t get_line_4() const { return ___line_4; }
	inline int32_t* get_address_of_line_4() { return &___line_4; }
	inline void set_line_4(int32_t value)
	{
		___line_4 = value;
	}

	inline static int32_t get_offset_of_numInteractions_5() { return static_cast<int32_t>(offsetof(NPCLines_t3086426555, ___numInteractions_5)); }
	inline int32_t get_numInteractions_5() const { return ___numInteractions_5; }
	inline int32_t* get_address_of_numInteractions_5() { return &___numInteractions_5; }
	inline void set_numInteractions_5(int32_t value)
	{
		___numInteractions_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NPCLINES_T3086426555_H
#ifndef YELLOWPUZZLECONTROLLER_T1410758895_H
#define YELLOWPUZZLECONTROLLER_T1410758895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YellowPuzzleController
struct  YellowPuzzleController_t1410758895  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YELLOWPUZZLECONTROLLER_T1410758895_H
#ifndef NPCCONTROLLER_T4025312893_H
#define NPCCONTROLLER_T4025312893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NPCController
struct  NPCController_t4025312893  : public MonoBehaviour_t3962482529
{
public:
	// GameManager NPCController::gameManager
	GameManager_t1536523654 * ___gameManager_2;
	// System.String NPCController::nPCName
	String_t* ___nPCName_3;
	// UnityEngine.UI.Image NPCController::nPCImage
	Image_t2670269651 * ___nPCImage_4;
	// NPCLines NPCController::nPCLines
	NPCLines_t3086426555 * ___nPCLines_5;
	// System.Boolean NPCController::enteredTrigger
	bool ___enteredTrigger_6;
	// System.Boolean NPCController::poppedUp
	bool ___poppedUp_7;
	// System.Boolean NPCController::PressYes
	bool ___PressYes_8;
	// System.Boolean NPCController::defaultLines
	bool ___defaultLines_9;
	// System.Boolean NPCController::moveToNextInteraction
	bool ___moveToNextInteraction_10;
	// System.String NPCController::popupMessage
	String_t* ___popupMessage_11;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___gameManager_2)); }
	inline GameManager_t1536523654 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t1536523654 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_2), value);
	}

	inline static int32_t get_offset_of_nPCName_3() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___nPCName_3)); }
	inline String_t* get_nPCName_3() const { return ___nPCName_3; }
	inline String_t** get_address_of_nPCName_3() { return &___nPCName_3; }
	inline void set_nPCName_3(String_t* value)
	{
		___nPCName_3 = value;
		Il2CppCodeGenWriteBarrier((&___nPCName_3), value);
	}

	inline static int32_t get_offset_of_nPCImage_4() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___nPCImage_4)); }
	inline Image_t2670269651 * get_nPCImage_4() const { return ___nPCImage_4; }
	inline Image_t2670269651 ** get_address_of_nPCImage_4() { return &___nPCImage_4; }
	inline void set_nPCImage_4(Image_t2670269651 * value)
	{
		___nPCImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___nPCImage_4), value);
	}

	inline static int32_t get_offset_of_nPCLines_5() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___nPCLines_5)); }
	inline NPCLines_t3086426555 * get_nPCLines_5() const { return ___nPCLines_5; }
	inline NPCLines_t3086426555 ** get_address_of_nPCLines_5() { return &___nPCLines_5; }
	inline void set_nPCLines_5(NPCLines_t3086426555 * value)
	{
		___nPCLines_5 = value;
		Il2CppCodeGenWriteBarrier((&___nPCLines_5), value);
	}

	inline static int32_t get_offset_of_enteredTrigger_6() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___enteredTrigger_6)); }
	inline bool get_enteredTrigger_6() const { return ___enteredTrigger_6; }
	inline bool* get_address_of_enteredTrigger_6() { return &___enteredTrigger_6; }
	inline void set_enteredTrigger_6(bool value)
	{
		___enteredTrigger_6 = value;
	}

	inline static int32_t get_offset_of_poppedUp_7() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___poppedUp_7)); }
	inline bool get_poppedUp_7() const { return ___poppedUp_7; }
	inline bool* get_address_of_poppedUp_7() { return &___poppedUp_7; }
	inline void set_poppedUp_7(bool value)
	{
		___poppedUp_7 = value;
	}

	inline static int32_t get_offset_of_PressYes_8() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___PressYes_8)); }
	inline bool get_PressYes_8() const { return ___PressYes_8; }
	inline bool* get_address_of_PressYes_8() { return &___PressYes_8; }
	inline void set_PressYes_8(bool value)
	{
		___PressYes_8 = value;
	}

	inline static int32_t get_offset_of_defaultLines_9() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___defaultLines_9)); }
	inline bool get_defaultLines_9() const { return ___defaultLines_9; }
	inline bool* get_address_of_defaultLines_9() { return &___defaultLines_9; }
	inline void set_defaultLines_9(bool value)
	{
		___defaultLines_9 = value;
	}

	inline static int32_t get_offset_of_moveToNextInteraction_10() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___moveToNextInteraction_10)); }
	inline bool get_moveToNextInteraction_10() const { return ___moveToNextInteraction_10; }
	inline bool* get_address_of_moveToNextInteraction_10() { return &___moveToNextInteraction_10; }
	inline void set_moveToNextInteraction_10(bool value)
	{
		___moveToNextInteraction_10 = value;
	}

	inline static int32_t get_offset_of_popupMessage_11() { return static_cast<int32_t>(offsetof(NPCController_t4025312893, ___popupMessage_11)); }
	inline String_t* get_popupMessage_11() const { return ___popupMessage_11; }
	inline String_t** get_address_of_popupMessage_11() { return &___popupMessage_11; }
	inline void set_popupMessage_11(String_t* value)
	{
		___popupMessage_11 = value;
		Il2CppCodeGenWriteBarrier((&___popupMessage_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NPCCONTROLLER_T4025312893_H
#ifndef ABSTRACTTARGETFOLLOWER_T1919708159_H
#define ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct  AbstractTargetFollower_t1919708159  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_t3600365921 * ___m_Target_2;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_3;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t3916780224 * ___targetRigidbody_5;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_Target_2)); }
	inline Transform_t3600365921 * get_m_Target_2() const { return ___m_Target_2; }
	inline Transform_t3600365921 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Transform_t3600365921 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_2), value);
	}

	inline static int32_t get_offset_of_m_AutoTargetPlayer_3() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_AutoTargetPlayer_3)); }
	inline bool get_m_AutoTargetPlayer_3() const { return ___m_AutoTargetPlayer_3; }
	inline bool* get_address_of_m_AutoTargetPlayer_3() { return &___m_AutoTargetPlayer_3; }
	inline void set_m_AutoTargetPlayer_3(bool value)
	{
		___m_AutoTargetPlayer_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_4() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_UpdateType_4)); }
	inline int32_t get_m_UpdateType_4() const { return ___m_UpdateType_4; }
	inline int32_t* get_address_of_m_UpdateType_4() { return &___m_UpdateType_4; }
	inline void set_m_UpdateType_4(int32_t value)
	{
		___m_UpdateType_4 = value;
	}

	inline static int32_t get_offset_of_targetRigidbody_5() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___targetRigidbody_5)); }
	inline Rigidbody_t3916780224 * get_targetRigidbody_5() const { return ___targetRigidbody_5; }
	inline Rigidbody_t3916780224 ** get_address_of_targetRigidbody_5() { return &___targetRigidbody_5; }
	inline void set_targetRigidbody_5(Rigidbody_t3916780224 * value)
	{
		___targetRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((&___targetRigidbody_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifndef PLAYERCONTROLLER_T3050511953_H
#define PLAYERCONTROLLER_T3050511953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.PlayerController
struct  PlayerController_t3050511953  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Chromatic.PlayerController::rigidbody
	Rigidbody2D_t939494601 * ___rigidbody_2;
	// Chromatic.Inventory Chromatic.PlayerController::inventory
	Inventory_t1829814915 * ___inventory_3;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(PlayerController_t3050511953, ___rigidbody_2)); }
	inline Rigidbody2D_t939494601 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody2D_t939494601 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody2D_t939494601 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___rigidbody_2), value);
	}

	inline static int32_t get_offset_of_inventory_3() { return static_cast<int32_t>(offsetof(PlayerController_t3050511953, ___inventory_3)); }
	inline Inventory_t1829814915 * get_inventory_3() const { return ___inventory_3; }
	inline Inventory_t1829814915 ** get_address_of_inventory_3() { return &___inventory_3; }
	inline void set_inventory_3(Inventory_t1829814915 * value)
	{
		___inventory_3 = value;
		Il2CppCodeGenWriteBarrier((&___inventory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T3050511953_H
#ifndef BLUEPUZZLECONTROLLER_T3681843975_H
#define BLUEPUZZLECONTROLLER_T3681843975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BluePuzzleController
struct  BluePuzzleController_t3681843975  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean BluePuzzleController::aquiredRecord
	bool ___aquiredRecord_2;
	// System.Boolean BluePuzzleController::playedRecord
	bool ___playedRecord_3;
	// System.Boolean BluePuzzleController::finishedPuzzle
	bool ___finishedPuzzle_4;

public:
	inline static int32_t get_offset_of_aquiredRecord_2() { return static_cast<int32_t>(offsetof(BluePuzzleController_t3681843975, ___aquiredRecord_2)); }
	inline bool get_aquiredRecord_2() const { return ___aquiredRecord_2; }
	inline bool* get_address_of_aquiredRecord_2() { return &___aquiredRecord_2; }
	inline void set_aquiredRecord_2(bool value)
	{
		___aquiredRecord_2 = value;
	}

	inline static int32_t get_offset_of_playedRecord_3() { return static_cast<int32_t>(offsetof(BluePuzzleController_t3681843975, ___playedRecord_3)); }
	inline bool get_playedRecord_3() const { return ___playedRecord_3; }
	inline bool* get_address_of_playedRecord_3() { return &___playedRecord_3; }
	inline void set_playedRecord_3(bool value)
	{
		___playedRecord_3 = value;
	}

	inline static int32_t get_offset_of_finishedPuzzle_4() { return static_cast<int32_t>(offsetof(BluePuzzleController_t3681843975, ___finishedPuzzle_4)); }
	inline bool get_finishedPuzzle_4() const { return ___finishedPuzzle_4; }
	inline bool* get_address_of_finishedPuzzle_4() { return &___finishedPuzzle_4; }
	inline void set_finishedPuzzle_4(bool value)
	{
		___finishedPuzzle_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLUEPUZZLECONTROLLER_T3681843975_H
#ifndef RECORDCOLLECTIBLE_T2250805697_H
#define RECORDCOLLECTIBLE_T2250805697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.RecordCollectible
struct  RecordCollectible_t2250805697  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Chromatic.RecordCollectible::inTrigger
	bool ___inTrigger_2;
	// UnityEngine.Collider2D Chromatic.RecordCollectible::playerCollider
	Collider2D_t2806799626 * ___playerCollider_3;
	// UnityEngine.GameObject Chromatic.RecordCollectible::completedRecord
	GameObject_t1113636619 * ___completedRecord_4;
	// System.Boolean Chromatic.RecordCollectible::isActive
	bool ___isActive_5;
	// UnityEngine.Transform Chromatic.RecordCollectible::transform
	Transform_t3600365921 * ___transform_6;
	// System.Single Chromatic.RecordCollectible::displacement
	float ___displacement_7;
	// System.Single Chromatic.RecordCollectible::upperLimit
	float ___upperLimit_8;
	// System.Single Chromatic.RecordCollectible::lowerLimit
	float ___lowerLimit_9;

public:
	inline static int32_t get_offset_of_inTrigger_2() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___inTrigger_2)); }
	inline bool get_inTrigger_2() const { return ___inTrigger_2; }
	inline bool* get_address_of_inTrigger_2() { return &___inTrigger_2; }
	inline void set_inTrigger_2(bool value)
	{
		___inTrigger_2 = value;
	}

	inline static int32_t get_offset_of_playerCollider_3() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___playerCollider_3)); }
	inline Collider2D_t2806799626 * get_playerCollider_3() const { return ___playerCollider_3; }
	inline Collider2D_t2806799626 ** get_address_of_playerCollider_3() { return &___playerCollider_3; }
	inline void set_playerCollider_3(Collider2D_t2806799626 * value)
	{
		___playerCollider_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerCollider_3), value);
	}

	inline static int32_t get_offset_of_completedRecord_4() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___completedRecord_4)); }
	inline GameObject_t1113636619 * get_completedRecord_4() const { return ___completedRecord_4; }
	inline GameObject_t1113636619 ** get_address_of_completedRecord_4() { return &___completedRecord_4; }
	inline void set_completedRecord_4(GameObject_t1113636619 * value)
	{
		___completedRecord_4 = value;
		Il2CppCodeGenWriteBarrier((&___completedRecord_4), value);
	}

	inline static int32_t get_offset_of_isActive_5() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___isActive_5)); }
	inline bool get_isActive_5() const { return ___isActive_5; }
	inline bool* get_address_of_isActive_5() { return &___isActive_5; }
	inline void set_isActive_5(bool value)
	{
		___isActive_5 = value;
	}

	inline static int32_t get_offset_of_transform_6() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___transform_6)); }
	inline Transform_t3600365921 * get_transform_6() const { return ___transform_6; }
	inline Transform_t3600365921 ** get_address_of_transform_6() { return &___transform_6; }
	inline void set_transform_6(Transform_t3600365921 * value)
	{
		___transform_6 = value;
		Il2CppCodeGenWriteBarrier((&___transform_6), value);
	}

	inline static int32_t get_offset_of_displacement_7() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___displacement_7)); }
	inline float get_displacement_7() const { return ___displacement_7; }
	inline float* get_address_of_displacement_7() { return &___displacement_7; }
	inline void set_displacement_7(float value)
	{
		___displacement_7 = value;
	}

	inline static int32_t get_offset_of_upperLimit_8() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___upperLimit_8)); }
	inline float get_upperLimit_8() const { return ___upperLimit_8; }
	inline float* get_address_of_upperLimit_8() { return &___upperLimit_8; }
	inline void set_upperLimit_8(float value)
	{
		___upperLimit_8 = value;
	}

	inline static int32_t get_offset_of_lowerLimit_9() { return static_cast<int32_t>(offsetof(RecordCollectible_t2250805697, ___lowerLimit_9)); }
	inline float get_lowerLimit_9() const { return ___lowerLimit_9; }
	inline float* get_address_of_lowerLimit_9() { return &___lowerLimit_9; }
	inline void set_lowerLimit_9(float value)
	{
		___lowerLimit_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCOLLECTIBLE_T2250805697_H
#ifndef TIMECAPSULESCRIPT_T4202324678_H
#define TIMECAPSULESCRIPT_T4202324678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeCapsuleScript
struct  TimeCapsuleScript_t4202324678  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField TimeCapsuleScript::inputField
	InputField_t3762917431 * ___inputField_2;
	// GameManager TimeCapsuleScript::gameManager
	GameManager_t1536523654 * ___gameManager_3;
	// System.String TimeCapsuleScript::nPCName
	String_t* ___nPCName_4;
	// System.Boolean TimeCapsuleScript::finishedPuzzle
	bool ___finishedPuzzle_5;

public:
	inline static int32_t get_offset_of_inputField_2() { return static_cast<int32_t>(offsetof(TimeCapsuleScript_t4202324678, ___inputField_2)); }
	inline InputField_t3762917431 * get_inputField_2() const { return ___inputField_2; }
	inline InputField_t3762917431 ** get_address_of_inputField_2() { return &___inputField_2; }
	inline void set_inputField_2(InputField_t3762917431 * value)
	{
		___inputField_2 = value;
		Il2CppCodeGenWriteBarrier((&___inputField_2), value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(TimeCapsuleScript_t4202324678, ___gameManager_3)); }
	inline GameManager_t1536523654 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameManager_t1536523654 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_3), value);
	}

	inline static int32_t get_offset_of_nPCName_4() { return static_cast<int32_t>(offsetof(TimeCapsuleScript_t4202324678, ___nPCName_4)); }
	inline String_t* get_nPCName_4() const { return ___nPCName_4; }
	inline String_t** get_address_of_nPCName_4() { return &___nPCName_4; }
	inline void set_nPCName_4(String_t* value)
	{
		___nPCName_4 = value;
		Il2CppCodeGenWriteBarrier((&___nPCName_4), value);
	}

	inline static int32_t get_offset_of_finishedPuzzle_5() { return static_cast<int32_t>(offsetof(TimeCapsuleScript_t4202324678, ___finishedPuzzle_5)); }
	inline bool get_finishedPuzzle_5() const { return ___finishedPuzzle_5; }
	inline bool* get_address_of_finishedPuzzle_5() { return &___finishedPuzzle_5; }
	inline void set_finishedPuzzle_5(bool value)
	{
		___finishedPuzzle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMECAPSULESCRIPT_T4202324678_H
#ifndef PORTALCONTROLLER_T3019035344_H
#define PORTALCONTROLLER_T3019035344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortalController
struct  PortalController_t3019035344  : public MonoBehaviour_t3962482529
{
public:
	// GameManager PortalController::gameManager
	GameManager_t1536523654 * ___gameManager_2;
	// System.String PortalController::scenename
	String_t* ___scenename_3;
	// System.Boolean PortalController::PressYes
	bool ___PressYes_4;
	// System.Boolean PortalController::enteredTrigger
	bool ___enteredTrigger_5;
	// System.Boolean PortalController::poppedUp
	bool ___poppedUp_6;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(PortalController_t3019035344, ___gameManager_2)); }
	inline GameManager_t1536523654 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t1536523654 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_2), value);
	}

	inline static int32_t get_offset_of_scenename_3() { return static_cast<int32_t>(offsetof(PortalController_t3019035344, ___scenename_3)); }
	inline String_t* get_scenename_3() const { return ___scenename_3; }
	inline String_t** get_address_of_scenename_3() { return &___scenename_3; }
	inline void set_scenename_3(String_t* value)
	{
		___scenename_3 = value;
		Il2CppCodeGenWriteBarrier((&___scenename_3), value);
	}

	inline static int32_t get_offset_of_PressYes_4() { return static_cast<int32_t>(offsetof(PortalController_t3019035344, ___PressYes_4)); }
	inline bool get_PressYes_4() const { return ___PressYes_4; }
	inline bool* get_address_of_PressYes_4() { return &___PressYes_4; }
	inline void set_PressYes_4(bool value)
	{
		___PressYes_4 = value;
	}

	inline static int32_t get_offset_of_enteredTrigger_5() { return static_cast<int32_t>(offsetof(PortalController_t3019035344, ___enteredTrigger_5)); }
	inline bool get_enteredTrigger_5() const { return ___enteredTrigger_5; }
	inline bool* get_address_of_enteredTrigger_5() { return &___enteredTrigger_5; }
	inline void set_enteredTrigger_5(bool value)
	{
		___enteredTrigger_5 = value;
	}

	inline static int32_t get_offset_of_poppedUp_6() { return static_cast<int32_t>(offsetof(PortalController_t3019035344, ___poppedUp_6)); }
	inline bool get_poppedUp_6() const { return ___poppedUp_6; }
	inline bool* get_address_of_poppedUp_6() { return &___poppedUp_6; }
	inline void set_poppedUp_6(bool value)
	{
		___poppedUp_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PORTALCONTROLLER_T3019035344_H
#ifndef PORTHOLECONTROLLER_T2306779974_H
#define PORTHOLECONTROLLER_T2306779974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortHoleController
struct  PortHoleController_t2306779974  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 PortHoleController::toIndex
	int32_t ___toIndex_2;
	// System.Boolean PortHoleController::PressYes
	bool ___PressYes_3;
	// UnityEngine.GameObject PortHoleController::portHoles
	GameObject_t1113636619 * ___portHoles_4;
	// UnityEngine.GameObject PortHoleController::player
	GameObject_t1113636619 * ___player_5;
	// UnityEngine.GameObject PortHoleController::mainCamera
	GameObject_t1113636619 * ___mainCamera_6;
	// UnityEngine.Transform PortHoleController::toPortHole
	Transform_t3600365921 * ___toPortHole_7;
	// System.Boolean PortHoleController::enteredTrigger
	bool ___enteredTrigger_8;
	// System.Boolean PortHoleController::passethrough
	bool ___passethrough_9;

public:
	inline static int32_t get_offset_of_toIndex_2() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___toIndex_2)); }
	inline int32_t get_toIndex_2() const { return ___toIndex_2; }
	inline int32_t* get_address_of_toIndex_2() { return &___toIndex_2; }
	inline void set_toIndex_2(int32_t value)
	{
		___toIndex_2 = value;
	}

	inline static int32_t get_offset_of_PressYes_3() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___PressYes_3)); }
	inline bool get_PressYes_3() const { return ___PressYes_3; }
	inline bool* get_address_of_PressYes_3() { return &___PressYes_3; }
	inline void set_PressYes_3(bool value)
	{
		___PressYes_3 = value;
	}

	inline static int32_t get_offset_of_portHoles_4() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___portHoles_4)); }
	inline GameObject_t1113636619 * get_portHoles_4() const { return ___portHoles_4; }
	inline GameObject_t1113636619 ** get_address_of_portHoles_4() { return &___portHoles_4; }
	inline void set_portHoles_4(GameObject_t1113636619 * value)
	{
		___portHoles_4 = value;
		Il2CppCodeGenWriteBarrier((&___portHoles_4), value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___player_5)); }
	inline GameObject_t1113636619 * get_player_5() const { return ___player_5; }
	inline GameObject_t1113636619 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1113636619 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((&___player_5), value);
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___mainCamera_6)); }
	inline GameObject_t1113636619 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline GameObject_t1113636619 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(GameObject_t1113636619 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_6), value);
	}

	inline static int32_t get_offset_of_toPortHole_7() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___toPortHole_7)); }
	inline Transform_t3600365921 * get_toPortHole_7() const { return ___toPortHole_7; }
	inline Transform_t3600365921 ** get_address_of_toPortHole_7() { return &___toPortHole_7; }
	inline void set_toPortHole_7(Transform_t3600365921 * value)
	{
		___toPortHole_7 = value;
		Il2CppCodeGenWriteBarrier((&___toPortHole_7), value);
	}

	inline static int32_t get_offset_of_enteredTrigger_8() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___enteredTrigger_8)); }
	inline bool get_enteredTrigger_8() const { return ___enteredTrigger_8; }
	inline bool* get_address_of_enteredTrigger_8() { return &___enteredTrigger_8; }
	inline void set_enteredTrigger_8(bool value)
	{
		___enteredTrigger_8 = value;
	}

	inline static int32_t get_offset_of_passethrough_9() { return static_cast<int32_t>(offsetof(PortHoleController_t2306779974, ___passethrough_9)); }
	inline bool get_passethrough_9() const { return ___passethrough_9; }
	inline bool* get_address_of_passethrough_9() { return &___passethrough_9; }
	inline void set_passethrough_9(bool value)
	{
		___passethrough_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PORTHOLECONTROLLER_T2306779974_H
#ifndef PRESSSOMETHINGCONTROLLER_T2288251899_H
#define PRESSSOMETHINGCONTROLLER_T2288251899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PressSomethingController
struct  PressSomethingController_t2288251899  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PressSomethingController::anim
	Animator_t434523843 * ___anim_2;
	// UnityEngine.SpriteRenderer PressSomethingController::sprite
	SpriteRenderer_t3235626157 * ___sprite_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(PressSomethingController_t2288251899, ___anim_2)); }
	inline Animator_t434523843 * get_anim_2() const { return ___anim_2; }
	inline Animator_t434523843 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t434523843 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}

	inline static int32_t get_offset_of_sprite_3() { return static_cast<int32_t>(offsetof(PressSomethingController_t2288251899, ___sprite_3)); }
	inline SpriteRenderer_t3235626157 * get_sprite_3() const { return ___sprite_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of_sprite_3() { return &___sprite_3; }
	inline void set_sprite_3(SpriteRenderer_t3235626157 * value)
	{
		___sprite_3 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESSSOMETHINGCONTROLLER_T2288251899_H
#ifndef AUDIOMANAGER_T3267510698_H
#define AUDIOMANAGER_T3267510698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3267510698  : public MonoBehaviour_t3962482529
{
public:
	// GameManager AudioManager::gameManager
	GameManager_t1536523654 * ___gameManager_2;
	// System.String AudioManager::prevScene
	String_t* ___prevScene_3;
	// System.String AudioManager::currentScene
	String_t* ___currentScene_4;
	// System.Boolean AudioManager::enabledBlue
	bool ___enabledBlue_5;
	// UnityEngine.Object[] AudioManager::audioClips
	ObjectU5BU5D_t1417781964* ___audioClips_6;
	// UnityEngine.AudioSource AudioManager::audioSource
	AudioSource_t3935305588 * ___audioSource_7;
	// UnityEngine.UI.Slider AudioManager::musicVolume
	Slider_t3903728902 * ___musicVolume_8;
	// UnityEngine.UI.Text AudioManager::musicVolumeLabel
	Text_t1901882714 * ___musicVolumeLabel_9;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___gameManager_2)); }
	inline GameManager_t1536523654 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t1536523654 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_2), value);
	}

	inline static int32_t get_offset_of_prevScene_3() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___prevScene_3)); }
	inline String_t* get_prevScene_3() const { return ___prevScene_3; }
	inline String_t** get_address_of_prevScene_3() { return &___prevScene_3; }
	inline void set_prevScene_3(String_t* value)
	{
		___prevScene_3 = value;
		Il2CppCodeGenWriteBarrier((&___prevScene_3), value);
	}

	inline static int32_t get_offset_of_currentScene_4() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___currentScene_4)); }
	inline String_t* get_currentScene_4() const { return ___currentScene_4; }
	inline String_t** get_address_of_currentScene_4() { return &___currentScene_4; }
	inline void set_currentScene_4(String_t* value)
	{
		___currentScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentScene_4), value);
	}

	inline static int32_t get_offset_of_enabledBlue_5() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___enabledBlue_5)); }
	inline bool get_enabledBlue_5() const { return ___enabledBlue_5; }
	inline bool* get_address_of_enabledBlue_5() { return &___enabledBlue_5; }
	inline void set_enabledBlue_5(bool value)
	{
		___enabledBlue_5 = value;
	}

	inline static int32_t get_offset_of_audioClips_6() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___audioClips_6)); }
	inline ObjectU5BU5D_t1417781964* get_audioClips_6() const { return ___audioClips_6; }
	inline ObjectU5BU5D_t1417781964** get_address_of_audioClips_6() { return &___audioClips_6; }
	inline void set_audioClips_6(ObjectU5BU5D_t1417781964* value)
	{
		___audioClips_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioClips_6), value);
	}

	inline static int32_t get_offset_of_audioSource_7() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___audioSource_7)); }
	inline AudioSource_t3935305588 * get_audioSource_7() const { return ___audioSource_7; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_7() { return &___audioSource_7; }
	inline void set_audioSource_7(AudioSource_t3935305588 * value)
	{
		___audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_7), value);
	}

	inline static int32_t get_offset_of_musicVolume_8() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___musicVolume_8)); }
	inline Slider_t3903728902 * get_musicVolume_8() const { return ___musicVolume_8; }
	inline Slider_t3903728902 ** get_address_of_musicVolume_8() { return &___musicVolume_8; }
	inline void set_musicVolume_8(Slider_t3903728902 * value)
	{
		___musicVolume_8 = value;
		Il2CppCodeGenWriteBarrier((&___musicVolume_8), value);
	}

	inline static int32_t get_offset_of_musicVolumeLabel_9() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___musicVolumeLabel_9)); }
	inline Text_t1901882714 * get_musicVolumeLabel_9() const { return ___musicVolumeLabel_9; }
	inline Text_t1901882714 ** get_address_of_musicVolumeLabel_9() { return &___musicVolumeLabel_9; }
	inline void set_musicVolumeLabel_9(Text_t1901882714 * value)
	{
		___musicVolumeLabel_9 = value;
		Il2CppCodeGenWriteBarrier((&___musicVolumeLabel_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T3267510698_H
#ifndef MAINMENU_T3798339593_H
#define MAINMENU_T3798339593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t3798339593  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MainMenu::main
	GameObject_t1113636619 * ___main_2;
	// UnityEngine.GameObject MainMenu::controls
	GameObject_t1113636619 * ___controls_3;
	// UnityEngine.GameObject MainMenu::settings
	GameObject_t1113636619 * ___settings_4;

public:
	inline static int32_t get_offset_of_main_2() { return static_cast<int32_t>(offsetof(MainMenu_t3798339593, ___main_2)); }
	inline GameObject_t1113636619 * get_main_2() const { return ___main_2; }
	inline GameObject_t1113636619 ** get_address_of_main_2() { return &___main_2; }
	inline void set_main_2(GameObject_t1113636619 * value)
	{
		___main_2 = value;
		Il2CppCodeGenWriteBarrier((&___main_2), value);
	}

	inline static int32_t get_offset_of_controls_3() { return static_cast<int32_t>(offsetof(MainMenu_t3798339593, ___controls_3)); }
	inline GameObject_t1113636619 * get_controls_3() const { return ___controls_3; }
	inline GameObject_t1113636619 ** get_address_of_controls_3() { return &___controls_3; }
	inline void set_controls_3(GameObject_t1113636619 * value)
	{
		___controls_3 = value;
		Il2CppCodeGenWriteBarrier((&___controls_3), value);
	}

	inline static int32_t get_offset_of_settings_4() { return static_cast<int32_t>(offsetof(MainMenu_t3798339593, ___settings_4)); }
	inline GameObject_t1113636619 * get_settings_4() const { return ___settings_4; }
	inline GameObject_t1113636619 ** get_address_of_settings_4() { return &___settings_4; }
	inline void set_settings_4(GameObject_t1113636619 * value)
	{
		___settings_4 = value;
		Il2CppCodeGenWriteBarrier((&___settings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINMENU_T3798339593_H
#ifndef TOUCHPAD_T539039257_H
#define TOUCHPAD_T539039257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t539039257  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t3722313464  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2156229523  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t3722313464  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2156229523  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t3722313464  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t2670269651 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_StartPos_8)); }
	inline Vector3_t3722313464  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t3722313464  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousDelta_9)); }
	inline Vector2_t2156229523  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2156229523  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_JoytickOutput_10)); }
	inline Vector3_t3722313464  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t3722313464 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t3722313464  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_14), value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2156229523  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2156229523  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Center_18)); }
	inline Vector3_t3722313464  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t3722313464 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t3722313464  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Image_19)); }
	inline Image_t2670269651 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t2670269651 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t2670269651 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T539039257_H
#ifndef CAMERASHADER_T903615415_H
#define CAMERASHADER_T903615415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraShader
struct  CameraShader_t903615415  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASHADER_T903615415_H
#ifndef INTERACTABLEOBJECT_T3462999176_H
#define INTERACTABLEOBJECT_T3462999176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.InteractableObject
struct  InteractableObject_t3462999176  : public MonoBehaviour_t3962482529
{
public:
	// GameManager Chromatic.InteractableObject::gameManager
	GameManager_t1536523654 * ___gameManager_2;
	// Chromatic.Inventory Chromatic.InteractableObject::inventory
	Inventory_t1829814915 * ___inventory_3;
	// System.Boolean Chromatic.InteractableObject::enteredTrigger
	bool ___enteredTrigger_4;
	// System.Boolean Chromatic.InteractableObject::poppedUp
	bool ___poppedUp_5;
	// System.Boolean Chromatic.InteractableObject::PressYes
	bool ___PressYes_6;
	// System.String Chromatic.InteractableObject::popupMessage
	String_t* ___popupMessage_7;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___gameManager_2)); }
	inline GameManager_t1536523654 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t1536523654 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_2), value);
	}

	inline static int32_t get_offset_of_inventory_3() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___inventory_3)); }
	inline Inventory_t1829814915 * get_inventory_3() const { return ___inventory_3; }
	inline Inventory_t1829814915 ** get_address_of_inventory_3() { return &___inventory_3; }
	inline void set_inventory_3(Inventory_t1829814915 * value)
	{
		___inventory_3 = value;
		Il2CppCodeGenWriteBarrier((&___inventory_3), value);
	}

	inline static int32_t get_offset_of_enteredTrigger_4() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___enteredTrigger_4)); }
	inline bool get_enteredTrigger_4() const { return ___enteredTrigger_4; }
	inline bool* get_address_of_enteredTrigger_4() { return &___enteredTrigger_4; }
	inline void set_enteredTrigger_4(bool value)
	{
		___enteredTrigger_4 = value;
	}

	inline static int32_t get_offset_of_poppedUp_5() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___poppedUp_5)); }
	inline bool get_poppedUp_5() const { return ___poppedUp_5; }
	inline bool* get_address_of_poppedUp_5() { return &___poppedUp_5; }
	inline void set_poppedUp_5(bool value)
	{
		___poppedUp_5 = value;
	}

	inline static int32_t get_offset_of_PressYes_6() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___PressYes_6)); }
	inline bool get_PressYes_6() const { return ___PressYes_6; }
	inline bool* get_address_of_PressYes_6() { return &___PressYes_6; }
	inline void set_PressYes_6(bool value)
	{
		___PressYes_6 = value;
	}

	inline static int32_t get_offset_of_popupMessage_7() { return static_cast<int32_t>(offsetof(InteractableObject_t3462999176, ___popupMessage_7)); }
	inline String_t* get_popupMessage_7() const { return ___popupMessage_7; }
	inline String_t** get_address_of_popupMessage_7() { return &___popupMessage_7; }
	inline void set_popupMessage_7(String_t* value)
	{
		___popupMessage_7 = value;
		Il2CppCodeGenWriteBarrier((&___popupMessage_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTABLEOBJECT_T3462999176_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object> GameManager::nPCSprites_Gray
	Dictionary_2_t416264252 * ___nPCSprites_Gray_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object> GameManager::nPCSprites_Blue
	Dictionary_2_t416264252 * ___nPCSprites_Blue_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object> GameManager::nPCSprites_BlueRed
	Dictionary_2_t416264252 * ___nPCSprites_BlueRed_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Object> GameManager::nPCSprites_FullColor
	Dictionary_2_t416264252 * ___nPCSprites_FullColor_5;
	// UnityEngine.Camera GameManager::mainCamera
	Camera_t4157153871 * ___mainCamera_6;
	// UnityEngine.GameObject GameManager::objectInterationPanel
	GameObject_t1113636619 * ___objectInterationPanel_7;
	// UnityEngine.GameObject GameManager::nPCInteractionPanel
	GameObject_t1113636619 * ___nPCInteractionPanel_8;
	// UnityEngine.GameObject GameManager::timeCapsuleInteractionPanel
	GameObject_t1113636619 * ___timeCapsuleInteractionPanel_9;
	// UnityEngine.UI.Text GameManager::objectInteratPopUpText
	Text_t1901882714 * ___objectInteratPopUpText_10;
	// UnityEngine.UI.Text GameManager::nPCInteractionText
	Text_t1901882714 * ___nPCInteractionText_11;
	// System.Boolean GameManager::objectInteractionVisible
	bool ___objectInteractionVisible_12;
	// System.Boolean GameManager::nPCInteractionVisible
	bool ___nPCInteractionVisible_13;
	// System.Boolean GameManager::controls
	bool ___controls_14;
	// System.Boolean GameManager::gameEnd
	bool ___gameEnd_15;
	// Chromatic.Inventory GameManager::inventory
	Inventory_t1829814915 * ___inventory_16;
	// System.Boolean GameManager::showBlue
	bool ___showBlue_18;
	// System.Boolean GameManager::showRed
	bool ___showRed_19;
	// System.Boolean GameManager::showYellow
	bool ___showYellow_20;
	// System.Boolean GameManager::showGray
	bool ___showGray_21;
	// UnityEngine.GameObject GameManager::portalNext
	GameObject_t1113636619 * ___portalNext_22;

public:
	inline static int32_t get_offset_of_nPCSprites_Gray_2() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCSprites_Gray_2)); }
	inline Dictionary_2_t416264252 * get_nPCSprites_Gray_2() const { return ___nPCSprites_Gray_2; }
	inline Dictionary_2_t416264252 ** get_address_of_nPCSprites_Gray_2() { return &___nPCSprites_Gray_2; }
	inline void set_nPCSprites_Gray_2(Dictionary_2_t416264252 * value)
	{
		___nPCSprites_Gray_2 = value;
		Il2CppCodeGenWriteBarrier((&___nPCSprites_Gray_2), value);
	}

	inline static int32_t get_offset_of_nPCSprites_Blue_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCSprites_Blue_3)); }
	inline Dictionary_2_t416264252 * get_nPCSprites_Blue_3() const { return ___nPCSprites_Blue_3; }
	inline Dictionary_2_t416264252 ** get_address_of_nPCSprites_Blue_3() { return &___nPCSprites_Blue_3; }
	inline void set_nPCSprites_Blue_3(Dictionary_2_t416264252 * value)
	{
		___nPCSprites_Blue_3 = value;
		Il2CppCodeGenWriteBarrier((&___nPCSprites_Blue_3), value);
	}

	inline static int32_t get_offset_of_nPCSprites_BlueRed_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCSprites_BlueRed_4)); }
	inline Dictionary_2_t416264252 * get_nPCSprites_BlueRed_4() const { return ___nPCSprites_BlueRed_4; }
	inline Dictionary_2_t416264252 ** get_address_of_nPCSprites_BlueRed_4() { return &___nPCSprites_BlueRed_4; }
	inline void set_nPCSprites_BlueRed_4(Dictionary_2_t416264252 * value)
	{
		___nPCSprites_BlueRed_4 = value;
		Il2CppCodeGenWriteBarrier((&___nPCSprites_BlueRed_4), value);
	}

	inline static int32_t get_offset_of_nPCSprites_FullColor_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCSprites_FullColor_5)); }
	inline Dictionary_2_t416264252 * get_nPCSprites_FullColor_5() const { return ___nPCSprites_FullColor_5; }
	inline Dictionary_2_t416264252 ** get_address_of_nPCSprites_FullColor_5() { return &___nPCSprites_FullColor_5; }
	inline void set_nPCSprites_FullColor_5(Dictionary_2_t416264252 * value)
	{
		___nPCSprites_FullColor_5 = value;
		Il2CppCodeGenWriteBarrier((&___nPCSprites_FullColor_5), value);
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___mainCamera_6)); }
	inline Camera_t4157153871 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline Camera_t4157153871 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(Camera_t4157153871 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_6), value);
	}

	inline static int32_t get_offset_of_objectInterationPanel_7() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___objectInterationPanel_7)); }
	inline GameObject_t1113636619 * get_objectInterationPanel_7() const { return ___objectInterationPanel_7; }
	inline GameObject_t1113636619 ** get_address_of_objectInterationPanel_7() { return &___objectInterationPanel_7; }
	inline void set_objectInterationPanel_7(GameObject_t1113636619 * value)
	{
		___objectInterationPanel_7 = value;
		Il2CppCodeGenWriteBarrier((&___objectInterationPanel_7), value);
	}

	inline static int32_t get_offset_of_nPCInteractionPanel_8() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCInteractionPanel_8)); }
	inline GameObject_t1113636619 * get_nPCInteractionPanel_8() const { return ___nPCInteractionPanel_8; }
	inline GameObject_t1113636619 ** get_address_of_nPCInteractionPanel_8() { return &___nPCInteractionPanel_8; }
	inline void set_nPCInteractionPanel_8(GameObject_t1113636619 * value)
	{
		___nPCInteractionPanel_8 = value;
		Il2CppCodeGenWriteBarrier((&___nPCInteractionPanel_8), value);
	}

	inline static int32_t get_offset_of_timeCapsuleInteractionPanel_9() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___timeCapsuleInteractionPanel_9)); }
	inline GameObject_t1113636619 * get_timeCapsuleInteractionPanel_9() const { return ___timeCapsuleInteractionPanel_9; }
	inline GameObject_t1113636619 ** get_address_of_timeCapsuleInteractionPanel_9() { return &___timeCapsuleInteractionPanel_9; }
	inline void set_timeCapsuleInteractionPanel_9(GameObject_t1113636619 * value)
	{
		___timeCapsuleInteractionPanel_9 = value;
		Il2CppCodeGenWriteBarrier((&___timeCapsuleInteractionPanel_9), value);
	}

	inline static int32_t get_offset_of_objectInteratPopUpText_10() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___objectInteratPopUpText_10)); }
	inline Text_t1901882714 * get_objectInteratPopUpText_10() const { return ___objectInteratPopUpText_10; }
	inline Text_t1901882714 ** get_address_of_objectInteratPopUpText_10() { return &___objectInteratPopUpText_10; }
	inline void set_objectInteratPopUpText_10(Text_t1901882714 * value)
	{
		___objectInteratPopUpText_10 = value;
		Il2CppCodeGenWriteBarrier((&___objectInteratPopUpText_10), value);
	}

	inline static int32_t get_offset_of_nPCInteractionText_11() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCInteractionText_11)); }
	inline Text_t1901882714 * get_nPCInteractionText_11() const { return ___nPCInteractionText_11; }
	inline Text_t1901882714 ** get_address_of_nPCInteractionText_11() { return &___nPCInteractionText_11; }
	inline void set_nPCInteractionText_11(Text_t1901882714 * value)
	{
		___nPCInteractionText_11 = value;
		Il2CppCodeGenWriteBarrier((&___nPCInteractionText_11), value);
	}

	inline static int32_t get_offset_of_objectInteractionVisible_12() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___objectInteractionVisible_12)); }
	inline bool get_objectInteractionVisible_12() const { return ___objectInteractionVisible_12; }
	inline bool* get_address_of_objectInteractionVisible_12() { return &___objectInteractionVisible_12; }
	inline void set_objectInteractionVisible_12(bool value)
	{
		___objectInteractionVisible_12 = value;
	}

	inline static int32_t get_offset_of_nPCInteractionVisible_13() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nPCInteractionVisible_13)); }
	inline bool get_nPCInteractionVisible_13() const { return ___nPCInteractionVisible_13; }
	inline bool* get_address_of_nPCInteractionVisible_13() { return &___nPCInteractionVisible_13; }
	inline void set_nPCInteractionVisible_13(bool value)
	{
		___nPCInteractionVisible_13 = value;
	}

	inline static int32_t get_offset_of_controls_14() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___controls_14)); }
	inline bool get_controls_14() const { return ___controls_14; }
	inline bool* get_address_of_controls_14() { return &___controls_14; }
	inline void set_controls_14(bool value)
	{
		___controls_14 = value;
	}

	inline static int32_t get_offset_of_gameEnd_15() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___gameEnd_15)); }
	inline bool get_gameEnd_15() const { return ___gameEnd_15; }
	inline bool* get_address_of_gameEnd_15() { return &___gameEnd_15; }
	inline void set_gameEnd_15(bool value)
	{
		___gameEnd_15 = value;
	}

	inline static int32_t get_offset_of_inventory_16() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___inventory_16)); }
	inline Inventory_t1829814915 * get_inventory_16() const { return ___inventory_16; }
	inline Inventory_t1829814915 ** get_address_of_inventory_16() { return &___inventory_16; }
	inline void set_inventory_16(Inventory_t1829814915 * value)
	{
		___inventory_16 = value;
		Il2CppCodeGenWriteBarrier((&___inventory_16), value);
	}

	inline static int32_t get_offset_of_showBlue_18() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___showBlue_18)); }
	inline bool get_showBlue_18() const { return ___showBlue_18; }
	inline bool* get_address_of_showBlue_18() { return &___showBlue_18; }
	inline void set_showBlue_18(bool value)
	{
		___showBlue_18 = value;
	}

	inline static int32_t get_offset_of_showRed_19() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___showRed_19)); }
	inline bool get_showRed_19() const { return ___showRed_19; }
	inline bool* get_address_of_showRed_19() { return &___showRed_19; }
	inline void set_showRed_19(bool value)
	{
		___showRed_19 = value;
	}

	inline static int32_t get_offset_of_showYellow_20() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___showYellow_20)); }
	inline bool get_showYellow_20() const { return ___showYellow_20; }
	inline bool* get_address_of_showYellow_20() { return &___showYellow_20; }
	inline void set_showYellow_20(bool value)
	{
		___showYellow_20 = value;
	}

	inline static int32_t get_offset_of_showGray_21() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___showGray_21)); }
	inline bool get_showGray_21() const { return ___showGray_21; }
	inline bool* get_address_of_showGray_21() { return &___showGray_21; }
	inline void set_showGray_21(bool value)
	{
		___showGray_21 = value;
	}

	inline static int32_t get_offset_of_portalNext_22() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___portalNext_22)); }
	inline GameObject_t1113636619 * get_portalNext_22() const { return ___portalNext_22; }
	inline GameObject_t1113636619 ** get_address_of_portalNext_22() { return &___portalNext_22; }
	inline void set_portalNext_22(GameObject_t1113636619 * value)
	{
		___portalNext_22 = value;
		Il2CppCodeGenWriteBarrier((&___portalNext_22), value);
	}
};

struct GameManager_t1536523654_StaticFields
{
public:
	// GameManager GameManager::Instance
	GameManager_t1536523654 * ___Instance_17;

public:
	inline static int32_t get_offset_of_Instance_17() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___Instance_17)); }
	inline GameManager_t1536523654 * get_Instance_17() const { return ___Instance_17; }
	inline GameManager_t1536523654 ** get_address_of_Instance_17() { return &___Instance_17; }
	inline void set_Instance_17(GameManager_t1536523654 * value)
	{
		___Instance_17 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef FLOATCONTROLLER_T2236981907_H
#define FLOATCONTROLLER_T2236981907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatController
struct  FloatController_t2236981907  : public MonoBehaviour_t3962482529
{
public:
	// System.Single FloatController::upperLimit
	float ___upperLimit_2;
	// System.Single FloatController::lowerLimit
	float ___lowerLimit_3;
	// System.Single FloatController::displacement
	float ___displacement_4;

public:
	inline static int32_t get_offset_of_upperLimit_2() { return static_cast<int32_t>(offsetof(FloatController_t2236981907, ___upperLimit_2)); }
	inline float get_upperLimit_2() const { return ___upperLimit_2; }
	inline float* get_address_of_upperLimit_2() { return &___upperLimit_2; }
	inline void set_upperLimit_2(float value)
	{
		___upperLimit_2 = value;
	}

	inline static int32_t get_offset_of_lowerLimit_3() { return static_cast<int32_t>(offsetof(FloatController_t2236981907, ___lowerLimit_3)); }
	inline float get_lowerLimit_3() const { return ___lowerLimit_3; }
	inline float* get_address_of_lowerLimit_3() { return &___lowerLimit_3; }
	inline void set_lowerLimit_3(float value)
	{
		___lowerLimit_3 = value;
	}

	inline static int32_t get_offset_of_displacement_4() { return static_cast<int32_t>(offsetof(FloatController_t2236981907, ___displacement_4)); }
	inline float get_displacement_4() const { return ___displacement_4; }
	inline float* get_address_of_displacement_4() { return &___displacement_4; }
	inline void set_displacement_4(float value)
	{
		___displacement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATCONTROLLER_T2236981907_H
#ifndef BUTTONHANDLER_T823762219_H
#define BUTTONHANDLER_T823762219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct  ButtonHandler_t823762219  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonHandler_t823762219, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONHANDLER_T823762219_H
#ifndef AXISTOUCHBUTTON_T3522881333_H
#define AXISTOUCHBUTTON_T3522881333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t3522881333  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t3522881333 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t4087348596 * ___m_Axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_2), value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_PairedWith_6)); }
	inline AxisTouchButton_t3522881333 * get_m_PairedWith_6() const { return ___m_PairedWith_6; }
	inline AxisTouchButton_t3522881333 ** get_address_of_m_PairedWith_6() { return &___m_PairedWith_6; }
	inline void set_m_PairedWith_6(AxisTouchButton_t3522881333 * value)
	{
		___m_PairedWith_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PairedWith_6), value);
	}

	inline static int32_t get_offset_of_m_Axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_Axis_7)); }
	inline VirtualAxis_t4087348596 * get_m_Axis_7() const { return ___m_Axis_7; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_Axis_7() { return &___m_Axis_7; }
	inline void set_m_Axis_7(VirtualAxis_t4087348596 * value)
	{
		___m_Axis_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Axis_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTOUCHBUTTON_T3522881333_H
#ifndef PROTECTCAMERAFROMWALLCLIP_T303409715_H
#define PROTECTCAMERAFROMWALLCLIP_T303409715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct  ProtectCameraFromWallClip_t303409715  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::clipMoveTime
	float ___clipMoveTime_2;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::returnTime
	float ___returnTime_3;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::sphereCastRadius
	float ___sphereCastRadius_4;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::visualiseInEditor
	bool ___visualiseInEditor_5;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::closestDistance
	float ___closestDistance_6;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::<protecting>k__BackingField
	bool ___U3CprotectingU3Ek__BackingField_7;
	// System.String UnityStandardAssets.Cameras.ProtectCameraFromWallClip::dontClipTag
	String_t* ___dontClipTag_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Cam
	Transform_t3600365921 * ___m_Cam_9;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Pivot
	Transform_t3600365921 * ___m_Pivot_10;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_OriginalDist
	float ___m_OriginalDist_11;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_MoveVelocity
	float ___m_MoveVelocity_12;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_CurrentDist
	float ___m_CurrentDist_13;
	// UnityEngine.Ray UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Ray
	Ray_t3785851493  ___m_Ray_14;
	// UnityEngine.RaycastHit[] UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Hits
	RaycastHitU5BU5D_t1690781147* ___m_Hits_15;
	// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_RayHitComparer
	RayHitComparer_t2205555946 * ___m_RayHitComparer_16;

public:
	inline static int32_t get_offset_of_clipMoveTime_2() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___clipMoveTime_2)); }
	inline float get_clipMoveTime_2() const { return ___clipMoveTime_2; }
	inline float* get_address_of_clipMoveTime_2() { return &___clipMoveTime_2; }
	inline void set_clipMoveTime_2(float value)
	{
		___clipMoveTime_2 = value;
	}

	inline static int32_t get_offset_of_returnTime_3() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___returnTime_3)); }
	inline float get_returnTime_3() const { return ___returnTime_3; }
	inline float* get_address_of_returnTime_3() { return &___returnTime_3; }
	inline void set_returnTime_3(float value)
	{
		___returnTime_3 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_4() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___sphereCastRadius_4)); }
	inline float get_sphereCastRadius_4() const { return ___sphereCastRadius_4; }
	inline float* get_address_of_sphereCastRadius_4() { return &___sphereCastRadius_4; }
	inline void set_sphereCastRadius_4(float value)
	{
		___sphereCastRadius_4 = value;
	}

	inline static int32_t get_offset_of_visualiseInEditor_5() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___visualiseInEditor_5)); }
	inline bool get_visualiseInEditor_5() const { return ___visualiseInEditor_5; }
	inline bool* get_address_of_visualiseInEditor_5() { return &___visualiseInEditor_5; }
	inline void set_visualiseInEditor_5(bool value)
	{
		___visualiseInEditor_5 = value;
	}

	inline static int32_t get_offset_of_closestDistance_6() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___closestDistance_6)); }
	inline float get_closestDistance_6() const { return ___closestDistance_6; }
	inline float* get_address_of_closestDistance_6() { return &___closestDistance_6; }
	inline void set_closestDistance_6(float value)
	{
		___closestDistance_6 = value;
	}

	inline static int32_t get_offset_of_U3CprotectingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___U3CprotectingU3Ek__BackingField_7)); }
	inline bool get_U3CprotectingU3Ek__BackingField_7() const { return ___U3CprotectingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CprotectingU3Ek__BackingField_7() { return &___U3CprotectingU3Ek__BackingField_7; }
	inline void set_U3CprotectingU3Ek__BackingField_7(bool value)
	{
		___U3CprotectingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_dontClipTag_8() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___dontClipTag_8)); }
	inline String_t* get_dontClipTag_8() const { return ___dontClipTag_8; }
	inline String_t** get_address_of_dontClipTag_8() { return &___dontClipTag_8; }
	inline void set_dontClipTag_8(String_t* value)
	{
		___dontClipTag_8 = value;
		Il2CppCodeGenWriteBarrier((&___dontClipTag_8), value);
	}

	inline static int32_t get_offset_of_m_Cam_9() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Cam_9)); }
	inline Transform_t3600365921 * get_m_Cam_9() const { return ___m_Cam_9; }
	inline Transform_t3600365921 ** get_address_of_m_Cam_9() { return &___m_Cam_9; }
	inline void set_m_Cam_9(Transform_t3600365921 * value)
	{
		___m_Cam_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_9), value);
	}

	inline static int32_t get_offset_of_m_Pivot_10() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Pivot_10)); }
	inline Transform_t3600365921 * get_m_Pivot_10() const { return ___m_Pivot_10; }
	inline Transform_t3600365921 ** get_address_of_m_Pivot_10() { return &___m_Pivot_10; }
	inline void set_m_Pivot_10(Transform_t3600365921 * value)
	{
		___m_Pivot_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pivot_10), value);
	}

	inline static int32_t get_offset_of_m_OriginalDist_11() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_OriginalDist_11)); }
	inline float get_m_OriginalDist_11() const { return ___m_OriginalDist_11; }
	inline float* get_address_of_m_OriginalDist_11() { return &___m_OriginalDist_11; }
	inline void set_m_OriginalDist_11(float value)
	{
		___m_OriginalDist_11 = value;
	}

	inline static int32_t get_offset_of_m_MoveVelocity_12() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_MoveVelocity_12)); }
	inline float get_m_MoveVelocity_12() const { return ___m_MoveVelocity_12; }
	inline float* get_address_of_m_MoveVelocity_12() { return &___m_MoveVelocity_12; }
	inline void set_m_MoveVelocity_12(float value)
	{
		___m_MoveVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentDist_13() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_CurrentDist_13)); }
	inline float get_m_CurrentDist_13() const { return ___m_CurrentDist_13; }
	inline float* get_address_of_m_CurrentDist_13() { return &___m_CurrentDist_13; }
	inline void set_m_CurrentDist_13(float value)
	{
		___m_CurrentDist_13 = value;
	}

	inline static int32_t get_offset_of_m_Ray_14() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Ray_14)); }
	inline Ray_t3785851493  get_m_Ray_14() const { return ___m_Ray_14; }
	inline Ray_t3785851493 * get_address_of_m_Ray_14() { return &___m_Ray_14; }
	inline void set_m_Ray_14(Ray_t3785851493  value)
	{
		___m_Ray_14 = value;
	}

	inline static int32_t get_offset_of_m_Hits_15() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_Hits_15)); }
	inline RaycastHitU5BU5D_t1690781147* get_m_Hits_15() const { return ___m_Hits_15; }
	inline RaycastHitU5BU5D_t1690781147** get_address_of_m_Hits_15() { return &___m_Hits_15; }
	inline void set_m_Hits_15(RaycastHitU5BU5D_t1690781147* value)
	{
		___m_Hits_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hits_15), value);
	}

	inline static int32_t get_offset_of_m_RayHitComparer_16() { return static_cast<int32_t>(offsetof(ProtectCameraFromWallClip_t303409715, ___m_RayHitComparer_16)); }
	inline RayHitComparer_t2205555946 * get_m_RayHitComparer_16() const { return ___m_RayHitComparer_16; }
	inline RayHitComparer_t2205555946 ** get_address_of_m_RayHitComparer_16() { return &___m_RayHitComparer_16; }
	inline void set_m_RayHitComparer_16(RayHitComparer_t2205555946 * value)
	{
		___m_RayHitComparer_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_RayHitComparer_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTECTCAMERAFROMWALLCLIP_T303409715_H
#ifndef INPUTAXISSCROLLBAR_T457958266_H
#define INPUTAXISSCROLLBAR_T457958266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t457958266  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_2;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t457958266, ___axis_2)); }
	inline String_t* get_axis_2() const { return ___axis_2; }
	inline String_t** get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(String_t* value)
	{
		___axis_2 = value;
		Il2CppCodeGenWriteBarrier((&___axis_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTAXISSCROLLBAR_T457958266_H
#ifndef TILTINPUT_T1639936653_H
#define TILTINPUT_T1639936653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t1639936653  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t3982445645 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t4087348596 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___mapping_2)); }
	inline AxisMapping_t3982445645 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t3982445645 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t3982445645 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___m_SteerAxis_6)); }
	inline VirtualAxis_t4087348596 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t4087348596 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SteerAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTINPUT_T1639936653_H
#ifndef MOBILECONTROLRIG_T1964600252_H
#define MOBILECONTROLRIG_T1964600252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1964600252  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1964600252_H
#ifndef JOYSTICK_T2204371675_H
#define JOYSTICK_T2204371675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2204371675  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t3722313464  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_m_StartPos_6() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_StartPos_6)); }
	inline Vector3_t3722313464  get_m_StartPos_6() const { return ___m_StartPos_6; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_6() { return &___m_StartPos_6; }
	inline void set_m_StartPos_6(Vector3_t3722313464  value)
	{
		___m_StartPos_6 = value;
	}

	inline static int32_t get_offset_of_m_UseX_7() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseX_7)); }
	inline bool get_m_UseX_7() const { return ___m_UseX_7; }
	inline bool* get_address_of_m_UseX_7() { return &___m_UseX_7; }
	inline void set_m_UseX_7(bool value)
	{
		___m_UseX_7 = value;
	}

	inline static int32_t get_offset_of_m_UseY_8() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseY_8)); }
	inline bool get_m_UseY_8() const { return ___m_UseY_8; }
	inline bool* get_address_of_m_UseY_8() { return &___m_UseY_8; }
	inline void set_m_UseY_8(bool value)
	{
		___m_UseY_8 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_HorizontalVirtualAxis_9)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_9() const { return ___m_HorizontalVirtualAxis_9; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_9() { return &___m_HorizontalVirtualAxis_9; }
	inline void set_m_HorizontalVirtualAxis_9(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_9), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_VerticalVirtualAxis_10)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_10() const { return ___m_VerticalVirtualAxis_10; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_10() { return &___m_VerticalVirtualAxis_10; }
	inline void set_m_VerticalVirtualAxis_10(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T2204371675_H
#ifndef DIALOGUECONTROLLER_T636671547_H
#define DIALOGUECONTROLLER_T636671547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueController
struct  DialogueController_t636671547  : public MonoBehaviour_t3962482529
{
public:
	// System.Single DialogueController::delay
	float ___delay_2;
	// System.String DialogueController::fullText
	String_t* ___fullText_3;
	// System.String DialogueController::currentText
	String_t* ___currentText_4;
	// System.Collections.IEnumerator DialogueController::coroutine
	RuntimeObject* ___coroutine_5;
	// System.Boolean DialogueController::textEffectDone
	bool ___textEffectDone_6;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(DialogueController_t636671547, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_fullText_3() { return static_cast<int32_t>(offsetof(DialogueController_t636671547, ___fullText_3)); }
	inline String_t* get_fullText_3() const { return ___fullText_3; }
	inline String_t** get_address_of_fullText_3() { return &___fullText_3; }
	inline void set_fullText_3(String_t* value)
	{
		___fullText_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullText_3), value);
	}

	inline static int32_t get_offset_of_currentText_4() { return static_cast<int32_t>(offsetof(DialogueController_t636671547, ___currentText_4)); }
	inline String_t* get_currentText_4() const { return ___currentText_4; }
	inline String_t** get_address_of_currentText_4() { return &___currentText_4; }
	inline void set_currentText_4(String_t* value)
	{
		___currentText_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentText_4), value);
	}

	inline static int32_t get_offset_of_coroutine_5() { return static_cast<int32_t>(offsetof(DialogueController_t636671547, ___coroutine_5)); }
	inline RuntimeObject* get_coroutine_5() const { return ___coroutine_5; }
	inline RuntimeObject** get_address_of_coroutine_5() { return &___coroutine_5; }
	inline void set_coroutine_5(RuntimeObject* value)
	{
		___coroutine_5 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_5), value);
	}

	inline static int32_t get_offset_of_textEffectDone_6() { return static_cast<int32_t>(offsetof(DialogueController_t636671547, ___textEffectDone_6)); }
	inline bool get_textEffectDone_6() const { return ___textEffectDone_6; }
	inline bool* get_address_of_textEffectDone_6() { return &___textEffectDone_6; }
	inline void set_textEffectDone_6(bool value)
	{
		___textEffectDone_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUECONTROLLER_T636671547_H
#ifndef INVENTORY_T1829814915_H
#define INVENTORY_T1829814915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.Inventory
struct  Inventory_t1829814915  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Chromatic.Inventory::itemList
	List_1_t2585711361 * ___itemList_2;
	// GameManager Chromatic.Inventory::gameManager
	GameManager_t1536523654 * ___gameManager_3;
	// System.Boolean Chromatic.Inventory::poppedUp
	bool ___poppedUp_5;
	// System.Int32 Chromatic.Inventory::recordPiecesLeft
	int32_t ___recordPiecesLeft_6;
	// System.Int32 Chromatic.Inventory::tilePiecesLeft
	int32_t ___tilePiecesLeft_7;
	// System.Boolean Chromatic.Inventory::catLeftToFind
	bool ___catLeftToFind_8;

public:
	inline static int32_t get_offset_of_itemList_2() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___itemList_2)); }
	inline List_1_t2585711361 * get_itemList_2() const { return ___itemList_2; }
	inline List_1_t2585711361 ** get_address_of_itemList_2() { return &___itemList_2; }
	inline void set_itemList_2(List_1_t2585711361 * value)
	{
		___itemList_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemList_2), value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___gameManager_3)); }
	inline GameManager_t1536523654 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameManager_t1536523654 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_3), value);
	}

	inline static int32_t get_offset_of_poppedUp_5() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___poppedUp_5)); }
	inline bool get_poppedUp_5() const { return ___poppedUp_5; }
	inline bool* get_address_of_poppedUp_5() { return &___poppedUp_5; }
	inline void set_poppedUp_5(bool value)
	{
		___poppedUp_5 = value;
	}

	inline static int32_t get_offset_of_recordPiecesLeft_6() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___recordPiecesLeft_6)); }
	inline int32_t get_recordPiecesLeft_6() const { return ___recordPiecesLeft_6; }
	inline int32_t* get_address_of_recordPiecesLeft_6() { return &___recordPiecesLeft_6; }
	inline void set_recordPiecesLeft_6(int32_t value)
	{
		___recordPiecesLeft_6 = value;
	}

	inline static int32_t get_offset_of_tilePiecesLeft_7() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___tilePiecesLeft_7)); }
	inline int32_t get_tilePiecesLeft_7() const { return ___tilePiecesLeft_7; }
	inline int32_t* get_address_of_tilePiecesLeft_7() { return &___tilePiecesLeft_7; }
	inline void set_tilePiecesLeft_7(int32_t value)
	{
		___tilePiecesLeft_7 = value;
	}

	inline static int32_t get_offset_of_catLeftToFind_8() { return static_cast<int32_t>(offsetof(Inventory_t1829814915, ___catLeftToFind_8)); }
	inline bool get_catLeftToFind_8() const { return ___catLeftToFind_8; }
	inline bool* get_address_of_catLeftToFind_8() { return &___catLeftToFind_8; }
	inline void set_catLeftToFind_8(bool value)
	{
		___catLeftToFind_8 = value;
	}
};

struct Inventory_t1829814915_StaticFields
{
public:
	// Chromatic.Inventory Chromatic.Inventory::Instance
	Inventory_t1829814915 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(Inventory_t1829814915_StaticFields, ___Instance_4)); }
	inline Inventory_t1829814915 * get_Instance_4() const { return ___Instance_4; }
	inline Inventory_t1829814915 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(Inventory_t1829814915 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVENTORY_T1829814915_H
#ifndef RECORDCOLLECTIBLE2_T2046988737_H
#define RECORDCOLLECTIBLE2_T2046988737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.RecordCollectible2
struct  RecordCollectible2_t2046988737  : public InteractableObject_t3462999176
{
public:
	// UnityEngine.GameObject Chromatic.RecordCollectible2::completedRecord
	GameObject_t1113636619 * ___completedRecord_8;

public:
	inline static int32_t get_offset_of_completedRecord_8() { return static_cast<int32_t>(offsetof(RecordCollectible2_t2046988737, ___completedRecord_8)); }
	inline GameObject_t1113636619 * get_completedRecord_8() const { return ___completedRecord_8; }
	inline GameObject_t1113636619 ** get_address_of_completedRecord_8() { return &___completedRecord_8; }
	inline void set_completedRecord_8(GameObject_t1113636619 * value)
	{
		___completedRecord_8 = value;
		Il2CppCodeGenWriteBarrier((&___completedRecord_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCOLLECTIBLE2_T2046988737_H
#ifndef GREGLINES_T468564499_H
#define GREGLINES_T468564499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GregLines
struct  GregLines_t468564499  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGLINES_T468564499_H
#ifndef TILECOLLECTIBLE_T602297632_H
#define TILECOLLECTIBLE_T602297632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.TileCollectible
struct  TileCollectible_t602297632  : public InteractableObject_t3462999176
{
public:
	// UnityEngine.GameObject Chromatic.TileCollectible::DragonLady
	GameObject_t1113636619 * ___DragonLady_8;
	// UnityEngine.GameObject Chromatic.TileCollectible::Zalgo
	GameObject_t1113636619 * ___Zalgo_9;

public:
	inline static int32_t get_offset_of_DragonLady_8() { return static_cast<int32_t>(offsetof(TileCollectible_t602297632, ___DragonLady_8)); }
	inline GameObject_t1113636619 * get_DragonLady_8() const { return ___DragonLady_8; }
	inline GameObject_t1113636619 ** get_address_of_DragonLady_8() { return &___DragonLady_8; }
	inline void set_DragonLady_8(GameObject_t1113636619 * value)
	{
		___DragonLady_8 = value;
		Il2CppCodeGenWriteBarrier((&___DragonLady_8), value);
	}

	inline static int32_t get_offset_of_Zalgo_9() { return static_cast<int32_t>(offsetof(TileCollectible_t602297632, ___Zalgo_9)); }
	inline GameObject_t1113636619 * get_Zalgo_9() const { return ___Zalgo_9; }
	inline GameObject_t1113636619 ** get_address_of_Zalgo_9() { return &___Zalgo_9; }
	inline void set_Zalgo_9(GameObject_t1113636619 * value)
	{
		___Zalgo_9 = value;
		Il2CppCodeGenWriteBarrier((&___Zalgo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECOLLECTIBLE_T602297632_H
#ifndef DRAGONLADYCONTROLLER_T3554394753_H
#define DRAGONLADYCONTROLLER_T3554394753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.DragonLadyController
struct  DragonLadyController_t3554394753  : public NPCController_t4025312893
{
public:
	// UnityEngine.GameObject Chromatic.DragonLadyController::timeCapsulePuzzle
	GameObject_t1113636619 * ___timeCapsulePuzzle_12;
	// TimeCapsuleScript Chromatic.DragonLadyController::timeCapsuleScript
	TimeCapsuleScript_t4202324678 * ___timeCapsuleScript_13;

public:
	inline static int32_t get_offset_of_timeCapsulePuzzle_12() { return static_cast<int32_t>(offsetof(DragonLadyController_t3554394753, ___timeCapsulePuzzle_12)); }
	inline GameObject_t1113636619 * get_timeCapsulePuzzle_12() const { return ___timeCapsulePuzzle_12; }
	inline GameObject_t1113636619 ** get_address_of_timeCapsulePuzzle_12() { return &___timeCapsulePuzzle_12; }
	inline void set_timeCapsulePuzzle_12(GameObject_t1113636619 * value)
	{
		___timeCapsulePuzzle_12 = value;
		Il2CppCodeGenWriteBarrier((&___timeCapsulePuzzle_12), value);
	}

	inline static int32_t get_offset_of_timeCapsuleScript_13() { return static_cast<int32_t>(offsetof(DragonLadyController_t3554394753, ___timeCapsuleScript_13)); }
	inline TimeCapsuleScript_t4202324678 * get_timeCapsuleScript_13() const { return ___timeCapsuleScript_13; }
	inline TimeCapsuleScript_t4202324678 ** get_address_of_timeCapsuleScript_13() { return &___timeCapsuleScript_13; }
	inline void set_timeCapsuleScript_13(TimeCapsuleScript_t4202324678 * value)
	{
		___timeCapsuleScript_13 = value;
		Il2CppCodeGenWriteBarrier((&___timeCapsuleScript_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGONLADYCONTROLLER_T3554394753_H
#ifndef CHICKENCONTROLLER_T892107013_H
#define CHICKENCONTROLLER_T892107013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChickenController
struct  ChickenController_t892107013  : public NPCController_t4025312893
{
public:
	// System.Single ChickenController::upperLimit
	float ___upperLimit_12;
	// System.Single ChickenController::lowerLimit
	float ___lowerLimit_13;
	// System.Single ChickenController::displacement
	float ___displacement_14;

public:
	inline static int32_t get_offset_of_upperLimit_12() { return static_cast<int32_t>(offsetof(ChickenController_t892107013, ___upperLimit_12)); }
	inline float get_upperLimit_12() const { return ___upperLimit_12; }
	inline float* get_address_of_upperLimit_12() { return &___upperLimit_12; }
	inline void set_upperLimit_12(float value)
	{
		___upperLimit_12 = value;
	}

	inline static int32_t get_offset_of_lowerLimit_13() { return static_cast<int32_t>(offsetof(ChickenController_t892107013, ___lowerLimit_13)); }
	inline float get_lowerLimit_13() const { return ___lowerLimit_13; }
	inline float* get_address_of_lowerLimit_13() { return &___lowerLimit_13; }
	inline void set_lowerLimit_13(float value)
	{
		___lowerLimit_13 = value;
	}

	inline static int32_t get_offset_of_displacement_14() { return static_cast<int32_t>(offsetof(ChickenController_t892107013, ___displacement_14)); }
	inline float get_displacement_14() const { return ___displacement_14; }
	inline float* get_address_of_displacement_14() { return &___displacement_14; }
	inline void set_displacement_14(float value)
	{
		___displacement_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHICKENCONTROLLER_T892107013_H
#ifndef INFINITYCHICKENLINES_T1415599192_H
#define INFINITYCHICKENLINES_T1415599192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityChickenLines
struct  InfinityChickenLines_t1415599192  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFINITYCHICKENLINES_T1415599192_H
#ifndef TARGETFIELDOFVIEW_T3060904718_H
#define TARGETFIELDOFVIEW_T3060904718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.TargetFieldOfView
struct  TargetFieldOfView_t3060904718  : public AbstractTargetFollower_t1919708159
{
public:
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustTime
	float ___m_FovAdjustTime_6;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_ZoomAmountMultiplier
	float ___m_ZoomAmountMultiplier_7;
	// System.Boolean UnityStandardAssets.Cameras.TargetFieldOfView::m_IncludeEffectsInSize
	bool ___m_IncludeEffectsInSize_8;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_BoundSize
	float ___m_BoundSize_9;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustVelocity
	float ___m_FovAdjustVelocity_10;
	// UnityEngine.Camera UnityStandardAssets.Cameras.TargetFieldOfView::m_Cam
	Camera_t4157153871 * ___m_Cam_11;
	// UnityEngine.Transform UnityStandardAssets.Cameras.TargetFieldOfView::m_LastTarget
	Transform_t3600365921 * ___m_LastTarget_12;

public:
	inline static int32_t get_offset_of_m_FovAdjustTime_6() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_FovAdjustTime_6)); }
	inline float get_m_FovAdjustTime_6() const { return ___m_FovAdjustTime_6; }
	inline float* get_address_of_m_FovAdjustTime_6() { return &___m_FovAdjustTime_6; }
	inline void set_m_FovAdjustTime_6(float value)
	{
		___m_FovAdjustTime_6 = value;
	}

	inline static int32_t get_offset_of_m_ZoomAmountMultiplier_7() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_ZoomAmountMultiplier_7)); }
	inline float get_m_ZoomAmountMultiplier_7() const { return ___m_ZoomAmountMultiplier_7; }
	inline float* get_address_of_m_ZoomAmountMultiplier_7() { return &___m_ZoomAmountMultiplier_7; }
	inline void set_m_ZoomAmountMultiplier_7(float value)
	{
		___m_ZoomAmountMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_IncludeEffectsInSize_8() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_IncludeEffectsInSize_8)); }
	inline bool get_m_IncludeEffectsInSize_8() const { return ___m_IncludeEffectsInSize_8; }
	inline bool* get_address_of_m_IncludeEffectsInSize_8() { return &___m_IncludeEffectsInSize_8; }
	inline void set_m_IncludeEffectsInSize_8(bool value)
	{
		___m_IncludeEffectsInSize_8 = value;
	}

	inline static int32_t get_offset_of_m_BoundSize_9() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_BoundSize_9)); }
	inline float get_m_BoundSize_9() const { return ___m_BoundSize_9; }
	inline float* get_address_of_m_BoundSize_9() { return &___m_BoundSize_9; }
	inline void set_m_BoundSize_9(float value)
	{
		___m_BoundSize_9 = value;
	}

	inline static int32_t get_offset_of_m_FovAdjustVelocity_10() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_FovAdjustVelocity_10)); }
	inline float get_m_FovAdjustVelocity_10() const { return ___m_FovAdjustVelocity_10; }
	inline float* get_address_of_m_FovAdjustVelocity_10() { return &___m_FovAdjustVelocity_10; }
	inline void set_m_FovAdjustVelocity_10(float value)
	{
		___m_FovAdjustVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_Cam_11() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_Cam_11)); }
	inline Camera_t4157153871 * get_m_Cam_11() const { return ___m_Cam_11; }
	inline Camera_t4157153871 ** get_address_of_m_Cam_11() { return &___m_Cam_11; }
	inline void set_m_Cam_11(Camera_t4157153871 * value)
	{
		___m_Cam_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_11), value);
	}

	inline static int32_t get_offset_of_m_LastTarget_12() { return static_cast<int32_t>(offsetof(TargetFieldOfView_t3060904718, ___m_LastTarget_12)); }
	inline Transform_t3600365921 * get_m_LastTarget_12() const { return ___m_LastTarget_12; }
	inline Transform_t3600365921 ** get_address_of_m_LastTarget_12() { return &___m_LastTarget_12; }
	inline void set_m_LastTarget_12(Transform_t3600365921 * value)
	{
		___m_LastTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastTarget_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFIELDOFVIEW_T3060904718_H
#ifndef PIVOTBASEDCAMERARIG_T3786953582_H
#define PIVOTBASEDCAMERARIG_T3786953582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct  PivotBasedCameraRig_t3786953582  : public AbstractTargetFollower_t1919708159
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_t3600365921 * ___m_Cam_6;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_t3600365921 * ___m_Pivot_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t3722313464  ___m_LastTargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Cam_6() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Cam_6)); }
	inline Transform_t3600365921 * get_m_Cam_6() const { return ___m_Cam_6; }
	inline Transform_t3600365921 ** get_address_of_m_Cam_6() { return &___m_Cam_6; }
	inline void set_m_Cam_6(Transform_t3600365921 * value)
	{
		___m_Cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_6), value);
	}

	inline static int32_t get_offset_of_m_Pivot_7() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Pivot_7)); }
	inline Transform_t3600365921 * get_m_Pivot_7() const { return ___m_Pivot_7; }
	inline Transform_t3600365921 ** get_address_of_m_Pivot_7() { return &___m_Pivot_7; }
	inline void set_m_Pivot_7(Transform_t3600365921 * value)
	{
		___m_Pivot_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pivot_7), value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_LastTargetPosition_8)); }
	inline Vector3_t3722313464  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t3722313464 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t3722313464  value)
	{
		___m_LastTargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIVOTBASEDCAMERARIG_T3786953582_H
#ifndef LOOKATTARGET_T3260877718_H
#define LOOKATTARGET_T3260877718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.LookatTarget
struct  LookatTarget_t3260877718  : public AbstractTargetFollower_t1919708159
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Cameras.LookatTarget::m_RotationRange
	Vector2_t2156229523  ___m_RotationRange_6;
	// System.Single UnityStandardAssets.Cameras.LookatTarget::m_FollowSpeed
	float ___m_FollowSpeed_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowAngles
	Vector3_t3722313464  ___m_FollowAngles_8;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.LookatTarget::m_OriginalRotation
	Quaternion_t2301928331  ___m_OriginalRotation_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowVelocity
	Vector3_t3722313464  ___m_FollowVelocity_10;

public:
	inline static int32_t get_offset_of_m_RotationRange_6() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_RotationRange_6)); }
	inline Vector2_t2156229523  get_m_RotationRange_6() const { return ___m_RotationRange_6; }
	inline Vector2_t2156229523 * get_address_of_m_RotationRange_6() { return &___m_RotationRange_6; }
	inline void set_m_RotationRange_6(Vector2_t2156229523  value)
	{
		___m_RotationRange_6 = value;
	}

	inline static int32_t get_offset_of_m_FollowSpeed_7() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowSpeed_7)); }
	inline float get_m_FollowSpeed_7() const { return ___m_FollowSpeed_7; }
	inline float* get_address_of_m_FollowSpeed_7() { return &___m_FollowSpeed_7; }
	inline void set_m_FollowSpeed_7(float value)
	{
		___m_FollowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_8() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowAngles_8)); }
	inline Vector3_t3722313464  get_m_FollowAngles_8() const { return ___m_FollowAngles_8; }
	inline Vector3_t3722313464 * get_address_of_m_FollowAngles_8() { return &___m_FollowAngles_8; }
	inline void set_m_FollowAngles_8(Vector3_t3722313464  value)
	{
		___m_FollowAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_9() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_OriginalRotation_9)); }
	inline Quaternion_t2301928331  get_m_OriginalRotation_9() const { return ___m_OriginalRotation_9; }
	inline Quaternion_t2301928331 * get_address_of_m_OriginalRotation_9() { return &___m_OriginalRotation_9; }
	inline void set_m_OriginalRotation_9(Quaternion_t2301928331  value)
	{
		___m_OriginalRotation_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(LookatTarget_t3260877718, ___m_FollowVelocity_10)); }
	inline Vector3_t3722313464  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t3722313464 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t3722313464  value)
	{
		___m_FollowVelocity_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOKATTARGET_T3260877718_H
#ifndef GREGCONTROLLER_T1966300252_H
#define GREGCONTROLLER_T1966300252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GregController
struct  GregController_t1966300252  : public NPCController_t4025312893
{
public:
	// System.Boolean GregController::foundPieces
	bool ___foundPieces_12;

public:
	inline static int32_t get_offset_of_foundPieces_12() { return static_cast<int32_t>(offsetof(GregController_t1966300252, ___foundPieces_12)); }
	inline bool get_foundPieces_12() const { return ___foundPieces_12; }
	inline bool* get_address_of_foundPieces_12() { return &___foundPieces_12; }
	inline void set_foundPieces_12(bool value)
	{
		___foundPieces_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGCONTROLLER_T1966300252_H
#ifndef EXAMPLENPC_T1250306381_H
#define EXAMPLENPC_T1250306381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleNPC
struct  ExampleNPC_t1250306381  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLENPC_T1250306381_H
#ifndef DRAGONLADYLINES_T4277637991_H
#define DRAGONLADYLINES_T4277637991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonLadyLines
struct  DragonLadyLines_t4277637991  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGONLADYLINES_T4277637991_H
#ifndef ZALGOLINES1_T1744554154_H
#define ZALGOLINES1_T1744554154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZalgoLines1
struct  ZalgoLines1_t1744554154  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZALGOLINES1_T1744554154_H
#ifndef ZALGOLINES2_T2147838681_H
#define ZALGOLINES2_T2147838681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZalgoLines2
struct  ZalgoLines2_t2147838681  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZALGOLINES2_T2147838681_H
#ifndef VOIDLINES_T1497668199_H
#define VOIDLINES_T1497668199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidLines
struct  VoidLines_t1497668199  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDLINES_T1497668199_H
#ifndef VOIDLINES2_T1500944999_H
#define VOIDLINES2_T1500944999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidLines2
struct  VoidLines2_t1500944999  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDLINES2_T1500944999_H
#ifndef ZALGOCONTROLLER_T1104200838_H
#define ZALGOCONTROLLER_T1104200838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZalgoController
struct  ZalgoController_t1104200838  : public NPCController_t4025312893
{
public:
	// System.Boolean ZalgoController::foundPieces
	bool ___foundPieces_12;

public:
	inline static int32_t get_offset_of_foundPieces_12() { return static_cast<int32_t>(offsetof(ZalgoController_t1104200838, ___foundPieces_12)); }
	inline bool get_foundPieces_12() const { return ___foundPieces_12; }
	inline bool* get_address_of_foundPieces_12() { return &___foundPieces_12; }
	inline void set_foundPieces_12(bool value)
	{
		___foundPieces_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZALGOCONTROLLER_T1104200838_H
#ifndef ZALGOLINES_T3886849182_H
#define ZALGOLINES_T3886849182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZalgoLines
struct  ZalgoLines_t3886849182  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZALGOLINES_T3886849182_H
#ifndef HINTOBJECTSCRIPTS_T1838699004_H
#define HINTOBJECTSCRIPTS_T1838699004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.HintObjectScripts
struct  HintObjectScripts_t1838699004  : public InteractableObject_t3462999176
{
public:
	// UnityEngine.Transform Chromatic.HintObjectScripts::transform
	Transform_t3600365921 * ___transform_8;
	// System.Single Chromatic.HintObjectScripts::displacement
	float ___displacement_9;
	// System.Single Chromatic.HintObjectScripts::upperLimit
	float ___upperLimit_10;
	// System.Single Chromatic.HintObjectScripts::lowerLimit
	float ___lowerLimit_11;

public:
	inline static int32_t get_offset_of_transform_8() { return static_cast<int32_t>(offsetof(HintObjectScripts_t1838699004, ___transform_8)); }
	inline Transform_t3600365921 * get_transform_8() const { return ___transform_8; }
	inline Transform_t3600365921 ** get_address_of_transform_8() { return &___transform_8; }
	inline void set_transform_8(Transform_t3600365921 * value)
	{
		___transform_8 = value;
		Il2CppCodeGenWriteBarrier((&___transform_8), value);
	}

	inline static int32_t get_offset_of_displacement_9() { return static_cast<int32_t>(offsetof(HintObjectScripts_t1838699004, ___displacement_9)); }
	inline float get_displacement_9() const { return ___displacement_9; }
	inline float* get_address_of_displacement_9() { return &___displacement_9; }
	inline void set_displacement_9(float value)
	{
		___displacement_9 = value;
	}

	inline static int32_t get_offset_of_upperLimit_10() { return static_cast<int32_t>(offsetof(HintObjectScripts_t1838699004, ___upperLimit_10)); }
	inline float get_upperLimit_10() const { return ___upperLimit_10; }
	inline float* get_address_of_upperLimit_10() { return &___upperLimit_10; }
	inline void set_upperLimit_10(float value)
	{
		___upperLimit_10 = value;
	}

	inline static int32_t get_offset_of_lowerLimit_11() { return static_cast<int32_t>(offsetof(HintObjectScripts_t1838699004, ___lowerLimit_11)); }
	inline float get_lowerLimit_11() const { return ___lowerLimit_11; }
	inline float* get_address_of_lowerLimit_11() { return &___lowerLimit_11; }
	inline void set_lowerLimit_11(float value)
	{
		___lowerLimit_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HINTOBJECTSCRIPTS_T1838699004_H
#ifndef VOID2CONTROLLER_T2288085959_H
#define VOID2CONTROLLER_T2288085959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.Void2Controller
struct  Void2Controller_t2288085959  : public NPCController_t4025312893
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID2CONTROLLER_T2288085959_H
#ifndef UD8YVINDLINES_T1224904776_H
#define UD8YVINDLINES_T1224904776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ØyvindLines
struct  UD8yvindLines_t1224904776  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UD8YVINDLINES_T1224904776_H
#ifndef UD8YVINDCONTROLLER_T78099106_H
#define UD8YVINDCONTROLLER_T78099106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.ØyvindController
struct  UD8yvindController_t78099106  : public NPCController_t4025312893
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UD8YVINDCONTROLLER_T78099106_H
#ifndef VOIDENDLINES_T496412888_H
#define VOIDENDLINES_T496412888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VoidEndLines
struct  VoidEndLines_t496412888  : public NPCLines_t3086426555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDENDLINES_T496412888_H
#ifndef VOIDCONTROLLER_T1707887450_H
#define VOIDCONTROLLER_T1707887450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.VoidController
struct  VoidController_t1707887450  : public NPCController_t4025312893
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDCONTROLLER_T1707887450_H
#ifndef CATCOLLECTIBLE_T4140584543_H
#define CATCOLLECTIBLE_T4140584543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chromatic.CatCollectible
struct  CatCollectible_t4140584543  : public InteractableObject_t3462999176
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATCOLLECTIBLE_T4140584543_H
#ifndef HANDHELDCAM_T450595784_H
#define HANDHELDCAM_T450595784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.HandHeldCam
struct  HandHeldCam_t450595784  : public LookatTarget_t3260877718
{
public:
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_SwaySpeed
	float ___m_SwaySpeed_11;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_BaseSwayAmount
	float ___m_BaseSwayAmount_12;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingSwayAmount
	float ___m_TrackingSwayAmount_13;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingBias
	float ___m_TrackingBias_14;

public:
	inline static int32_t get_offset_of_m_SwaySpeed_11() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_SwaySpeed_11)); }
	inline float get_m_SwaySpeed_11() const { return ___m_SwaySpeed_11; }
	inline float* get_address_of_m_SwaySpeed_11() { return &___m_SwaySpeed_11; }
	inline void set_m_SwaySpeed_11(float value)
	{
		___m_SwaySpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_BaseSwayAmount_12() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_BaseSwayAmount_12)); }
	inline float get_m_BaseSwayAmount_12() const { return ___m_BaseSwayAmount_12; }
	inline float* get_address_of_m_BaseSwayAmount_12() { return &___m_BaseSwayAmount_12; }
	inline void set_m_BaseSwayAmount_12(float value)
	{
		___m_BaseSwayAmount_12 = value;
	}

	inline static int32_t get_offset_of_m_TrackingSwayAmount_13() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_TrackingSwayAmount_13)); }
	inline float get_m_TrackingSwayAmount_13() const { return ___m_TrackingSwayAmount_13; }
	inline float* get_address_of_m_TrackingSwayAmount_13() { return &___m_TrackingSwayAmount_13; }
	inline void set_m_TrackingSwayAmount_13(float value)
	{
		___m_TrackingSwayAmount_13 = value;
	}

	inline static int32_t get_offset_of_m_TrackingBias_14() { return static_cast<int32_t>(offsetof(HandHeldCam_t450595784, ___m_TrackingBias_14)); }
	inline float get_m_TrackingBias_14() const { return ___m_TrackingBias_14; }
	inline float* get_address_of_m_TrackingBias_14() { return &___m_TrackingBias_14; }
	inline void set_m_TrackingBias_14(float value)
	{
		___m_TrackingBias_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDHELDCAM_T450595784_H
#ifndef AUTOCAM_T137911967_H
#define AUTOCAM_T137911967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AutoCam
struct  AutoCam_t137911967  : public PivotBasedCameraRig_t3786953582
{
public:
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeed
	float ___m_TurnSpeed_10;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_RollSpeed
	float ___m_RollSpeed_11;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowVelocity
	bool ___m_FollowVelocity_12;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowTilt
	bool ___m_FollowTilt_13;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SpinTurnLimit
	float ___m_SpinTurnLimit_14;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TargetVelocityLowerLimit
	float ___m_TargetVelocityLowerLimit_15;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SmoothTurnTime
	float ___m_SmoothTurnTime_16;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_LastFlatAngle
	float ___m_LastFlatAngle_17;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_CurrentTurnAmount
	float ___m_CurrentTurnAmount_18;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeedVelocityChange
	float ___m_TurnSpeedVelocityChange_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.AutoCam::m_RollUp
	Vector3_t3722313464  ___m_RollUp_20;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_10() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeed_10)); }
	inline float get_m_TurnSpeed_10() const { return ___m_TurnSpeed_10; }
	inline float* get_address_of_m_TurnSpeed_10() { return &___m_TurnSpeed_10; }
	inline void set_m_TurnSpeed_10(float value)
	{
		___m_TurnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_RollSpeed_11() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollSpeed_11)); }
	inline float get_m_RollSpeed_11() const { return ___m_RollSpeed_11; }
	inline float* get_address_of_m_RollSpeed_11() { return &___m_RollSpeed_11; }
	inline void set_m_RollSpeed_11(float value)
	{
		___m_RollSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_12() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowVelocity_12)); }
	inline bool get_m_FollowVelocity_12() const { return ___m_FollowVelocity_12; }
	inline bool* get_address_of_m_FollowVelocity_12() { return &___m_FollowVelocity_12; }
	inline void set_m_FollowVelocity_12(bool value)
	{
		___m_FollowVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_FollowTilt_13() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowTilt_13)); }
	inline bool get_m_FollowTilt_13() const { return ___m_FollowTilt_13; }
	inline bool* get_address_of_m_FollowTilt_13() { return &___m_FollowTilt_13; }
	inline void set_m_FollowTilt_13(bool value)
	{
		___m_FollowTilt_13 = value;
	}

	inline static int32_t get_offset_of_m_SpinTurnLimit_14() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SpinTurnLimit_14)); }
	inline float get_m_SpinTurnLimit_14() const { return ___m_SpinTurnLimit_14; }
	inline float* get_address_of_m_SpinTurnLimit_14() { return &___m_SpinTurnLimit_14; }
	inline void set_m_SpinTurnLimit_14(float value)
	{
		___m_SpinTurnLimit_14 = value;
	}

	inline static int32_t get_offset_of_m_TargetVelocityLowerLimit_15() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TargetVelocityLowerLimit_15)); }
	inline float get_m_TargetVelocityLowerLimit_15() const { return ___m_TargetVelocityLowerLimit_15; }
	inline float* get_address_of_m_TargetVelocityLowerLimit_15() { return &___m_TargetVelocityLowerLimit_15; }
	inline void set_m_TargetVelocityLowerLimit_15(float value)
	{
		___m_TargetVelocityLowerLimit_15 = value;
	}

	inline static int32_t get_offset_of_m_SmoothTurnTime_16() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SmoothTurnTime_16)); }
	inline float get_m_SmoothTurnTime_16() const { return ___m_SmoothTurnTime_16; }
	inline float* get_address_of_m_SmoothTurnTime_16() { return &___m_SmoothTurnTime_16; }
	inline void set_m_SmoothTurnTime_16(float value)
	{
		___m_SmoothTurnTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastFlatAngle_17() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_LastFlatAngle_17)); }
	inline float get_m_LastFlatAngle_17() const { return ___m_LastFlatAngle_17; }
	inline float* get_address_of_m_LastFlatAngle_17() { return &___m_LastFlatAngle_17; }
	inline void set_m_LastFlatAngle_17(float value)
	{
		___m_LastFlatAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTurnAmount_18() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_CurrentTurnAmount_18)); }
	inline float get_m_CurrentTurnAmount_18() const { return ___m_CurrentTurnAmount_18; }
	inline float* get_address_of_m_CurrentTurnAmount_18() { return &___m_CurrentTurnAmount_18; }
	inline void set_m_CurrentTurnAmount_18(float value)
	{
		___m_CurrentTurnAmount_18 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeedVelocityChange_19() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeedVelocityChange_19)); }
	inline float get_m_TurnSpeedVelocityChange_19() const { return ___m_TurnSpeedVelocityChange_19; }
	inline float* get_address_of_m_TurnSpeedVelocityChange_19() { return &___m_TurnSpeedVelocityChange_19; }
	inline void set_m_TurnSpeedVelocityChange_19(float value)
	{
		___m_TurnSpeedVelocityChange_19 = value;
	}

	inline static int32_t get_offset_of_m_RollUp_20() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollUp_20)); }
	inline Vector3_t3722313464  get_m_RollUp_20() const { return ___m_RollUp_20; }
	inline Vector3_t3722313464 * get_address_of_m_RollUp_20() { return &___m_RollUp_20; }
	inline void set_m_RollUp_20(Vector3_t3722313464  value)
	{
		___m_RollUp_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOCAM_T137911967_H
#ifndef FREELOOKCAM_T2000732766_H
#define FREELOOKCAM_T2000732766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.FreeLookCam
struct  FreeLookCam_t2000732766  : public PivotBasedCameraRig_t3786953582
{
public:
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSpeed
	float ___m_TurnSpeed_10;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSmoothing
	float ___m_TurnSmoothing_11;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMax
	float ___m_TiltMax_12;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMin
	float ___m_TiltMin_13;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_LockCursor
	bool ___m_LockCursor_14;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_VerticalAutoReturn
	bool ___m_VerticalAutoReturn_15;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_LookAngle
	float ___m_LookAngle_16;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltAngle
	float ___m_TiltAngle_17;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.FreeLookCam::m_PivotEulers
	Vector3_t3722313464  ___m_PivotEulers_19;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_PivotTargetRot
	Quaternion_t2301928331  ___m_PivotTargetRot_20;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_TransformTargetRot
	Quaternion_t2301928331  ___m_TransformTargetRot_21;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_10() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TurnSpeed_10)); }
	inline float get_m_TurnSpeed_10() const { return ___m_TurnSpeed_10; }
	inline float* get_address_of_m_TurnSpeed_10() { return &___m_TurnSpeed_10; }
	inline void set_m_TurnSpeed_10(float value)
	{
		___m_TurnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_TurnSmoothing_11() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TurnSmoothing_11)); }
	inline float get_m_TurnSmoothing_11() const { return ___m_TurnSmoothing_11; }
	inline float* get_address_of_m_TurnSmoothing_11() { return &___m_TurnSmoothing_11; }
	inline void set_m_TurnSmoothing_11(float value)
	{
		___m_TurnSmoothing_11 = value;
	}

	inline static int32_t get_offset_of_m_TiltMax_12() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltMax_12)); }
	inline float get_m_TiltMax_12() const { return ___m_TiltMax_12; }
	inline float* get_address_of_m_TiltMax_12() { return &___m_TiltMax_12; }
	inline void set_m_TiltMax_12(float value)
	{
		___m_TiltMax_12 = value;
	}

	inline static int32_t get_offset_of_m_TiltMin_13() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltMin_13)); }
	inline float get_m_TiltMin_13() const { return ___m_TiltMin_13; }
	inline float* get_address_of_m_TiltMin_13() { return &___m_TiltMin_13; }
	inline void set_m_TiltMin_13(float value)
	{
		___m_TiltMin_13 = value;
	}

	inline static int32_t get_offset_of_m_LockCursor_14() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_LockCursor_14)); }
	inline bool get_m_LockCursor_14() const { return ___m_LockCursor_14; }
	inline bool* get_address_of_m_LockCursor_14() { return &___m_LockCursor_14; }
	inline void set_m_LockCursor_14(bool value)
	{
		___m_LockCursor_14 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAutoReturn_15() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_VerticalAutoReturn_15)); }
	inline bool get_m_VerticalAutoReturn_15() const { return ___m_VerticalAutoReturn_15; }
	inline bool* get_address_of_m_VerticalAutoReturn_15() { return &___m_VerticalAutoReturn_15; }
	inline void set_m_VerticalAutoReturn_15(bool value)
	{
		___m_VerticalAutoReturn_15 = value;
	}

	inline static int32_t get_offset_of_m_LookAngle_16() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_LookAngle_16)); }
	inline float get_m_LookAngle_16() const { return ___m_LookAngle_16; }
	inline float* get_address_of_m_LookAngle_16() { return &___m_LookAngle_16; }
	inline void set_m_LookAngle_16(float value)
	{
		___m_LookAngle_16 = value;
	}

	inline static int32_t get_offset_of_m_TiltAngle_17() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TiltAngle_17)); }
	inline float get_m_TiltAngle_17() const { return ___m_TiltAngle_17; }
	inline float* get_address_of_m_TiltAngle_17() { return &___m_TiltAngle_17; }
	inline void set_m_TiltAngle_17(float value)
	{
		___m_TiltAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_PivotEulers_19() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_PivotEulers_19)); }
	inline Vector3_t3722313464  get_m_PivotEulers_19() const { return ___m_PivotEulers_19; }
	inline Vector3_t3722313464 * get_address_of_m_PivotEulers_19() { return &___m_PivotEulers_19; }
	inline void set_m_PivotEulers_19(Vector3_t3722313464  value)
	{
		___m_PivotEulers_19 = value;
	}

	inline static int32_t get_offset_of_m_PivotTargetRot_20() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_PivotTargetRot_20)); }
	inline Quaternion_t2301928331  get_m_PivotTargetRot_20() const { return ___m_PivotTargetRot_20; }
	inline Quaternion_t2301928331 * get_address_of_m_PivotTargetRot_20() { return &___m_PivotTargetRot_20; }
	inline void set_m_PivotTargetRot_20(Quaternion_t2301928331  value)
	{
		___m_PivotTargetRot_20 = value;
	}

	inline static int32_t get_offset_of_m_TransformTargetRot_21() { return static_cast<int32_t>(offsetof(FreeLookCam_t2000732766, ___m_TransformTargetRot_21)); }
	inline Quaternion_t2301928331  get_m_TransformTargetRot_21() const { return ___m_TransformTargetRot_21; }
	inline Quaternion_t2301928331 * get_address_of_m_TransformTargetRot_21() { return &___m_TransformTargetRot_21; }
	inline void set_m_TransformTargetRot_21(Quaternion_t2301928331  value)
	{
		___m_TransformTargetRot_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FREELOOKCAM_T2000732766_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (AbstractTargetFollower_t1919708159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[4] = 
{
	AbstractTargetFollower_t1919708159::get_offset_of_m_Target_2(),
	AbstractTargetFollower_t1919708159::get_offset_of_m_AutoTargetPlayer_3(),
	AbstractTargetFollower_t1919708159::get_offset_of_m_UpdateType_4(),
	AbstractTargetFollower_t1919708159::get_offset_of_targetRigidbody_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (UpdateType_t2449601881)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1801[4] = 
{
	UpdateType_t2449601881::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (AutoCam_t137911967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[12] = 
{
	AutoCam_t137911967::get_offset_of_m_MoveSpeed_9(),
	AutoCam_t137911967::get_offset_of_m_TurnSpeed_10(),
	AutoCam_t137911967::get_offset_of_m_RollSpeed_11(),
	AutoCam_t137911967::get_offset_of_m_FollowVelocity_12(),
	AutoCam_t137911967::get_offset_of_m_FollowTilt_13(),
	AutoCam_t137911967::get_offset_of_m_SpinTurnLimit_14(),
	AutoCam_t137911967::get_offset_of_m_TargetVelocityLowerLimit_15(),
	AutoCam_t137911967::get_offset_of_m_SmoothTurnTime_16(),
	AutoCam_t137911967::get_offset_of_m_LastFlatAngle_17(),
	AutoCam_t137911967::get_offset_of_m_CurrentTurnAmount_18(),
	AutoCam_t137911967::get_offset_of_m_TurnSpeedVelocityChange_19(),
	AutoCam_t137911967::get_offset_of_m_RollUp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (FreeLookCam_t2000732766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[13] = 
{
	FreeLookCam_t2000732766::get_offset_of_m_MoveSpeed_9(),
	FreeLookCam_t2000732766::get_offset_of_m_TurnSpeed_10(),
	FreeLookCam_t2000732766::get_offset_of_m_TurnSmoothing_11(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltMax_12(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltMin_13(),
	FreeLookCam_t2000732766::get_offset_of_m_LockCursor_14(),
	FreeLookCam_t2000732766::get_offset_of_m_VerticalAutoReturn_15(),
	FreeLookCam_t2000732766::get_offset_of_m_LookAngle_16(),
	FreeLookCam_t2000732766::get_offset_of_m_TiltAngle_17(),
	0,
	FreeLookCam_t2000732766::get_offset_of_m_PivotEulers_19(),
	FreeLookCam_t2000732766::get_offset_of_m_PivotTargetRot_20(),
	FreeLookCam_t2000732766::get_offset_of_m_TransformTargetRot_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (HandHeldCam_t450595784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1804[4] = 
{
	HandHeldCam_t450595784::get_offset_of_m_SwaySpeed_11(),
	HandHeldCam_t450595784::get_offset_of_m_BaseSwayAmount_12(),
	HandHeldCam_t450595784::get_offset_of_m_TrackingSwayAmount_13(),
	HandHeldCam_t450595784::get_offset_of_m_TrackingBias_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (LookatTarget_t3260877718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1805[5] = 
{
	LookatTarget_t3260877718::get_offset_of_m_RotationRange_6(),
	LookatTarget_t3260877718::get_offset_of_m_FollowSpeed_7(),
	LookatTarget_t3260877718::get_offset_of_m_FollowAngles_8(),
	LookatTarget_t3260877718::get_offset_of_m_OriginalRotation_9(),
	LookatTarget_t3260877718::get_offset_of_m_FollowVelocity_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (PivotBasedCameraRig_t3786953582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[3] = 
{
	PivotBasedCameraRig_t3786953582::get_offset_of_m_Cam_6(),
	PivotBasedCameraRig_t3786953582::get_offset_of_m_Pivot_7(),
	PivotBasedCameraRig_t3786953582::get_offset_of_m_LastTargetPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (ProtectCameraFromWallClip_t303409715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[15] = 
{
	ProtectCameraFromWallClip_t303409715::get_offset_of_clipMoveTime_2(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_returnTime_3(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_sphereCastRadius_4(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_visualiseInEditor_5(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_closestDistance_6(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_U3CprotectingU3Ek__BackingField_7(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_dontClipTag_8(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Cam_9(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Pivot_10(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_OriginalDist_11(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_MoveVelocity_12(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_CurrentDist_13(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Ray_14(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_Hits_15(),
	ProtectCameraFromWallClip_t303409715::get_offset_of_m_RayHitComparer_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (RayHitComparer_t2205555946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (TargetFieldOfView_t3060904718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[7] = 
{
	TargetFieldOfView_t3060904718::get_offset_of_m_FovAdjustTime_6(),
	TargetFieldOfView_t3060904718::get_offset_of_m_ZoomAmountMultiplier_7(),
	TargetFieldOfView_t3060904718::get_offset_of_m_IncludeEffectsInSize_8(),
	TargetFieldOfView_t3060904718::get_offset_of_m_BoundSize_9(),
	TargetFieldOfView_t3060904718::get_offset_of_m_FovAdjustVelocity_10(),
	TargetFieldOfView_t3060904718::get_offset_of_m_Cam_11(),
	TargetFieldOfView_t3060904718::get_offset_of_m_LastTarget_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (AxisTouchButton_t3522881333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[6] = 
{
	AxisTouchButton_t3522881333::get_offset_of_axisName_2(),
	AxisTouchButton_t3522881333::get_offset_of_axisValue_3(),
	AxisTouchButton_t3522881333::get_offset_of_responseSpeed_4(),
	AxisTouchButton_t3522881333::get_offset_of_returnToCentreSpeed_5(),
	AxisTouchButton_t3522881333::get_offset_of_m_PairedWith_6(),
	AxisTouchButton_t3522881333::get_offset_of_m_Axis_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (ButtonHandler_t823762219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[1] = 
{
	ButtonHandler_t823762219::get_offset_of_Name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (CrossPlatformInputManager_t191731427), -1, sizeof(CrossPlatformInputManager_t191731427_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1812[3] = 
{
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_activeInput_0(),
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_s_TouchInput_1(),
	CrossPlatformInputManager_t191731427_StaticFields::get_offset_of_s_HardwareInput_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (ActiveInputMethod_t139315314)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1813[3] = 
{
	ActiveInputMethod_t139315314::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (VirtualAxis_t4087348596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[3] = 
{
	VirtualAxis_t4087348596::get_offset_of_U3CnameU3Ek__BackingField_0(),
	VirtualAxis_t4087348596::get_offset_of_m_Value_1(),
	VirtualAxis_t4087348596::get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (VirtualButton_t2756566330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[5] = 
{
	VirtualButton_t2756566330::get_offset_of_U3CnameU3Ek__BackingField_0(),
	VirtualButton_t2756566330::get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1(),
	VirtualButton_t2756566330::get_offset_of_m_LastPressedFrame_2(),
	VirtualButton_t2756566330::get_offset_of_m_ReleasedFrame_3(),
	VirtualButton_t2756566330::get_offset_of_m_Pressed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (InputAxisScrollbar_t457958266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[1] = 
{
	InputAxisScrollbar_t457958266::get_offset_of_axis_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (Joystick_t2204371675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[9] = 
{
	Joystick_t2204371675::get_offset_of_MovementRange_2(),
	Joystick_t2204371675::get_offset_of_axesToUse_3(),
	Joystick_t2204371675::get_offset_of_horizontalAxisName_4(),
	Joystick_t2204371675::get_offset_of_verticalAxisName_5(),
	Joystick_t2204371675::get_offset_of_m_StartPos_6(),
	Joystick_t2204371675::get_offset_of_m_UseX_7(),
	Joystick_t2204371675::get_offset_of_m_UseY_8(),
	Joystick_t2204371675::get_offset_of_m_HorizontalVirtualAxis_9(),
	Joystick_t2204371675::get_offset_of_m_VerticalVirtualAxis_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (AxisOption_t3128671669)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1818[4] = 
{
	AxisOption_t3128671669::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (MobileControlRig_t1964600252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (MobileInput_t2025745297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (StandaloneInput_t1343950252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (TiltInput_t1639936653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[5] = 
{
	TiltInput_t1639936653::get_offset_of_mapping_2(),
	TiltInput_t1639936653::get_offset_of_tiltAroundAxis_3(),
	TiltInput_t1639936653::get_offset_of_fullTiltAngle_4(),
	TiltInput_t1639936653::get_offset_of_centreAngleOffset_5(),
	TiltInput_t1639936653::get_offset_of_m_SteerAxis_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (AxisOptions_t3101732129)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1823[3] = 
{
	AxisOptions_t3101732129::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (AxisMapping_t3982445645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[2] = 
{
	AxisMapping_t3982445645::get_offset_of_type_0(),
	AxisMapping_t3982445645::get_offset_of_axisName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (MappingType_t2039944511)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1825[5] = 
{
	MappingType_t2039944511::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (TouchPad_t539039257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[18] = 
{
	TouchPad_t539039257::get_offset_of_axesToUse_2(),
	TouchPad_t539039257::get_offset_of_controlStyle_3(),
	TouchPad_t539039257::get_offset_of_horizontalAxisName_4(),
	TouchPad_t539039257::get_offset_of_verticalAxisName_5(),
	TouchPad_t539039257::get_offset_of_Xsensitivity_6(),
	TouchPad_t539039257::get_offset_of_Ysensitivity_7(),
	TouchPad_t539039257::get_offset_of_m_StartPos_8(),
	TouchPad_t539039257::get_offset_of_m_PreviousDelta_9(),
	TouchPad_t539039257::get_offset_of_m_JoytickOutput_10(),
	TouchPad_t539039257::get_offset_of_m_UseX_11(),
	TouchPad_t539039257::get_offset_of_m_UseY_12(),
	TouchPad_t539039257::get_offset_of_m_HorizontalVirtualAxis_13(),
	TouchPad_t539039257::get_offset_of_m_VerticalVirtualAxis_14(),
	TouchPad_t539039257::get_offset_of_m_Dragging_15(),
	TouchPad_t539039257::get_offset_of_m_Id_16(),
	TouchPad_t539039257::get_offset_of_m_PreviousTouchPos_17(),
	TouchPad_t539039257::get_offset_of_m_Center_18(),
	TouchPad_t539039257::get_offset_of_m_Image_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (AxisOption_t1372819835)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1827[4] = 
{
	AxisOption_t1372819835::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (ControlStyle_t1372986211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1828[4] = 
{
	ControlStyle_t1372986211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (VirtualInput_t2597455733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[4] = 
{
	VirtualInput_t2597455733::get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0(),
	VirtualInput_t2597455733::get_offset_of_m_VirtualAxes_1(),
	VirtualInput_t2597455733::get_offset_of_m_VirtualButtons_2(),
	VirtualInput_t2597455733::get_offset_of_m_AlwaysUseVirtual_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (MainMenu_t3798339593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[3] = 
{
	MainMenu_t3798339593::get_offset_of_main_2(),
	MainMenu_t3798339593::get_offset_of_controls_3(),
	MainMenu_t3798339593::get_offset_of_settings_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (AudioManager_t3267510698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[8] = 
{
	AudioManager_t3267510698::get_offset_of_gameManager_2(),
	AudioManager_t3267510698::get_offset_of_prevScene_3(),
	AudioManager_t3267510698::get_offset_of_currentScene_4(),
	AudioManager_t3267510698::get_offset_of_enabledBlue_5(),
	AudioManager_t3267510698::get_offset_of_audioClips_6(),
	AudioManager_t3267510698::get_offset_of_audioSource_7(),
	AudioManager_t3267510698::get_offset_of_musicVolume_8(),
	AudioManager_t3267510698::get_offset_of_musicVolumeLabel_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (CameraShader_t903615415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (CatCollectible_t4140584543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (FloatController_t2236981907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[3] = 
{
	FloatController_t2236981907::get_offset_of_upperLimit_2(),
	FloatController_t2236981907::get_offset_of_lowerLimit_3(),
	FloatController_t2236981907::get_offset_of_displacement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (GameManager_t1536523654), -1, sizeof(GameManager_t1536523654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1835[21] = 
{
	GameManager_t1536523654::get_offset_of_nPCSprites_Gray_2(),
	GameManager_t1536523654::get_offset_of_nPCSprites_Blue_3(),
	GameManager_t1536523654::get_offset_of_nPCSprites_BlueRed_4(),
	GameManager_t1536523654::get_offset_of_nPCSprites_FullColor_5(),
	GameManager_t1536523654::get_offset_of_mainCamera_6(),
	GameManager_t1536523654::get_offset_of_objectInterationPanel_7(),
	GameManager_t1536523654::get_offset_of_nPCInteractionPanel_8(),
	GameManager_t1536523654::get_offset_of_timeCapsuleInteractionPanel_9(),
	GameManager_t1536523654::get_offset_of_objectInteratPopUpText_10(),
	GameManager_t1536523654::get_offset_of_nPCInteractionText_11(),
	GameManager_t1536523654::get_offset_of_objectInteractionVisible_12(),
	GameManager_t1536523654::get_offset_of_nPCInteractionVisible_13(),
	GameManager_t1536523654::get_offset_of_controls_14(),
	GameManager_t1536523654::get_offset_of_gameEnd_15(),
	GameManager_t1536523654::get_offset_of_inventory_16(),
	GameManager_t1536523654_StaticFields::get_offset_of_Instance_17(),
	GameManager_t1536523654::get_offset_of_showBlue_18(),
	GameManager_t1536523654::get_offset_of_showRed_19(),
	GameManager_t1536523654::get_offset_of_showYellow_20(),
	GameManager_t1536523654::get_offset_of_showGray_21(),
	GameManager_t1536523654::get_offset_of_portalNext_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (HintObjectScripts_t1838699004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[4] = 
{
	HintObjectScripts_t1838699004::get_offset_of_transform_8(),
	HintObjectScripts_t1838699004::get_offset_of_displacement_9(),
	HintObjectScripts_t1838699004::get_offset_of_upperLimit_10(),
	HintObjectScripts_t1838699004::get_offset_of_lowerLimit_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (InteractableObject_t3462999176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1837[6] = 
{
	InteractableObject_t3462999176::get_offset_of_gameManager_2(),
	InteractableObject_t3462999176::get_offset_of_inventory_3(),
	InteractableObject_t3462999176::get_offset_of_enteredTrigger_4(),
	InteractableObject_t3462999176::get_offset_of_poppedUp_5(),
	InteractableObject_t3462999176::get_offset_of_PressYes_6(),
	InteractableObject_t3462999176::get_offset_of_popupMessage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (U3CWaitForPopupU3Ec__Iterator0_t4064588412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1838[4] = 
{
	U3CWaitForPopupU3Ec__Iterator0_t4064588412::get_offset_of_U24this_0(),
	U3CWaitForPopupU3Ec__Iterator0_t4064588412::get_offset_of_U24current_1(),
	U3CWaitForPopupU3Ec__Iterator0_t4064588412::get_offset_of_U24disposing_2(),
	U3CWaitForPopupU3Ec__Iterator0_t4064588412::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (Inventory_t1829814915), -1, sizeof(Inventory_t1829814915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1839[7] = 
{
	Inventory_t1829814915::get_offset_of_itemList_2(),
	Inventory_t1829814915::get_offset_of_gameManager_3(),
	Inventory_t1829814915_StaticFields::get_offset_of_Instance_4(),
	Inventory_t1829814915::get_offset_of_poppedUp_5(),
	Inventory_t1829814915::get_offset_of_recordPiecesLeft_6(),
	Inventory_t1829814915::get_offset_of_tilePiecesLeft_7(),
	Inventory_t1829814915::get_offset_of_catLeftToFind_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (ChickenController_t892107013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[3] = 
{
	ChickenController_t892107013::get_offset_of_upperLimit_12(),
	ChickenController_t892107013::get_offset_of_lowerLimit_13(),
	ChickenController_t892107013::get_offset_of_displacement_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (DialogueController_t636671547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[5] = 
{
	DialogueController_t636671547::get_offset_of_delay_2(),
	DialogueController_t636671547::get_offset_of_fullText_3(),
	DialogueController_t636671547::get_offset_of_currentText_4(),
	DialogueController_t636671547::get_offset_of_coroutine_5(),
	DialogueController_t636671547::get_offset_of_textEffectDone_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (U3CShowTextU3Ec__Iterator0_t187290259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1842[5] = 
{
	U3CShowTextU3Ec__Iterator0_t187290259::get_offset_of_U3CiU3E__1_0(),
	U3CShowTextU3Ec__Iterator0_t187290259::get_offset_of_U24this_1(),
	U3CShowTextU3Ec__Iterator0_t187290259::get_offset_of_U24current_2(),
	U3CShowTextU3Ec__Iterator0_t187290259::get_offset_of_U24disposing_3(),
	U3CShowTextU3Ec__Iterator0_t187290259::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (DragonLadyController_t3554394753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[2] = 
{
	DragonLadyController_t3554394753::get_offset_of_timeCapsulePuzzle_12(),
	DragonLadyController_t3554394753::get_offset_of_timeCapsuleScript_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (DragonLadyLines_t4277637991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (ExampleNPC_t1250306381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (GregController_t1966300252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[1] = 
{
	GregController_t1966300252::get_offset_of_foundPieces_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (GregLines_t468564499), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (InfinityChickenLines_t1415599192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (NPCController_t4025312893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[10] = 
{
	NPCController_t4025312893::get_offset_of_gameManager_2(),
	NPCController_t4025312893::get_offset_of_nPCName_3(),
	NPCController_t4025312893::get_offset_of_nPCImage_4(),
	NPCController_t4025312893::get_offset_of_nPCLines_5(),
	NPCController_t4025312893::get_offset_of_enteredTrigger_6(),
	NPCController_t4025312893::get_offset_of_poppedUp_7(),
	NPCController_t4025312893::get_offset_of_PressYes_8(),
	NPCController_t4025312893::get_offset_of_defaultLines_9(),
	NPCController_t4025312893::get_offset_of_moveToNextInteraction_10(),
	NPCController_t4025312893::get_offset_of_popupMessage_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (NPCLines_t3086426555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[4] = 
{
	NPCLines_t3086426555::get_offset_of_characterLines_2(),
	NPCLines_t3086426555::get_offset_of_interaction_3(),
	NPCLines_t3086426555::get_offset_of_line_4(),
	NPCLines_t3086426555::get_offset_of_numInteractions_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (UD8yvindController_t78099106), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (UD8yvindLines_t1224904776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (Void2Controller_t2288085959), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (VoidController_t1707887450), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (VoidEndLines_t496412888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (VoidLines_t1497668199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (VoidLines2_t1500944999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (ZalgoController_t1104200838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[1] = 
{
	ZalgoController_t1104200838::get_offset_of_foundPieces_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (ZalgoLines_t3886849182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (ZalgoLines1_t1744554154), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (ZalgoLines2_t2147838681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (Parallaxing_t3243452385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[5] = 
{
	Parallaxing_t3243452385::get_offset_of_backgrounds_2(),
	Parallaxing_t3243452385::get_offset_of_parallaxScales_3(),
	Parallaxing_t3243452385::get_offset_of_smoothing_4(),
	Parallaxing_t3243452385::get_offset_of_cam_5(),
	Parallaxing_t3243452385::get_offset_of_previousCamPos_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (PlayerController_t3050511953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[2] = 
{
	PlayerController_t3050511953::get_offset_of_rigidbody_2(),
	PlayerController_t3050511953::get_offset_of_inventory_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (PortalController_t3019035344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[5] = 
{
	PortalController_t3019035344::get_offset_of_gameManager_2(),
	PortalController_t3019035344::get_offset_of_scenename_3(),
	PortalController_t3019035344::get_offset_of_PressYes_4(),
	PortalController_t3019035344::get_offset_of_enteredTrigger_5(),
	PortalController_t3019035344::get_offset_of_poppedUp_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (PortHoleController_t2306779974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[8] = 
{
	PortHoleController_t2306779974::get_offset_of_toIndex_2(),
	PortHoleController_t2306779974::get_offset_of_PressYes_3(),
	PortHoleController_t2306779974::get_offset_of_portHoles_4(),
	PortHoleController_t2306779974::get_offset_of_player_5(),
	PortHoleController_t2306779974::get_offset_of_mainCamera_6(),
	PortHoleController_t2306779974::get_offset_of_toPortHole_7(),
	PortHoleController_t2306779974::get_offset_of_enteredTrigger_8(),
	PortHoleController_t2306779974::get_offset_of_passethrough_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (U3CCheckHoldU3Ec__Iterator0_t2116908788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[3] = 
{
	U3CCheckHoldU3Ec__Iterator0_t2116908788::get_offset_of_U24current_0(),
	U3CCheckHoldU3Ec__Iterator0_t2116908788::get_offset_of_U24disposing_1(),
	U3CCheckHoldU3Ec__Iterator0_t2116908788::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (PressSomethingController_t2288251899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[2] = 
{
	PressSomethingController_t2288251899::get_offset_of_anim_2(),
	PressSomethingController_t2288251899::get_offset_of_sprite_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (U3CWaitForAnimationU3Ec__Iterator0_t1816432686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[4] = 
{
	U3CWaitForAnimationU3Ec__Iterator0_t1816432686::get_offset_of_U24this_0(),
	U3CWaitForAnimationU3Ec__Iterator0_t1816432686::get_offset_of_U24current_1(),
	U3CWaitForAnimationU3Ec__Iterator0_t1816432686::get_offset_of_U24disposing_2(),
	U3CWaitForAnimationU3Ec__Iterator0_t1816432686::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (BluePuzzleController_t3681843975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[3] = 
{
	BluePuzzleController_t3681843975::get_offset_of_aquiredRecord_2(),
	BluePuzzleController_t3681843975::get_offset_of_playedRecord_3(),
	BluePuzzleController_t3681843975::get_offset_of_finishedPuzzle_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (TimeCapsuleScript_t4202324678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1870[4] = 
{
	TimeCapsuleScript_t4202324678::get_offset_of_inputField_2(),
	TimeCapsuleScript_t4202324678::get_offset_of_gameManager_3(),
	TimeCapsuleScript_t4202324678::get_offset_of_nPCName_4(),
	TimeCapsuleScript_t4202324678::get_offset_of_finishedPuzzle_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (YellowPuzzleController_t1410758895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (RecordCollectible_t2250805697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[8] = 
{
	RecordCollectible_t2250805697::get_offset_of_inTrigger_2(),
	RecordCollectible_t2250805697::get_offset_of_playerCollider_3(),
	RecordCollectible_t2250805697::get_offset_of_completedRecord_4(),
	RecordCollectible_t2250805697::get_offset_of_isActive_5(),
	RecordCollectible_t2250805697::get_offset_of_transform_6(),
	RecordCollectible_t2250805697::get_offset_of_displacement_7(),
	RecordCollectible_t2250805697::get_offset_of_upperLimit_8(),
	RecordCollectible_t2250805697::get_offset_of_lowerLimit_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (RecordCollectible2_t2046988737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1873[1] = 
{
	RecordCollectible2_t2046988737::get_offset_of_completedRecord_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (TileCollectible_t602297632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1874[2] = 
{
	TileCollectible_t602297632::get_offset_of_DragonLady_8(),
	TileCollectible_t602297632::get_offset_of_Zalgo_9(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
