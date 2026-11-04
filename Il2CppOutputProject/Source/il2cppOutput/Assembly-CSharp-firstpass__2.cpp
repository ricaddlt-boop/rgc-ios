#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA;
struct Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72;

IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m4DCD972D3EBB8752C4E9CA025E1DD8E74ED472ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mAAB460B0B112F17B35AC0EA994E3F48D76B39827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m5786A2CB849D514E9D6FBCE9D8471CAFDB80FF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m223166CEEB81D4456C369D8D1B8BAE8032266C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_m809179F31439D0ADA4F73921B3D23076A4A26888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_mFF0F2F782B7EB0D293A3BC4E241D7FD5BCE9E8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_mBD322DFD4B4D590D295C32EC7A6B1B304DB409AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_m962130C2A9A7AC15152DE234F1192D4A79CB2CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_m6158366B910923EA1BB901F44D2759D4C9349ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_mB6C11C5DE8A4E600EAEB30779BC66D5417D49B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mF6A7612BFAEB181304CC175DBFB5AD7FF601BBE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mD95AA34C82938F8FCFC37B43BE6038940CA5A7A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_m66957604BACED9479B70EE23302C69156233C3FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_m0565FA39F08EAE099976E21DD3B391457BBACBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m6F517DEC3D6747D43B0F64278C441ACB915DCBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_mF80298800ED49CE4E204547E2C51C6DF1F729FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_m73A1E02995D0452A4FE9DBA75DF57FEAD7CBE138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_m2C6F8FCE1749F3FE6A6C2A4D973DA2789F4AF535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_mE3BBD9A06294C1988A45CF15DBD4BEE7B1762A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m338F5A39A07D1A549D00F665AE067945359A242C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m8DEF1EA7103B03D13EF0AE12D71C2131C8AAE154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_mAEE27E76DDB340BFF6844E2EFFF70428DF0EB681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m4ACD9C2F154F95E583005BB2C158DE20FF1B83BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_mAF61EB91B4D0B5B96E574F388E6C62D81C41B825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_m2E5A6C01168F0395BF9D5E65C30CEFD795C27A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_m91D1AF9ECBB435E7DDEACA8125E0174FEE083125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_m1D5CFBE13E0B95FB85893DADC5CDBE2883FD8A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_m644D952CBE941FCDA3B591524BCE06DB4C2B479C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mB043200D4B7E95E29BFEF89C6B30D88BA0F4256C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};
struct FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23  : public RuntimeObject
{
	bool ___Return;
	int32_t ___NextState;
	Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* ___L;
	int32_t ___StateStack;
};
struct Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C  : public RuntimeObject
{
	bool ___allow_comments;
	bool ___allow_single_quoted_strings;
	bool ___end_of_input;
	FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___fsm_context;
	int32_t ___input_buffer;
	int32_t ___input_char;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader;
	int32_t ___state;
	StringBuilder_t* ___string_buffer;
	String_t* ___string_value;
	int32_t ___token;
	int32_t ___unichar;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D112_tDFA786003B73336988BB37A2B625BA5FAAA18B72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tDFA786003B73336988BB37A2B625BA5FAAA18B72__padding[112];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1887_t2802DEE2686D64E73CD262BAA5CF4211EB41B25A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1887_t2802DEE2686D64E73CD262BAA5CF4211EB41B25A__padding[1887];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3234_t69282B346A7B66CC9B972B8A8121DC7D550CB368 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3234_t69282B346A7B66CC9B972B8A8121DC7D550CB368__padding[3234];
	};
};
#pragma pack(pop, tp)
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct JsonToken_tA0E4E1F42719E3C684980BD711EBB7070F7B110D 
{
	int32_t ___value__;
};
struct ParserToken_t08041C34810474D6BF1F7C103E1D68615F8F414D 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
struct StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72  : public MulticastDelegate_t
{
};
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121_StaticFields
{
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A;
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD;
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0;
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF;
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85;
	__StaticArrayInitTypeSizeU3D112_tDFA786003B73336988BB37A2B625BA5FAAA18B72 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82;
	__StaticArrayInitTypeSizeU3D1887_t2802DEE2686D64E73CD262BAA5CF4211EB41B25A ___E2E370A67806A9F9753AFE1E5CA46AD31599C0D89A5B6746C3B654AE7E9F2B35;
	__StaticArrayInitTypeSizeU3D12_t5C4B54ACDD0ADD81A6ECCA9DD574CAD6DFA39F37 ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206;
	__StaticArrayInitTypeSizeU3D3234_t69282B346A7B66CC9B972B8A8121DC7D550CB368 ___FEC749869F52C6ECE263537C5DB8CBE3FED5201ACD002CF2C10AFD01E31EEAF9;
};
struct Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fsm_return_table;
	StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* ___fsm_handler_table;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5  : public RuntimeArray
{
	ALIGN_FIELD (8) StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* m_Items[1];

	inline StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m11F7DF2292CCA051EA47F1A847C1D2F599B9D0EF (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m909D601FDD418D876E10CC0086AE0DC3BF0F3B9E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mB608F4D77C95F9E3B2E2CAEB5215CD89A46D42AA (int32_t ___0_esc_char, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mD4ACFBC354AECD29431131769C7F38950064F395 (int32_t ___0_digit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mC953D0FB8E90D1CCCEDF0F33B4AEC061C3871549 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_inline (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m6CB5428B20765964E16CB1A27E6C9BCB14034E60 (JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA* __this, int32_t ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m11921C44BCE9CF29ECEE0DB302C44A2A1324D30E (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_comments;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m474EA61B51AD9C6C09775FB3CA4E4A89EA90A9D3 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_comments = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m5701644B9A9B252D407E4AD9EA1B5028EE786B82 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_single_quoted_strings;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mF00DBC9EC674CC9B1B3ADBBBE83024B61E5DB750 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_single_quoted_strings = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m107E4A62C09BAC22231DBC0A4988E6B54FC189FC (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m8D16E3C7D5A4457517A6C5DBEBC1C64E17BAE8EB (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m41C7D557125C5A1C6EBD559030FA57F1DF4E55A2 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___string_value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mC42CC21C740F1EB82B05E9CA43FF652BDDD8F487 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___allow_comments = (bool)1;
		__this->___allow_single_quoted_strings = (bool)1;
		__this->___input_buffer = 0;
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)128), NULL);
		__this->___string_buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_buffer), (void*)L_0);
		__this->___state = 1;
		__this->___end_of_input = (bool)0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = ___0_reader;
		__this->___reader = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader), (void*)L_1);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_2 = (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*)il2cpp_codegen_object_new(FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23_il2cpp_TypeInfo_var);
		FsmContext__ctor_m11F7DF2292CCA051EA47F1A847C1D2F599B9D0EF(L_2, NULL);
		__this->___fsm_context = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fsm_context), (void*)L_2);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = __this->___fsm_context;
		NullCheck(L_3);
		L_3->___L = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___L), (void*)__this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_mB7CA584D42969D7B4F3DCF67E03D955238903FC3 (const RuntimeMethod* method) 
{
	{
		Lexer_PopulateFsmTables_m909D601FDD418D876E10CC0086AE0DC3BF0F3B9E(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mD4ACFBC354AECD29431131769C7F38950064F395 (int32_t ___0_digit, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_digit;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		int32_t L_1 = ___0_digit;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0044:
	{
		return ((int32_t)10);
	}

IL_0047:
	{
		return ((int32_t)11);
	}

IL_004a:
	{
		return ((int32_t)12);
	}

IL_004d:
	{
		return ((int32_t)13);
	}

IL_0050:
	{
		return ((int32_t)14);
	}

IL_0053:
	{
		return ((int32_t)15);
	}

IL_0056:
	{
		int32_t L_2 = ___0_digit;
		return ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)48)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m909D601FDD418D876E10CC0086AE0DC3BF0F3B9E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_mAAB460B0B112F17B35AC0EA994E3F48D76B39827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m5786A2CB849D514E9D6FBCE9D8471CAFDB80FF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m223166CEEB81D4456C369D8D1B8BAE8032266C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_m809179F31439D0ADA4F73921B3D23076A4A26888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_mFF0F2F782B7EB0D293A3BC4E241D7FD5BCE9E8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_mBD322DFD4B4D590D295C32EC7A6B1B304DB409AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_m962130C2A9A7AC15152DE234F1192D4A79CB2CB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_m6158366B910923EA1BB901F44D2759D4C9349ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_mB6C11C5DE8A4E600EAEB30779BC66D5417D49B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_mF6A7612BFAEB181304CC175DBFB5AD7FF601BBE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_mD95AA34C82938F8FCFC37B43BE6038940CA5A7A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_m66957604BACED9479B70EE23302C69156233C3FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_m0565FA39F08EAE099976E21DD3B391457BBACBA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_m6F517DEC3D6747D43B0F64278C441ACB915DCBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_mF80298800ED49CE4E204547E2C51C6DF1F729FCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_m73A1E02995D0452A4FE9DBA75DF57FEAD7CBE138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_m2C6F8FCE1749F3FE6A6C2A4D973DA2789F4AF535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_mE3BBD9A06294C1988A45CF15DBD4BEE7B1762A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_m338F5A39A07D1A549D00F665AE067945359A242C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m8DEF1EA7103B03D13EF0AE12D71C2131C8AAE154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_mAEE27E76DDB340BFF6844E2EFFF70428DF0EB681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_m4ACD9C2F154F95E583005BB2C158DE20FF1B83BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_mAF61EB91B4D0B5B96E574F388E6C62D81C41B825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_m2E5A6C01168F0395BF9D5E65C30CEFD795C27A5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_m91D1AF9ECBB435E7DDEACA8125E0174FEE083125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_m1D5CFBE13E0B95FB85893DADC5CDBE2883FD8A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_m644D952CBE941FCDA3B591524BCE06DB4C2B479C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_mB043200D4B7E95E29BFEF89C6B30D88BA0F4256C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_0 = (StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5*)(StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5*)SZArrayNew(StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_1 = L_0;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_2 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_2, NULL, (intptr_t)((void*)Lexer_State1_mD95AA34C82938F8FCFC37B43BE6038940CA5A7A1_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_2);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_3 = L_1;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_4 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_4, NULL, (intptr_t)((void*)Lexer_State2_mAEE27E76DDB340BFF6844E2EFFF70428DF0EB681_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_4);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_5 = L_3;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_6 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_6, NULL, (intptr_t)((void*)Lexer_State3_m4ACD9C2F154F95E583005BB2C158DE20FF1B83BB_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_6);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_7 = L_5;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_8 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_8, NULL, (intptr_t)((void*)Lexer_State4_mAF61EB91B4D0B5B96E574F388E6C62D81C41B825_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_8);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_9 = L_7;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_10 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_10, NULL, (intptr_t)((void*)Lexer_State5_m2E5A6C01168F0395BF9D5E65C30CEFD795C27A5E_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_10);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_11 = L_9;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_12 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_12, NULL, (intptr_t)((void*)Lexer_State6_m91D1AF9ECBB435E7DDEACA8125E0174FEE083125_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_12);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_13 = L_11;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_14 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_14, NULL, (intptr_t)((void*)Lexer_State7_m1D5CFBE13E0B95FB85893DADC5CDBE2883FD8A0F_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_14);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_15 = L_13;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_16 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_16, NULL, (intptr_t)((void*)Lexer_State8_m644D952CBE941FCDA3B591524BCE06DB4C2B479C_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_16);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_17 = L_15;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_18 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_18, NULL, (intptr_t)((void*)Lexer_State9_mB043200D4B7E95E29BFEF89C6B30D88BA0F4256C_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_18);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_19 = L_17;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_20 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_20, NULL, (intptr_t)((void*)Lexer_State10_mAAB460B0B112F17B35AC0EA994E3F48D76B39827_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_20);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_21 = L_19;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_22 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_22, NULL, (intptr_t)((void*)Lexer_State11_m5786A2CB849D514E9D6FBCE9D8471CAFDB80FF76_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_22);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_23 = L_21;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_24 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_24, NULL, (intptr_t)((void*)Lexer_State12_m223166CEEB81D4456C369D8D1B8BAE8032266C63_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_24);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_25 = L_23;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_26 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_26, NULL, (intptr_t)((void*)Lexer_State13_m809179F31439D0ADA4F73921B3D23076A4A26888_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_26);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_27 = L_25;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_28 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_28, NULL, (intptr_t)((void*)Lexer_State14_mFF0F2F782B7EB0D293A3BC4E241D7FD5BCE9E8C1_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_28);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_29 = L_27;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_30 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_30, NULL, (intptr_t)((void*)Lexer_State15_mBD322DFD4B4D590D295C32EC7A6B1B304DB409AF_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_30);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_31 = L_29;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_32 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_32, NULL, (intptr_t)((void*)Lexer_State16_m962130C2A9A7AC15152DE234F1192D4A79CB2CB9_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_32);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_33 = L_31;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_34 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_34, NULL, (intptr_t)((void*)Lexer_State17_m6158366B910923EA1BB901F44D2759D4C9349ED9_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_34);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_35 = L_33;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_36 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_36, NULL, (intptr_t)((void*)Lexer_State18_mB6C11C5DE8A4E600EAEB30779BC66D5417D49B6F_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_36);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_37 = L_35;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_38 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_38, NULL, (intptr_t)((void*)Lexer_State19_mF6A7612BFAEB181304CC175DBFB5AD7FF601BBE1_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_38);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_39 = L_37;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_40 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_40, NULL, (intptr_t)((void*)Lexer_State20_m66957604BACED9479B70EE23302C69156233C3FC_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_40);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_41 = L_39;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_42 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_42, NULL, (intptr_t)((void*)Lexer_State21_m0565FA39F08EAE099976E21DD3B391457BBACBA7_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_42);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_43 = L_41;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_44 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_44, NULL, (intptr_t)((void*)Lexer_State22_m6F517DEC3D6747D43B0F64278C441ACB915DCBCD_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_44);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_45 = L_43;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_46 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_46, NULL, (intptr_t)((void*)Lexer_State23_mF80298800ED49CE4E204547E2C51C6DF1F729FCE_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_46);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_47 = L_45;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_48 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_48, NULL, (intptr_t)((void*)Lexer_State24_m73A1E02995D0452A4FE9DBA75DF57FEAD7CBE138_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_48);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_49 = L_47;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_50 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_50, NULL, (intptr_t)((void*)Lexer_State25_m2C6F8FCE1749F3FE6A6C2A4D973DA2789F4AF535_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_50);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_51 = L_49;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_52 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_52, NULL, (intptr_t)((void*)Lexer_State26_mE3BBD9A06294C1988A45CF15DBD4BEE7B1762A35_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_52);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_53 = L_51;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_54 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_54, NULL, (intptr_t)((void*)Lexer_State27_m338F5A39A07D1A549D00F665AE067945359A242C_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_54);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_55 = L_53;
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_56 = (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)il2cpp_codegen_object_new(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72_il2cpp_TypeInfo_var);
		StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A(L_56, NULL, (intptr_t)((void*)Lexer_State28_m8DEF1EA7103B03D13EF0AE12D71C2131C8AAE154_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*)L_56);
		il2cpp_codegen_runtime_class_init_inline(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_handler_table = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_handler_table), (void*)L_55);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = L_57;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_58, L_59, NULL);
		((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_return_table = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_return_table), (void*)L_58);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mB608F4D77C95F9E3B2E2CAEB5215CD89A46D42AA (int32_t ___0_esc_char, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_esc_char;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)92))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___0_esc_char;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)39))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_esc_char;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = ___0_esc_char;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0016:
	{
		int32_t L_4 = ___0_esc_char;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ___0_esc_char;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0022:
	{
		int32_t L_6 = ___0_esc_char;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)102))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___0_esc_char;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)98))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = ___0_esc_char;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)102))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0059;
	}

