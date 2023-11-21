#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GridMap.Model.Cell>
struct Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2;
// System.Action`1<GridMap.Behaviours.IGridContentBehaviour>
struct Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Func`2<UnityEngine.Vector2Int,System.Int32>
struct Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D;
// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>
struct HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>
struct IEnumerable_1_t8845214D7CADFAAD7AB98132A368905184A79DDF;
// System.Collections.Generic.IEqualityComparer`1<GridMap.Behaviours.IGridContentBehaviour>
struct IEqualityComparer_1_tA295E21FCCEEC40B1C34CAA189B54A48A2B78700;
// System.Collections.Generic.List`1<GridMap.Behaviours.CellBehaviour>
struct List_1_t0BDFA72171029578AD4F89D251C8CAA9388427C7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.HashSet`1/Slot<GridMap.Behaviours.IGridContentBehaviour>[]
struct SlotU5BU5D_t1C505640DECB3D1D73C41184D92E2A4CB58406D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// GridMap.Model.Cell
struct Cell_t04CEDAEE7FA545B6433EDA832A263DF8E4516A3F;
// GridMap.Behaviours.CellBehaviour
struct CellBehaviour_tDF09E96675A758F09737C78EE3205F24D18BF1A0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// CustomInput.Draggable
struct Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GridMap.Behaviours.GridBehaviour
struct GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86;
// GridMap.Behaviours.GridContentLocator
struct GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9;
// GridMap.Behaviours.GridContentPicker
struct GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767;
// GridMap.Behaviours.GridContentPool
struct GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4;
// GridMap.Behaviours.GridCoordinatesConverter
struct GridCoordinatesConverter_tE3AA1FA440B8BADA12D68817AD375382C5ED71C9;
// GridMap.Model.IGrid
struct IGrid_t27BC376154A2584A4CF4FE19152D2923ED64DEC4;
// GridMap.Behaviours.IGridCellFactory
struct IGridCellFactory_t3EDA8524744B4052785E38E434632A5BDB5FECD8;
// GridMap.Model.IGridContent
struct IGridContent_tF5E7F29B3C181AF56F1E6777CD47B353C09FB4BA;
// GridMap.Behaviours.IGridContentBehaviour
struct IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31;
// GridMap.Behaviours.IGridCoordinatesConverter
struct IGridCoordinatesConverter_t630F655A56BB3B1CD9369AD7616C9A5F87649E75;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CustomInput.Picking.PickMarker
struct PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1;
// CustomInput.Picking.Pickable
struct Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CustomInput.Picking.PickMarker/<>c
struct U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteDrawMode_t0271A7FCE161CDD08E390C53B339CA53CBDEB278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F47A33E3D14122E45999A73B6B284FD675D4DC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE86E7CCF27AF3E065D486AE90E5730E1EB3653A4;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE1016020FC554EA1A6E28F1378D43A6C1375CE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m740BBB26956A304D00FF664015D4A18DB5EF7B2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86_m5129CE0EA88ED72D5E04817CBE5E40E1A75A9B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767_m36C56D2FD7936E4870C39A634FB039FE5D0145DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__6_0_mAC591D90929CBA4F2F8DF3077178B2434FD72C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__6_1_m4310B908E9F710897DA925D31622819A6ABD6F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__6_2_m746D18C2BE0D2AF9B72B3FBFF3A8A129D7372AFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__6_3_m18D8B13CC73B4427FA3B0BABC2E85D26C6420C76_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>
struct HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t1C505640DECB3D1D73C41184D92E2A4CB58406D4* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// GridMap.Model.Cell
struct Cell_t04CEDAEE7FA545B6433EDA832A263DF8E4516A3F  : public RuntimeObject
{
	// GridMap.Model.IGridContent GridMap.Model.Cell::_content
	RuntimeObject* ____content_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Extentions.TransformExtensions
struct TransformExtensions_t5D322C2569DDEF458E6E1385E56D92BFFC71B75A  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// CustomInput.Picking.PickMarker/<>c
struct U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>
struct Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// GridMap.Behaviours.GridCoordinatesConverter
struct GridCoordinatesConverter_tE3AA1FA440B8BADA12D68817AD375382C5ED71C9  : public RuntimeObject
{
	// UnityEngine.Vector2Int GridMap.Behaviours.GridCoordinatesConverter::_gridAxisDirection
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ____gridAxisDirection_0;
	// UnityEngine.Transform GridMap.Behaviours.GridCoordinatesConverter::_leftTopPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____leftTopPoint_1;
	// System.Single GridMap.Behaviours.GridCoordinatesConverter::_cellSize
	float ____cellSize_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.Action`1<GridMap.Model.Cell>
struct Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2  : public MulticastDelegate_t
{
};

// System.Action`1<GridMap.Behaviours.IGridContentBehaviour>
struct Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector2Int,System.Int32>
struct Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// CustomInput.Draggable
struct Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CustomInput.Draggable::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// System.Action CustomInput.Draggable::DraggingBegun
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DraggingBegun_5;
	// System.Action CustomInput.Draggable::DraggingFinished
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DraggingFinished_6;
};

// GridMap.Behaviours.GridBehaviour
struct GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GridMap.Behaviours.GridBehaviour::_gridWidth
	int32_t ____gridWidth_6;
	// System.Int32 GridMap.Behaviours.GridBehaviour::_gridHeight
	int32_t ____gridHeight_7;
	// GridMap.Behaviours.CellBehaviour GridMap.Behaviours.GridBehaviour::_cellPrefab
	CellBehaviour_tDF09E96675A758F09737C78EE3205F24D18BF1A0* ____cellPrefab_8;
	// UnityEngine.Transform GridMap.Behaviours.GridBehaviour::_container
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____container_9;
	// UnityEngine.Transform GridMap.Behaviours.GridBehaviour::_leftTopPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____leftTopPoint_10;
	// GridMap.Model.IGrid GridMap.Behaviours.GridBehaviour::_grid
	RuntimeObject* ____grid_11;
	// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridBehaviour::_contents
	HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* ____contents_12;
	// System.Collections.Generic.List`1<GridMap.Behaviours.CellBehaviour> GridMap.Behaviours.GridBehaviour::_cells
	List_1_t0BDFA72171029578AD4F89D251C8CAA9388427C7* ____cells_13;
	// GridMap.Behaviours.IGridCellFactory GridMap.Behaviours.GridBehaviour::_gridCellFactory
	RuntimeObject* ____gridCellFactory_14;
	// GridMap.Behaviours.IGridCoordinatesConverter GridMap.Behaviours.GridBehaviour::_gridCoordinatesConverter
	RuntimeObject* ____gridCoordinatesConverter_15;
	// System.Action`1<GridMap.Model.Cell> GridMap.Behaviours.GridBehaviour::CellClicked
	Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* ___CellClicked_16;
};

// GridMap.Behaviours.GridContentLocator
struct GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GridMap.Behaviours.GridContentPool GridMap.Behaviours.GridContentLocator::_gridContentPool
	GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* ____gridContentPool_4;
	// GridMap.Behaviours.GridBehaviour GridMap.Behaviours.GridContentLocator::_gridBehaviour
	GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* ____gridBehaviour_5;
	// GridMap.Behaviours.GridContentPicker GridMap.Behaviours.GridContentLocator::_gridContentPicker
	GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* ____gridContentPicker_6;
	// UnityEngine.Vector2 GridMap.Behaviours.GridContentLocator::_previousDraggablePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____previousDraggablePosition_7;
};

