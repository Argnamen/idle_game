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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// AppodealStack.ConsentManagement.Api.ConsentForm
struct ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90;
// AppodealStack.ConsentManagement.Api.ConsentManager
struct ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C;
// AppodealStack.ConsentManagement.Common.IConsent
struct IConsent_t2CACE48343EC415708492EA53D1AE3E0DB4A75E0;
// AppodealStack.ConsentManagement.Common.IConsentForm
struct IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B;
// AppodealStack.ConsentManagement.Common.IConsentFormListener
struct IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034;
// AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener
struct IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67;
// AppodealStack.ConsentManagement.Common.IConsentManager
struct IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7;
// AppodealStack.ConsentManagement.Common.IVendor
struct IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04;
// AppodealStack.ConsentManagement.Common.IVendorBuilder
struct IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10;
// System.String
struct String_t;
// AppodealStack.ConsentManagement.Api.Vendor
struct Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385;
// AppodealStack.ConsentManagement.Api.Vendor/Builder
struct Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614;

IL2CPP_EXTERN_C RuntimeClass* ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC29C99690012BC15B996881FE6025FCB73D30C7F 
{
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// AppodealStack.ConsentManagement.Api.ConsentForm
struct ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IConsentForm AppodealStack.ConsentManagement.Api.ConsentForm::_consentForm
	RuntimeObject* ____consentForm_0;
};

// AppodealStack.ConsentManagement.Api.ConsentManager
struct ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IConsentManager AppodealStack.ConsentManagement.Api.ConsentManager::_consentManager
	RuntimeObject* ____consentManager_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// AppodealStack.ConsentManagement.Api.Vendor
struct Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Api.Vendor::<NativeVendor>k__BackingField
	RuntimeObject* ___U3CNativeVendorU3Ek__BackingField_0;
};

// AppodealStack.ConsentManagement.Api.Vendor/Builder
struct Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IVendorBuilder AppodealStack.ConsentManagement.Api.Vendor/Builder::_vendorBuilder
	RuntimeObject* ____vendorBuilder_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// AppodealStack.ConsentManagement.Api.ConsentForm

// AppodealStack.ConsentManagement.Api.ConsentForm

// AppodealStack.ConsentManagement.Api.ConsentManager

// AppodealStack.ConsentManagement.Api.ConsentManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// AppodealStack.ConsentManagement.Api.Vendor

// AppodealStack.ConsentManagement.Api.Vendor

// AppodealStack.ConsentManagement.Api.Vendor/Builder