IL_0033:
	{
		int32_t L_9 = ___0_esc_char;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_10 = ___0_esc_char;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___0_esc_char;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)116))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_0044:
	{
		int32_t L_12 = ___0_esc_char;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_13;
		L_13 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_12, NULL);
		return L_13;
	}

IL_004b:
	{
		return ((int32_t)10);
	}

IL_004e:
	{
		return ((int32_t)9);
	}

IL_0051:
	{
		return ((int32_t)13);
	}

IL_0054:
	{
		return 8;
	}

IL_0056:
	{
		return ((int32_t)12);
	}

IL_0059:
	{
		return ((int32_t)63);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mD95AA34C82938F8FCFC37B43BE6038940CA5A7A1 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_01d9;
	}

IL_0005:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01d9;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01d9;
		}
	}

IL_0038:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_13 = L_12->___L;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_15 = ___0_ctx;
		NullCheck(L_15);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_16 = L_15->___L;
		NullCheck(L_16);
		StringBuilder_t* L_17 = L_16->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_19 = L_18->___L;
		NullCheck(L_19);
		int32_t L_20 = L_19->___input_char;
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)L_20), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___NextState = 3;
		return (bool)1;
	}

IL_007c:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_23 = ___0_ctx;
		NullCheck(L_23);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_24 = L_23->___L;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char;
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)91))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01d7;
	}

