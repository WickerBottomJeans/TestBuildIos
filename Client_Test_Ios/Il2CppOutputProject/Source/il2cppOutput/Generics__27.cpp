#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5;
struct Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246;
struct Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687;
struct Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA;
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
struct Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32;
struct Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC;
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
struct EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319;
struct EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct ICollection_1_tFABA6212D7D1E3FD8A16E6A0DEE3F3C586440221;
struct ICollection_1_tA0EDDE07336519E8BB7D0E79C533C2070EE3F2D7;
struct ICollection_1_tA557372C86DBB001BCDDBB8D40123D966595B4CA;
struct ICollection_1_t68F47CD2B5368A500EDD147F5642B685840575D9;
struct ICollection_1_tE495E985AB31E847FBB473C8890051B215E2F918;
struct ICollection_1_t2FF5A6AB1A19539AE18C0B00AB58C095C4431D53;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct IDictionary_2_t1BA105153A4043C1EEC2779285562B287DA7F1C7;
struct IDictionary_2_t6759C5D8EA388F26354DB2FA6955799E9C68C716;
struct IDictionary_2_t6595478EAF134EE797185D9F5DBF756DCBFB73F2;
struct IDictionary_2_t47C8AFC51D251756FD7B428F8F8F134BB70501EA;
struct IDictionary_2_t77967A5C4235DD5F80D644F16C0E5C66C87B5FF2;
struct IDictionary_2_tC7E4930CFB68BF7775607639828F6041AB59119A;
struct IDictionary_2_t1221CEDBB452FAFC2D9EA209287994DCF29A7B8A;
struct IEnumerable_1_t92C87ACF4509C80C5ABD9F49A4968ADC909FD237;
struct IEnumerable_1_tAB7E6AAC5334AFEE42DB96DB8C245338F041A2DB;
struct IEnumerable_1_t5C6AF6D53C19EB215CF8317D9090EB77DF87B273;
struct IEnumerable_1_tE05C4FEED78F1728B043665C88021D9E1B1AF2AE;
struct IEnumerable_1_t6AD47CB8BEC813E15985AA93F7394F6ECE74088A;
struct IEnumerable_1_tC5CE9A728BD8F76096153A85E2B5702BA6209D3C;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_t4C8F62BADC4544EB4A6EAC560E7126ABACA15BFA;
struct IEnumerator_1_t2647A777FA1A58139DBA1365550DC8AB67290588;
struct IEnumerator_1_tCB60C75BB6F00C83D274A0310974AFF8EB60202C;
struct IEnumerator_1_tB7E040C255CEB0622FFDC80EB44A967682EDF977;
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
struct IEnumerator_1_tF0935A8735CB8BF2F49012D8EFF2D796DB281DF7;
struct IEnumerator_1_tCB100C66008AE5486AD054C2AB4B79EEFAC8AA21;
struct IEqualityComparer_1_t4D3E66D5FAF0190A91D1D33B69679D63FA98F16B;
struct IEqualityComparer_1_tD1B98B5104A98DAF3797C59555735B90CCCF41EC;
struct IEqualityComparer_1_t5BD7FB4184D4BE6DC25B1A4F60DFA7DED470005E;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD;
struct KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16;
struct KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B;
struct KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD;
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E;
struct KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB;
struct KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C;
struct ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8;
struct ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326;
struct ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B;
struct ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9;
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
struct ValueCollection_t66950A766C470CC17408744B977179C7559E538B;
struct ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6;
struct EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E;
struct EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D;
struct EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24;
struct EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11;
struct EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B;
struct KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA;
struct KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA;
struct KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5;
struct KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004;
struct KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E;
struct EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D;
struct EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24;
struct EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8;
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F;
struct EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11;
struct EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B;
struct KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA;
struct KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA;
struct KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5;
struct KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8;
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882;
struct KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004;
struct KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* ____keys;
	ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* ____keys;
	ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* ____keys;
	ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* ____keys;
	ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* ____keys;
	ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* ____keys;
	ValueCollection_t66950A766C470CC17408744B977179C7559E538B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* ____keys;
	ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC  : public RuntimeObject
{
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};
struct EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319  : public RuntimeObject
{
};
struct EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD  : public RuntimeObject
{
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ____dictionary;
};
struct KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16  : public RuntimeObject
{
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ____dictionary;
};
struct KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B  : public RuntimeObject
{
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ____dictionary;
};
struct KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD  : public RuntimeObject
{
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ____dictionary;
};
struct KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
};
struct KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB  : public RuntimeObject
{
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ____dictionary;
};
struct KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C  : public RuntimeObject
{
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ____dictionary;
};
struct ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8  : public RuntimeObject
{
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ____dictionary;
};
struct ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326  : public RuntimeObject
{
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ____dictionary;
};
struct ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B  : public RuntimeObject
{
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ____dictionary;
};
struct ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9  : public RuntimeObject
{
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ____dictionary;
};
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296  : public RuntimeObject
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
};
struct ValueCollection_t66950A766C470CC17408744B977179C7559E538B  : public RuntimeObject
{
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ____dictionary;
};
struct ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6  : public RuntimeObject
{
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp;
	int32_t ___m_Version;
	String_t* ___m_LocationName;
};
struct Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 
{
	int32_t ___hashCode;
	int32_t ___next;
	double ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A 
{
	double ___key;
	RuntimeObject* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD 
{
	int32_t ___hashCode;
	int32_t ___next;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___key;
	RuntimeObject* ___value;
};
struct Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___value;
};
struct Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D 
{
	int32_t ___hashCode;
	int32_t ___next;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	int32_t ___value;
};
struct Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F 
{
	int32_t ___hashCode;
	int32_t ___next;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	RuntimeObject* ___value;
};
struct Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 
{
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 
{
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 
{
	Guid_t ___key;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___value;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	RuntimeObject* ___value;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 
{
	int32_t ___hashCode;
	int32_t ___next;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___key;
	RuntimeObject* ___value;
};
struct Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 
{
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A 
{
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 
{
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F 
{
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 
{
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___key;
	RuntimeObject* ___value;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 
{
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC ____current;
	int32_t ____getEnumeratorRetType;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields
{
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* ___defaultComparer;
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer;
};
struct EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319_StaticFields
{
	EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* ___defaultComparer;
};
struct EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F_StaticFields
{
	EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields
{
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
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
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 m_Items[1];

	inline Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
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
struct KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A m_Items[1];

	inline KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD m_Items[1];

	inline Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 m_Items[1];

	inline KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 m_Items[1];

	inline Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC m_Items[1];

	inline KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A m_Items[1];

	inline Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 m_Items[1];

	inline KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_LocationName), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF m_Items[1];

	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 m_Items[1];

	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D m_Items[1];

	inline Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 m_Items[1];

	inline KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F m_Items[1];

	inline Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 m_Items[1];

	inline KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CFD494DEDF6659E656F8B8D97CD6CE1AFD88562_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_gshared_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_gshared_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A_gshared (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4_gshared (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m55B9E691525E9BF5230282A7E6D0B51AAF8CD58F_gshared (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46_gshared (Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m71A54C09FFBB425E9FB032A9CFA16705730B8C3E_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9E59F01F6938A018F1CFAC8750D89F47CA75E1B3_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* Dictionary_2_get_Keys_mE65DAB9318A96609DD0DF713E0B2EA5DD08CEFDE_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* Dictionary_2_get_Values_mA1755B5CB6E9E348E82A4613C796A02BBCEC2DFC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA48DB98ADB6CC28754CC7DBD777C1DADDDAC4AFA_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA1F75B6C4623E5046EF5AE84149AFB0CA4F38338_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABEB581CB9727987B7C16A6EF28EA1EFCB7A0A9F_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_gshared_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_gshared_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23_gshared (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40_gshared (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m5FC6F038CE0531AD67146914EDB33C477F5DD532_gshared (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF_gshared (Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m534AFD3A8B97CB2B7D96320E94EA7406A25F3169_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m40EC29485254C33ECEFB82B984AE55AE042AB9D9_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* Dictionary_2_get_Keys_mA05E9AA15CA77A76B7F8A5B2B1D1758940E35F26_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* Dictionary_2_get_Values_mE193B4FB2A038745FCB7E560FFF3411CD71884A8_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8BD592D0F7D7433AEACDC178BC647D557A880C15_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m549DAAEDAD612B0569478B82C66D4D89CE4C4A51_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD909EC92A3786C54DF0AA78C588D4FEDB27650C2_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_gshared_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_gshared_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA_gshared (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7_gshared (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7871CA75C965E3FCBBD477A894520B437946436B_gshared (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274_gshared (Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EEB6BA6263630F87BA01B1688BB412A23AB6E56_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9BF5DB8579E274B01EC5B42194587206FA35E8C7_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* Dictionary_2_get_Keys_m1D1738C464248F26B65080F56BCB6BB4EBA14FA5_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* Dictionary_2_get_Values_mC56EF42F5B8DE1F2E7B2C2B192705022E95FCECF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC4D0137D290C3F9BEB6349EE8ADEDCA8E5F35AF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6645F3DD7FA3962CF84E342A8EAA9DC73D6617E9_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2DA69FCA163B90D4C1FEB65A06D1642970FD85C4_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_gshared_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_gshared_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65_gshared (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84_gshared (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF145BC1255E9B8F18C816B3C94BF69E540F9CAB2_gshared (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD_gshared (Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m486AA4DE40AC79ADE46560D483410AB96954A98F_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7EA185FF137C3FA3A1282F5D859DCE3D99D39181_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* Dictionary_2_get_Keys_m2971ACDE8DC581D53DC19FB951ECD255C92558D2_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* Dictionary_2_get_Values_mD0F2056331F6037D54DEC97D558B65EBEE6BA835_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDE4BAF9925C1AC4B41030C956C37E7529EFA846C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2E0A5082FFE2EC5D3038FD6F120F25E0821234CC_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3DA9B2019668EDC139274B166607085D9C81B799_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_gshared_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_gshared_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4_gshared (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F_gshared (ValueCollection_t66950A766C470CC17408744B977179C7559E538B* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mCE7FB94664DCCF6ECB4FB06D2AA332EB4F1A3E33_gshared (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B_gshared (Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E87D0B368831DA2294161B501941C29005441AA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC1EF065FECA3E2DEF23C0968C12F0710DF985452_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* Dictionary_2_get_Keys_m927FF82EACBBEE2E29E270B0799A2C735A91C4E4_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t66950A766C470CC17408744B977179C7559E538B* Dictionary_2_get_Values_m4E23AB4FDE6D9288D934227EDF9402E179EED5DA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFB50A5ABA450F464BCF08AEB35E14D26BB582C78_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7B042EE0E1C646277C3F7E62688D54A7AEDF891C_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m048F91FBCD3E8F2C6909281B5253941B1A70B2AD_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_gshared_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_gshared_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656_gshared (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E_gshared (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE6D2A2FB52255A6C8FBC9D1F2FDB8CB67AEA59B5_gshared (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9_gshared (Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m99C9F8452A60F44E590FCDE17AB83827055968AC_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m18BECD08E81F25A6837E7C49C27351B03EA9B9C7_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* Dictionary_2_get_Keys_m0DF87FA33BE25A97E25F6C16AF3F00B0A071E317_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* Dictionary_2_get_Values_m2199E42932DCC2E93403FF5152547CA6B91B1852_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA7FD9D5C57D1D777C74BECE3613749319B4C2CD3_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5F0D93CF1B8C2E297AB37B13608FF66A13B6309C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* EqualityComparer_1_CreateComparer_mB8D21B09E0AD8EC7D3ACF46FFFCE5E32663DFF70_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* EqualityComparer_1_CreateComparer_mB90802290EDD1019CAF10D15EC9215A3A25E4C2B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m3CFD494DEDF6659E656F8B8D97CD6CE1AFD88562 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3CFD494DEDF6659E656F8B8D97CD6CE1AFD88562_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2_gshared)(__this, ___0_key, ___1_value, method);
}
inline double KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method)
{
	return ((  double (*) (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A*, const RuntimeMethod*))KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD*, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4 (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8*, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, const RuntimeMethod*))Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, const RuntimeMethod*))Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m55B9E691525E9BF5230282A7E6D0B51AAF8CD58F (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A*, double, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m55B9E691525E9BF5230282A7E6D0B51AAF8CD58F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46 (Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0* __this, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0*, Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, int32_t, const RuntimeMethod*))Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m71A54C09FFBB425E9FB032A9CFA16705730B8C3E (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))Dictionary_2_Resize_m71A54C09FFBB425E9FB032A9CFA16705730B8C3E_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9E59F01F6938A018F1CFAC8750D89F47CA75E1B3 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m9E59F01F6938A018F1CFAC8750D89F47CA75E1B3_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* Dictionary_2_get_Keys_mE65DAB9318A96609DD0DF713E0B2EA5DD08CEFDE (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))Dictionary_2_get_Keys_mE65DAB9318A96609DD0DF713E0B2EA5DD08CEFDE_gshared)(__this, method);
}
inline ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* Dictionary_2_get_Values_mA1755B5CB6E9E348E82A4613C796A02BBCEC2DFC (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, const RuntimeMethod*))Dictionary_2_get_Values_mA1755B5CB6E9E348E82A4613C796A02BBCEC2DFC_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mA48DB98ADB6CC28754CC7DBD777C1DADDDAC4AFA (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mA48DB98ADB6CC28754CC7DBD777C1DADDDAC4AFA_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mA1F75B6C4623E5046EF5AE84149AFB0CA4F38338 (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*, double, const RuntimeMethod*))Dictionary_2_ContainsKey_mA1F75B6C4623E5046EF5AE84149AFB0CA4F38338_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mABEB581CB9727987B7C16A6EF28EA1EFCB7A0A9F (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mABEB581CB9727987B7C16A6EF28EA1EFCB7A0A9F_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A_gshared)(__this, ___0_key, ___1_value, method);
}
inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method)
{
	return ((  GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 (*) (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814*, const RuntimeMethod*))KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23 (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16*, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40 (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326*, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, const RuntimeMethod*))Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, const RuntimeMethod*))Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m5FC6F038CE0531AD67146914EDB33C477F5DD532 (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m5FC6F038CE0531AD67146914EDB33C477F5DD532_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF (Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141* __this, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141*, Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m534AFD3A8B97CB2B7D96320E94EA7406A25F3169 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))Dictionary_2_Resize_m534AFD3A8B97CB2B7D96320E94EA7406A25F3169_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m40EC29485254C33ECEFB82B984AE55AE042AB9D9 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m40EC29485254C33ECEFB82B984AE55AE042AB9D9_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* Dictionary_2_get_Keys_mA05E9AA15CA77A76B7F8A5B2B1D1758940E35F26 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))Dictionary_2_get_Keys_mA05E9AA15CA77A76B7F8A5B2B1D1758940E35F26_gshared)(__this, method);
}
inline ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* Dictionary_2_get_Values_mE193B4FB2A038745FCB7E560FFF3411CD71884A8 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, const RuntimeMethod*))Dictionary_2_get_Values_mE193B4FB2A038745FCB7E560FFF3411CD71884A8_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m8BD592D0F7D7433AEACDC178BC647D557A880C15 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m8BD592D0F7D7433AEACDC178BC647D557A880C15_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m549DAAEDAD612B0569478B82C66D4D89CE4C4A51 (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, const RuntimeMethod*))Dictionary_2_ContainsKey_m549DAAEDAD612B0569478B82C66D4D89CE4C4A51_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mD909EC92A3786C54DF0AA78C588D4FEDB27650C2 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD909EC92A3786C54DF0AA78C588D4FEDB27650C2_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582_gshared)(__this, ___0_key, ___1_value, method);
}
inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method)
{
	return ((  GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A (*) (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC*, const RuntimeMethod*))KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC*, const RuntimeMethod*))KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B*, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7 (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B*, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, const RuntimeMethod*))Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, const RuntimeMethod*))Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7871CA75C965E3FCBBD477A894520B437946436B (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7871CA75C965E3FCBBD477A894520B437946436B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274 (Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80* __this, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80*, Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, int32_t, const RuntimeMethod*))Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m3EEB6BA6263630F87BA01B1688BB412A23AB6E56 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))Dictionary_2_Resize_m3EEB6BA6263630F87BA01B1688BB412A23AB6E56_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9BF5DB8579E274B01EC5B42194587206FA35E8C7 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m9BF5DB8579E274B01EC5B42194587206FA35E8C7_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* Dictionary_2_get_Keys_m1D1738C464248F26B65080F56BCB6BB4EBA14FA5 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))Dictionary_2_get_Keys_m1D1738C464248F26B65080F56BCB6BB4EBA14FA5_gshared)(__this, method);
}
inline ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* Dictionary_2_get_Values_mC56EF42F5B8DE1F2E7B2C2B192705022E95FCECF (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, const RuntimeMethod*))Dictionary_2_get_Values_mC56EF42F5B8DE1F2E7B2C2B192705022E95FCECF_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mCC4D0137D290C3F9BEB6349EE8ADEDCA8E5F35AF (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mCC4D0137D290C3F9BEB6349EE8ADEDCA8E5F35AF_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m6645F3DD7FA3962CF84E342A8EAA9DC73D6617E9 (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, const RuntimeMethod*))Dictionary_2_ContainsKey_m6645F3DD7FA3962CF84E342A8EAA9DC73D6617E9_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m2DA69FCA163B90D4C1FEB65A06D1642970FD85C4 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m2DA69FCA163B90D4C1FEB65A06D1642970FD85C4_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_gshared_inline)(__this, method);
}
inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 (*) (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97*, const RuntimeMethod*))KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65 (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD*, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84 (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9*, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF145BC1255E9B8F18C816B3C94BF69E540F9CAB2 (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97*, Guid_t, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))KeyValuePair_2__ctor_mF145BC1255E9B8F18C816B3C94BF69E540F9CAB2_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD (Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A* __this, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A*, Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m486AA4DE40AC79ADE46560D483410AB96954A98F (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))Dictionary_2_Resize_m486AA4DE40AC79ADE46560D483410AB96954A98F_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7EA185FF137C3FA3A1282F5D859DCE3D99D39181 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7EA185FF137C3FA3A1282F5D859DCE3D99D39181_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* Dictionary_2_get_Keys_m2971ACDE8DC581D53DC19FB951ECD255C92558D2 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))Dictionary_2_get_Keys_m2971ACDE8DC581D53DC19FB951ECD255C92558D2_gshared)(__this, method);
}
inline ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* Dictionary_2_get_Values_mD0F2056331F6037D54DEC97D558B65EBEE6BA835 (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, const RuntimeMethod*))Dictionary_2_get_Values_mD0F2056331F6037D54DEC97D558B65EBEE6BA835_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mDE4BAF9925C1AC4B41030C956C37E7529EFA846C (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))Dictionary_2_set_Item_mDE4BAF9925C1AC4B41030C956C37E7529EFA846C_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m2E0A5082FFE2EC5D3038FD6F120F25E0821234CC (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2E0A5082FFE2EC5D3038FD6F120F25E0821234CC_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099 (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151 (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735 (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936*, Guid_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04 (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3*, Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared)(__this, method);
}
inline ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, const RuntimeMethod*))Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3 (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m3DA9B2019668EDC139274B166607085D9C81B799 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3DA9B2019668EDC139274B166607085D9C81B799_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, int32_t, const RuntimeMethod*))Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562_gshared)(__this, ___0_key, ___1_value, method);
}
inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method)
{
	return ((  Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 (*) (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008*, const RuntimeMethod*))KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4 (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB*, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F (ValueCollection_t66950A766C470CC17408744B977179C7559E538B* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t66950A766C470CC17408744B977179C7559E538B*, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mCE7FB94664DCCF6ECB4FB06D2AA332EB4F1A3E33 (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mCE7FB94664DCCF6ECB4FB06D2AA332EB4F1A3E33_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B (Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F* __this, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F*, Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m7E87D0B368831DA2294161B501941C29005441AA (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))Dictionary_2_Resize_m7E87D0B368831DA2294161B501941C29005441AA_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mC1EF065FECA3E2DEF23C0968C12F0710DF985452 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mC1EF065FECA3E2DEF23C0968C12F0710DF985452_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* Dictionary_2_get_Keys_m927FF82EACBBEE2E29E270B0799A2C735A91C4E4 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))Dictionary_2_get_Keys_m927FF82EACBBEE2E29E270B0799A2C735A91C4E4_gshared)(__this, method);
}
inline ValueCollection_t66950A766C470CC17408744B977179C7559E538B* Dictionary_2_get_Values_m4E23AB4FDE6D9288D934227EDF9402E179EED5DA (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t66950A766C470CC17408744B977179C7559E538B* (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, const RuntimeMethod*))Dictionary_2_get_Values_m4E23AB4FDE6D9288D934227EDF9402E179EED5DA_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mFB50A5ABA450F464BCF08AEB35E14D26BB582C78 (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mFB50A5ABA450F464BCF08AEB35E14D26BB582C78_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m7B042EE0E1C646277C3F7E62688D54A7AEDF891C (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_ContainsKey_m7B042EE0E1C646277C3F7E62688D54A7AEDF891C_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m048F91FBCD3E8F2C6909281B5253941B1A70B2AD (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m048F91FBCD3E8F2C6909281B5253941B1A70B2AD_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915_gshared)(__this, ___0_key, ___1_value, method);
}
inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method)
{
	return ((  Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 (*) (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1*, const RuntimeMethod*))KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656 (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C*, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6*, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE6D2A2FB52255A6C8FBC9D1F2FDB8CB67AEA59B5 (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mE6D2A2FB52255A6C8FBC9D1F2FDB8CB67AEA59B5_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9 (Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60* __this, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60*, Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, int32_t, const RuntimeMethod*))Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m99C9F8452A60F44E590FCDE17AB83827055968AC (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))Dictionary_2_Resize_m99C9F8452A60F44E590FCDE17AB83827055968AC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m18BECD08E81F25A6837E7C49C27351B03EA9B9C7 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m18BECD08E81F25A6837E7C49C27351B03EA9B9C7_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* Dictionary_2_get_Keys_m0DF87FA33BE25A97E25F6C16AF3F00B0A071E317 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))Dictionary_2_get_Keys_m0DF87FA33BE25A97E25F6C16AF3F00B0A071E317_gshared)(__this, method);
}
inline ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* Dictionary_2_get_Values_m2199E42932DCC2E93403FF5152547CA6B91B1852 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, const RuntimeMethod*))Dictionary_2_get_Values_m2199E42932DCC2E93403FF5152547CA6B91B1852_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mA7FD9D5C57D1D777C74BECE3613749319B4C2CD3 (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mA7FD9D5C57D1D777C74BECE3613749319B4C2CD3_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m5F0D93CF1B8C2E297AB37B13608FF66A13B6309C (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Dictionary_2_ContainsKey_m5F0D93CF1B8C2E297AB37B13608FF66A13B6309C_gshared)(__this, ___0_key, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* EqualityComparer_1_CreateComparer_mB8D21B09E0AD8EC7D3ACF46FFFCE5E32663DFF70 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB8D21B09E0AD8EC7D3ACF46FFFCE5E32663DFF70_gshared)(method);
}
inline EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* EqualityComparer_1_CreateComparer_mB90802290EDD1019CAF10D15EC9215A3A25E4C2B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB90802290EDD1019CAF10D15EC9215A3A25E4C2B_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF_gshared)(method);
}
inline EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4D7EEA9A55FCA21D39265E0EB5E94FF404682C56_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9A7C115F0456ADA1F5994CDE2C69F90C9F3272E_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m98095669D2B128766E6324B177607E0E82160901_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_5;
		L_5 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF65124703773AB296DB0AD467D2E87EE46C2B14D_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m3CFD494DEDF6659E656F8B8D97CD6CE1AFD88562(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CFD494DEDF6659E656F8B8D97CD6CE1AFD88562_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* G_B2_0 = NULL;
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m98FD49A0DFEACFC8AF54A870724851CCCC31CC66(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* L_11 = ((Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		double L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				double L_32;
				L_32 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m211E064FEAF14CB019B8E8C24115764022B5F447_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m527FC1A3AB34972FD3C3653F2E3326CBFA2D5A79_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_2;
		L_2 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* Dictionary_2_get_Keys_mE65DAB9318A96609DD0DF713E0B2EA5DD08CEFDE_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_1 = (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB7459AEFC1527BD29C3B688D92841FF715890601_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_1 = (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m0F062BE136DCAB209339DDFE9CA2296544AD8B8C_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_1 = (KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mC348E8DA60CD8F3113E371CFBDF6C9493433078A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* Dictionary_2_get_Values_mA1755B5CB6E9E348E82A4613C796A02BBCEC2DFC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_1 = (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66711A7221899FA8B6D488A47DECD5EE7CBE585D_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_1 = (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m83744580CD6F5A7C5F0515603326D4DAF6D137F4_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_1 = (ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7560319DA2CD544A255D7CB697317E84AA0721E4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m448C5F2ACDC5484E76CD6CF563A1ABE3C34E4580_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		double L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		double L_6 = ___0_key;
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA48DB98ADB6CC28754CC7DBD777C1DADDDAC4AFA_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE6A5B4538EABFC7FE11590B11437A580AB403769_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mBA99B94625CF88115273F2181E02778E7A4BB4FD_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		double L_0;
		L_0 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4A5AB92DF433593ADF669073D66727494BA07C17_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		double L_0;
		L_0 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		double L_9;
		L_9 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCD1137147EBC08CF2BF9798C9144C70259C29F9C_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA1F75B6C4623E5046EF5AE84149AFB0CA4F38338_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9B609B69D0340DC7AA6664E248F01F92756CCC4F_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		double L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m55B9E691525E9BF5230282A7E6D0B51AAF8CD58F((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 Dictionary_2_GetEnumerator_m9D57DE0FCB063D3B5DE43CF60AB2E418087CBA61_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB30BF6FF7255F4B71C0456AD63A1AEAE32B5CA68_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m088A923929C7CD9D884B1D38B35D70BEBD2B71EF_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_6;
		L_6 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_14 = (KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA*)(KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_15 = V_0;
		Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(double));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_19;
		L_19 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		double L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		double L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, double, double >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		double L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, double >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		double L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		double L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, double, double >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_5 = (EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E*)(EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* V_10 = NULL;
	double V_11 = 0.0;
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		double L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, double >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(double));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_24;
		L_24 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		double L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		double L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, double, double >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		double L_35 = ___0_key;
		double L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		double L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		double L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, double, double >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		double L_61 = ___0_key;
		double L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m71A54C09FFBB425E9FB032A9CFA16705730B8C3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_94 = V_10;
		double L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m98A867F6B9A353AD9BD58FFE1E5CC6E6C1E4227B_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m470495EA0DD1E37CAA806C200309F9F3BDDF742A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		double L_21;
		L_21 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		double L_24;
		L_24 = KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m71A54C09FFBB425E9FB032A9CFA16705730B8C3E_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m9E59F01F6938A018F1CFAC8750D89F47CA75E1B3(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9E59F01F6938A018F1CFAC8750D89F47CA75E1B3_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_1 = NULL;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_3 = (EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E*)(EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_5 = __this->____entries;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(double));
		double L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		double* L_17 = (double*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		double L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, double >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_20;
		L_20 = EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_21 = V_4;
		double L_22 = L_21->___key;
		double L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, double, double >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_25 = V_4;
		double L_26 = L_25->___key;
		double L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, double, double >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tD8BF50FFCC986556ABBAA6F93D610F5098D11342* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8D478FCE403BAEB246917FB3B3D0428CF52DCD3F_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		double L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m55806B6DAADDEA6ED1A5BCCCCD2097FD4AB48F54_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, double ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8A159A051B4315AEAB2705F9DD4DEA3C34750142(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1B46764706FF5D740531D7EA554742DDDB140B68_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1BE192D28B00561464A202565BC07A9C2509213B_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m8BBECE53BC35454C19A1C450B2CC89BC2C0D1DE1_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mE58D9D4B593EF9E410F29197E5A638E49AFAA254(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0ED18BA2BA48B136A3D016DA4A83D807AE02DFBA* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m189D56C486771213E7592FB44407E9C7CE5C9A0E(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		double L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		double L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			double L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m55B9E691525E9BF5230282A7E6D0B51AAF8CD58F((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mA0C44B31F8CAEE82F8E4ADDA1232368BF8C16EE3_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mCA435EA12916867A21B21B4D75288E6ACB21CD3D_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50FEBF9B3AA12A8C8B893D420367DFB68B5F59FC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3A6D7B96FCC15831CA24CFF78379D933574631F9_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m9F3957514A3E3CD8DB9E3E113452DA17AC0BE1CF_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mB972E7E829D95A3484ED9B5DBB395D52BEE55783_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t128F08FF826E61AB3EF0FE365E0AB278CFEE20BD* L_0;
		L_0 = Dictionary_2_get_Keys_mE65DAB9318A96609DD0DF713E0B2EA5DD08CEFDE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mB15DF6D6C85BF6F30F76BA5005899A6BFA70F5BE_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD36B596ECEB6DFA79CCDF505C343B6B96A6729B8* L_0;
		L_0 = Dictionary_2_get_Values_mA1755B5CB6E9E348E82A4613C796A02BBCEC2DFC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mEAEEFB421B6228A46FEAD67BE384BD9593941390_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD783E59728C8EAF3B8771DB17EFBFFB9DBC260BC(__this, ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t0DDDB680E716A5344046BAE57CEAA6A709453F5E* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m43DDF6729A8C19F0CA054D62EA9E77F2D4D312CA_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			double L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA48DB98ADB6CC28754CC7DBD777C1DADDDAC4AFA(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m7C2BFACD59437419CEA12B106BAF81A576AFC4CC_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			double L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m0737D55FAC64BDA725FCBC6B6BC9DFBCDA9AF3E2(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAC5730E29A6D4A67315AA4EF035B16FA95E5033F_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mA1F75B6C4623E5046EF5AE84149AFB0CA4F38338(__this, ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26A8C9FAAC26E627FD0B17B9B050F5EE6F4D1671_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC579B6238DA5F7EE2ABDC8F5D2CF93EE2B553B46((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tDD787B109D8D18B2750C9D82411C09E1F31818F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m47FD7D664EC0804B3D56ECB94543A8C21C7E56A6_gshared (Dictionary_2_t4D62BD87BE0B9A4F0B99991917A0A5EBB424A3F5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C4B502389DC07C917485782EF248379AE60E5EA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m0F9DD0204E6BAEC82E1D2A78F5E095C34A7BF53A(__this, ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m197CABADFB93D0C2055F5BF2EFD1255A92E8E1F8_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CB6B9A7122B5FEB7657DC79C3A06D7940BEEBE7_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C35B7BD2C930AD6D468167C612FE06C1D97D571_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_5;
		L_5 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA76A3414DD176BEE822A45071711B3CE13699C06_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mABEB581CB9727987B7C16A6EF28EA1EFCB7A0A9F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABEB581CB9727987B7C16A6EF28EA1EFCB7A0A9F_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* G_B2_0 = NULL;
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m915B93A2C6F3261F85DA2781C30F0DCECA1E267D(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* L_11 = ((Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_32;
				L_32 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCFB41B06E0C87B68526E928A8A8DAC8827B2204B_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mA9046358D02A7F8CC63E64E1F2F418728167A5C7_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_2;
		L_2 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* Dictionary_2_get_Keys_mA05E9AA15CA77A76B7F8A5B2B1D1758940E35F26_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_1 = (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m4B9F371B8F2FE4333BC0A719CF44BA053A8470C1_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_1 = (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6D0628D6CCB4943E65078BBA14ECE92D0DC428C3_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_1 = (KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m1E30EB3330DCF366861005F545B1D67D70B42B23(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* Dictionary_2_get_Values_mE193B4FB2A038745FCB7E560FFF3411CD71884A8_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_1 = (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m582863CCCB674E6BBD991FFAA072C5A787FEE720_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_1 = (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m207917DDFE186F0AAEA01ABE2A619FAD60CAC635_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_1 = (ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m905EC5691F04C6A4337319E1A6B64C29DFD10B40(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m413F292CA03203023FB898B92390D1E2C12C9838_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_6 = ___0_key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8BD592D0F7D7433AEACDC178BC647D557A880C15_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m71D60646EB4FA70D1683312635C6A8DF8E9BED77_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0;
		L_0 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF171C622CB386CC5E506D5672FAD32E84DD7BA3E_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0;
		L_0 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m154CFFA3BFC51BD90D592ECF7EF30B1573DF3C04_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0;
		L_0 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_9;
		L_9 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m25E49FB2A34D5352DFF25BD47032CC5C12B0BC5A_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m549DAAEDAD612B0569478B82C66D4D89CE4C4A51_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mA74C9936685DAEA3EF16DBB9ED0AEA92D7C8EBF5_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m5FC6F038CE0531AD67146914EDB33C477F5DD532((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 Dictionary_2_GetEnumerator_mFAC27BB50E89DC1979253E027E31D651CD3343FC_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5E7FF6FFF55CE1BF71E284890BB4C2F3A40D5682_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE794A16B07DB5F7222D1C0F3EC91A9C3A5698214_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_6;
		L_6 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_14 = (KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA*)(KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_15 = V_0;
		Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_20;
		L_20 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_5 = (EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D*)(EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* V_10 = NULL;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_25;
		L_25 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		RuntimeObject* L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value), (void*)L_34);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_36 = ___0_key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value), (void*)L_60);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_62 = ___0_key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m534AFD3A8B97CB2B7D96320E94EA7406A25F3169(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_95 = V_10;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_96 = ___0_key;
		L_95->___key = L_96;
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_97 = V_10;
		RuntimeObject* L_98 = ___1_value;
		L_97->___value = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_97->___value), (void*)L_98);
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m9A62CB06FCFC83A756400B7A8A0AD2AE7E3689D1_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m8FF284787B298E5E10CCF26AF837E3E253C25309(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_21;
		L_21 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_24;
		L_24 = KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m534AFD3A8B97CB2B7D96320E94EA7406A25F3169_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m40EC29485254C33ECEFB82B984AE55AE042AB9D9(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m40EC29485254C33ECEFB82B984AE55AE042AB9D9_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_1 = NULL;
	int32_t V_2 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_3 = (EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D*)(EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_5 = __this->____entries;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0));
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_17 = (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_21;
		L_21 = EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_22 = V_4;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_23 = L_22->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_26 = V_4;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_27 = L_26->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_42 = V_4;
		RuntimeObject** L_43 = (RuntimeObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t48422BAEAE5A64094DE6B20219CACD1092C00EBD* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m19E1143F107ECB1B5CEAB46ACADB7A592345D079_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4C2A7FEB90281D1C68CBE053DE9B958306B9227C_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mDCA74D79102CE591E30794E38A2822971DD030C3(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7D7B9771B5FD5B1B66947F2A75B7A2C35AB975D5_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43ABEADE4200E448AE955D9A2F415F6EF7084BF5_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2045B4699EC53D4E44323EB0E71F17A0660D1896_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mCB09E78F6ACBA5E56A1A9F8B1B144AFE0EE92B45(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4FBA53BFF5C48560B58BEDA5C65F8A086362EABA* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m9989D096344732C8571D803AB6844FD8D507B505(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m5FC6F038CE0531AD67146914EDB33C477F5DD532((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50168895A42C46E5EFD5E2D706F87E626D59EACC_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1688D988EC389F97C64A71850213F206F49728D2_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF6E5013C82B60DB4357D2E6E668E9632DFD5DFC6_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2430A7B9FDBA509921849345141825A2DE8280FA_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m497B2C29CF45E87D1D25A5CDF6049EAC66D8C1DE_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mE179695CFC3980809CB9B54694F37044923B66CC_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDA7810B6BD066D808FC8277938BD76C5BC1ABB16* L_0;
		L_0 = Dictionary_2_get_Keys_mA05E9AA15CA77A76B7F8A5B2B1D1758940E35F26(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mB990694AB7AFB91A42CF47874CE3FCCDC4E4F5A9_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tCCF79121C7D2F193FF72DEAD77A3679199CAD326* L_0;
		L_0 = Dictionary_2_get_Values_mE193B4FB2A038745FCB7E560FFF3411CD71884A8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE9BB2B4CBB0CA5807DFC05FB6DA1F82A763D1769_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m66541947B786B4117CC3F51AB934FC2EDAFD58CF(__this, ((*(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)((GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t24000E7A611A30C9D1DD1103CBD184BD8BD68A4D* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m21CC5D24AF51DD1395D9C1BCB91DA8F92D3E57DC_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)((GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m8BD592D0F7D7433AEACDC178BC647D557A880C15(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m08FAC564A39EE9885ADD1B67D6D262245E730E90_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)((GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m2E20AE5AC40EF1AB272609BB6660AAFD37CAB71A(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m1A1ABBEC3CC5AAA37E64AAE1A04C38652DB3A02F_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m549DAAEDAD612B0569478B82C66D4D89CE4C4A51(__this, ((*(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)((GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC6638A196F58D4EB1C7179A3AFAA32620FB7FE26_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0672461B788D8416F1C0D24C5F96510801BF15AF((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tEEB8795C83EF3BFFEA5101BDB9FA3B7A0D113141 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mC9728A71B5A1C75A4364D566611014906982AAFF_gshared (Dictionary_2_tC54D505AF55CD916E5213204492944AB14791246* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mC4BE30552E6EAB8AC0041D8B0F3A9EBDA02B5D7A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m6EF56C4C6CE5AC09F52EA3327F29B32C870DE4B0(__this, ((*(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)((GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)(GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m51BBA5283ADEF89FF1EA2E643ABDEDA74839246B_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CC6AE9AF1C3921092C8216E93C5F5571F4FD2EA_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m68ACAD780AF38AB6F733FF11DC9F0912B099D9DE_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_5;
		L_5 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E543176810B7250F1B08397EA9768326D3CAC15_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mD909EC92A3786C54DF0AA78C588D4FEDB27650C2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD909EC92A3786C54DF0AA78C588D4FEDB27650C2_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* G_B2_0 = NULL;
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m0F6273267230C06D06F4EDAF931CF0C9667974EF(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* L_11 = ((Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_32;
				L_32 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9FC70BDB1026B0712192D89032C20F59A7E46DC5_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m55940B600D742613D36B1527238B5E2E88C7CB01_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_2;
		L_2 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* Dictionary_2_get_Keys_m1D1738C464248F26B65080F56BCB6BB4EBA14FA5_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_1 = (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m0000C214BA1AE0DA44C01F2AE69017A2DFEC02B8_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_1 = (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mAC63E943A375AEC6FF05B28B3962D6AC268057AF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_1 = (KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mD7E9332D5C40332AA664CCDD46477C89617AD5AA(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* Dictionary_2_get_Values_mC56EF42F5B8DE1F2E7B2C2B192705022E95FCECF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_1 = (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m759753F32C7A4771FB5D9C567AA083D6EA19A64D_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_1 = (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mB9B202466C8A99EAD700DC11CD7C683705E8D1C6_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_1 = (ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m7B64EAE87659DDE51602D17AB117EE9D80170FC7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m69BF24CC8B869B700F948AF51DB008981529ECDE_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_6 = ___0_key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC4D0137D290C3F9BEB6349EE8ADEDCA8E5F35AF_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12A6B3187CCFDBE241EADEB5FB1ADE4CC713B339_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0;
		L_0 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mAAC4D68418B251345872B274E9BD3850E55C838C_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0;
		L_0 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4A2EC1FE321851011DB6AE1827987C1A289C5305_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0;
		L_0 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_9;
		L_9 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m3E09D1056D5261E87EA85B6FE1622CFFA763C90E_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6645F3DD7FA3962CF84E342A8EAA9DC73D6617E9_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m0E1E3E5D3DEB8C1592E993C2827A139B5515651F_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7871CA75C965E3FCBBD477A894520B437946436B((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 Dictionary_2_GetEnumerator_mF5AD0EF93D6C1DCE43373AAD5DA01D94C5CF6B3E_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m6AF3492D8D7DFD070EC1D6D660C9A077C8BE3BB9_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m38B3D8736D14B94126244BBA1DB94E2EFE53999E_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_6;
		L_6 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_14 = (KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5*)(KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_15 = V_0;
		Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_6(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		V_5 = ((int32_t)(L_7&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		int32_t L_9 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		int32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_16 = V_2;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___hashCode;
		int32_t L_19 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_20;
		L_20 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_21 = V_2;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24 = ___0_key;
		NullCheck(L_20);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(8, L_20, L_23, L_24);
		if (L_25)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		V_0 = L_28;
		int32_t L_29 = V_3;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_32 = V_4;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_33 = ___0_key;
		NullCheck(L_32);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker1< int32_t, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32, L_33);
		V_8 = ((int32_t)(L_34&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_1;
		int32_t L_36 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36%((int32_t)(((RuntimeArray*)L_37)->max_length))));
		int32_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_012b:
	{
		int32_t L_40 = V_0;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_41 = V_2;
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___hashCode;
		int32_t L_45 = V_8;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_46 = V_4;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_50 = ___0_key;
		NullCheck(L_46);
		bool L_51;
		L_51 = InterfaceFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_46, L_49, L_50);
		if (L_51)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___next;
		V_0 = L_54;
		int32_t L_55 = V_3;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_56 = V_2;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_5 = (EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24*)(EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* V_10 = NULL;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_11;
		L_11 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), NULL);
		G_B7_0 = L_11;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		NullCheck(L_12);
		V_4 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length)))))));
		int32_t* L_15 = V_4;
		int32_t L_16 = *((int32_t*)L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_20 = V_0;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) < ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_21 = V_0;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___hashCode;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_25;
		L_25 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_29 = ___0_key;
		NullCheck(L_25);
		bool L_30;
		L_30 = VirtualFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(8, L_25, L_28, L_29);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_31 = ___2_behavior;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		RuntimeObject* L_34 = ___1_value;
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value), (void*)L_34);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_35 = ___2_behavior;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_36 = ___0_key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_37 = L_36;
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_37);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_38, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_5 = L_41;
		int32_t L_42 = V_3;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_51 = V_1;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = InterfaceFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value), (void*)L_60);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_62 = ___0_key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_71 = __this->____freeCount;
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_72 = __this->____freeList;
		V_8 = L_72;
		V_7 = (bool)1;
		int32_t L_73 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_74 = __this->____count;
		V_13 = L_74;
		int32_t L_75 = V_13;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_76 = V_0;
		NullCheck(L_76);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m3EEB6BA6263630F87BA01B1688BB412A23AB6E56(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_77 = V_13;
		V_8 = L_77;
		int32_t L_78 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_78, 1));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_79 = __this->____entries;
		V_0 = L_79;
	}

IL_0250:
	{
		bool L_80 = V_6;
		if (L_80)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_81 = V_4;
		G_B51_0 = L_81;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->____buckets;
		int32_t L_83 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->____buckets;
		NullCheck(L_84);
		NullCheck(L_82);
		G_B51_0 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83%((int32_t)(((RuntimeArray*)L_84)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_85 = V_0;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		V_10 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)));
		bool L_87 = V_7;
		if (!L_87)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_88 = V_10;
		int32_t L_89 = L_88->___next;
		__this->____freeList = L_89;
	}

IL_028a:
	{
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_90 = V_10;
		int32_t L_91 = V_2;
		L_90->___hashCode = L_91;
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_92 = V_10;
		int32_t* L_93 = V_9;
		int32_t L_94 = *((int32_t*)L_93);
		L_92->___next = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_95 = V_10;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_96 = ___0_key;
		L_95->___key = L_96;
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_97 = V_10;
		RuntimeObject* L_98 = ___1_value;
		L_97->___value = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_97->___value), (void*)L_98);
		int32_t* L_99 = V_9;
		int32_t L_100 = V_8;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_100, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDACE303946A9843478A7C43945D333AAB12BC4AE_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mDE35DA8317999E6A68756B68AF2B19F3D8093AEE(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_21;
		L_21 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24;
		L_24 = KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3EEB6BA6263630F87BA01B1688BB412A23AB6E56_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m9BF5DB8579E274B01EC5B42194587206FA35E8C7(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9BF5DB8579E274B01EC5B42194587206FA35E8C7_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_1 = NULL;
	int32_t V_2 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_3 = (EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24*)(EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_5 = __this->____entries;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A));
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_17 = (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_18(il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_17);
		int32_t L_19;
		L_19 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_18), NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_19&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_23 = V_1;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hashCode;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_26 = V_1;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		int32_t L_29 = ___0_newSize;
		V_6 = ((int32_t)(L_28%L_29));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___next = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		int32_t L_38 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1)));
	}

IL_00c5:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cb:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		__this->____buckets = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_42);
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_43 = V_1;
		__this->____entries = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_4(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (&___0_key));
		int32_t L_5;
		L_5 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), NULL);
		G_B6_0 = L_5;
		goto IL_0038;
	}

IL_0032:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_6 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_6);
		G_B6_0 = L_7;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		NullCheck(L_9);
		V_1 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_21;
		L_21 = EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_22 = V_4;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_23 = L_22->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_26 = V_4;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_27 = L_26->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_42 = V_4;
		RuntimeObject** L_43 = (RuntimeObject**)(&L_42->___value);
		il2cpp_codegen_initobj(L_43, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t2A687E67978C27BB77B453FB033F4E1F0370CE07* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEE92530EA6CC0274DA7572B4906BA8ECC935C17D_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mAE3BD9E86CC998098B6D374DC068EB7B9CA4C574_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4ECA81703F2B552AE0B9CB11A2E94A7E289F6E05(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66407AE366F325AC4BD5A8110936CD7D1DC8CA58_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m5269BB5B585F86C69DE90E4CC2BB477A254A41DC_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m9C02C68FBFB0835CFF53571894569E46CEC19CA7_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m1F370F1A43576FF185FD336F9A8138BFA7F17BDA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAB21B74D927B9B019CA4EF71723DF63C70E788D5* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE04010391E82BABF8BBE0E4686034CA2DCE74DC9(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7871CA75C965E3FCBBD477A894520B437946436B((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2161A7273A0E973A88B8E8B2219791C7A47CBB47_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65EB3522C0A494BD6D9EFF6D819B6E304B7A4119_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m04BE74C0F28D56934D3AAF6E3A3E22D8CCD8B300_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mF7F030E81F8A944D1EB820B1B7B6E26123889716_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m7A198C5677D3459F61998A0BDAEEBEF77E3543A8_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m8D7235E7CBDC8095743AC8BCA343FC315F7A3192_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE6F3F5C09B032F209ACCC3F9A47B45AE2A83D16B* L_0;
		L_0 = Dictionary_2_get_Keys_m1D1738C464248F26B65080F56BCB6BB4EBA14FA5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mB5481D5EA48932089F77072F6857D2CFABD036F1_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t188643243AC47EA48182A5D6FCA5A3710AE42E1B* L_0;
		L_0 = Dictionary_2_get_Values_mC56EF42F5B8DE1F2E7B2C2B192705022E95FCECF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC79B6A28A550E89296231345DB10FA33081179D5_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m0B385534E4E18303E78BC36831387DE82E2B17D2(__this, ((*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)((GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t7905178B76BAC8F882915607E3980A4B4DB37E24* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE3031311D5A0652CA39243A1C0CCABDFC25E7CCB_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)((GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mCC4D0137D290C3F9BEB6349EE8ADEDCA8E5F35AF(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mA4E93F3576C3516365F3A330CEC6B1B00FA50A33_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)((GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m9313213D7AFF93C78EED63445613B562F6DDB582(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m6C13B9F07F2C22FE80A0B399DDCE2D5A570C9864_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m6645F3DD7FA3962CF84E342A8EAA9DC73D6617E9(__this, ((*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)((GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m6171945A22CDE04F8E224998DB501759AA7B6B75_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4AB2B71B75F23D9E6D4A9637C8D14DD1B0BF274((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t41B3280591F46D1FA8C5C90AB6CD9AA7750A2A80 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mD72AE1117EA096B705FFE797099D44134514AE1F_gshared (Dictionary_2_t5AFB25967DF635FF036112CB266FD9810D7DB687* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF7A4BC42B953307124CE6FFD2B9780F4F7FA1056(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mB45BE4E24CDE50CA1692720AA7CF3202DC46DEBA(__this, ((*(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)((GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)(GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m928578738A2C233001A89562A2FEB3317EE55FA2_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2648A3EBA28CD350C572423D888177C02E124E2_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD588170477D376846705CB0454C8CF34BFEB249B_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEAC573B21B543334918640CEFC4D64F12C810718_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m2DA69FCA163B90D4C1FEB65A06D1642970FD85C4(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2DA69FCA163B90D4C1FEB65A06D1642970FD85C4_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* G_B2_0 = NULL;
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mC0C9BE22088C0CDF777B57372CB5F97946952772(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* L_11 = ((Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_33;
				L_33 = KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m12649FE75542DCABE347F4BEC673D3E6CBF2553F_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m559EA2E96D31559FE6FEFF14D41E6641BFAA7A84_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* Dictionary_2_get_Keys_m2971ACDE8DC581D53DC19FB951ECD255C92558D2_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_1 = (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7EE7D4150F8AD0183D5BB71D8C783CD28B77C3D4_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_1 = (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m403C752B4829B07C1A1D30EA4B2CAF177CEC6953_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_1 = (KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m11874638253C0213AE2445EC966254C3BEAA7E65(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* Dictionary_2_get_Values_mD0F2056331F6037D54DEC97D558B65EBEE6BA835_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_1 = (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m0AA6C82D235D09E0FDA12F57EF3FADB8E86DE7CC_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_1 = (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m87E2924EB14925E2CC40D181DD55DCDC79C80405_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_1 = (ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F653CC40628E50A24462CF3029E9010AE2E5D84(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 Dictionary_2_get_Item_m6AAD135C0A33C06C280B23E2AC8D6A9402904371_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mDE4BAF9925C1AC4B41030C956C37E7529EFA846C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA896E4EA40081AC6500C78C0E14EF6E96A958B97_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1;
		L_1 = KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB6A4FFC28FF7D6F63BE4942E192C55A3CC7AED20_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7;
		L_7 = KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m6961946F249E5BA3FA1DAD7EE197D61CE56E19E2_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7;
		L_7 = KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8F585CDC4C98691A2F31804E8427391852A249D8_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2E0A5082FFE2EC5D3038FD6F120F25E0821234CC_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m28B7631E78EF20EDDBAE57798D0ADE840B504D53_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_0 = NULL;
	int32_t V_1 = 0;
	AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF145BC1255E9B8F18C816B3C94BF69E540F9CAB2((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A Dictionary_2_GetEnumerator_m5145460B4F57EA54A239C7AB7307696A42B79AAF_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mD9B45215583A3DD134A1D0DE5B9E4FF2B7BE983F_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mBB59FDD9F229947FDB1BAA709C6CD29896D062F5_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_14 = (KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8*)(KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_15 = V_0;
		Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_5 = (EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8*)(EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m486AA4DE40AC79ADE46560D483410AB96954A98F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_96 = V_10;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_LocationName), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mD01C7BE229DCE7D99D8651F1DBD165F7BC444FC7_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m124144EB03A31A229D73336AC3E58B0A98545BBB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_27;
		L_27 = KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m486AA4DE40AC79ADE46560D483410AB96954A98F_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7EA185FF137C3FA3A1282F5D859DCE3D99D39181(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7EA185FF137C3FA3A1282F5D859DCE3D99D39181_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_3 = (EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8*)(EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_5 = __this->____entries;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_41 = V_4;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_42 = (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t58EB40AC564C7B3A070D96B2D5D086D6650D8D4A* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m31648342297CC101A107E923FCE005A1264FEC2B_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_3 = ___1_value;
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3)->___m_InternalOp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)L_3)->___m_LocationName), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m3174636170C9336B6CC7302495293CCA19135D01_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, Guid_t ___0_key, AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4DCF118DB4EE8AAB279B9899D9B31BAE02A9933E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1B3FB5F2CDCD080767D94426097178483B976704_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30329BD9FBF4D3D29F729400980133A8C282F15C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mF3CE245C7A78AA6B4F886068B9600F0B768DEC23_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mBB4673121EBA5C933B9E89DED8160652A7F17CB5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t33CEA8EB9303AE62D7A7A4D3C910C8ABC618EFE8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m80967DECDD21B4417E6F45A374AF1F5E80583BAD(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF145BC1255E9B8F18C816B3C94BF69E540F9CAB2((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFC1A09350D26082EA29600395F095F876E055790_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2F9AE762375249FBA0DEB6C242C18FBFCF433B9D_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mCCD16166463D5E50412F172411D74FB5AD893E7E_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m043DFC5CEDEC226A540A81011CE5E4F7D3E441A7_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mE828FD708975E439A4FE1C658E1E6E41B199B1B1_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m9566D3CCA888A006B7E8215A0F885EC3882922CC_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCBBB078F1265BDBA544E1123017AC7DB6C18B7FD* L_0;
		L_0 = Dictionary_2_get_Keys_m2971ACDE8DC581D53DC19FB951ECD255C92558D2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mEBD2CA0450E0664C14C93663E6E8EDE72CE5C264_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t143B9D0D91745562ABFD16CD915D46F31D3BA0F9* L_0;
		L_0 = Dictionary_2_get_Values_mD0F2056331F6037D54DEC97D558B65EBEE6BA835(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m19A7BF3A910E62D94EE2930D33FE2C404794D40E_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mCC052F13BCC67CE5386976AF69286027F6F59D8C(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t4BB0B7E7DF03843F3DA74370E8DA1BB20824DDF8* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m96016C9481C186666E9CE21DA404855BCA87BA4C_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mDE4BAF9925C1AC4B41030C956C37E7529EFA846C(__this, L_3, ((*(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mFB0B5FB875CE7B63060E6FC0FFE368596E19437E_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74_m1A1DD658FED0F8026FD63880CBAA64881011DBFA(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mE9B6CCDE091BCA9390886641033D2F2239F2A120(__this, L_3, ((*(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)((AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)(AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mF6606A5CD60F0FDC523DF6CE1037B040A17457B4_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m2E0A5082FFE2EC5D3038FD6F120F25E0821234CC(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m87502FF525C393324ADFAF32F193858BDE3B37F4_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m355FDCF3A7C975E8638CFF08FE72F8AF85B7E5CD((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_tB91837072792E67B3D53CBE6456B10E5C48ACE1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m2AF8AC733AE24A94D043044BA9A52E0C895BD100_gshared (Dictionary_2_t7E1C81D2E97A1E0C855C0F3F3B0CAB550F50F3DA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m4E51E3CD7D5D221EA2EAEF15248CF404412E508B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m30A4A53B07004067691154548E0C41712D7FA9C0(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB65CCEDF960EE9D8391AA8F0971D86B37F0F29E5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2DDA1EA81F9824843DABB904C47C685B3925A13E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD802685557CC0B3A7340AE228EB50C5E09358DA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m79933243916DED9394A47C1F990E1F286F108101_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B2_0 = NULL;
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mA7B8F56A2AD68581CBDCC5075D78B02A11435CDA(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* L_11 = ((Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6DD7072D886C1EEBE6D007CE3865F76B2D5A2C5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_m75502705619570C5BE5AED9E66E181124329EEA5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_1 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9431EE33BD4D7DCE32FEBB7D30AEDB726738796F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_1 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mDD4344A82874CCF3CF363F38586F522CA1AA2CE7_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_1 = (KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9D62A90356F2F0DD69A413279F538A225588C099(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_1 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mF3DDF39305DBF9A6E788CA7BD0CCAB83DA2A3CFA_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_1 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m327202CDC17FA6D2B3AA2B595B28B2D7ADCC269C_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_1 = (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m1C59220A433AAF467F2345DD5A30962774691151(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m387DE0E7090B01FCF6F61CF76D8FADF7EC1DF151_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41E4CC0CF7BE97652891C6BC6FA884369C69A76E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE25BB7ED6D03A0CFC6882B6E87536A7992141FEF_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2179BEB0D08DADAC45D5BDB012B57A89D6E842B6_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB750373BEEE4DFFD9E7F77DFF7A0C4FF9186BBA5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 Dictionary_2_GetEnumerator_mB49B0C517100C32E16F152131A91071EB3428CBB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE07B909A881695E09C09EC90D5C1279DDE8FAC55_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m53B9D88C0609A756597AC3EADC5D36215A599D2C_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = (KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)(KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_15 = V_0;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m051818947173E0A850B7869E4F474BB63C24DC75_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6AB20947E419AA18B5C62E707D43A250FEDE0897(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD0ED6CF807DB5F81267858F36B29C1A2C58C1173_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDB466CFDC6255A9CEE96C543CA0886C1D5D53CFB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_3 = (EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)(EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = __this->____entries;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE24F2E023FDF3302DE11198EE0F1FFBBC38914B0_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mF645474D42EF0AB95FED32388F31D297085C2832(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m53D479673B12CABA10E9FD2982CEB1F4B1E76607_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m489459537D6AB7DC238E46ADF1DC0401D1071E24_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE41BC526507334B879A4BA1905150F48214A37F5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t6E8559F0FEDC952C1C97D197BC8286FDA93AB882* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m1062474EEC0D394425E27C1869DEA2BB8DF92B41(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Guid_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAC13FF83E9E4285FF12BC8F080E0A84C51480735((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6BA0DEFE7CA62EF49A19CEEE61B3646585681E3A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mB5332106F4A7BADC5D028BD7F64A1A55CBD70CD5_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m71280C48B029B2F5A5F41F0D4DC0D72842BD1A7F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mC2AB72EE3070FC03AA3BD3DCA349F66E2FEB15E4_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mDB7A8482B809579AF4AC0E77894BA6DAAFF777A0_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m2123DC6B6ECCCA4CD6B3C5AED915A4B09FA54C42_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t9DE8CFDEB3353C5383DB324226EACA5D0B37AA8E* L_0;
		L_0 = Dictionary_2_get_Keys_mFA34236E56D4ADBE51E2D5FA82DF698DA9A972FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF7B0EFCB29C54C63B06B154D65E36B8CE5B8CBB7_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* L_0;
		L_0 = Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7F72782D71BEAC62EC52B60E2855D514D61C1C0F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mFAC5E9BB05EFD8B896D7B1EE3745B9141BC26025(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE0A05522E3E044A0A153A33D678D14E918FFAD4F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mFA133F727981BA04B848134106BD99FB8AD2919E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m9B8E32C87E336C4B87FD155D22208489EB4AFBC1_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mA60792F19496344A4EEC113EF66C4D1642608C2D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7B750EDF5B330E2F1AF473D3C8A69E1EF2C0116A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FCE0E08BC1DB64AF0CC89FE635B29EEE5E82F04((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF15AC27CE285E77A78D83DB5C725E22F44C0245E_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEF045703C8867C43360D1550A1169ABB26E2F13B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFECFC4FA0B6D7AD82D60E4A43514DD50E5F82788_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2927741406FF3DA98E94B375416763714607683B_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE599EDE601BF0A1F5636B4E7C32EF7261E24B6D6_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_5;
		L_5 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB01A2E8966794F81992D903D4ADC478D9B92549A_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m3DA9B2019668EDC139274B166607085D9C81B799(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3DA9B2019668EDC139274B166607085D9C81B799_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* G_B2_0 = NULL;
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m784513463BD898F80E3A44F157786170D3D900CA(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* L_11 = ((Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32;
				L_32 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4E4689295CED2B108E539AA1C8C2A18309BFB081_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mFF7F48E62280A48AD913D36933849E7E828F6A94_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_2;
		L_2 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* Dictionary_2_get_Keys_m927FF82EACBBEE2E29E270B0799A2C735A91C4E4_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_1 = (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m543DE0430D9F27C553A79E71A93109EBA6E0E0BC_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_1 = (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18AA3DD8D32342B9E027D9E31645D381BFB264F5_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_1 = (KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m2CF9E3E81F119A5A7C1D332F4AEA4103A822A1C4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t66950A766C470CC17408744B977179C7559E538B* Dictionary_2_get_Values_m4E23AB4FDE6D9288D934227EDF9402E179EED5DA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_1 = (ValueCollection_t66950A766C470CC17408744B977179C7559E538B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mD0F04EA85F8B471D1E165B47BBB28DB0B7BC53BA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_1 = (ValueCollection_t66950A766C470CC17408744B977179C7559E538B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mF0BED1826B98308941CB03923E3D3CA8C36E29CC_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_1 = (ValueCollection_t66950A766C470CC17408744B977179C7559E538B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_m9F80105AD92EE83EE6F12E7296CB0CA5FB92547F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m5A9D1816E2F401909438646463C34D043E421045_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFB50A5ABA450F464BCF08AEB35E14D26BB582C78_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mC4EA7FA4CC36C1DF541902C5134695429B2E23FB_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mB6E3123C943DFA4461A8443FB0C66DAD51CBE7E3_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB9BD83278AC9A09E27768FAB557B2C83A99CF89F_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9;
		L_9 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mB11ECB26BB643F5FFF3BD0291E7328DFC6A2712B_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7B042EE0E1C646277C3F7E62688D54A7AEDF891C_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m30BB9CF303CC7F0760EFD8B1E5E90D5422FBCF7E_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mCE7FB94664DCCF6ECB4FB06D2AA332EB4F1A3E33((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F Dictionary_2_GetEnumerator_mB55ABE44631D2BE209AF3476E6CD3AA65E879117_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mDDAF509AB55115C11058D6C22DFCB561712B8B1D_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE8C40436021292BA6D02EBC77A204EB7B45DA0EE_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_6;
		L_6 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_14 = (KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004*)(KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_15 = V_0;
		Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_19;
		L_19 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_5 = (EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11*)(EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* V_10 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_24;
		L_24 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_35 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_61 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m7E87D0B368831DA2294161B501941C29005441AA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_94 = V_10;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m59D2C7580F655036592DF50B8DF1BEDC7E5D7A63_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mDC976631926318C5B0C68375E0F67AA124247BDC(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_21;
		L_21 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_24;
		L_24 = KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E87D0B368831DA2294161B501941C29005441AA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mC1EF065FECA3E2DEF23C0968C12F0710DF985452(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC1EF065FECA3E2DEF23C0968C12F0710DF985452_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_1 = NULL;
	int32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_3 = (EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11*)(EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_5 = __this->____entries;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_17 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_20;
		L_20 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_21 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = L_21->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_25 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_26 = L_25->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9B122B9D50CC7ED6B15983C061B5E18AD38513C2_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m954A547A2B53E20A703A54558225C6969F8B1BDF_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m8DBDEA21D04F39D6E31FFC9C2F32DF42718C2375(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38769B8D3F77EA3EBB1E7461B3AED0C301CFA043_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mC11F9AE216A20803875A7714124A97684F0BB136_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC2F4233F7D89B2088D6AE7650CEF8AD734CA0044_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC2C2556B3970B37FC02D37A17518F59B2BCEE4F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE484704C1E25ECDD50F3F633C726CE317744C004* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m15CBCF49AC7D9C25F650DD3BA7EB0545ADB10B6B(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mCE7FB94664DCCF6ECB4FB06D2AA332EB4F1A3E33((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m70B7EDEC41C73AE1BF4D226DD835BDDE928AA753_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m638265EFAD97E7EA6B33A67BFBD29E75EE337ABB_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB7FCB4230FCD4A25AB75D81074DBF2F4FFAE55CE_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m38A1B83AC8CDEA9E8360B4DD4B9DFE2FAAF05F53_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mDE2586F22F0E5B918F9EB9FCB75653F6ED1065EA_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mD747BA3762C5460172989B9CF8BDEFB771FA5AF4_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t4664ABDEEEC1AFC7C0316608FE10A9828D2175BB* L_0;
		L_0 = Dictionary_2_get_Keys_m927FF82EACBBEE2E29E270B0799A2C735A91C4E4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m74A2387D575ACE617A11699CD732CF4FDD0EB9E8_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t66950A766C470CC17408744B977179C7559E538B* L_0;
		L_0 = Dictionary_2_get_Values_m4E23AB4FDE6D9288D934227EDF9402E179EED5DA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m058BB1EB989F4B43FF2A7485521F095DFA867CC8_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mEBDA69C5C172C44BC84A7281E69B7A8825593069(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t922E0E3923DED813CD2D7F43D2886F5E19802D11* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4D63058E65D871540DB7DE8712E76BF69590E1F0_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mFB50A5ABA450F464BCF08AEB35E14D26BB582C78(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m61071439EF17B4C39A2DC1D10FE932FFF091CD58_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m31B58F13ADA6D08C1CC6E191031B840006313562(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDF1F3D790E9A479D9681080521AA24C1443030BC_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m7B042EE0E1C646277C3F7E62688D54A7AEDF891C(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mBC2B759E3F3A62826444934667A63CCF4DA7AB61_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0FEBA6ED643585FD30F328F2060F72E5868D979B((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t2D67C225DA02BF96C3A0941AEFA467EAC081DE7F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mCA8CA5F12A3FAF797AC9A510F98AC4A0DF4A60C0_gshared (Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m67A72D7D3CE043334CD4416004260C282B6933A3(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m50F9E37918A3D7068B30CD0D7B35D29FB9C82AEB(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE49D05E2860F5427FFF621AD04597F0655278DE0_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC41E8B60034BB99ACB3A702E60453217D34386A4_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEB94152D58A1032F808834C4317E9061F4210181_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_5;
		L_5 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEB176F3C8C31DD6AF3CC58F9CBB72538C9F3B2C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m048F91FBCD3E8F2C6909281B5253941B1A70B2AD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m048F91FBCD3E8F2C6909281B5253941B1A70B2AD_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* G_B2_0 = NULL;
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m0E280098E584432B4B64DAB46D95FCBE390A05B6(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* L_11 = ((Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32;
				L_32 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49C39558F335051AA7DCACE560BDCD7163F1484E_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Comparer_mDB9ADE86A7FABDA726BA210A663BB8D1BE7F85AC_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____comparer;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____comparer;
		return L_1;
	}

IL_000f:
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_2;
		L_2 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = (RuntimeObject*)L_2;
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* Dictionary_2_get_Keys_m0DF87FA33BE25A97E25F6C16AF3F00B0A071E317_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_1 = (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m2ACB0B324B390230A5E479BACBB28EBFF2886C2A_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_1 = (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m95276A56CE4DB3D0A89CADA9D80CC731DA4EA4C1_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_1 = (KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m126A742CFA6218B7F02C34A02D49828E430F9656(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* Dictionary_2_get_Values_m2199E42932DCC2E93403FF5152547CA6B91B1852_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_1 = (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59BEFAE94E69FB5526274BC577E625AF7040965A_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_1 = (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m4043F695F46ABB3D9B96F834D3D5F4CCE04727B2_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_1 = (ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		ValueCollection__ctor_mF3D7E998DA5D8781F972F12EFBC9390F6FE94B1E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mBE61B2E0EB355780D39A2B5DF2044D6296E8E88D_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA7FD9D5C57D1D777C74BECE3613749319B4C2CD3_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m6FCFD668FCDAFF690EED6B549968CB66856AA23A_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE71EBF9724016E16E680E79B3AD1C395B6A4DDA7_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF5844575EF81029875CDDBBDCAA81F50D23BCBA3_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0;
		L_0 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9;
		L_9 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFA357D13986A882E6AF6F665B1BC835A26BB592E_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5F0D93CF1B8C2E297AB37B13608FF66A13B6309C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9657EFEA09D6625D1CDA49B80B7D043A64D23094_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE6D2A2FB52255A6C8FBC9D1F2FDB8CB67AEA59B5((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 Dictionary_2_GetEnumerator_m92934A1A6717417B82A872F2B06F32E10424EADB_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34EDFC6C9543FA27E260D0C9355C810F208BAB44_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5FCC3AA5898457E5F8924AB3317EE27DB80C95D6_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_6;
		L_6 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_14 = (KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5*)(KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 46), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_15 = V_0;
		Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_19;
		L_19 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_5 = (EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B*)(EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* V_10 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_24;
		L_24 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_35 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_61 = ___0_key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m99C9F8452A60F44E590FCDE17AB83827055968AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_94 = V_10;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mB33329B8A603DE452B531D7634F0DB8DF0AA6858_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mF832C47EA014F1AB7CC2362A099DDFBC43FABEE4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 48)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_21;
		L_21 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_24;
		L_24 = KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m99C9F8452A60F44E590FCDE17AB83827055968AC_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m18BECD08E81F25A6837E7C49C27351B03EA9B9C7(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m18BECD08E81F25A6837E7C49C27351B03EA9B9C7_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_1 = NULL;
	int32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_3 = (EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B*)(EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 53), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_5 = __this->____entries;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* L_17 = (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_20;
		L_20 = EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_21 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_22 = L_21->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_25 = V_4;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_26 = L_25->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m35B69AF4AA1A8C3DED35F2781601A33A3FD247CF_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m98A4C056E62032B9F1408B47D903C901A38F98BF_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0FFF9299BB7088CC2CBEE8414A7195358FB1C0CA(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mDA359507AAEB7DC8558FC367F7FA26467EC7EA0A_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m258085E6778AADB3DF2D797E89D62C889E0C2EAC_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mA7B73BBD76E602F12C39851AE932B32E1E618361_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m2EE5C9916817E768FC3652EA9441030354A34504(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 40)));
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t626BABC2124A36CCE5AC227FE6C96C89979528E5* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4D3090F18D21BE7CA4F0D3D152A65FFBB4B975C0(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mE6D2A2FB52255A6C8FBC9D1F2FDB8CB67AEA59B5((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4CC65786225CA2AF0F8AF495BDE01E33282C6BE3_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1C946E21A1ADD42DC51B874DB3ADA632337E1A0C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28913C9A1420DDB4A87E6C808CC762148584B49A_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m54A236986EEBC221AA7A9C576CF4E388EE0D5867_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m551EC54D36FE9DD7C053A6E5B7BF1607B2D1089C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m54A77304068AEC9E74393EBC058384AC4F9A4B1B_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t338F85E0CF3F539B80B920F34C9B884DA5D93F5C* L_0;
		L_0 = Dictionary_2_get_Keys_m0DF87FA33BE25A97E25F6C16AF3F00B0A071E317(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m1CD21CFE92491A56657DF71D29D5D9AD27CF9802_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8F8831314BB779802FE114E238043766DD8A87E6* L_0;
		L_0 = Dictionary_2_get_Values_m2199E42932DCC2E93403FF5152547CA6B91B1852(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m09801CBC5A6272F9D1661C6FFB6DB6595A29D7FE_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mBCB09F32D7D5B4F09FBDEAE0E03FAF98A3D3A765(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t874585406A5F73423DDF3E20012F8E91733F502B* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA62A89C09E458BAFF45E24E9251E859EB0AAC16C_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA7FD9D5C57D1D777C74BECE3613749319B4C2CD3(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m29E755AF78ECA5A86BE7BA5052E11A44386C9FC9_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mB359B73249C070054471AEAF4F1CCCB5C4769915(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 66)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 67)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mFDEC6F825873052BF5DDC525AF514F80F912FF65_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5F0D93CF1B8C2E297AB37B13608FF66A13B6309C(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 68));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7516F8F276DD99F86E43EAE68984CBFBC81B9CBA_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA168CFF7616075429204EC50399900C8BF8DBE9((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Enumerator_t3DDA7BEDA661ADE4EE223907797E4C29C716DD60 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 43), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mAFFF385FF446234F6E8A1167B3C8A7E7F9661ACB_gshared (Dictionary_2_t84C395D6616E2C30128BA4396899757AAA7B89D7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA5013FBC1A5EE5CEB13B3CAA50A159C5B41B90F4(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m714C78B66421EE39D70A780BC13F7744ACD34E2F(__this, ((*(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* EqualityComparer_1_get_Default_m12CC270D19620F4E8E3ABFE7BF8C2B1955476A04_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* V_0 = NULL;
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m66568B441EE3AB73D292C4F4CE1707FBAC360F5A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Key_m0CE9857A687028C0E67BFBCD55A10714D37915A2_gshared_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mB859D0BF5E4DB1A83025D41F1C1FFEB50E9C93C7_gshared_inline (KeyValuePair_2_t464BCAEE47D0AA8F04CA7511160D98115BE5230A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* EqualityComparer_1_get_Default_m2327ADC86F576B59B97179C1A6D6946C711131D8_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* V_0 = NULL;
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_0 = ((EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB8D21B09E0AD8EC7D3ACF46FFFCE5E32663DFF70(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6A4BBE6363974EAC8ADC0F51F1FB67BE33644319* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 KeyValuePair_2_get_Key_m30FA6E78E793B4BA8D26477D0B1880169C37F314_gshared_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method) 
{
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1DB57850F9594D62A73850A79FC10213F6AB6233_gshared_inline (KeyValuePair_2_t2B4FFC6C6E618728C408759ACE3C41C18ABA0814* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* EqualityComparer_1_get_Default_mCD146F41628938828A844159C47EB0FC2D0EF711_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* V_0 = NULL;
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_0 = ((EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB90802290EDD1019CAF10D15EC9215A3A25E4C2B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6F822DF919ECDB3357FF2AE022D5FDEBA54C407F* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A KeyValuePair_2_get_Key_m115951EA740F67CBEEFD849FC89BF262A9EE8068_gshared_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method) 
{
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mE17C957573D32BABF73C7780F46BB776302E826F_gshared_inline (KeyValuePair_2_t28D18AB992423C61307D4FD5612BEECADB55BBAC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4D41279D1457361C07C296BEB57E8274D8FC1431_gshared_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 KeyValuePair_2_get_Value_m72AE23D5B0AFD259391425275DEA2296315C51A2_gshared_inline (KeyValuePair_2_t187A36B6D3EF5B934668677BB21DD7D1BCD4CC97* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* EqualityComparer_1_get_Default_mF72C6F05FEDF134358E9CB0B07420019A2C356E3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* V_0 = NULL;
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_0 = ((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD9FD96BA3E45AD4E09115DA56FE2C97BDA0431BF(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t59362C5D72C957C1E3F375CA072193B5D0F5B1BC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* EqualityComparer_1_get_Default_m1B4511A89EE8E6C1E2A5AC9728A6057E614F5FB4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* V_0 = NULL;
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_0 = ((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2344A07126F2F0C145C26CE93A1D2CE0669A5A99(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_mFE7CB1EDE8E5845BBE2B81671711B2B2D2EA5533_gshared_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m4E747C6554ACB8DBD8F1162CD7C2DCFC5CD4F98A_gshared_inline (KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 KeyValuePair_2_get_Key_m599FE46A1A01DEB51647BF80EC30F4766BC5FF48_gshared_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method) 
{
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m6E1027D324F89029781AEF752836AA546C9D9D04_gshared_inline (KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
