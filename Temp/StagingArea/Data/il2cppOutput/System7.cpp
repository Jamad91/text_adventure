#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.Unity.UnityTls/unitytls_x509verify_callback
struct unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t
struct unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97;
// Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t
struct unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C RuntimeClass* HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D;
IL2CPP_EXTERN_C String_t* _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631;
IL2CPP_EXTERN_C String_t* _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D;
IL2CPP_EXTERN_C String_t* _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4;
IL2CPP_EXTERN_C String_t* _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03;
IL2CPP_EXTERN_C String_t* _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144;
IL2CPP_EXTERN_C String_t* _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556;
IL2CPP_EXTERN_C String_t* _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC;
IL2CPP_EXTERN_C String_t* _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD;
IL2CPP_EXTERN_C String_t* _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018;
IL2CPP_EXTERN_C String_t* _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D;
IL2CPP_EXTERN_C String_t* _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5;
IL2CPP_EXTERN_C String_t* _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962;
IL2CPP_EXTERN_C String_t* _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC;
IL2CPP_EXTERN_C String_t* _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C;
IL2CPP_EXTERN_C const uint32_t HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID
struct  HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D  : public RuntimeObject
{
public:

public:
};

struct HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields
{
public:
	// System.String[] System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::m_Strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_Strings_0;

public:
	inline static int32_t get_offset_of_m_Strings_0() { return static_cast<int32_t>(offsetof(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields, ___m_Strings_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_Strings_0() const { return ___m_Strings_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_Strings_0() { return &___m_Strings_0; }
	inline void set_m_Strings_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_Strings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Strings_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Mono.Unity.UnityTls_unitytls_x509_ref
struct  unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5 
{
public:
	// System.UInt64 Mono.Unity.UnityTls_unitytls_x509_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509_ref_t4B933FE1711F247F993EE07326F67B7DFFD7DAA5, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls_unitytls_x509list_ref
struct  unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls_unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Mono.Unity.UnityTls_unitytls_error_code
struct  unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89 
{
public:
	// System.UInt32 Mono.Unity.UnityTls_unitytls_error_code::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_error_code_tC425776568E0A522F720337294FF5226445A9E89, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Unity.UnityTls_unitytls_x509verify_result
struct  unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls_unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Mono.Unity.UnityTls_unitytls_errorstate
struct  unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 
{
public:
	// System.UInt32 Mono.Unity.UnityTls_unitytls_errorstate::magic
	uint32_t ___magic_0;
	// Mono.Unity.UnityTls_unitytls_error_code Mono.Unity.UnityTls_unitytls_errorstate::code
	uint32_t ___code_1;
	// System.UInt64 Mono.Unity.UnityTls_unitytls_errorstate::reserved
	uint64_t ___reserved_2;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___magic_0)); }
	inline uint32_t get_magic_0() const { return ___magic_0; }
	inline uint32_t* get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(uint32_t value)
	{
		___magic_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___code_1)); }
	inline uint32_t get_code_1() const { return ___code_1; }
	inline uint32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(uint32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499, ___reserved_2)); }
	inline uint64_t get_reserved_2() const { return ___reserved_2; }
	inline uint64_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(uint64_t value)
	{
		___reserved_2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t
struct  unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t
struct  unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Unity.UnityTls_unitytls_x509verify_callback
struct  unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb3' to native representation
	Il2CppMethodPointer ____cb3_marshaled = NULL;
	____cb3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb3));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___cn1, ___cnLen2, ____cb3_marshaled, ___userData4, ___errorState5);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_default_ca_t__ctor_m87E8CBD1080B32E3E9B2085435089120EE8E7B51 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls_unitytls_x509verify_result Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls_unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls_unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls_unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_Invoke_m22C2DE021D3D750655FFEF54BE2B030596F1A82E (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = GenericVirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
					else
						result = VirtFuncInvoker6< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___cn1, ___cnLen2, ___cb3, ___userData4, ___errorState5, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls_unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls_unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls_unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, uint8_t* ___cn1, intptr_t ___cnLen2, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb3, void* ___userData4, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unitytls_x509verify_default_ca_t_BeginInvoke_mDD34421A5A03B034EAD940EA3E667E2ACEFF5829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = ___cn1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen2);
	__d_args[3] = ___cb3;
	__d_args[4] = ___userData4;
	__d_args[5] = ___errorState5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// Mono.Unity.UnityTls_unitytls_x509verify_result Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_default_ca_t_EndInvoke_m4D26A5425526F6A205596F7AE025620E74173282 (unitytls_x509verify_default_ca_t_tA14966CBF65E11A062006DBEEC9E89D4A5DAAC97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, Il2CppMethodPointer, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___cb4' to native representation
	Il2CppMethodPointer ____cb4_marshaled = NULL;
	____cb4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cb4));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___chain0, ___trustCA1, ___cn2, ___cnLen3, ____cb4_marshaled, ___userData5, ___errorState6);

	return returnValue;
}
// System.Void Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_x509verify_explicit_ca_t__ctor_m27337465175BADAB82BFF9333ADA82DCF2DFD2A3 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Mono.Unity.UnityTls_unitytls_x509verify_result Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls_unitytls_x509list_ref,Mono.Unity.UnityTls_unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls_unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls_unitytls_errorstate*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_Invoke_m56F009ABDD7ED613CB6AC27AF8CAD6E6FB34555B (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef uint32_t (*FunctionPointerType) (unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = GenericVirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(targetMethod, targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
					else
						result = VirtFuncInvoker7< uint32_t, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___chain0) - 1), ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D , uint8_t*, intptr_t, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C *, void*, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___chain0, ___trustCA1, ___cn2, ___cnLen3, ___cb4, ___userData5, ___errorState6, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls_unitytls_x509list_ref,Mono.Unity.UnityTls_unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls_unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls_unitytls_errorstate*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___trustCA1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509verify_callback_tFB7A5A2C48B19A81F927615C45B50BDFEB68A00C * ___cb4, void* ___userData5, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unitytls_x509verify_explicit_ca_t_BeginInvoke_m83F9DF37B6DCF058C496C26892257C5FE3CAB8F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___chain0);
	__d_args[1] = Box(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D_il2cpp_TypeInfo_var, &___trustCA1);
	__d_args[2] = ___cn2;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cnLen3);
	__d_args[4] = ___cb4;
	__d_args[5] = ___userData5;
	__d_args[6] = ___errorState6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// Mono.Unity.UnityTls_unitytls_x509verify_result Mono.Unity.UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t unitytls_x509verify_explicit_ca_t_EndInvoke_mC69D3C3E3F677940005907387BF6A51758A67968 (unitytls_x509verify_explicit_ca_t_t01052F0ED7BCB86255D75E27FB97E5E329A7D316 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60 (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HTTP_REQUEST_HEADER_ID_ToString_m1C8B5B5011B051AAF3EB364CC8D3D940A6581F60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->get_m_Strings_0();
		int32_t L_1 = ___position0;
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HTTP_REQUEST_HEADER_ID__cctor_mF6227C1ABC6104B748D7D7FA799EB384DB8EB5AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)41));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral69246FD8ECCD71895CF44BE2EB6A80E686C5A018);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4BD4A20D743286D24CF77C38E693ECBCE8CD3A7E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1C0680A8F698A8F35416CE75A2356C661641B7D9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral68ACB6B47D3431BDBD286C3153B250E20552A4AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralFAE55AFF6F18607FEDBE2F4C0C6BA4D4F219D504);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral47E7DF78FEB33C4D463D475ACA6A5FCA4DE8ACF8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralCC5A4102A5DDF34A7044AFF9259491C106ED8FB6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral935884DFDF8F8A8A6D67558F0B4C92779D175C75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral4DD4C5922A070C5C0CE53FC4868A2D61BF64A7C3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralFF1B24927A3EECD0984D30EA640A9B0CBAA6729C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		ArrayElementTypeCheck (L_19, _stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral7C5B2C0D17D684D4380087821D68BB021A77AA5D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		ArrayElementTypeCheck (L_20, _stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral8D28F1F930CE88A866A5AFD45B7587A776D2A2E5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral1F1F0198EC371523C2BEEAB18E73243B7B5F5D0D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		ArrayElementTypeCheck (L_23, _stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral0E5584AFF0328C3E9B727CFB3887E9E710B0F53D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		ArrayElementTypeCheck (L_24, _stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral015C9226A90A65B547DB1B59894F3908A8F2CC06);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		ArrayElementTypeCheck (L_26, _stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral67A54AB78AD61DDEB268617E3EE621D1193804DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		ArrayElementTypeCheck (L_27, _stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralD83A084C77919D323023FA38BD9EC97511C0C3F1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		ArrayElementTypeCheck (L_28, _stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral783C5B36660265F9D49078CA35348CD0ABDD49DF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		ArrayElementTypeCheck (L_29, _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		ArrayElementTypeCheck (L_30, _stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral61896E01350C3D7139AB7C79A29A3A8ED072B0C0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		ArrayElementTypeCheck (L_31, _stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralAFECF3A5E478A812AD9761D0C14980023E407962);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		ArrayElementTypeCheck (L_32, _stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralE31FBB002AD5481E70CB59BB178B49C5B9330F0E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		ArrayElementTypeCheck (L_33, _stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral5C648DB5BA0DE7A010730BEEDB7FEADB7EB4A556);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		ArrayElementTypeCheck (L_34, _stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralC6370F4D10E7342974C38CE91A5C8121AA774FD8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		ArrayElementTypeCheck (L_35, _stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral3D98372962A0D30238C43F12D007AFE39E995B24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		ArrayElementTypeCheck (L_36, _stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteralBB1692DA8ED7544A3193330A7D73D82D06F61206);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		ArrayElementTypeCheck (L_37, _stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral1488F649920198F59A3B53EA7C81503935DEF05E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		ArrayElementTypeCheck (L_38, _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		ArrayElementTypeCheck (L_39, _stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteralEBE44C95DC2315580987319331D4B060BF8AB6A8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		ArrayElementTypeCheck (L_40, _stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral1BFCDAF0CFD10D67417F172B29F830676249E631);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		ArrayElementTypeCheck (L_41, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		((HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_REQUEST_HEADER_ID_t12A00E55A62933A1E0A8350B0B9814C1EB21D02D_il2cpp_TypeInfo_var))->set_m_Strings_0(L_41);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