IL_00a4:
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0117;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_01d7;
			}
			case 3:
			{
				goto IL_01be;
			}
			case 4:
			{
				goto IL_014d;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_00d0:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)110))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)93))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)102))))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)110))))
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01d7;
	}

IL_00ef:
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)116))))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)123))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)125))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_0106:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_40 = ___0_ctx;
		NullCheck(L_40);
		L_40->___NextState = ((int32_t)19);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_41 = ___0_ctx;
		NullCheck(L_41);
		L_41->___Return = (bool)1;
		return (bool)1;
	}

IL_0117:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_42 = ___0_ctx;
		NullCheck(L_42);
		L_42->___NextState = 1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_43 = ___0_ctx;
		NullCheck(L_43);
		L_43->___Return = (bool)1;
		return (bool)1;
	}

IL_0127:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_44 = ___0_ctx;
		NullCheck(L_44);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_45 = L_44->___L;
		NullCheck(L_45);
		StringBuilder_t* L_46 = L_45->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_47 = ___0_ctx;
		NullCheck(L_47);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_48 = L_47->___L;
		NullCheck(L_48);
		int32_t L_49 = L_48->___input_char;
		NullCheck(L_46);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)L_49), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_51 = ___0_ctx;
		NullCheck(L_51);
		L_51->___NextState = 2;
		return (bool)1;
	}