// AppodealStack.ConsentManagement.Api.Vendor/Builder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentForm AppodealStack.ConsentManagement.Platforms.ConsentManagerClientFactory::GetConsentForm(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManagerClientFactory_GetConsentForm_m8BD02268D7460AA2D8C927778DC45144DD47182B (RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm__ctor_m7EAEBD8663D2E235DAC2E04572B6AE072D171F08 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentForm AppodealStack.ConsentManagement.Api.ConsentForm::GetNativeConsentForm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentManager AppodealStack.ConsentManagement.Platforms.ConsentManagerClientFactory::GetConsentManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManagerClientFactory_GetConsentManager_m97572AC9C60F14F3F6A1E98E5AAB71694D841981 (const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager__ctor_mC7EFECFFBF44C7BE6B7FD87BB86862F0145ADE34 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentManager AppodealStack.ConsentManagement.Api.ConsentManager::GetNativeConsentManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Api.Vendor::.ctor(AppodealStack.ConsentManagement.Common.IVendor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, RuntimeObject* ___0_builder, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Api.Vendor::get_NativeVendor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IVendorBuilder AppodealStack.ConsentManagement.Platforms.ConsentManagerClientFactory::GetVendorBuilder(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManagerClientFactory_GetVendorBuilder_m1D6F9B6CCEA7E33D90ABD6317512BEEF2B009FC7 (String_t* ___0_name, String_t* ___1_bundle, String_t* ___2_policyUrl, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IVendorBuilder AppodealStack.ConsentManagement.Api.Vendor/Builder::GetNativeVendorBuilder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// AppodealStack.ConsentManagement.Common.IConsentForm AppodealStack.ConsentManagement.Api.ConsentForm::GetNativeConsentForm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	{
		// return _consentForm;
		RuntimeObject* L_0 = __this->____consentForm_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm__ctor_m7EAEBD8663D2E235DAC2E04572B6AE072D171F08 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	{
		// private ConsentForm(IConsentFormListener listener)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentForm = ConsentManagerClientFactory.GetConsentForm(listener);
		RuntimeObject* L_0 = ___0_listener;
		RuntimeObject* L_1;
		L_1 = ConsentManagerClientFactory_GetConsentForm_m8BD02268D7460AA2D8C927778DC45144DD47182B(L_0, NULL);
		__this->____consentForm_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentForm_0), (void*)L_1);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Api.ConsentForm AppodealStack.ConsentManagement.Api.ConsentForm::GetInstance(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* ConsentForm_GetInstance_m718BD920D00834DDAFB677F9ACB631D31B9C0E2C (RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConsentForm(listener);
		RuntimeObject* L_0 = ___0_listener;
		ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* L_1 = (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90*)il2cpp_codegen_object_new(ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConsentForm__ctor_m7EAEBD8663D2E235DAC2E04572B6AE072D171F08(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm_Load_m85CF1A549138D2A2203CE0922E0A419232923268 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentForm().Load();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Load() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm_Show_mD9A0B0715BCFCB94D0E68B4FEB8F57A4DEB97F8F (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentForm().Show();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Show() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Api.ConsentForm::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentForm_IsLoaded_m931DF197442A54FEE5D01891F27B97CE2411257C (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentForm().IsLoaded();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsLoaded() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Api.ConsentForm::IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentForm_IsShowing_mF9C898FE2EA73D6FEC3B45A25C0F8E3FCD33E222 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentForm().IsShowing();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsShowing() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::showAsActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm_showAsActivity_mE09B598BF55A44715D93A42D0E1D399F0AC56D5D (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentForm().Show();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Show() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::showAsDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm_showAsDialog_mF6851F7DA71AD1D12182E42AC6C78E9144BBC4CE (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentForm().Show();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Show() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentForm::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentForm_load_mC1BD875274362FDDB7E9B99DBA6EC1BEE2286411 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentForm().Load();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentForm::Load() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Api.ConsentForm::isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentForm_isLoaded_m136259136484513FE2293FC96DED36EA84343E83 (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentForm().IsLoaded();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsLoaded() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Api.ConsentForm::isShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentForm_isShowing_m45BCAF2AA12D20EE936651A9B0FE5C9EB41105BB (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentForm().IsShowing();
		RuntimeObject* L_0;
		L_0 = ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean AppodealStack.ConsentManagement.Common.IConsentForm::IsShowing() */, IConsentForm_tBC0859A8DE70C6786368C9AB7C7E85C25754987B_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// AppodealStack.ConsentManagement.Common.IConsentManager AppodealStack.ConsentManagement.Api.ConsentManager::GetNativeConsentManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	{
		// return _consentManager;
		RuntimeObject* L_0 = __this->____consentManager_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager__ctor_mC7EFECFFBF44C7BE6B7FD87BB86862F0145ADE34 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	{
		// private ConsentManager()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentManager = ConsentManagerClientFactory.GetConsentManager();
		RuntimeObject* L_0;
		L_0 = ConsentManagerClientFactory_GetConsentManager_m97572AC9C60F14F3F6A1E98E5AAB71694D841981(NULL);
		__this->____consentManager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentManager_0), (void*)L_0);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Api.ConsentManager AppodealStack.ConsentManagement.Api.ConsentManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* ConsentManager_GetInstance_m9B640E40BA874383144A004FE3CD261AB87479D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConsentManager();
		ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* L_0 = (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C*)il2cpp_codegen_object_new(ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConsentManager__ctor_mC7EFECFFBF44C7BE6B7FD87BB86862F0145ADE34(L_0, NULL);
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::RequestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_RequestConsentInfoUpdate_mA4621B8A448F56B8C7A733E2D5BF254CEC260DEB (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, String_t* ___0_appodealAppKey, RuntimeObject* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().RequestConsentInfoUpdate(appodealAppKey, listener);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		String_t* L_1 = ___0_appodealAppKey;
		RuntimeObject* L_2 = ___1_listener;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::RequestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::DisableAppTrackingTransparencyRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_DisableAppTrackingTransparencyRequest_m20762A661E8F14848902AC9B3791219D1B0222A2 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().DisableAppTrackingTransparencyRequest();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(9 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::DisableAppTrackingTransparencyRequest() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::SetCustomVendor(AppodealStack.ConsentManagement.Api.Vendor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_SetCustomVendor_mD9B742C268288DE0253182110ED9C5477028795B (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* ___0_customVendor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().SetCustomVendor(customVendor);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_1 = ___0_customVendor;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetCustomVendor(AppodealStack.ConsentManagement.Common.IVendor) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor AppodealStack.ConsentManagement.Api.ConsentManager::GetCustomVendor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* ConsentManager_GetCustomVendor_mF1B5F296E7503E375CD0B02F716FE1170B0D2869 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, String_t* ___0_bundle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var vendor = GetNativeConsentManager().GetCustomVendor(bundle);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		String_t* L_1 = ___0_bundle;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IConsentManager::GetCustomVendor(System.String) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// return vendor == null ? null : new Vendor(vendor);
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_5 = (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385*)il2cpp_codegen_object_new(Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0(L_5, L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		return (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385*)NULL;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Api.ConsentManager::GetStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_GetStorage_m8ED045E7D0455D40A586FE64DFFB90440EAB36E7 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetStorage();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Common.IConsentManager::GetStorage() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Api.ConsentManager::ShouldShowConsentDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_ShouldShowConsentDialog_m68F9CC2CB4E7B6C169DBFAF310333811EFA5F93F (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().ShouldShowConsentDialog();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Common.IConsentManager::ShouldShowConsentDialog() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::SetStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_SetStorage_mFB954D672FCDFE6FF87D9B8F3CC054FE599DA506 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, int32_t ___0_iabStorage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().SetStorage(iabStorage);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		int32_t L_1 = ___0_iabStorage;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Api.ConsentManager::GetConsentZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_GetConsentZone_m0CF3B880D0DEE967E1AE2AACAEE5C86F0EB974F7 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsentZone();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentZone() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Api.ConsentManager::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_GetConsentStatus_m927B41C3040CEEEACB225A570E3F62C5C954D2EA (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsentStatus();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentStatus() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Api.ConsentManager::GetConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManager_GetConsent_m4E0F1A3DCDCFD65C5157E798F3B4559EAF6D5EB7 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsent();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Common.IConsentManager::GetConsent() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Api.ConsentManager AppodealStack.ConsentManagement.Api.ConsentManager::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* ConsentManager_getInstance_mD4DB9B505496B9F4A338E9E052206524073F54BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConsentManager();
		ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* L_0 = (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C*)il2cpp_codegen_object_new(ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConsentManager__ctor_mC7EFECFFBF44C7BE6B7FD87BB86862F0145ADE34(L_0, NULL);
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::requestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_requestConsentInfoUpdate_m6732975CC908B745E43385C3516D07586C9A3A72 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, String_t* ___0_appodealAppKey, RuntimeObject* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().RequestConsentInfoUpdate(appodealAppKey, listener);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		String_t* L_1 = ___0_appodealAppKey;
		RuntimeObject* L_2 = ___1_listener;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::RequestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::disableAppTrackingTransparencyRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_disableAppTrackingTransparencyRequest_m671D1E50F31908ED1D043128B62865DD78DDF011 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().DisableAppTrackingTransparencyRequest();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(9 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::DisableAppTrackingTransparencyRequest() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::setCustomVendor(AppodealStack.ConsentManagement.Api.Vendor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_setCustomVendor_mFD2069E35BC750CDD1384766F3CDF1314D669298 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* ___0_customVendor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().SetCustomVendor(customVendor);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_1 = ___0_customVendor;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetCustomVendor(AppodealStack.ConsentManagement.Common.IVendor) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor AppodealStack.ConsentManagement.Api.ConsentManager::getCustomVendor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* ConsentManager_getCustomVendor_mBE1D40BE291DA1514C0A37D32615417D181E372D (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, String_t* ___0_bundle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vendor(GetNativeConsentManager().GetCustomVendor(bundle));
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		String_t* L_1 = ___0_bundle;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IConsentManager::GetCustomVendor(System.String) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_3 = (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385*)il2cpp_codegen_object_new(Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0(L_3, L_2, NULL);
		return L_3;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Api.ConsentManager::getStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_getStorage_mF8A442932B00B79AFADF01B524577A5B60D1C7E4 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetStorage();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Common.IConsentManager::GetStorage() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Api.ConsentManager::shouldShowConsentDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_shouldShowConsentDialog_mDA81F28A28609E3C55A9863099821899C5A2D255 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().ShouldShowConsentDialog();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Common.IConsentManager::ShouldShowConsentDialog() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.ConsentManager::setStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentManager_setStorage_m56F627D2D35AF2EDBA3F0DE316F45F115D741B92 (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, int32_t ___0_iabStorage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeConsentManager().SetStorage(iabStorage);
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		int32_t L_1 = ___0_iabStorage;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void AppodealStack.ConsentManagement.Common.IConsentManager::SetStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage) */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Api.ConsentManager::getConsentZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_getConsentZone_m1BD557D8CC0402B5835017ABB3459FF012FE22EB (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsentZone();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentZone() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Api.ConsentManager::getConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentManager_getConsentStatus_m959D9822DCD22E29A3A87B2361541BACF205508A (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsentStatus();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Common.IConsentManager::GetConsentStatus() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Api.ConsentManager::getConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentManager_getConsent_m8B0CC154C819FCBA2F6FCA37EBAC1C488BE62F1F (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeConsentManager().GetConsent();
		RuntimeObject* L_0;
		L_0 = ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(8 /* AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Common.IConsentManager::GetConsent() */, IConsentManager_t666349A382EE5893BC574FE69EDC035A5A450DF7_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Api.Vendor::get_NativeVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	{
		// public IVendor NativeVendor { get; }
		RuntimeObject* L_0 = __this->___U3CNativeVendorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.Vendor::.ctor(AppodealStack.ConsentManagement.Common.IVendor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, RuntimeObject* ___0_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vendor(IVendor builder)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// NativeVendor = builder.NativeVendor;
		RuntimeObject* L_0 = ___0_builder;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendor::get_NativeVendor() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		__this->___U3CNativeVendorU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeVendorU3Ek__BackingField_0), (void*)L_1);
		// }
		return;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_GetName_m621B52F1EDEBA6F99AC6967A49071A749F727705 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetName();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetName() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::GetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_GetBundle_mFBF6E1D4D39B7F92C7E0099A3911EC3E76727DE4 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetBundle();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetBundle() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::GetPolicyUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_GetPolicyUrl_mEE7600A63B08D7BF03B9BBC96C31EAC573BA8FF7 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetPolicyUrl();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetPolicyUrl() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::GetPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_GetPurposeIds_mFEF7D4A402EF52CA90C982B5F58BD95151E9E493 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetPurposeIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(3 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetPurposeIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::GetFeatureIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_GetFeatureIds_m60A2CC8F3E7BFD6B2B3438374DF234C3A03BA214 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetFeatureIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(4 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetFeatureIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::GetLegitimateInterestPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_GetLegitimateInterestPurposeIds_mE2CC9B30547905FF26DA68269B86B68788DBD3B9 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetLegitimateInterestPurposeIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(5 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetLegitimateInterestPurposeIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::getName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_getName_m7FE3327CEBFB83437901C554152517F68B45C669 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetName();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetName() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::getBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_getBundle_m61AC2FACC8F87E750E0F413D68BD8FB8EA55345A (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetBundle();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetBundle() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String AppodealStack.ConsentManagement.Api.Vendor::getPolicyUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vendor_getPolicyUrl_mDBBE32ACBE1CFE7D1FF26FADA8B744068F50872C (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetPolicyUrl();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String AppodealStack.ConsentManagement.Common.IVendor::GetPolicyUrl() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::getPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_getPurposeIds_m055BC26302881D64545AF3D2B04EBDDB09D557C7 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetPurposeIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(3 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetPurposeIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::getFeatureIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_getFeatureIds_m6ECCABD0D4869D79C42BFA1E4F183F08F135B5B8 (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetFeatureIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(4 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetFeatureIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Api.Vendor::getLegitimateInterestPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Vendor_getLegitimateInterestPurposeIds_mA3824449DA3538F5382ED104FE28594DC330D3EF (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativeVendor.GetLegitimateInterestPurposeIds();
		RuntimeObject* L_0;
		L_0 = Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(5 /* System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Common.IVendor::GetLegitimateInterestPurposeIds() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// AppodealStack.ConsentManagement.Common.IVendorBuilder AppodealStack.ConsentManagement.Api.Vendor/Builder::GetNativeVendorBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, const RuntimeMethod* method) 
{
	{
		// return _vendorBuilder;
		RuntimeObject* L_0 = __this->____vendorBuilder_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Api.Vendor/Builder::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1D9EE366C47AEB72451FD780F948BAD7483315EC (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, String_t* ___0_vendorName, String_t* ___1_vendorBundle, String_t* ___2_vendorURL, const RuntimeMethod* method) 
{
	{
		// public Builder(string vendorName, string vendorBundle, string vendorURL)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _vendorBuilder = ConsentManagerClientFactory.GetVendorBuilder(vendorName, vendorBundle, vendorURL);
		String_t* L_0 = ___0_vendorName;
		String_t* L_1 = ___1_vendorBundle;
		String_t* L_2 = ___2_vendorURL;
		RuntimeObject* L_3;
		L_3 = ConsentManagerClientFactory_GetVendorBuilder_m1D6F9B6CCEA7E33D90ABD6317512BEEF2B009FC7(L_0, L_1, L_2, NULL);
		__this->____vendorBuilder_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vendorBuilder_0), (void*)L_3);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor AppodealStack.ConsentManagement.Api.Vendor/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* Builder_Build_mA5F4AC457D4305EBC3F9B24DCCF54D108F78B010 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vendor(GetNativeVendorBuilder().Build());
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendorBuilder::Build() */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0);
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_2 = (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385*)il2cpp_codegen_object_new(Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0(L_2, L_1, NULL);
		return L_2;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::SetPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_SetPurposeIds_mAFB46F84308F2205217A451258EE5BA089292FF2 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_purposeIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetPurposeIds(purposeIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_purposeIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::SetFeatureIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_SetFeatureIds_mBEC2021882ABAE7D03BEF483EA48BC68449B5A91 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_featureIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetFeatureIds(featureIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_featureIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetFeatureIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::SetLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_SetLegitimateInterestPurposeIds_m03FFAB7A8B9CF0498250D8AEB590FADFF97130BC (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_legitimateInterestPurposeIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetLegitimateInterestPurposeIds(legitimateInterestPurposeIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_legitimateInterestPurposeIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor AppodealStack.ConsentManagement.Api.Vendor/Builder::build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* Builder_build_m7F6FF981513B81CD532EDC7DD5EB6619F1CD36B7 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vendor(GetNativeVendorBuilder().Build());
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendorBuilder::Build() */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0);
		Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* L_2 = (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385*)il2cpp_codegen_object_new(Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vendor__ctor_mFEF7B07EE6EB21382B33E96AADE3D1D0D94236D0(L_2, L_1, NULL);
		return L_2;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::setPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_setPurposeIds_mE3C5613091092409CEF63CE88FBCD51651EEB65F (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_purposeIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetPurposeIds(purposeIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_purposeIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::setFeatureId(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_setFeatureId_mC530CD348FBEF02564E37A69C0E94606690828E9 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_featureIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetFeatureIds(featureIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_featureIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetFeatureIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// AppodealStack.ConsentManagement.Api.Vendor/Builder AppodealStack.ConsentManagement.Api.Vendor/Builder::setLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* Builder_setLegitimateInterestPurposeIds_m01D7D200AC0C9089559EEA1B07CCEFE8D9FC2CE6 (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, RuntimeObject* ___0_legitimateInterestPurposeIds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetNativeVendorBuilder().SetLegitimateInterestPurposeIds(legitimateInterestPurposeIds);
		RuntimeObject* L_0;
		L_0 = Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_legitimateInterestPurposeIds;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void AppodealStack.ConsentManagement.Common.IVendorBuilder::SetLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>) */, IVendorBuilder_t1D0B925BA9B264B8DBF6A4BE92A5956CA8480A10_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsentForm_GetNativeConsentForm_m7FBD911D9D015CD9493923D0F2A3192152873356_inline (ConsentForm_t7D83A1742E8D8F787758FF15EFDA56474AA3DC90* __this, const RuntimeMethod* method) 
{
	{
		// return _consentForm;
		RuntimeObject* L_0 = __this->____consentForm_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConsentManager_GetNativeConsentManager_mCBF7D2455521BB4F341437758EFEB16281894FD3_inline (ConsentManager_tA73AFC516EF1FDC2664097EA98F7F60595F37E2C* __this, const RuntimeMethod* method) 
{
	{
		// return _consentManager;
		RuntimeObject* L_0 = __this->____consentManager_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Vendor_get_NativeVendor_m2CB8F5FBC3A321F3AF1F532EB647F9EFCD5072DF_inline (Vendor_t3CB337A26F4C064EA523FCAF163EB65FB3D78385* __this, const RuntimeMethod* method) 
{
	{
		// public IVendor NativeVendor { get; }
		RuntimeObject* L_0 = __this->___U3CNativeVendorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Builder_GetNativeVendorBuilder_mFB56DDFC23237B460E3B8B5F5FEFE1D396E1643B_inline (Builder_t9EDF8162C3700691CC708FB186E3E4DEFE2C8614* __this, const RuntimeMethod* method) 
{
	{
		// return _vendorBuilder;
		RuntimeObject* L_0 = __this->____vendorBuilder_0;
		return L_0;
	}
}