// GridMap.Behaviours.GridContentPicker
struct GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GridMap.Behaviours.GridContentPool GridMap.Behaviours.GridContentPicker::_gridContentPool
	GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* ____gridContentPool_4;
	// GridMap.Behaviours.IGridContentBehaviour GridMap.Behaviours.GridContentPicker::_pickedContent
	RuntimeObject* ____pickedContent_5;
};

// GridMap.Behaviours.GridContentPool
struct GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::_gridContents
	HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* ____gridContents_4;
	// System.Action`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::DraggingBegun
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___DraggingBegun_5;
	// System.Action`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::DraggingFinished
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___DraggingFinished_6;
	// System.Action`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::ContentDestroyed
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___ContentDestroyed_7;
	// System.Action`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::ContentPicked
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___ContentPicked_8;
	// System.Action`1<GridMap.Behaviours.IGridContentBehaviour> GridMap.Behaviours.GridContentPool::ContentUnpicked
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___ContentUnpicked_9;
};

// CustomInput.Picking.PickMarker
struct PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer CustomInput.Picking.PickMarker::_spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____spriteRenderer_6;
	// System.Single CustomInput.Picking.PickMarker::_cellSize
	float ____cellSize_7;
	// System.Single CustomInput.Picking.PickMarker::_padding
	float ____padding_8;
};

// CustomInput.Picking.Pickable
struct Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CustomInput.Picking.PickMarker CustomInput.Picking.Pickable::_marker
	PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* ____marker_4;
	// System.Boolean CustomInput.Picking.Pickable::_isPicked
	bool ____isPicked_5;
	// System.Boolean CustomInput.Picking.Pickable::_isDragged
	bool ____isDragged_6;
	// System.Action CustomInput.Picking.Pickable::Picked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Picked_7;
	// System.Action CustomInput.Picking.Pickable::Unpicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Unpicked_8;
};

// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>

// System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>

// GridMap.Model.Cell

// GridMap.Model.Cell

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Extentions.TransformExtensions

// Extentions.TransformExtensions

// CustomInput.Picking.PickMarker/<>c
struct U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields
{
	// CustomInput.Picking.PickMarker/<>c CustomInput.Picking.PickMarker/<>c::<>9
	U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2Int,System.Int32> CustomInput.Picking.PickMarker/<>c::<>9__6_0
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___U3CU3E9__6_0_1;
	// System.Func`2<UnityEngine.Vector2Int,System.Int32> CustomInput.Picking.PickMarker/<>c::<>9__6_1
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___U3CU3E9__6_1_2;
	// System.Func`2<UnityEngine.Vector2Int,System.Int32> CustomInput.Picking.PickMarker/<>c::<>9__6_2
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___U3CU3E9__6_2_3;
	// System.Func`2<UnityEngine.Vector2Int,System.Int32> CustomInput.Picking.PickMarker/<>c::<>9__6_3
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___U3CU3E9__6_3_4;
};

// CustomInput.Picking.PickMarker/<>c

// System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>

// System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// GridMap.Behaviours.GridCoordinatesConverter

// GridMap.Behaviours.GridCoordinatesConverter

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.Action`1<GridMap.Model.Cell>

// System.Action`1<GridMap.Model.Cell>

// System.Action`1<GridMap.Behaviours.IGridContentBehaviour>

// System.Action`1<GridMap.Behaviours.IGridContentBehaviour>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<UnityEngine.Vector2Int,System.Int32>

// System.Func`2<UnityEngine.Vector2Int,System.Int32>

// System.Action

// System.Action

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// CustomInput.Draggable

// CustomInput.Draggable

// GridMap.Behaviours.GridBehaviour

// GridMap.Behaviours.GridBehaviour

// GridMap.Behaviours.GridContentLocator

// GridMap.Behaviours.GridContentLocator

// GridMap.Behaviours.GridContentPicker

// GridMap.Behaviours.GridContentPicker

// GridMap.Behaviours.GridContentPool

// GridMap.Behaviours.GridContentPool

// CustomInput.Picking.PickMarker

// CustomInput.Picking.PickMarker

// CustomInput.Picking.Pickable