IL_014d:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_52 = ___0_ctx;
		NullCheck(L_52);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_53 = L_52->___L;
		NullCheck(L_53);
		StringBuilder_t* L_54 = L_53->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_55 = ___0_ctx;
		NullCheck(L_55);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_56 = L_55->___L;
		NullCheck(L_56);
		int32_t L_57 = L_56->___input_char;
		NullCheck(L_54);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_54, ((int32_t)(uint16_t)L_57), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_59 = ___0_ctx;
		NullCheck(L_59);
		L_59->___NextState = 4;
		return (bool)1;
	}

IL_0173:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_60 = ___0_ctx;
		NullCheck(L_60);
		L_60->___NextState = ((int32_t)12);
		return (bool)1;
	}

IL_017d:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_61 = ___0_ctx;
		NullCheck(L_61);
		L_61->___NextState = ((int32_t)16);
		return (bool)1;
	}

IL_0187:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_62 = ___0_ctx;
		NullCheck(L_62);
		L_62->___NextState = ((int32_t)9);
		return (bool)1;
	}

IL_0191:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_63 = ___0_ctx;
		NullCheck(L_63);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_64 = L_63->___L;
		NullCheck(L_64);
		bool L_65 = L_64->___allow_single_quoted_strings;
		if (L_65)
		{
			goto IL_01a0;
		}
	}
	{
		return (bool)0;
	}

IL_01a0:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_66 = ___0_ctx;
		NullCheck(L_66);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_67 = L_66->___L;
		NullCheck(L_67);
		L_67->___input_char = ((int32_t)34);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_68 = ___0_ctx;
		NullCheck(L_68);
		L_68->___NextState = ((int32_t)23);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_69 = ___0_ctx;
		NullCheck(L_69);
		L_69->___Return = (bool)1;
		return (bool)1;
	}

IL_01be:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_70 = ___0_ctx;
		NullCheck(L_70);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_71 = L_70->___L;
		NullCheck(L_71);
		bool L_72 = L_71->___allow_comments;
		if (L_72)
		{
			goto IL_01cd;
		}
	}
	{
		return (bool)0;
	}

IL_01cd:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_73 = ___0_ctx;
		NullCheck(L_73);
		L_73->___NextState = ((int32_t)25);
		return (bool)1;
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_74 = ___0_ctx;
		NullCheck(L_74);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_75 = L_74->___L;
		NullCheck(L_75);
		bool L_76;
		L_76 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_75, NULL);
		if (L_76)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_mAEE27E76DDB340BFF6844E2EFFF70428DF0EB681 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_13 = L_12->___L;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState = 3;
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_18 = L_17->___L;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0085;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_20 = ___0_ctx;
		NullCheck(L_20);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_21 = L_20->___L;
		NullCheck(L_21);
		StringBuilder_t* L_22 = L_21->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_23 = ___0_ctx;
		NullCheck(L_23);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_24 = L_23->___L;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char;
		NullCheck(L_22);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)(uint16_t)L_25), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_27 = ___0_ctx;
		NullCheck(L_27);
		L_27->___NextState = 4;
		return (bool)1;
	}

IL_0085:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m4ACD9C2F154F95E583005BB2C158DE20FF1B83BB (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_011c;
	}

IL_0005:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_011c;
	}

IL_0045:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_14 = L_13->___L;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_17 = L_16->___L;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_20 = L_19->___L;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState = 1;
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_25 = L_24->___L;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)69))))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_011a;
	}

IL_00a4:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)101))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}

IL_00b3:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_34 = ___0_ctx;
		NullCheck(L_34);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_35 = L_34->___L;
		NullCheck(L_35);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_35, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_36 = ___0_ctx;
		NullCheck(L_36);
		L_36->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_37 = ___0_ctx;
		NullCheck(L_37);
		L_37->___NextState = 1;
		return (bool)1;
	}

IL_00ce:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_38 = ___0_ctx;
		NullCheck(L_38);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_39 = L_38->___L;
		NullCheck(L_39);
		StringBuilder_t* L_40 = L_39->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_41 = ___0_ctx;
		NullCheck(L_41);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_42 = L_41->___L;
		NullCheck(L_42);
		int32_t L_43 = L_42->___input_char;
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)(uint16_t)L_43), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_45 = ___0_ctx;
		NullCheck(L_45);
		L_45->___NextState = 5;
		return (bool)1;
	}

IL_00f4:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_46 = ___0_ctx;
		NullCheck(L_46);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_47 = L_46->___L;
		NullCheck(L_47);
		StringBuilder_t* L_48 = L_47->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_49 = ___0_ctx;
		NullCheck(L_49);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_50 = L_49->___L;
		NullCheck(L_50);
		int32_t L_51 = L_50->___input_char;
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_48, ((int32_t)(uint16_t)L_51), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_53 = ___0_ctx;
		NullCheck(L_53);
		L_53->___NextState = 7;
		return (bool)1;
	}

IL_011a:
	{
		return (bool)0;
	}