// CustomInput.Picking.Pickable
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Vector2Int,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720_gshared (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Max<UnityEngine.Vector2Int>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_gshared (RuntimeObject* ___0_source, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___1_selector, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Min<UnityEngine.Vector2Int>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_gshared (RuntimeObject* ___0_source, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___1_selector, const RuntimeMethod* method) ;

// T UnityEngine.Object::FindObjectOfType<GridMap.Behaviours.GridContentPool>()
inline GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D (const RuntimeMethod* method)
{
	return ((  GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<GridMap.Behaviours.GridBehaviour>()
inline GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* Object_FindObjectOfType_TisGridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86_m5129CE0EA88ED72D5E04817CBE5E40E1A75A9B55 (const RuntimeMethod* method)
{
	return ((  GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<GridMap.Behaviours.GridContentPicker>()
inline GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* Object_FindObjectOfType_TisGridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767_m36C56D2FD7936E4870C39A634FB039FE5D0145DE (const RuntimeMethod* method)
{
	return ((  GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void System.Action`1<GridMap.Behaviours.IGridContentBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259 (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GridMap.Behaviours.GridContentPool::add_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_DraggingBegun_m5F8CBA497E7BF2C0AD53D69DFD6933FE5A29C69F (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::add_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_DraggingFinished_m9C3624E5552BBCC4819216EE523F4723C2B41911 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<GridMap.Model.Cell>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m957A1AB098F648821A3F5801B8A683920B7CDC99 (Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void GridMap.Behaviours.GridBehaviour::add_CellClicked(System.Action`1<GridMap.Model.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridBehaviour_add_CellClicked_m7CC8A72B3AB840B8EE3BAC23BDDD431D02C574F9 (GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* __this, Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::remove_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_DraggingBegun_mC6883F2A999FF1644DE8B35A20401014D2D5C51F (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::remove_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_DraggingFinished_m85E14033AA3B9B4D6F5E6A5EF7D4437FBCECE405 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridBehaviour::remove_CellClicked(System.Action`1<GridMap.Model.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridBehaviour_remove_CellClicked_mCDD949CF425E15F359BD17BFE459FAA5A53F2400 (GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* __this, Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* ___0_value, const RuntimeMethod* method) ;
// System.Boolean GridMap.Behaviours.GridBehaviour::TryLocate(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridBehaviour_TryLocate_m0CE08D35BC1CE4F103037FF6F27F5AFD8D687CA0 (GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) ;
// GridMap.Behaviours.IGridContentBehaviour GridMap.Behaviours.GridContentPicker::get_PickedContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GridContentPicker_get_PickedContent_m3097838870716E129F9F830AAB963FC11F7A2C70_inline (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) ;
// System.Boolean GridMap.Behaviours.GridBehaviour::TryLocate(GridMap.Behaviours.IGridContentBehaviour,GridMap.Model.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridBehaviour_TryLocate_m0C8768C824898D72007E6B56D48D502F0ACD1EFC (GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* __this, RuntimeObject* ___0_gridContent, Cell_t04CEDAEE7FA545B6433EDA832A263DF8E4516A3F* ___1_cell, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::add_ContentPicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_ContentPicked_mC92ABFBD3AEE481CF9689A346107EFE157757226 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::add_ContentUnpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_ContentUnpicked_mEE23D9FEEA36A25E952FF25DA6DB48B0C0B85BC7 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::remove_ContentPicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_ContentPicked_m0CD165407B296017C65509D0ADABF557D4630E6A (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::remove_ContentUnpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_ContentUnpicked_mAFBD2EE14B00DF9B324D5F5BB4D06E8877B7F34E (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>::GetEnumerator()
inline Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4 (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E (*) (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>::Dispose()
inline void Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5 (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_inline (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void GridMap.Behaviours.GridContentPool::UnsubscribeFromContent(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_UnsubscribeFromContent_m942D69C9F5A9E3A3F3834EF6648B358A72C7AE5E (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) ;
// System.Void GridMap.Behaviours.GridContentPool::SubscribeOnContent(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_SubscribeOnContent_m2C6E6DACDF995903CD1A4A2ADDF86196AFB047DD (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<GridMap.Behaviours.IGridContentBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09 (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>::Add(T)
inline bool HashSet_1_Add_mE1016020FC554EA1A6E28F1378D43A6C1375CE62 (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void System.Action`1<GridMap.Behaviours.IGridContentBehaviour>::Invoke(T)
inline void Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.HashSet`1<GridMap.Behaviours.IGridContentBehaviour>::.ctor()
inline void HashSet_1__ctor_m740BBB26956A304D00FF664015D4A18DB5EF7B2B (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Extentions.TransformExtensions::GetPosition2D(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransformExtensions_GetPosition2D_mE17B10A96B04550E95D85FFDE64F8D752FC0B8B8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.PickMarker::SwitchOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_SwitchOff_m51FF92B89636B2F9EE999183972B034195A8600A (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.PickMarker::Init(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_Init_m36FD929F5B8D5880AB4B53BAD5E27C8EF34C927C (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, RuntimeObject* ___0_shape, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.Pickable::Unpick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Unpick_mAE8AAD16F060704ED33F421EEC04126749F741B2 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.Pickable::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Pick_m8965C41BA17D4A5392D6A4617940D85858EE1846 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.PickMarker::SwitchOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_SwitchOn_m137E66BEB53124CD3B48EA3C0EE19CC4D39D20EA (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) ;
// UnityEngine.SpriteDrawMode UnityEngine.SpriteRenderer::get_drawMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Vector2Int,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720 (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Linq.Enumerable::Max<UnityEngine.Vector2Int>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7 (RuntimeObject* ___0_source, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___1_selector, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*, const RuntimeMethod*))Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_gshared)(___0_source, ___1_selector, method);
}
// System.Int32 System.Linq.Enumerable::Min<UnityEngine.Vector2Int>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3 (RuntimeObject* ___0_source, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___1_selector, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*, const RuntimeMethod*))Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_gshared)(___0_source, ___1_selector, method);
}
// System.Void CustomInput.Picking.PickMarker::ComputeSize(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_ComputeSize_mD1C8056B46214F6678D948A8163214DCA9FF9D07 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_maxX, int32_t ___1_minX, int32_t ___2_maxY, int32_t ___3_minY, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.PickMarker::ComputePosition(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_ComputePosition_mD6ADA772507A298A31263C42F74CAFDFE8DF6215 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_maxX, int32_t ___1_minX, int32_t ___2_maxY, int32_t ___3_minY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single CustomInput.Picking.PickMarker::ComputeSizeCoordinate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickMarker_ComputeSizeCoordinate_m7081952BE8AB7028795CEB9B740D215F03589661 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_max, int32_t ___1_min, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_size_mDC603B73F10D51A8FBD6D2592CD85719A3043A1B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single CustomInput.Picking.PickMarker::ComputePositionCoordinate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickMarker_ComputePositionCoordinate_mDEA3547BD6E37813BD531476CDAA205A2ECDB44A (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_max, int32_t ___1_min, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void CustomInput.Picking.PickMarker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB9D23DE651FA007E93B3CA78BDA1AC8E9D044478 (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridMap.Behaviours.GridContentLocator::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnValidate_m4CBF41148F66A83F3BC75CD97E3AFE31F913F7B7 (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86_m5129CE0EA88ED72D5E04817CBE5E40E1A75A9B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767_m36C56D2FD7936E4870C39A634FB039FE5D0145DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool ??= FindObjectOfType<GridContentPool>();
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_1;
		L_1 = Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D(Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D_RuntimeMethod_var);
		__this->____gridContentPool_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gridContentPool_4), (void*)L_1);
	}

IL_0013:
	{
		// _gridBehaviour ??= FindObjectOfType<GridBehaviour>();
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_2 = __this->____gridBehaviour_5;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_3;
		L_3 = Object_FindObjectOfType_TisGridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86_m5129CE0EA88ED72D5E04817CBE5E40E1A75A9B55(Object_FindObjectOfType_TisGridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86_m5129CE0EA88ED72D5E04817CBE5E40E1A75A9B55_RuntimeMethod_var);
		__this->____gridBehaviour_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gridBehaviour_5), (void*)L_3);
	}

IL_0026:
	{
		// _gridContentPicker ??= FindObjectOfType<GridContentPicker>();
		GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* L_4 = __this->____gridContentPicker_6;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* L_5;
		L_5 = Object_FindObjectOfType_TisGridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767_m36C56D2FD7936E4870C39A634FB039FE5D0145DE(Object_FindObjectOfType_TisGridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767_m36C56D2FD7936E4870C39A634FB039FE5D0145DE_RuntimeMethod_var);
		__this->____gridContentPicker_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gridContentPicker_6), (void*)L_5);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnEnable_mE4DFC2624D41052FC7498B79C39106B403DFEDE8 (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool.DraggingBegun += OnContentDraggingBegun;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GridContentPool_add_DraggingBegun_m5F8CBA497E7BF2C0AD53D69DFD6933FE5A29C69F(L_0, L_1, NULL);
		// _gridContentPool.DraggingFinished += OnContentDraggingFinished;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_2 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		GridContentPool_add_DraggingFinished_m9C3624E5552BBCC4819216EE523F4723C2B41911(L_2, L_3, NULL);
		// _gridBehaviour.CellClicked += OnCellClicked;
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_4 = __this->____gridBehaviour_5;
		Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* L_5 = (Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2*)il2cpp_codegen_object_new(Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m957A1AB098F648821A3F5801B8A683920B7CDC99(L_5, __this, (intptr_t)((void*)GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		GridBehaviour_add_CellClicked_m7CC8A72B3AB840B8EE3BAC23BDDD431D02C574F9(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnDisable_m44019A1D397CE87341C8770C3A84793952AEE38D (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool.DraggingBegun -= OnContentDraggingBegun;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GridContentPool_remove_DraggingBegun_mC6883F2A999FF1644DE8B35A20401014D2D5C51F(L_0, L_1, NULL);
		// _gridContentPool.DraggingFinished -= OnContentDraggingFinished;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_2 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		GridContentPool_remove_DraggingFinished_m85E14033AA3B9B4D6F5E6A5EF7D4437FBCECE405(L_2, L_3, NULL);
		// _gridBehaviour.CellClicked -= OnCellClicked;
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_4 = __this->____gridBehaviour_5;
		Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2* L_5 = (Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2*)il2cpp_codegen_object_new(Action_1_tA7514D1FF343BEC1FF4DD8C2F1D2B01CB5F08DE2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m957A1AB098F648821A3F5801B8A683920B7CDC99(L_5, __this, (intptr_t)((void*)GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		GridBehaviour_remove_CellClicked_mCDD949CF425E15F359BD17BFE459FAA5A53F2400(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::OnContentDraggingBegun(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnContentDraggingBegun_m366D505888CF675F80CE9CC5C2D0103AD5C614D3 (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _previousDraggablePosition = gridContent.Position;
		RuntimeObject* L_0 = ___0_gridContent;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(10 /* UnityEngine.Vector2 GridMap.Behaviours.IGridContentBehaviour::get_Position() */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_0);
		__this->____previousDraggablePosition_7 = L_1;
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::OnContentDraggingFinished(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnContentDraggingFinished_mED22EBCA861C2E00C0F5688CBD64FA34A50CA2BC (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_gridBehaviour.TryLocate(gridContent) == false)
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_0 = __this->____gridBehaviour_5;
		RuntimeObject* L_1 = ___0_gridContent;
		NullCheck(L_0);
		bool L_2;
		L_2 = GridBehaviour_TryLocate_m0CE08D35BC1CE4F103037FF6F27F5AFD8D687CA0(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// gridContent.Locate(_previousDraggablePosition);
		RuntimeObject* L_3 = ___0_gridContent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->____previousDraggablePosition_7;
		NullCheck(L_3);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(12 /* System.Void GridMap.Behaviours.IGridContentBehaviour::Locate(UnityEngine.Vector2) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::OnCellClicked(GridMap.Model.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator_OnCellClicked_m00A1EA2FC6DB1B2025D08DAF1D60AD798F5FEB06 (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, Cell_t04CEDAEE7FA545B6433EDA832A263DF8E4516A3F* ___0_cell, const RuntimeMethod* method) 
{
	{
		// if (_gridContentPicker.PickedContent != null)
		GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* L_0 = __this->____gridContentPicker_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GridContentPicker_get_PickedContent_m3097838870716E129F9F830AAB963FC11F7A2C70_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// _gridBehaviour.TryLocate(_gridContentPicker.PickedContent, cell);
		GridBehaviour_t7805031FABC678C7DD70C1B44B6BACCBC04F2D86* L_2 = __this->____gridBehaviour_5;
		GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* L_3 = __this->____gridContentPicker_6;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = GridContentPicker_get_PickedContent_m3097838870716E129F9F830AAB963FC11F7A2C70_inline(L_3, NULL);
		Cell_t04CEDAEE7FA545B6433EDA832A263DF8E4516A3F* L_5 = ___0_cell;
		NullCheck(L_2);
		bool L_6;
		L_6 = GridBehaviour_TryLocate_m0C8768C824898D72007E6B56D48D502F0ACD1EFC(L_2, L_4, L_5, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentLocator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentLocator__ctor_m77D7646DD4D6DB21599815C39C18C7F2117DA6A1 (GridContentLocator_t319A17BB20E66A64EC339EF990703FCF114D43E9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GridMap.Behaviours.IGridContentBehaviour GridMap.Behaviours.GridContentPicker::get_PickedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridContentPicker_get_PickedContent_m3097838870716E129F9F830AAB963FC11F7A2C70 (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	{
		// public IGridContentBehaviour PickedContent => _pickedContent;
		RuntimeObject* L_0 = __this->____pickedContent_5;
		return L_0;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker_OnValidate_m000148FE9F7383238A2BC31010CD046EA42EDB74 (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool ??= FindObjectOfType<GridContentPool>();
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_1;
		L_1 = Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D(Object_FindObjectOfType_TisGridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4_m4C429A19E7B5AF519F3DD5BBC7DB39454B88036D_RuntimeMethod_var);
		__this->____gridContentPool_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gridContentPool_4), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker_OnEnable_m85E089C34E588F9CC3D4117C4B0A24A56395D13D (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool.ContentPicked += OnContentPicked;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GridContentPool_add_ContentPicked_mC92ABFBD3AEE481CF9689A346107EFE157757226(L_0, L_1, NULL);
		// _gridContentPool.ContentUnpicked += OnContentUnpicked;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_2 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		GridContentPool_add_ContentUnpicked_mEE23D9FEEA36A25E952FF25DA6DB48B0C0B85BC7(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker_OnDisable_m5351B1CB0BD4D8015137DF14FF4F7736ECC5F072 (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gridContentPool.ContentPicked -= OnContentPicked;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_0 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GridContentPool_remove_ContentPicked_m0CD165407B296017C65509D0ADABF557D4630E6A(L_0, L_1, NULL);
		// _gridContentPool.ContentUnpicked -= OnContentUnpicked;
		GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* L_2 = __this->____gridContentPool_4;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		GridContentPool_remove_ContentUnpicked_mAFBD2EE14B00DF9B324D5F5BB4D06E8877B7F34E(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::OnContentPicked(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker_OnContentPicked_m57BF7F0A60234416EAAA5F62B35B4B9C3857D86B (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, RuntimeObject* ___0_newPickedContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pickedContent == newPickedContent)
		RuntimeObject* L_0 = __this->____pickedContent_5;
		RuntimeObject* L_1 = ___0_newPickedContent;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (_pickedContent != null)
		RuntimeObject* L_2 = __this->____pickedContent_5;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// _pickedContent.Unpick();
		RuntimeObject* L_3 = __this->____pickedContent_5;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GridMap.Behaviours.IGridContentBehaviour::Unpick() */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_3);
	}

IL_001d:
	{
		// _pickedContent = newPickedContent;
		RuntimeObject* L_4 = ___0_newPickedContent;
		__this->____pickedContent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pickedContent_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::OnContentUnpicked(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker_OnContentUnpicked_mF646E362138B7B3B4F6672E2ACBD91B7BD1C4EA0 (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, RuntimeObject* ___0_unpickedContent, const RuntimeMethod* method) 
{
	{
		// if (_pickedContent != unpickedContent)
		RuntimeObject* L_0 = __this->____pickedContent_5;
		RuntimeObject* L_1 = ___0_unpickedContent;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _pickedContent = null;
		__this->____pickedContent_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pickedContent_5), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPicker__ctor_m5DEE7F4B3347BAFEB35DB8E8F6DC09C0493C7155 (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridMap.Behaviours.GridContentPool::add_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_DraggingBegun_m5F8CBA497E7BF2C0AD53D69DFD6933FE5A29C69F (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingBegun_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___DraggingBegun_5);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::remove_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_DraggingBegun_mC6883F2A999FF1644DE8B35A20401014D2D5C51F (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingBegun_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___DraggingBegun_5);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::add_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_DraggingFinished_m9C3624E5552BBCC4819216EE523F4723C2B41911 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___DraggingFinished_6);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::remove_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_DraggingFinished_m85E14033AA3B9B4D6F5E6A5EF7D4437FBCECE405 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___DraggingFinished_6);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::add_ContentDestroyed(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_ContentDestroyed_m96AF54241703B73495F4843EB7C5605CD3D7FF19 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentDestroyed_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentDestroyed_7);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::remove_ContentDestroyed(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_ContentDestroyed_mC5DA2C9D8BBD7CEC12C554DCE3864D6BBDCB69F1 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentDestroyed_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentDestroyed_7);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::add_ContentPicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_ContentPicked_mC92ABFBD3AEE481CF9689A346107EFE157757226 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentPicked_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentPicked_8);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::remove_ContentPicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_ContentPicked_m0CD165407B296017C65509D0ADABF557D4630E6A (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentPicked_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentPicked_8);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::add_ContentUnpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_add_ContentUnpicked_mEE23D9FEEA36A25E952FF25DA6DB48B0C0B85BC7 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentUnpicked_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentUnpicked_9);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::remove_ContentUnpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_remove_ContentUnpicked_mAFBD2EE14B00DF9B324D5F5BB4D06E8877B7F34E (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_1 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* V_2 = NULL;
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentUnpicked_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = V_0;
		V_1 = L_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_2 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)Castclass((RuntimeObject*)L_4, Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var));
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3** L_5 = (&__this->___ContentUnpicked_9);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_6 = V_2;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = V_1;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = V_0;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_9) == ((RuntimeObject*)(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnEnable_m144249ADC38E9BE032A229D9661822DD733FAD5C (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// foreach (IGridContentBehaviour gridContent in _gridContents)
		HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* L_0 = __this->____gridContents_4;
		NullCheck(L_0);
		Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E L_1;
		L_1 = HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4(L_0, HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5((&V_0), Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				// foreach (IGridContentBehaviour gridContent in _gridContents)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_inline((&V_0), Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_RuntimeMethod_var);
				V_1 = L_2;
				// UnsubscribeFromContent(gridContent);
				RuntimeObject* L_3 = V_1;
				GridContentPool_UnsubscribeFromContent_m942D69C9F5A9E3A3F3834EF6648B358A72C7AE5E(__this, L_3, NULL);
				// SubscribeOnContent(gridContent);
				RuntimeObject* L_4 = V_1;
				GridContentPool_SubscribeOnContent_m2C6E6DACDF995903CD1A4A2ADDF86196AFB047DD(__this, L_4, NULL);
			}

IL_0024_1:
			{
				// foreach (IGridContentBehaviour gridContent in _gridContents)
				bool L_5;
				L_5 = Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09((&V_0), Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnDisable_mCD026D81D42763C2791F7FBC775B032DCF7D6B5B (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// foreach (IGridContentBehaviour gridContent in _gridContents)
		HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* L_0 = __this->____gridContents_4;
		NullCheck(L_0);
		Enumerator_t1D627EE49EE589AEBDA0FC0E76CB5AD44EAAE44E L_1;
		L_1 = HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4(L_0, HashSet_1_GetEnumerator_m5D71E42946E8A83937D6706CF241C33EC28ADEC4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5((&V_0), Enumerator_Dispose_mD73377FE1D57CA5D318A1DAD9C9CF1623E9FE7B5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001d_1;
			}

IL_000e_1:
			{
				// foreach (IGridContentBehaviour gridContent in _gridContents)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_inline((&V_0), Enumerator_get_Current_m3ABE5784A82F42C314D4A97CAEB3DC18C8F32BEC_RuntimeMethod_var);
				V_1 = L_2;
				// UnsubscribeFromContent(gridContent);
				RuntimeObject* L_3 = V_1;
				GridContentPool_UnsubscribeFromContent_m942D69C9F5A9E3A3F3834EF6648B358A72C7AE5E(__this, L_3, NULL);
			}

IL_001d_1:
			{
				// foreach (IGridContentBehaviour gridContent in _gridContents)
				bool L_4;
				L_4 = Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09((&V_0), Enumerator_MoveNext_m6CD188C3A8F352E4AA2D598BCE3C84762787DD09_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Boolean GridMap.Behaviours.GridContentPool::TryAdd(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridContentPool_TryAdd_mCFBA182C45AB392D9E52FB07360F1D81D97FF114 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE1016020FC554EA1A6E28F1378D43A6C1375CE62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// bool isAdded = _gridContents.Add(gridContent);
		HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* L_0 = __this->____gridContents_4;
		RuntimeObject* L_1 = ___0_gridContent;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mE1016020FC554EA1A6E28F1378D43A6C1375CE62(L_0, L_1, HashSet_1_Add_mE1016020FC554EA1A6E28F1378D43A6C1375CE62_RuntimeMethod_var);
		// if (isAdded)
		bool L_3 = L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		// SubscribeOnContent(gridContent);
		RuntimeObject* L_4 = ___0_gridContent;
		GridContentPool_SubscribeOnContent_m2C6E6DACDF995903CD1A4A2ADDF86196AFB047DD(__this, L_4, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0016:
	{
		// return isAdded;
		return G_B2_0;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnContentDraggingFinished(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B2_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B1_0 = NULL;
	{
		// DraggingFinished?.Invoke(gridContent);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingFinished_6;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_gridContent;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnContentDraggingBegun(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B2_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B1_0 = NULL;
	{
		// DraggingBegun?.Invoke(gridContent);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___DraggingBegun_5;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_gridContent;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnContentDestroyed(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B2_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B1_0 = NULL;
	{
		// ContentDestroyed?.Invoke(gridContent);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentDestroyed_7;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_gridContent;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnContentUnpicked(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B2_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B1_0 = NULL;
	{
		// ContentUnpicked?.Invoke(gridContent);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentUnpicked_9;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_gridContent;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::OnContentPicked(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B2_0 = NULL;
	Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* G_B1_0 = NULL;
	{
		// ContentPicked?.Invoke(gridContent);
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_0 = __this->___ContentPicked_8;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_gridContent;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6B7D35A0DE6437A67E18ED7015F09F7AB9CA4A2_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::SubscribeOnContent(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_SubscribeOnContent_m2C6E6DACDF995903CD1A4A2ADDF86196AFB047DD (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridContent.DraggingBegun += OnContentDraggingBegun;
		RuntimeObject* L_0 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(0 /* System.Void GridMap.Behaviours.IGridContentBehaviour::add_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_0, L_1);
		// gridContent.DraggingFinished += OnContentDraggingFinished;
		RuntimeObject* L_2 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(2 /* System.Void GridMap.Behaviours.IGridContentBehaviour::add_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_2, L_3);
		// gridContent.Destroyed += OnContentDestroyed;
		RuntimeObject* L_4 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_5 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_5, __this, (intptr_t)((void*)GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(4 /* System.Void GridMap.Behaviours.IGridContentBehaviour::add_Destroyed(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_4, L_5);
		// gridContent.Picked += OnContentPicked;
		RuntimeObject* L_6 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_7, __this, (intptr_t)((void*)GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(6 /* System.Void GridMap.Behaviours.IGridContentBehaviour::add_Picked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_6, L_7);
		// gridContent.Unpicked += OnContentUnpicked;
		RuntimeObject* L_8 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_9, __this, (intptr_t)((void*)GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(8 /* System.Void GridMap.Behaviours.IGridContentBehaviour::add_Unpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::UnsubscribeFromContent(GridMap.Behaviours.IGridContentBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool_UnsubscribeFromContent_m942D69C9F5A9E3A3F3834EF6648B358A72C7AE5E (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, RuntimeObject* ___0_gridContent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gridContent.DraggingBegun -= OnContentDraggingBegun;
		RuntimeObject* L_0 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_1 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_1, __this, (intptr_t)((void*)GridContentPool_OnContentDraggingBegun_mED79BA1574E04CCDCB9743480B1D6E27373F5E72_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(1 /* System.Void GridMap.Behaviours.IGridContentBehaviour::remove_DraggingBegun(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_0, L_1);
		// gridContent.DraggingFinished -= OnContentDraggingFinished;
		RuntimeObject* L_2 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_3 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_3, __this, (intptr_t)((void*)GridContentPool_OnContentDraggingFinished_m69590443B36C7860EE0E2C121A5045303E4B98DF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(3 /* System.Void GridMap.Behaviours.IGridContentBehaviour::remove_DraggingFinished(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_2, L_3);
		// gridContent.Destroyed -= OnContentDestroyed;
		RuntimeObject* L_4 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_5 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_5, __this, (intptr_t)((void*)GridContentPool_OnContentDestroyed_m46BA2E980C958560AA4C833DD7129E0A71B6D9B0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(5 /* System.Void GridMap.Behaviours.IGridContentBehaviour::remove_Destroyed(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_4, L_5);
		// gridContent.Picked -= OnContentPicked;
		RuntimeObject* L_6 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_7 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_7, __this, (intptr_t)((void*)GridContentPool_OnContentPicked_m26CC4E118B2436618B59DA58A5B0AB07C6BB13F7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(7 /* System.Void GridMap.Behaviours.IGridContentBehaviour::remove_Picked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_6, L_7);
		// gridContent.Unpicked -= OnContentUnpicked;
		RuntimeObject* L_8 = ___0_gridContent;
		Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* L_9 = (Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3*)il2cpp_codegen_object_new(Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_mC0FF1940D0C3A1A1BA78724CF137D0F0CB602259(L_9, __this, (intptr_t)((void*)GridContentPool_OnContentUnpicked_mBAE1CEFAF8FEAC77ED2FE2481761214F777B6DED_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_1_tB1747E8F9EE1735C5FA0DD0CFEFE210B011B71F3* >::Invoke(9 /* System.Void GridMap.Behaviours.IGridContentBehaviour::remove_Unpicked(System.Action`1<GridMap.Behaviours.IGridContentBehaviour>) */, IGridContentBehaviour_t2A2DA6A30087DE1DF8E600AFD312DA04EFF2DE31_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void GridMap.Behaviours.GridContentPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridContentPool__ctor_m373115325C4B53B70280024E4A8AC14B02A7ADB6 (GridContentPool_tBD285F91EFF0E04C120FB8D473359776A6E444B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m740BBB26956A304D00FF664015D4A18DB5EF7B2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<IGridContentBehaviour> _gridContents = new HashSet<IGridContentBehaviour>();
		HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97* L_0 = (HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97*)il2cpp_codegen_object_new(HashSet_1_t9E9A80B7CE52D5A452C6FCA5173105569261CB97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m740BBB26956A304D00FF664015D4A18DB5EF7B2B(L_0, HashSet_1__ctor_m740BBB26956A304D00FF664015D4A18DB5EF7B2B_RuntimeMethod_var);
		__this->____gridContents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gridContents_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridMap.Behaviours.GridCoordinatesConverter::.ctor(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridCoordinatesConverter__ctor_m32DC8EABBDA3636662594E20357682D29EBB662D (GridCoordinatesConverter_tE3AA1FA440B8BADA12D68817AD375382C5ED71C9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_leftTopPoint, float ___1_cellSize, const RuntimeMethod* method) 
{
	{
		// private readonly Vector2Int _gridAxisDirection = new Vector2Int(1, -1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_0), 1, (-1), /*hidden argument*/NULL);
		__this->____gridAxisDirection_0 = L_0;
		// public GridCoordinatesConverter(Transform leftTopPoint, float cellSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _leftTopPoint = leftTopPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_leftTopPoint;
		__this->____leftTopPoint_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftTopPoint_1), (void*)L_1);
		// _cellSize = cellSize;
		float L_2 = ___1_cellSize;
		__this->____cellSize_2 = L_2;
		// }
		return;
	}
}
// UnityEngine.Vector2Int GridMap.Behaviours.GridCoordinatesConverter::ConvertToGridCoordinates(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GridCoordinatesConverter_ConvertToGridCoordinates_m799EC9FEBF9CEA2CE568A19F3564F5F87631E839 (GridCoordinatesConverter_tE3AA1FA440B8BADA12D68817AD375382C5ED71C9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_worldPointPosition, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Vector2 localPosition = (worldPointPosition - _leftTopPoint.GetPosition2D()) * _gridAxisDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_worldPointPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____leftTopPoint_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = TransformExtensions_GetPosition2D_mE17B10A96B04550E95D85FFDE64F8D752FC0B8B8(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_2, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = __this->____gridAxisDirection_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_3, L_5, NULL);
		// int xGridPosition = Mathf.RoundToInt(localPosition.x / _cellSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		float L_8 = L_7.___x_0;
		float L_9 = __this->____cellSize_2;
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_8/L_9)), NULL);
		V_0 = L_10;
		// int yGridPosition = Mathf.RoundToInt(localPosition.y / _cellSize);
		float L_11 = L_7.___y_1;
		float L_12 = __this->____cellSize_2;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_11/L_12)), NULL);
		V_1 = L_13;
		// return new Vector2Int(xGridPosition, yGridPosition);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_16), L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector2 GridMap.Behaviours.GridCoordinatesConverter::ConvertToWorldCoordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridCoordinatesConverter_ConvertToWorldCoordinates_mEA9AF7085ED33288FA4962B5553096FE485092A7 (GridCoordinatesConverter_tE3AA1FA440B8BADA12D68817AD375382C5ED71C9* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_gridCoordinates, const RuntimeMethod* method) 
{
	{
		// return _leftTopPoint.GetPosition2D()
		//     + (new Vector2(gridCoordinates.x, -gridCoordinates.y) * _cellSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____leftTopPoint_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = TransformExtensions_GetPosition2D_mE17B10A96B04550E95D85FFDE64F8D752FC0B8B8(L_0, NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_gridCoordinates), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_gridCoordinates), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)L_2), ((float)((-L_3))), /*hidden argument*/NULL);
		float L_5 = __this->____cellSize_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_1, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 Extentions.TransformExtensions::GetPosition2D(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TransformExtensions_GetPosition2D_mE17B10A96B04550E95D85FFDE64F8D752FC0B8B8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		// return new Vector2(transform.position.x, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomInput.Draggable::add_DraggingBegun(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_add_DraggingBegun_mEC6751B72B939176E31081DE98E21A7DE79CBE22 (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingBegun_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___DraggingBegun_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Draggable::remove_DraggingBegun(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_remove_DraggingBegun_m08DB131D89FAC1114E2080F425EB86006E1102F7 (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingBegun_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___DraggingBegun_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Draggable::add_DraggingFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_add_DraggingFinished_mB89C07392E0F334DF598AB30E8EBA8D87548EF3E (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___DraggingFinished_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Draggable::remove_DraggingFinished(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_remove_DraggingFinished_m1F7DD0566218B6B16AAC4703C51A582EDE9C2EB4 (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingFinished_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___DraggingFinished_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Draggable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_Awake_m4328C613A58364F8DE6A9AA248FE34472506B599 (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, const RuntimeMethod* method) 
{
	{
		// _camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CustomInput.Draggable::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnBeginDrag_m234D38C822B2D5A31C6F8E91285CD79C3390892F (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// DraggingBegun?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingBegun_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Draggable::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnDrag_mDA3D499F5B6BE6CC48364B3FB7BFF6DD018ED4EA (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 onScreenPosition = _camera.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_1, NULL);
		V_0 = L_2;
		// transform.position = new Vector3(onScreenPosition.x, onScreenPosition.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_5, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_11, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Draggable::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnEndDrag_m2B5166B3CEDE87D88CD63B84D461DFE25AEFCDEB (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// DraggingFinished?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___DraggingFinished_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Draggable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable__ctor_m6B2979E9F3BAE3637128D545A64FB1E5419953BE (Draggable_tCA2C87CDAB7C67A9C16FBD80F01499085ADC4B85* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomInput.Picking.Pickable::add_Picked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_add_Picked_m1AA8571A921BBC7E59FFC3C31C12B133F2CCA2DE (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Picked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Picked_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::remove_Picked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_remove_Picked_mADEF6F4EE1DBF012F3B27F9CE68CE9D1C2E833BE (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Picked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Picked_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::add_Unpicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_add_Unpicked_m0485345C86E9C4A1173E136BACF6DBCED9D99582 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Unpicked_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Unpicked_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::remove_Unpicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_remove_Unpicked_m0BB02DA3F89B69350A9B421EFE7193487FCF0F5D (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Unpicked_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Unpicked_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Awake_m158A9598623F17CBFDDC40F7619F95947D31408E (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) 
{
	{
		// _marker.SwitchOff();
		PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* L_0 = __this->____marker_4;
		NullCheck(L_0);
		PickMarker_SwitchOff_m51FF92B89636B2F9EE999183972B034195A8600A(L_0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::Init(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Init_mF55B04CFEA4DDE408728B626103C68BAFEE072F2 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, RuntimeObject* ___0_shape, const RuntimeMethod* method) 
{
	{
		// _marker.Init(shape);
		PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* L_0 = __this->____marker_4;
		RuntimeObject* L_1 = ___0_shape;
		NullCheck(L_0);
		PickMarker_Init_m36FD929F5B8D5880AB4B53BAD5E27C8EF34C927C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_OnPointerClick_m6480E64796EB5ED6C4546A29EB79B65E46AE948C (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (_isDragged == false)
		bool L_0 = __this->____isDragged_6;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (_isPicked)
		bool L_1 = __this->____isPicked_5;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Unpick();
		Pickable_Unpick_mAE8AAD16F060704ED33F421EEC04126749F741B2(__this, NULL);
		return;
	}

IL_0017:
	{
		// Pick();
		Pickable_Pick_m8965C41BA17D4A5392D6A4617940D85858EE1846(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_OnBeginDrag_m6F3BC442B9A47A3EF3D4B9DBF26C76349C417669 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _isDragged = true;
		__this->____isDragged_6 = (bool)1;
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_OnEndDrag_mA48BB6633773190FF44E48B40C12E6F13E550710 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _isDragged = false;
		__this->____isDragged_6 = (bool)0;
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::Unpick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Unpick_mAE8AAD16F060704ED33F421EEC04126749F741B2 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _isPicked = false;
		__this->____isPicked_5 = (bool)0;
		// _marker.SwitchOff();
		PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* L_0 = __this->____marker_4;
		NullCheck(L_0);
		PickMarker_SwitchOff_m51FF92B89636B2F9EE999183972B034195A8600A(L_0, NULL);
		// Unpicked?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___Unpicked_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable_Pick_m8965C41BA17D4A5392D6A4617940D85858EE1846 (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _isPicked = true;
		__this->____isPicked_5 = (bool)1;
		// _marker.SwitchOn();
		PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* L_0 = __this->____marker_4;
		NullCheck(L_0);
		PickMarker_SwitchOn_m137E66BEB53124CD3B48EA3C0EE19CC4D39D20EA(L_0, NULL);
		// Picked?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___Picked_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.Pickable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickable__ctor_mDCF7B725FE501AF1D898D375F49C6844E8307D6D (Pickable_t5F42921543C2986E5D2FD04CA3EF56ECC1DBEFB7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomInput.Picking.PickMarker::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_OnValidate_m0B7692AE2121443519FB96521A74354797F45190 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteDrawMode_t0271A7FCE161CDD08E390C53B339CA53CBDEB278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F47A33E3D14122E45999A73B6B284FD675D4DC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE86E7CCF27AF3E065D486AE90E5730E1EB3653A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_spriteRenderer.drawMode != SpriteDrawMode.Sliced)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____spriteRenderer_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SpriteRenderer_get_drawMode_mDE05B982434BB01801C33432159E662837352AD4(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogWarning($"drawMode of {nameof(PickMarker)}'s renderer " +
		//     $"in {gameObject.name} should be {SpriteDrawMode.Sliced}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		int32_t L_4 = 1;
		RuntimeObject* L_5 = Box(SpriteDrawMode_t0271A7FCE161CDD08E390C53B339CA53CBDEB278_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE86E7CCF27AF3E065D486AE90E5730E1EB3653A4, L_3, L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2F47A33E3D14122E45999A73B6B284FD675D4DC3, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void CustomInput.Picking.PickMarker::Init(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_Init_m36FD929F5B8D5880AB4B53BAD5E27C8EF34C927C (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, RuntimeObject* ___0_shape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__6_0_mAC591D90929CBA4F2F8DF3077178B2434FD72C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__6_1_m4310B908E9F710897DA925D31622819A6ABD6F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__6_2_m746D18C2BE0D2AF9B72B3FBFF3A8A129D7372AFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__6_3_m18D8B13CC73B4427FA3B0BABC2E85D26C6420C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	{
		// int maxX = shape.Max(point => point.x);
		RuntimeObject* L_0 = ___0_shape;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_1 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* L_3 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_4 = (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*)il2cpp_codegen_object_new(Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__6_0_mAC591D90929CBA4F2F8DF3077178B2434FD72C38_RuntimeMethod_var), NULL);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_5 = L_4;
		((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		int32_t L_6;
		L_6 = Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7(G_B2_1, G_B2_0, Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_RuntimeMethod_var);
		V_0 = L_6;
		// int minX = shape.Min(point => point.x);
		RuntimeObject* L_7 = ___0_shape;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_8 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* L_10 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_11 = (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*)il2cpp_codegen_object_new(Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__6_1_m4310B908E9F710897DA925D31622819A6ABD6F00_RuntimeMethod_var), NULL);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_12 = L_11;
		((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_1_2), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0046:
	{
		int32_t L_13;
		L_13 = Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3(G_B4_1, G_B4_0, Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_RuntimeMethod_var);
		V_1 = L_13;
		// int maxY = shape.Max(point => point.y);
		RuntimeObject* L_14 = ___0_shape;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_15 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* L_17 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_18 = (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*)il2cpp_codegen_object_new(Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__6_2_m746D18C2BE0D2AF9B72B3FBFF3A8A129D7372AFF_RuntimeMethod_var), NULL);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_19 = L_18;
		((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_3), (void*)L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_006c:
	{
		int32_t L_20;
		L_20 = Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7(G_B6_1, G_B6_0, Enumerable_Max_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5E82DEF352E1C55CF614572E0EC402DFF8CD83A7_RuntimeMethod_var);
		V_2 = L_20;
		// int minY = shape.Min(point => point.y);
		RuntimeObject* L_21 = ___0_shape;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_22 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_23 = L_22;
		G_B7_0 = L_23;
		G_B7_1 = L_21;
		if (L_23)
		{
			G_B8_0 = L_23;
			G_B8_1 = L_21;
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* L_24 = ((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_25 = (Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D*)il2cpp_codegen_object_new(Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_mCEE74764BD568CD415050C15F2D417E1BF925720(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__6_3_m18D8B13CC73B4427FA3B0BABC2E85D26C6420C76_RuntimeMethod_var), NULL);
		Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* L_26 = L_25;
		((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_4), (void*)L_26);
		G_B8_0 = L_26;
		G_B8_1 = G_B7_1;
	}

IL_0092:
	{
		int32_t L_27;
		L_27 = Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3(G_B8_1, G_B8_0, Enumerable_Min_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mEA19416F8B9AC5ADBBEA2A80B86FA224CDE7B4F3_RuntimeMethod_var);
		V_3 = L_27;
		// ComputeSize(maxX, minX, maxY, minY);
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		PickMarker_ComputeSize_mD1C8056B46214F6678D948A8163214DCA9FF9D07(__this, L_28, L_29, L_30, L_31, NULL);
		// ComputePosition(maxX, minX, maxY, minY);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		PickMarker_ComputePosition_mD6ADA772507A298A31263C42F74CAFDFE8DF6215(__this, L_32, L_33, L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.PickMarker::SwitchOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_SwitchOn_m137E66BEB53124CD3B48EA3C0EE19CC4D39D20EA (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) 
{
	{
		// _spriteRenderer.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____spriteRenderer_6;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.PickMarker::SwitchOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_SwitchOff_m51FF92B89636B2F9EE999183972B034195A8600A (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) 
{
	{
		// _spriteRenderer.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____spriteRenderer_6;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CustomInput.Picking.PickMarker::ComputeSize(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_ComputeSize_mD1C8056B46214F6678D948A8163214DCA9FF9D07 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_maxX, int32_t ___1_minX, int32_t ___2_maxY, int32_t ___3_minY, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xSize = ComputeSizeCoordinate(maxX, minX);
		int32_t L_0 = ___0_maxX;
		int32_t L_1 = ___1_minX;
		float L_2;
		L_2 = PickMarker_ComputeSizeCoordinate_m7081952BE8AB7028795CEB9B740D215F03589661(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// float ySize = ComputeSizeCoordinate(maxY, minY);
		int32_t L_3 = ___2_maxY;
		int32_t L_4 = ___3_minY;
		float L_5;
		L_5 = PickMarker_ComputeSizeCoordinate_m7081952BE8AB7028795CEB9B740D215F03589661(__this, L_3, L_4, NULL);
		V_1 = L_5;
		// _spriteRenderer.size = new Vector2(xSize, ySize);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->____spriteRenderer_6;
		float L_7 = V_0;
		float L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		SpriteRenderer_set_size_mDC603B73F10D51A8FBD6D2592CD85719A3043A1B(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Single CustomInput.Picking.PickMarker::ComputeSizeCoordinate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickMarker_ComputeSizeCoordinate_m7081952BE8AB7028795CEB9B740D215F03589661 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_max, int32_t ___1_min, const RuntimeMethod* method) 
{
	{
		// return (max - min + SizeMeasuresFromZeroBonus) * _cellSize + _padding + _padding;
		int32_t L_0 = ___0_max;
		int32_t L_1 = ___1_min;
		float L_2 = __this->____cellSize_7;
		float L_3 = __this->____padding_8;
		float L_4 = __this->____padding_8;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1))), L_2)), L_3)), L_4));
	}
}
// System.Void CustomInput.Picking.PickMarker::ComputePosition(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker_ComputePosition_mD6ADA772507A298A31263C42F74CAFDFE8DF6215 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_maxX, int32_t ___1_minX, int32_t ___2_maxY, int32_t ___3_minY, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float positionX = ComputePositionCoordinate(maxX, minX);
		int32_t L_0 = ___0_maxX;
		int32_t L_1 = ___1_minX;
		float L_2;
		L_2 = PickMarker_ComputePositionCoordinate_mDEA3547BD6E37813BD531476CDAA205A2ECDB44A(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// float positionY = ComputePositionCoordinate(maxY, minY);
		int32_t L_3 = ___2_maxY;
		int32_t L_4 = ___3_minY;
		float L_5;
		L_5 = PickMarker_ComputePositionCoordinate_mDEA3547BD6E37813BD531476CDAA205A2ECDB44A(__this, L_3, L_4, NULL);
		V_1 = L_5;
		// transform.localPosition = new Vector2(positionX, -positionY);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_7 = V_0;
		float L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_7, ((-L_8)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Single CustomInput.Picking.PickMarker::ComputePositionCoordinate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PickMarker_ComputePositionCoordinate_mDEA3547BD6E37813BD531476CDAA205A2ECDB44A (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, int32_t ___0_max, int32_t ___1_min, const RuntimeMethod* method) 
{
	{
		// return (max + min) * _cellSize * PivotCoordinateProportion;
		int32_t L_0 = ___0_max;
		int32_t L_1 = ___1_min;
		float L_2 = __this->____cellSize_7;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_add(L_0, L_1))), L_2)), (0.5f)));
	}
}
// System.Void CustomInput.Picking.PickMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickMarker__ctor_mEF220A2E61F43FFA97BC9DADCB9A3CC292177E18 (PickMarker_t7CDC2511C003E7437E5C8C1757ABE3A318963DC1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _cellSize = 1.5f;
		__this->____cellSize_7 = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomInput.Picking.PickMarker/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3B4A50200136F26BADCD578F05BD7693FF4A8BA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* L_0 = (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE*)il2cpp_codegen_object_new(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB9D23DE651FA007E93B3CA78BDA1AC8E9D044478(L_0, NULL);
		((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CustomInput.Picking.PickMarker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB9D23DE651FA007E93B3CA78BDA1AC8E9D044478 (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 CustomInput.Picking.PickMarker/<>c::<Init>b__6_0(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitU3Eb__6_0_mAC591D90929CBA4F2F8DF3077178B2434FD72C38 (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_point, const RuntimeMethod* method) 
{
	{
		// int maxX = shape.Max(point => point.x);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_point), NULL);
		return L_0;
	}
}
// System.Int32 CustomInput.Picking.PickMarker/<>c::<Init>b__6_1(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitU3Eb__6_1_m4310B908E9F710897DA925D31622819A6ABD6F00 (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_point, const RuntimeMethod* method) 
{
	{
		// int minX = shape.Min(point => point.x);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_point), NULL);
		return L_0;
	}
}
// System.Int32 CustomInput.Picking.PickMarker/<>c::<Init>b__6_2(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitU3Eb__6_2_m746D18C2BE0D2AF9B72B3FBFF3A8A129D7372AFF (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_point, const RuntimeMethod* method) 
{
	{
		// int maxY = shape.Max(point => point.y);
		int32_t L_0;
		L_0 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_point), NULL);
		return L_0;
	}
}
// System.Int32 CustomInput.Picking.PickMarker/<>c::<Init>b__6_3(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitU3Eb__6_3_m18D8B13CC73B4427FA3B0BABC2E85D26C6420C76 (U3CU3Ec_t9F0BC8D6F2A5FFF4D59623BCDB68432E68A634EE* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_point, const RuntimeMethod* method) 
{
	{
		// int minY = shape.Min(point => point.y);
		int32_t L_0;
		L_0 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_point), NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GridContentPicker_get_PickedContent_m3097838870716E129F9F830AAB963FC11F7A2C70_inline (GridContentPicker_tA8088BDF453186A20C932A28264CBC1AC7F30767* __this, const RuntimeMethod* method) 
{
	{
		// public IGridContentBehaviour PickedContent => _pickedContent;
		RuntimeObject* L_0 = __this->____pickedContent_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_v), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_v), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