IL_011c:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_54 = ___0_ctx;
		NullCheck(L_54);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_55 = L_54->___L;
		NullCheck(L_55);
		bool L_56;
		L_56 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_55, NULL);
		if (L_56)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_mAF61EB91B4D0B5B96E574F388E6C62D81C41B825 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = ___0_ctx;
		NullCheck(L_12);
		L_12->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_13 = ___0_ctx;
		NullCheck(L_13);
		L_13->___NextState = 1;
		return (bool)1;
	}

IL_0049:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_15 = L_14->___L;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char;
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)69))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)44))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)46))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00e1;
	}

IL_006b:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)93))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e1;
		}
	}

IL_007a:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_25 = L_24->___L;
		NullCheck(L_25);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_25, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_26 = ___0_ctx;
		NullCheck(L_26);
		L_26->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_27 = ___0_ctx;
		NullCheck(L_27);
		L_27->___NextState = 1;
		return (bool)1;
	}

IL_0095:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_28 = ___0_ctx;
		NullCheck(L_28);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_29 = L_28->___L;
		NullCheck(L_29);
		StringBuilder_t* L_30 = L_29->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_31 = ___0_ctx;
		NullCheck(L_31);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_32 = L_31->___L;
		NullCheck(L_32);
		int32_t L_33 = L_32->___input_char;
		NullCheck(L_30);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, ((int32_t)(uint16_t)L_33), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_35 = ___0_ctx;
		NullCheck(L_35);
		L_35->___NextState = 5;
		return (bool)1;
	}

IL_00bb:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_36 = ___0_ctx;
		NullCheck(L_36);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_37 = L_36->___L;
		NullCheck(L_37);
		StringBuilder_t* L_38 = L_37->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_39 = ___0_ctx;
		NullCheck(L_39);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_40 = L_39->___L;
		NullCheck(L_40);
		int32_t L_41 = L_40->___input_char;
		NullCheck(L_38);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)(uint16_t)L_41), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_43 = ___0_ctx;
		NullCheck(L_43);
		L_43->___NextState = 7;
		return (bool)1;
	}

IL_00e1:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_m2E5A6C01168F0395BF9D5E65C30CEFD795C27A5E (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_13 = L_12->___L;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState = 6;
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_m91D1AF9ECBB435E7DDEACA8125E0174FEE083125 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_00f1;
	}

IL_0045:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_14 = L_13->___L;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_17 = L_16->___L;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_20 = L_19->___L;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState = 1;
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_25 = L_24->___L;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_33 = ___0_ctx;
		NullCheck(L_33);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_34 = L_33->___L;
		NullCheck(L_34);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_34, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_35 = ___0_ctx;
		NullCheck(L_35);
		L_35->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_36 = ___0_ctx;
		NullCheck(L_36);
		L_36->___NextState = 1;
		return (bool)1;
	}

IL_00c9:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_37 = ___0_ctx;
		NullCheck(L_37);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_38 = L_37->___L;
		NullCheck(L_38);
		StringBuilder_t* L_39 = L_38->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_40 = ___0_ctx;
		NullCheck(L_40);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_41 = L_40->___L;
		NullCheck(L_41);
		int32_t L_42 = L_41->___input_char;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_44 = ___0_ctx;
		NullCheck(L_44);
		L_44->___NextState = 7;
		return (bool)1;
	}

IL_00ef:
	{
		return (bool)0;
	}

IL_00f1:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_45 = ___0_ctx;
		NullCheck(L_45);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_46 = L_45->___L;
		NullCheck(L_46);
		bool L_47;
		L_47 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_46, NULL);
		if (L_47)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_m1D5CFBE13E0B95FB85893DADC5CDBE2883FD8A0F (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_13 = L_12->___L;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState = 8;
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_18 = L_17->___L;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char;
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_008c;
		}
	}

IL_0066:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_22 = ___0_ctx;
		NullCheck(L_22);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_23 = L_22->___L;
		NullCheck(L_23);
		StringBuilder_t* L_24 = L_23->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_25 = ___0_ctx;
		NullCheck(L_25);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_26 = L_25->___L;
		NullCheck(L_26);
		int32_t L_27 = L_26->___input_char;
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)(uint16_t)L_27), NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_29 = ___0_ctx;
		NullCheck(L_29);
		L_29->___NextState = 8;
		return (bool)1;
	}

IL_008c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_m644D952CBE941FCDA3B591524BCE06DB4C2B479C (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_10 = L_9->___L;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_00b7;
	}

IL_0042:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_14 = L_13->___L;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_17 = L_16->___L;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_20 = L_19->___L;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState = 1;
		return (bool)1;
	}

IL_007f:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_25 = L_24->___L;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_30 = ___0_ctx;
		NullCheck(L_30);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_31 = L_30->___L;
		NullCheck(L_31);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_31, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_32 = ___0_ctx;
		NullCheck(L_32);
		L_32->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_33 = ___0_ctx;
		NullCheck(L_33);
		L_33->___NextState = 1;
		return (bool)1;
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_34 = ___0_ctx;
		NullCheck(L_34);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_35 = L_34->___L;
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_35, NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mB043200D4B7E95E29BFEF89C6B30D88BA0F4256C (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)10);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mAAB460B0B112F17B35AC0EA994E3F48D76B39827 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)11);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m5786A2CB849D514E9D6FBCE9D8471CAFDB80FF76 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState = 1;
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m223166CEEB81D4456C369D8D1B8BAE8032266C63 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)13);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_m809179F31439D0ADA4F73921B3D23076A4A26888 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)14);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_mFF0F2F782B7EB0D293A3BC4E241D7FD5BCE9E8C1 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)15);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_mBD322DFD4B4D590D295C32EC7A6B1B304DB409AF (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState = 1;
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_m962130C2A9A7AC15152DE234F1192D4A79CB2CB9 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)17);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_m6158366B910923EA1BB901F44D2759D4C9349ED9 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = ((int32_t)18);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_mB6C11C5DE8A4E600EAEB30779BC66D5417D49B6F (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState = 1;
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mF6A7612BFAEB181304CC175DBFB5AD7FF601BBE1 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_6 = L_5->___L;
		NullCheck(L_6);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_6, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState = ((int32_t)20);
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___StateStack = ((int32_t)19);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_10 = ___0_ctx;
		NullCheck(L_10);
		L_10->___NextState = ((int32_t)21);
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_12 = L_11->___L;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_15 = L_14->___L;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_19 = L_18->___L;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_m66957604BACED9479B70EE23302C69156233C3FC (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState = 1;
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_m0565FA39F08EAE099976E21DD3B391457BBACBA7 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_17 = ___0_ctx;
		NullCheck(L_17);
		L_17->___NextState = ((int32_t)22);
		return (bool)1;
	}

IL_0075:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_19 = L_18->___L;
		NullCheck(L_19);
		StringBuilder_t* L_20 = L_19->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_21 = ___0_ctx;
		NullCheck(L_21);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_22 = L_21->___L;
		NullCheck(L_22);
		int32_t L_23 = L_22->___input_char;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		Il2CppChar L_24;
		L_24 = Lexer_ProcessEscChar_mB608F4D77C95F9E3B2E2CAEB5215CD89A46D42AA(L_23, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_24, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_26 = ___0_ctx;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_27 = ___0_ctx;
		NullCheck(L_27);
		int32_t L_28 = L_27->___StateStack;
		NullCheck(L_26);
		L_26->___NextState = L_28;
		return (bool)1;
	}

IL_00a4:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m6F517DEC3D6747D43B0F64278C441ACB915DCBCD (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		L_1->___unichar = 0;
		goto IL_00d5;
	}

IL_0019:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_2 = ___0_ctx;
		NullCheck(L_2);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_3 = L_2->___L;
		NullCheck(L_3);
		int32_t L_4 = L_3->___input_char;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_6 = L_5->___L;
		NullCheck(L_6);
		int32_t L_7 = L_6->___input_char;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_9 = L_8->___L;
		NullCheck(L_9);
		int32_t L_10 = L_9->___input_char;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_12 = L_11->___L;
		NullCheck(L_12);
		int32_t L_13 = L_12->___input_char;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_15 = L_14->___L;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_18 = L_17->___L;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_20 = ___0_ctx;
		NullCheck(L_20);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_21 = L_20->___L;
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->___unichar;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_25 = L_24->___L;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_mD4ACFBC354AECD29431131769C7F38950064F395(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30/((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_32 = ___0_ctx;
		NullCheck(L_32);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_33 = L_32->___L;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_35 = ___0_ctx;
		NullCheck(L_35);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_36 = L_35->___L;
		NullCheck(L_36);
		int32_t L_37 = L_36->___unichar;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_37, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_38, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_40 = ___0_ctx;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_41 = ___0_ctx;
		NullCheck(L_41);
		int32_t L_42 = L_41->___StateStack;
		NullCheck(L_40);
		L_40->___NextState = L_42;
		return (bool)1;
	}

IL_00d3:
	{
		return (bool)0;
	}

IL_00d5:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_43 = ___0_ctx;
		NullCheck(L_43);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_44 = L_43->___L;
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_44, NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_mF80298800ED49CE4E204547E2C51C6DF1F729FCE (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_6 = L_5->___L;
		NullCheck(L_6);
		Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01(L_6, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState = ((int32_t)24);
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___StateStack = ((int32_t)23);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_10 = ___0_ctx;
		NullCheck(L_10);
		L_10->___NextState = ((int32_t)21);
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_12 = L_11->___L;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_15 = L_14->___L;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_19 = L_18->___L;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_m73A1E02995D0452A4FE9DBA75DF57FEAD7CBE138 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_7 = L_6->___L;
		NullCheck(L_7);
		L_7->___input_char = ((int32_t)34);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___Return = (bool)1;
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___NextState = 1;
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_m2C6F8FCE1749F3FE6A6C2A4D973DA2789F4AF535 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_1, NULL);
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState = ((int32_t)27);
		return (bool)1;
	}

IL_002e:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___NextState = ((int32_t)26);
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_mE3BBD9A06294C1988A45CF15DBD4BEE7B1762A35 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		L_3->___NextState = 1;
		return (bool)1;
	}

IL_001a:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_4 = ___0_ctx;
		NullCheck(L_4);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_5 = L_4->___L;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m338F5A39A07D1A549D00F665AE067945359A242C (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		L_3->___NextState = ((int32_t)28);
		return (bool)1;
	}

IL_001b:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_4 = ___0_ctx;
		NullCheck(L_4);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_5 = L_4->___L;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m8DEF1EA7103B03D13EF0AE12D71C2131C8AAE154 (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_1 = L_0->___L;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_4 = L_3->___L;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState = 1;
		return (bool)1;
	}

IL_0029:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState = ((int32_t)27);
		return (bool)1;
	}

IL_0033:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_8 = ___0_ctx;
		NullCheck(L_8);
		Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* L_9 = L_8->___L;
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F(L_9, NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_mF184CE841F3898D845A162288F97AC52CC56DD2F (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Lexer_NextChar_mC953D0FB8E90D1CCCEDF0F33B4AEC061C3871549(__this, NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		__this->___end_of_input = (bool)1;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mC953D0FB8E90D1CCCEDF0F33B4AEC061C3871549 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___input_buffer;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___input_buffer;
		__this->___input_buffer = 0;
		return L_1;
	}

IL_0016:
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(10, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m4DCD972D3EBB8752C4E9CA025E1DD8E74ED472ED (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_0 = __this->___fsm_context;
		NullCheck(L_0);
		L_0->___Return = (bool)0;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t95C7F10AC4B6C9A991226A1DDF55D13D473006D5* L_1 = ((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_handler_table;
		int32_t L_2 = __this->___state;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_5 = __this->___fsm_context;
		NullCheck(L_4);
		bool L_6;
		L_6 = StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = __this->___input_char;
		JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA* L_8 = (JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tB918503D494FC9A9D7385C80FB2D028DB7DCB3AA_il2cpp_TypeInfo_var)));
		JsonException__ctor_m6CB5428B20765964E16CB1A27E6C9BCB14034E60(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m4DCD972D3EBB8752C4E9CA025E1DD8E74ED472ED_RuntimeMethod_var)));
	}

IL_0033:
	{
		bool L_9 = __this->___end_of_input;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_10 = __this->___fsm_context;
		NullCheck(L_10);
		bool L_11 = L_10->___Return;
		if (L_11)
		{
			goto IL_005d;
		}
	}
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_12 = __this->___fsm_context;
		NullCheck(L_12);
		int32_t L_13 = L_12->___NextState;
		__this->___state = L_13;
		goto IL_000c;
	}

IL_005d:
	{
		StringBuilder_t* L_14 = __this->___string_buffer;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		__this->___string_value = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_value), (void*)L_15);
		StringBuilder_t* L_16 = __this->___string_buffer;
		StringBuilder_t* L_17 = __this->___string_buffer;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_16, 0, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C_il2cpp_TypeInfo_var))->___fsm_return_table;
		int32_t L_21 = __this->___state;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___token = L_23;
		int32_t L_24 = __this->___token;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_25 = __this->___input_char;
		__this->___token = L_25;
	}

IL_00b3:
	{
		FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* L_26 = __this->___fsm_context;
		NullCheck(L_26);
		int32_t L_27 = L_26->___NextState;
		__this->___state = L_27;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m74492F10EA9800227E765E43936CC2E550975D01 (Lexer_t0EE8BBB5BF6CF617CA3C1F72CF7E275CCE481E7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___input_char;
		__this->___input_buffer = L_0;
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
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_Multicast(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* currentDelegate = reinterpret_cast<StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenInst(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	typedef bool (*FunctionPointerType) (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ctx, method);
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenStatic(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ctx, method);
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenVirtual(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_ctx);
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenInterface(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_ctx);
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenGenericVirtual(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_ctx);
}
bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenGenericInterface(StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_ctx);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m93598F93A3253878D0B06BC06641AAA590ED525A (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_mB4889A3811E7BAAC87C6B156B731623EFAB18BA9 (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_ctx;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m63CD4FED73B620A25D995067F3A3CECF97456F97 (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mD7F3B4C39D8BDC0C9B1C6AA3824713A343664F9A_inline (StateHandler_t18D70FE9855571B91889927E70BF122D73AA6B72* __this, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23* ___0_ctx, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t2E6335D09B05DB2B437D6F07421F812405417C23*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
