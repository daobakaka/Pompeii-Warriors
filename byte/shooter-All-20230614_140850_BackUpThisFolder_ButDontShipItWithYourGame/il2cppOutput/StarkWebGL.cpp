#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<StarkSDKSpace.StarkBaseResponse>
struct Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D;
// System.Action`1<StarkSDKSpace.StarkGetSavedFileListResponse>
struct Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661;
// System.Action`1<StarkSDKSpace.StarkReadFileResponse>
struct Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728;
// System.Action`1<StarkSDKSpace.StarkStatResponse>
struct Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam>
struct Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505;
// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>
struct Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D;
// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>
struct Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,StarkSDKSpace.GetSavedFileListParam>
struct KeyCollection_t399D0489641C859E3A64F1C067DDD9A79A0C4633;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,StarkSDKSpace.ReadFileParam>
struct KeyCollection_tCC926793BA3BF49795DA5F44AB49A0E1ADFCC29E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,StarkSDKSpace.StatParam>
struct KeyCollection_t15A04F4443180B00B2F42DF10BC63C0BD9A07400;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>
struct List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822;
// StarkSDKSpace.StarkBaseActionParam`1<System.Object>
struct StarkBaseActionParam_1_t1B3CECE02BC5B7D8E2D7DC91C9BBF73C095E744E;
// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkBaseResponse>
struct StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC;
// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkGetSavedFileListResponse>
struct StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609;
// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkReadFileResponse>
struct StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8;
// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkStatResponse>
struct StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,StarkSDKSpace.GetSavedFileListParam>
struct ValueCollection_t37C385224A68B7ADC3F70E8754EBCCA0C50297E3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,StarkSDKSpace.ReadFileParam>
struct ValueCollection_t8FDB0F4148930187B4CD6B15AB285E84F7D47CE6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,StarkSDKSpace.StatParam>
struct ValueCollection_t9A19F47241E3D67E06362D66696C4FB85B209F64;
// System.Collections.Generic.Dictionary`2/Entry<System.String,StarkSDKSpace.GetSavedFileListParam>[]
struct EntryU5BU5D_t0C88B719BEF5CDF1431C0F3048E1857D84A2285E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,StarkSDKSpace.ReadFileParam>[]
struct EntryU5BU5D_t1D8646FE4444A6964804FD5A21E8B55C1FAF57F7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,StarkSDKSpace.StatParam>[]
struct EntryU5BU5D_tD58E9E31DE2682FBCA64A2C69DB39FFBD08A8304;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// StarkSDKSpace.StarkFileInfo[]
struct StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// StarkSDKSpace.AccessParam
struct AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A;
// StarkSDKSpace.CopyFileParam
struct CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// StarkSDKSpace.GetSavedFileListParam
struct GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// StarkSDKSpace.MkdirParam
struct MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// StarkSDKSpace.ReadFileParam
struct ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E;
// StarkSDKSpace.RenameFileParam
struct RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8;
// StarkSDKSpace.RmdirParam
struct RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// StarkSDKSpace.StarkBaseFileInfo
struct StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646;
// StarkSDKSpace.StarkBaseResponse
struct StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A;
// StarkSDKSpace.StarkCallbackHandler
struct StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665;
// StarkSDKSpace.StarkFileInfo
struct StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB;
// StarkSDKSpace.StarkFileSystemManager
struct StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54;
// StarkSDKSpace.StarkFileSystemManagerDefault
struct StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5;
// StarkSDKSpace.StarkFileSystemManagerWebGL
struct StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE;
// StarkSDKSpace.StarkGetSavedFileListResponse
struct StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82;
// StarkSDKSpace.StarkReadFileCallback
struct StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D;
// StarkSDKSpace.StarkReadFileResponse
struct StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D;
// StarkSDKSpace.StarkStatInfo
struct StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405;
// StarkSDKSpace.StarkStatResponse
struct StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26;
// StarkSDKSpace.StarkWebGLInterface
struct StarkWebGLInterface_tE0A8E735364BB5393E2825655A64B0E549D73101;
// StarkSDKSpace.StatParam
struct StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F;
// System.String
struct String_t;
// StarkSDKSpace.UnlinkParam
struct UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// StarkSDKSpace.WriteFileParam
struct WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9;
// StarkSDKSpace.WriteFileStringParam
struct WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252;
// StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler
struct StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral101640E19CC904F76555727476F5CC4041C7421A;
IL2CPP_EXTERN_C String_t* _stringLiteral134A611797B4A96A1AC2C5A6221E50A16A30864D;
IL2CPP_EXTERN_C String_t* _stringLiteral25B57548EF53D3F4053808D53E857E15852BEDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral36608A81322FE8FE1EE93BA62340283A0DCAF175;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C55F5FE9AAA09967E1A1A2689C0DE01DF655760;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD6D83135EA7EEA4476E33C60098D5D47C384CF;
IL2CPP_EXTERN_C String_t* _stringLiteral56294DE9E487EE343E7A29CAE6B9C52435963860;
IL2CPP_EXTERN_C String_t* _stringLiteral739467894A3955BA22F911546C8FB6D8C5D4EC84;
IL2CPP_EXTERN_C String_t* _stringLiteral76731EF43884084DD62A02E7B1C9909430AAED22;
IL2CPP_EXTERN_C String_t* _stringLiteral858BA3146A583961E49E9416C264C5E7F2B2F8B7;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral94848E7C0149958DC4DCF42D5C19707736450B83;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAC3A4FDBDBA11ED6EAD55328B4CDB0AA0CED7B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC4E68234F5971C388E26638D46C763DCB4CB725;
IL2CPP_EXTERN_C String_t* _stringLiteralBDAC6DCF8F9F00555A47F046E94C5A282F642A29;
IL2CPP_EXTERN_C String_t* _stringLiteralC65D3A87DBA5B8CF643E36E8393259CEDF7DB6B1;
IL2CPP_EXTERN_C String_t* _stringLiteralCB78ABDC9ADAF9FF84117532D1D79CB124BD1643;
IL2CPP_EXTERN_C String_t* _stringLiteralD693CFF529590FF91ECFACE870B7A4D3894FF1A6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA40ED202B82776DCE6F6CE9D56F3D2B3EF6978F;
IL2CPP_EXTERN_C String_t* _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
IL2CPP_EXTERN_C String_t* _stringLiteralE73C286CCC70CAE2D1B5222768D0AB2417F88614;
IL2CPP_EXTERN_C String_t* _stringLiteralF1513AF475794AB4B2E2F6A501F7974AE3A30F74;
IL2CPP_EXTERN_C String_t* _stringLiteralFC8F0256CB53131C4E4B30371BCC70B69F7B7BC8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m38EF8D3C0355B3735E220E75ABE396AF5E399988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA0C50A6DA565AE11121CCC7A2AB45EC10ED991E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD6FE724CB9D30081CF8911FD58D244C4A5577A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7692889BDB5C2D6770F44F589681A4CC2BE50A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m031D5C8F933670FC1E733EC7A8ECF50CA474CD11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m695AC03575B79F85AA8BFACA56574FFC976917B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC6E98A79E2C39D2C413806E4397F8EB5AECCCB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m04D4BD82E616548EEEE75CDBD78141F0EED71A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4584EC2EB970E7BF638F5D571C97D454514D0B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA028A42E4ABD9A862299DBE952F8B3C71C649CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111_m8409917D62B74E1E6FD5BD82431A96B919099F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisStarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_m29546474E195A771BB98B596290FA7E1923A4A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisStarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_mDBBF3230225F1CCBC5161F5A7EFAAD2111E24242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisStarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D_m576EC215E394D4B39BB93739FAF66EA833EE1F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisStarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_m155C164490FFFE936C7C674CD129AD82C22D9255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCA7FB4E98D23D40D181C58BF335EEAE6A1F9B878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m203C85290F119BC378064052E3FEAFB4B05E54B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkBaseActionParam_1__ctor_m21A9AC4E4D39E3B163BA9A2F6ED8E13CA7BF97D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkBaseActionParam_1__ctor_m923BF92D8255AFF6FED1A1272B17E926B8B5FCA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkBaseActionParam_1__ctor_mE71B60DA299471CCA6AF5E4B0E00834E0AFC7BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkCallbackHandler_InvokeResponseCallback_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_m42702D471EC180FEC6817DC46B18FA1D510C9CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StarkFileSystemManagerWebGL_StatSync_m774F39057B94BF138852D769AEF0135F37962E72_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t88DA2CD6E9FC606A4B982370277B2D7F5637224B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam>
struct Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0C88B719BEF5CDF1431C0F3048E1857D84A2285E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t399D0489641C859E3A64F1C067DDD9A79A0C4633* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t37C385224A68B7ADC3F70E8754EBCCA0C50297E3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>
struct Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1D8646FE4444A6964804FD5A21E8B55C1FAF57F7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC926793BA3BF49795DA5F44AB49A0E1ADFCC29E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8FDB0F4148930187B4CD6B15AB285E84F7D47CE6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>
struct Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD58E9E31DE2682FBCA64A2C69DB39FFBD08A8304* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t15A04F4443180B00B2F42DF10BC63C0BD9A07400* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9A19F47241E3D67E06362D66696C4FB85B209F64* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>
struct List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* ___s_emptyArray_5;
};

// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkBaseResponse>
struct StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC  : public RuntimeObject
{
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::success
	Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___success_0;
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::fail
	Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___fail_1;
};

// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkGetSavedFileListResponse>
struct StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609  : public RuntimeObject
{
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::success
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* ___success_0;
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::fail
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* ___fail_1;
};

// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkReadFileResponse>
struct StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8  : public RuntimeObject
{
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::success
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___success_0;
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::fail
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___fail_1;
};

// StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkStatResponse>
struct StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714  : public RuntimeObject
{
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::success
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* ___success_0;
	// System.Action`1<T> StarkSDKSpace.StarkBaseActionParam`1::fail
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* ___fail_1;
};
struct Il2CppArrayBounds;

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// StarkSDKSpace.StarkBaseFileInfo
struct StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646  : public RuntimeObject
{
	// System.Int64 StarkSDKSpace.StarkBaseFileInfo::size
	int64_t ___size_0;
	// System.Int32 StarkSDKSpace.StarkBaseFileInfo::mode
	int32_t ___mode_1;
};

// StarkSDKSpace.StarkBaseResponse
struct StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A  : public RuntimeObject
{
	// System.String StarkSDKSpace.StarkBaseResponse::callbackId
	String_t* ___callbackId_0;
	// System.String StarkSDKSpace.StarkBaseResponse::errMsg
	String_t* ___errMsg_1;
	// System.Int32 StarkSDKSpace.StarkBaseResponse::errCode
	int32_t ___errCode_2;
};

// StarkSDKSpace.StarkCallbackHandler
struct StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665  : public RuntimeObject
{
};

struct StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields
{
	// System.Collections.Hashtable StarkSDKSpace.StarkCallbackHandler::responseHT
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___responseHT_0;
	// System.Int32 StarkSDKSpace.StarkCallbackHandler::htCounter
	int32_t ___htCounter_1;
};

// StarkSDKSpace.StarkFileSystemManager
struct StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54  : public RuntimeObject
{
};

struct StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields
{
	// System.Int32 StarkSDKSpace.StarkFileSystemManager::_isDataMigrated
	int32_t ____isDataMigrated_1;
};

// StarkSDKSpace.StarkStorage
struct StarkStorage_t54DE715F7706D92A8A9D3678C12B76384969D98B  : public RuntimeObject
{
};

// StarkSDKSpace.StarkWebGLInterface
struct StarkWebGLInterface_tE0A8E735364BB5393E2825655A64B0E549D73101  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// StarkSDKSpace.AccessParam
struct AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.AccessParam::path
	String_t* ___path_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// StarkSDKSpace.CopyFileParam
struct CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.CopyFileParam::srcPath
	String_t* ___srcPath_2;
	// System.String StarkSDKSpace.CopyFileParam::destPath
	String_t* ___destPath_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// StarkSDKSpace.GetSavedFileListParam
struct GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44  : public StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// StarkSDKSpace.MkdirParam
struct MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.MkdirParam::dirPath
	String_t* ___dirPath_2;
	// System.Boolean StarkSDKSpace.MkdirParam::recursive
	bool ___recursive_3;
};

// StarkSDKSpace.ReadFileParam
struct ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E  : public StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8
{
	// System.String StarkSDKSpace.ReadFileParam::filePath
	String_t* ___filePath_2;
	// System.String StarkSDKSpace.ReadFileParam::encoding
	String_t* ___encoding_3;
};

// StarkSDKSpace.RenameFileParam
struct RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.RenameFileParam::srcPath
	String_t* ___srcPath_2;
	// System.String StarkSDKSpace.RenameFileParam::destPath
	String_t* ___destPath_3;
};

// StarkSDKSpace.RmdirParam
struct RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.RmdirParam::dirPath
	String_t* ___dirPath_2;
	// System.Boolean StarkSDKSpace.RmdirParam::recursive
	bool ___recursive_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// StarkSDKSpace.StarkFileInfo
struct StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB  : public StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646
{
	// System.Int64 StarkSDKSpace.StarkFileInfo::createTime
	int64_t ___createTime_2;
	// System.String StarkSDKSpace.StarkFileInfo::filePath
	String_t* ___filePath_3;
};

// StarkSDKSpace.StarkFileSystemManagerDefault
struct StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5  : public StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54
{
};

struct StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields
{
	// StarkSDKSpace.StarkFileSystemManagerDefault StarkSDKSpace.StarkFileSystemManagerDefault::Instance
	StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* ___Instance_2;
};

// StarkSDKSpace.StarkFileSystemManagerWebGL
struct StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE  : public StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54
{
};

struct StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields
{
	// StarkSDKSpace.StarkFileSystemManagerWebGL StarkSDKSpace.StarkFileSystemManagerWebGL::Instance
	StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* ___Instance_2;
	// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam> StarkSDKSpace.StarkFileSystemManagerWebGL::s_readFileParams
	Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* ___s_readFileParams_3;
	// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam> StarkSDKSpace.StarkFileSystemManagerWebGL::s_statParams
	Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* ___s_statParams_4;
	// System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam> StarkSDKSpace.StarkFileSystemManagerWebGL::s_getSavedFileListParams
	Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* ___s_getSavedFileListParams_5;
	// System.Boolean StarkSDKSpace.StarkFileSystemManagerWebGL::_initialized
	bool ____initialized_6;
};

// StarkSDKSpace.StarkGetSavedFileListResponse
struct StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82  : public StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A
{
	// StarkSDKSpace.StarkFileInfo[] StarkSDKSpace.StarkGetSavedFileListResponse::fileList
	StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* ___fileList_3;
};

// StarkSDKSpace.StarkReadFileCallback
struct StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D  : public StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A
{
	// System.String StarkSDKSpace.StarkReadFileCallback::data
	String_t* ___data_3;
	// System.Int32 StarkSDKSpace.StarkReadFileCallback::byteLength
	int32_t ___byteLength_4;
};

// StarkSDKSpace.StarkReadFileResponse
struct StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D  : public StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A
{
	// System.Byte[] StarkSDKSpace.StarkReadFileResponse::binData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___binData_3;
	// System.String StarkSDKSpace.StarkReadFileResponse::stringData
	String_t* ___stringData_4;
};

// StarkSDKSpace.StarkStatInfo
struct StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405  : public StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646
{
	// System.Int64 StarkSDKSpace.StarkStatInfo::lastAccessedTime
	int64_t ___lastAccessedTime_2;
	// System.Int64 StarkSDKSpace.StarkStatInfo::lastModifiedTime
	int64_t ___lastModifiedTime_3;
};

// StarkSDKSpace.StarkStatResponse
struct StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26  : public StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A
{
	// StarkSDKSpace.StarkStatInfo StarkSDKSpace.StarkStatResponse::stat
	StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* ___stat_3;
};

// StarkSDKSpace.StatParam
struct StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F  : public StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714
{
	// System.String StarkSDKSpace.StatParam::path
	String_t* ___path_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// StarkSDKSpace.UnlinkParam
struct UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.UnlinkParam::filePath
	String_t* ___filePath_2;
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

// StarkSDKSpace.WriteFileParam
struct WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.WriteFileParam::filePath
	String_t* ___filePath_2;
	// System.Byte[] StarkSDKSpace.WriteFileParam::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_3;
};

// StarkSDKSpace.WriteFileStringParam
struct WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252  : public StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC
{
	// System.String StarkSDKSpace.WriteFileStringParam::filePath
	String_t* ___filePath_2;
	// System.String StarkSDKSpace.WriteFileStringParam::data
	String_t* ___data_3;
	// System.String StarkSDKSpace.WriteFileStringParam::encoding
	String_t* ___encoding_4;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<StarkSDKSpace.StarkBaseResponse>
struct Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D  : public MulticastDelegate_t
{
};

// System.Action`1<StarkSDKSpace.StarkGetSavedFileListResponse>
struct Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661  : public MulticastDelegate_t
{
};

// System.Action`1<StarkSDKSpace.StarkReadFileResponse>
struct Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728  : public MulticastDelegate_t
{
};

// System.Action`1<StarkSDKSpace.StarkStatResponse>
struct Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler
struct StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// StarkSDKSpace.StarkFileInfo[]
struct StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534  : public RuntimeArray
{
	ALIGN_FIELD (8) StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* m_Items[1];

	inline StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkCallbackHandler::Add<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkCallbackHandler_Add_TisRuntimeObject_m225FC12A11F56C4021F43813BDED1079D9F7B8EE_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkCallbackHandler::InvokeResponseCallback<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkCallbackHandler_InvokeResponseCallback_TisRuntimeObject_mE208090F25F2BAE32658CF50E129FA46A09EF41C_gshared (String_t* ___str0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T StarkSDKSpace.UNBridgeLib.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_m16A09C7FF31E1E63AB45804C723649F42601FE24_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkBaseActionParam`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkBaseActionParam_1__ctor_m7963681FBF1A0ED2B1B4735567D9F8E502D6A118_gshared (StarkBaseActionParam_1_t1B3CECE02BC5B7D8E2D7DC91C9BBF73C095E744E* __this, const RuntimeMethod* method) ;

// System.Boolean StarkSDKSpace.StarkFileSystemManager::StarkCanUseLocalStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_StarkCanUseLocalStorage_m5E6B953CAAA05FD3129F367DF82E35B32155B118 (const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.StarkFileSystemManager::StarkIsDataMigrated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_StarkIsDataMigrated_mAD1E80D0DAB901C1503A4773CDCFCAA7CDEE90F5 (const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.StarkFileSystemManager::IsDataMigrated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_IsDataMigrated_m2F507F31956ACC4C83EB8A3C7CBE3FAC498923E7 (const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManager::StarkMigratingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager_StarkMigratingData_m3C6BC7F5D9E9E8524DB6B04E6E740BFA02CE8CD8 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::CallbackBaseResponse(System.String,System.Action`1<StarkSDKSpace.StarkBaseResponse>,System.Action`1<StarkSDKSpace.StarkBaseResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363 (String_t* ___errMsg0, Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___success1, Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___fail2, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::CallbackReadFileResponse(System.String,System.Action`1<StarkSDKSpace.StarkReadFileResponse>,System.Action`1<StarkSDKSpace.StarkReadFileResponse>,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_CallbackReadFileResponse_mBE4A74999A69539354397B707B732A08589083D2 (String_t* ___errMsg0, Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___success1, Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___fail2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___binData3, String_t* ___stringData4, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37 (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4 (String_t* ___path0, bool ___recursive1, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45 (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_LastAccessTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastAccessTime_mA514BB980D71BA1902E31F016578212754AF193D (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 StarkSDKSpace.StarkFileSystemManagerDefault::GetUnixTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C (int64_t ___ticks0, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStatResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStatResponse__ctor_m12732EF05E3F284041AF19931A771B5792F6D1F8 (StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<StarkSDKSpace.StarkStatResponse>::Invoke(T)
inline void Action_1_Invoke_m27A8F1D79C649D336DC8538066DC53E643273B3D_inline (Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* __this, StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499*, StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_CreationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_CreationTime_mA78EF1799DC6825E70182125DD20BC6B37A850F4 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileInfo__ctor_mB5E47E56717D3D31C5D40539664D13522A616D2F (StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>::Add(T)
inline void List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_inline (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* __this, StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822*, StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::GetFilesRecursively(System.String,System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_GetFilesRecursively_m81017E1C290E9932E66FCA68ABEC0B9872BCB7EE (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___path0, List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* ___fileInfos1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>::.ctor()
inline void List_1__ctor_m203C85290F119BC378064052E3FEAFB4B05E54B4 (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkGetSavedFileListResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkGetSavedFileListResponse__ctor_mAD4B866D6E91AD09AC0ABF472B6948AAE0B8DD6E (StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>::ToArray()
inline StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* List_1_ToArray_mCA7FB4E98D23D40D181C58BF335EEAE6A1F9B878 (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* __this, const RuntimeMethod* method)
{
	return ((  StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* (*) (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Action`1<StarkSDKSpace.StarkGetSavedFileListResponse>::Invoke(T)
inline void Action_1_Invoke_m154D777D9501A52D19C7252829688C87383E1466_inline (Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* __this, StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661*, StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void StarkSDKSpace.StarkReadFileResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<StarkSDKSpace.StarkReadFileResponse>::Invoke(T)
inline void Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline (Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* __this, StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728*, StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void StarkSDKSpace.StarkBaseResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8 (StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<StarkSDKSpace.StarkBaseResponse>::Invoke(T)
inline void Action_1_Invoke_mDCCD61210930C9E9871B8EFE88D86C0B6C6677DA_inline (Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* __this, StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D*, StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager__ctor_m4EF16BD56E74FC412CCCBF5B82E5D41E1F455019 (StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault__ctor_mD7411AEB782937A5F0AAF2930E194E08FDE8BF98 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManager::MigratingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager_MigratingData_m33C8C075E34139F6A99985F9BDC9C35A3AC9CCB0 (const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::CreateStarkFileSystemHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_CreateStarkFileSystemHandler_m236A23EA8BD04F468FD051103E7E00B31744C7D2 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler>()
inline StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* GameObject_AddComponent_TisStarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111_m8409917D62B74E1E6FD5BD82431A96B919099F84 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::FixFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteStringFileSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkWriteStringFileSync_mC06EFC3F05C0927A9FA4E632014C8E8BE4F73333 (String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteBinFileSync(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkWriteBinFileSync_mF8AAC0E399783C972E1C184208C17D57EF7A4A66 (String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___dataLength2, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkCallbackHandler::Add<StarkSDKSpace.StarkBaseResponse>(System.Action`1<T>)
inline String_t* StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B (Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___callback0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D*, const RuntimeMethod*))StarkCallbackHandler_Add_TisRuntimeObject_m225FC12A11F56C4021F43813BDED1079D9F7B8EE_gshared)(___callback0, method);
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteBinFile(System.String,System.Byte[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkWriteBinFile_m0BE492BAB7417FB97CDA0CC89E245582AEB5B654 (String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___dataLength2, String_t* ___s3, String_t* ___f4, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteStringFile(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkWriteStringFile_mE6AC5DD9CB97642D0A594B99A653674124D17C87 (String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, String_t* ___s3, String_t* ___f4, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkCallbackHandler::MakeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkCallbackHandler_MakeKey_m2C1596D3E3A890ECDCD607B9268275A833760036 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD6FE724CB9D30081CF8911FD58D244C4A5577A13 (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* __this, String_t* ___key0, ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D*, String_t*, ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkReadFile_m09158CDD0CB39FAEF14D7F4E3638B823073B7182 (String_t* ___filePath0, String_t* ___encoding1, String_t* ___callbackId2, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Int32 StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadBinFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkFileSystemManagerWebGL_StarkReadBinFileSync_m5E27BD4D8E97CF3DFA4ECCC268870A4FA26E1284 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkShareFileBuffer(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkShareFileBuffer_m94A4B5E996E2AE035083924BA0E2D18B07550BB9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___callbackId1, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadStringFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkReadStringFileSync_m84E8CBAB7549E53B46FB4FD14E7FABC8AACF0D36 (String_t* ___filePath0, String_t* ___encoding1, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.StarkFileSystemManagerWebGL::StarkAccessFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerWebGL_StarkAccessFileSync_mC37E99C1096825C1142CFC990C7467C4BADB859B (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkAccessFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkAccessFile_m574D62C37E1B832D6745AFD51768066BB6783732 (String_t* ___filePath0, String_t* ___s1, String_t* ___f2, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkCopyFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkCopyFileSync_m5E3B140EF326AA5A2432EE320F0292E14B47CF4C (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkCopyFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkCopyFile_mA1F5FBF6320B679A4CF1228DCB04F2C8FAD0E0F7 (String_t* ___srcPath0, String_t* ___destPath1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRenameFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkRenameFile_mEDD11512DB4EE09983E5DD0BDD3760AA289B187C (String_t* ___srcPath0, String_t* ___destPath1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRenameFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkRenameFileSync_mAC70A0519989A41CF509222469E315349DF3C320 (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkUnlinkSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkUnlinkSync_mE5925E3F5782B28CBE523D230DF22DA1572D2129 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkUnlink(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkUnlink_m15DD36CFC6B7A612F4BF5A27C3A45F6A91DC2CEB (String_t* ___filePath0, String_t* ___s1, String_t* ___f2, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkMkdir(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkMkdir_m4564BF7DD9C29CE26D8D0A074F43E2A6FBB681BD (String_t* ___dirPath0, bool ___recursive1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkMkdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkMkdirSync_m306B73C3C98A3AAE2AFEB778E3F47289A5118C34 (String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRmdir(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkRmdir_m264F260F5D88147CBB5B37D7DA561B6E539E5DC0 (String_t* ___dirPath0, bool ___recursive1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRmdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkRmdirSync_mE31B2DA57954209FE476A8F1A36E90AFCED9C5CB (String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkStatSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkStatSync_mF47C539C814FD402BBEBE5E8A739238E3DDE2672 (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<StarkSDKSpace.StarkStatInfo>(System.String)
inline StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* JsonUtility_FromJson_TisStarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_m155C164490FFFE936C7C674CD129AD82C22D9255 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>::Add(TKey,TValue)
inline void Dictionary_2_Add_m38EF8D3C0355B3735E220E75ABE396AF5E399988 (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* __this, String_t* ___key0, StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287*, String_t*, StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkStat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkStat_mDBADA9EDB571F7A9325D1A0CA1864B99A5380723 (String_t* ___path0, String_t* ___callbackId1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA0C50A6DA565AE11121CCC7A2AB45EC10ED991E9 (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* __this, String_t* ___key0, GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505*, String_t*, GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkGetSavedFileList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkGetSavedFileList_m6EF877F64FC366F2CCDBA49FFD0634E749CA8894 (String_t* ___callbackId0, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkGetCachedPathForUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkGetCachedPathForUrl_m33153DD3716934C70F486ED05ECF79FDDEA0C0CE (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL__ctor_mACD0BA04C4181F60D8080EF47F01C48473FC2F43 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>::.ctor()
inline void Dictionary_2__ctor_m031D5C8F933670FC1E733EC7A8ECF50CA474CD11 (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>::.ctor()
inline void Dictionary_2__ctor_m695AC03575B79F85AA8BFACA56574FFC976917B6 (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam>::.ctor()
inline void Dictionary_2__ctor_mC6E98A79E2C39D2C413806E4397F8EB5AECCCB72 (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkCallbackHandler::InvokeResponseCallback<StarkSDKSpace.StarkBaseResponse>(System.String)
inline void StarkCallbackHandler_InvokeResponseCallback_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_m42702D471EC180FEC6817DC46B18FA1D510C9CFE (String_t* ___str0, const RuntimeMethod* method)
{
	((  void (*) (String_t*, const RuntimeMethod*))StarkCallbackHandler_InvokeResponseCallback_TisRuntimeObject_mE208090F25F2BAE32658CF50E129FA46A09EF41C_gshared)(___str0, method);
}
// T UnityEngine.JsonUtility::FromJson<StarkSDKSpace.StarkReadFileCallback>(System.String)
inline StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* JsonUtility_FromJson_TisStarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D_m576EC215E394D4B39BB93739FAF66EA833EE1F8F (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>::get_Item(TKey)
inline ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* Dictionary_2_get_Item_mA028A42E4ABD9A862299DBE952F8B3C71C649CFD (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* (*) (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.ReadFileParam>::Remove(TKey)
inline bool Dictionary_2_Remove_m7692889BDB5C2D6770F44F589681A4CC2BE50A47 (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// T StarkSDKSpace.UNBridgeLib.LitJson.JsonMapper::ToObject<StarkSDKSpace.StarkStatResponse>(System.String)
inline StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* JsonMapper_ToObject_TisStarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_mDBBF3230225F1CCBC5161F5A7EFAAD2111E24242 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m16A09C7FF31E1E63AB45804C723649F42601FE24_gshared)(___json0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>::get_Item(TKey)
inline StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* Dictionary_2_get_Item_m4584EC2EB970E7BF638F5D571C97D454514D0B1B (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* (*) (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.StatParam>::Remove(TKey)
inline bool Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55 (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// T StarkSDKSpace.UNBridgeLib.LitJson.JsonMapper::ToObject<StarkSDKSpace.StarkGetSavedFileListResponse>(System.String)
inline StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* JsonMapper_ToObject_TisStarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_m29546474E195A771BB98B596290FA7E1923A4A4C (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m16A09C7FF31E1E63AB45804C723649F42601FE24_gshared)(___json0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,StarkSDKSpace.GetSavedFileListParam>::get_Item(TKey)
inline GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* Dictionary_2_get_Item_m04D4BD82E616548EEEE75CDBD78141F0EED71A3E (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* (*) (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 StarkSDKSpace.StarkCallbackHandler::GenarateCallbackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkCallbackHandler_GenarateCallbackId_m3B5127154F282391F3B2FFC5C3631331FA11B38E (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333 (double ___value0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkBaseResponse>::.ctor()
inline void StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7 (StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC* __this, const RuntimeMethod* method)
{
	((  void (*) (StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*, const RuntimeMethod*))StarkBaseActionParam_1__ctor_m7963681FBF1A0ED2B1B4735567D9F8E502D6A118_gshared)(__this, method);
}
// System.Void StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkReadFileResponse>::.ctor()
inline void StarkBaseActionParam_1__ctor_m923BF92D8255AFF6FED1A1272B17E926B8B5FCA4 (StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8* __this, const RuntimeMethod* method)
{
	((  void (*) (StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*, const RuntimeMethod*))StarkBaseActionParam_1__ctor_m7963681FBF1A0ED2B1B4735567D9F8E502D6A118_gshared)(__this, method);
}
// System.Void StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkStatResponse>::.ctor()
inline void StarkBaseActionParam_1__ctor_m21A9AC4E4D39E3B163BA9A2F6ED8E13CA7BF97D4 (StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714* __this, const RuntimeMethod* method)
{
	((  void (*) (StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714*, const RuntimeMethod*))StarkBaseActionParam_1__ctor_m7963681FBF1A0ED2B1B4735567D9F8E502D6A118_gshared)(__this, method);
}
// System.Void StarkSDKSpace.StarkBaseActionParam`1<StarkSDKSpace.StarkGetSavedFileListResponse>::.ctor()
inline void StarkBaseActionParam_1__ctor_mE71B60DA299471CCA6AF5E4B0E00834E0AFC7BC5 (StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609* __this, const RuntimeMethod* method)
{
	((  void (*) (StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609*, const RuntimeMethod*))StarkBaseActionParam_1__ctor_m7963681FBF1A0ED2B1B4735567D9F8E502D6A118_gshared)(__this, method);
}
// System.Void StarkSDKSpace.StarkBaseFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkBaseFileInfo__ctor_mA0963955BDE09099E5C047B5B3B87C9503C13156 (StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646* __this, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetIntSync_m7C50763CC18019E9FDB83BED13CDC66A0997F10A (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 StarkSDKSpace.StarkStorage::StarkStorageGetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkStorage_StarkStorageGetIntSync_m4474B18C8BBF23FDB316643D4A06D604499AA3D8 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetFloatSync_mF3812D78BE636B4E9C457D0B8849641C4C660699 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Single StarkSDKSpace.StarkStorage::StarkStorageGetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StarkStorage_StarkStorageGetFloatSync_m08804752F7D4E23E065EF1E16BB384A254E1BA05 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetStringSync_mFF107C659BEE0D20DBE3A2F101FF2D09BED84EE1 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.StarkStorage::StarkStorageGetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkStorage_StarkStorageGetStringSync_m32A76E416CDCA44E8915A6841863292D00745485 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.StarkStorage::StarkStorageHasKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkStorage_StarkStorageHasKeySync_m8035ECA58448AA45E9811229619C0C94AE181BFD (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStorage::StarkStorageDeleteKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageDeleteKeySync_mF8DDA18E3B457DA5209ABD9567F09BF955EB3620 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkStorage::StarkStorageDeleteAllSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageDeleteAllSync_m1C2A50559F114479AFF9366F26DDC27FCDCE7FA0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E (const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
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
// System.Boolean StarkSDKSpace.StarkFileSystemManager::StarkCanUseLocalStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_StarkCanUseLocalStorage_m5E6B953CAAA05FD3129F367DF82E35B32155B118 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManager::StarkIsDataMigrated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_StarkIsDataMigrated_mAD1E80D0DAB901C1503A4773CDCFCAA7CDEE90F5 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManager::StarkMigratingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager_StarkMigratingData_m3C6BC7F5D9E9E8524DB6B04E6E740BFA02CE8CD8 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManager::CanUseLocalStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_CanUseLocalStorage_m174D499BB992234939B0EE092DD69DB7977ADBBB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkCanUseLocalStorage();
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = StarkFileSystemManager_StarkCanUseLocalStorage_m5E6B953CAAA05FD3129F367DF82E35B32155B118(NULL);
		return L_0;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManager::IsDataMigrated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManager_IsDataMigrated_m2F507F31956ACC4C83EB8A3C7CBE3FAC498923E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B6_0 = false;
	bool G_B5_0 = false;
	int32_t G_B7_0 = 0;
	bool G_B7_1 = false;
	{
		// if (_isDataMigrated == 1)
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var))->____isDataMigrated_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// else if (_isDataMigrated == 0)
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		int32_t L_1 = ((StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var))->____isDataMigrated_1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// var migrated = StarkIsDataMigrated();
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StarkFileSystemManager_StarkIsDataMigrated_mAD1E80D0DAB901C1503A4773CDCFCAA7CDEE90F5(NULL);
		// _isDataMigrated = migrated ? 1 : 0;
		bool L_3 = L_2;
		G_B5_0 = L_3;
		if (L_3)
		{
			G_B6_0 = L_3;
			goto IL_001e;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		((StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var))->____isDataMigrated_1 = G_B7_0;
		// return migrated;
		return G_B7_1;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManager::MigratingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager_MigratingData_m33C8C075E34139F6A99985F9BDC9C35A3AC9CCB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsDataMigrated())
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = StarkFileSystemManager_IsDataMigrated_m2F507F31956ACC4C83EB8A3C7CBE3FAC498923E7(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// StarkMigratingData();
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		StarkFileSystemManager_StarkMigratingData_m3C6BC7F5D9E9E8524DB6B04E6E740BFA02CE8CD8(NULL);
		// _isDataMigrated = 1;
		((StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var))->____isDataMigrated_1 = 1;
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager__ctor_m4EF16BD56E74FC412CCCBF5B82E5D41E1F455019 (StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManager__cctor_m519E82F30807E5ABD38D2F1FBE75B2219955B910 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int _isDataMigrated = -1;
		((StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var))->____isDataMigrated_1 = (-1);
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
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::WriteFileSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_WriteFileSync_m70BDB6DF1D6E63375FDF412A5A3FB12DCC558F8E (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36608A81322FE8FE1EE93BA62340283A0DCAF175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!System.IO.Directory.Exists(System.IO.Path.GetDirectoryName(filePath)))
		String_t* L_0 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		bool L_2;
		L_2 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_1, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return $"{System.IO.Path.GetDirectoryName(filePath)} not exist";
		String_t* L_3 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral36608A81322FE8FE1EE93BA62340283A0DCAF175, NULL);
		return L_5;
	}

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		// System.IO.File.WriteAllText(filePath, data);
		String_t* L_6 = ___filePath0;
		String_t* L_7 = ___data1;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_6, L_7, NULL);
		// }
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0036;
	}// end catch (depth: 1)

IL_0030:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0036:
	{
		// }
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::WriteFileSync(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_WriteFileSync_mF2CFB4CC4ACE4647CE940E033C759CFB39860901 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36608A81322FE8FE1EE93BA62340283A0DCAF175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!System.IO.Directory.Exists(System.IO.Path.GetDirectoryName(filePath)))
		String_t* L_0 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		bool L_2;
		L_2 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_1, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return $"{System.IO.Path.GetDirectoryName(filePath)} not exist";
		String_t* L_3 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral36608A81322FE8FE1EE93BA62340283A0DCAF175, NULL);
		return L_5;
	}

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		// System.IO.File.WriteAllBytes(filePath, data);
		String_t* L_6 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data1;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_6, L_7, NULL);
		// }
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0036;
	}// end catch (depth: 1)

IL_0030:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0036:
	{
		// }
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::WriteFile(StarkSDKSpace.WriteFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_WriteFile_mA28B6D21A369ADD33F0F777F90F2121EF07F8736 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = WriteFileSync(param.filePath, param.data);
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_2 = ___param0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->___data_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.Byte[]) */, __this, L_1, L_3);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::WriteFile(StarkSDKSpace.WriteFileStringParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_WriteFile_m2B66F4753727596C1FEC0FF36F58471EC900870F (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = WriteFileSync(param.filePath, param.data);
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_2 = ___param0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___data_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(4 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.String,System.String) */, __this, L_1, L_3, _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::ReadFile(StarkSDKSpace.ReadFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_ReadFile_mC204299314E160880AF4DECC88765587537E53BF (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C55F5FE9AAA09967E1A1A2689C0DE01DF655760);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739467894A3955BA22F911546C8FB6D8C5D4EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (!System.IO.File.Exists(param.filePath))
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		bool L_2;
		L_2 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		// CallbackReadFileResponse("file not exist", param.success, param.fail);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_4 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_3)->___success_0;
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_6 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_5)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackReadFileResponse_mBE4A74999A69539354397B707B732A08589083D2(_stringLiteral3C55F5FE9AAA09967E1A1A2689C0DE01DF655760, L_4, L_6, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, (String_t*)NULL, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// if (string.IsNullOrEmpty(param.encoding) || param.encoding.Equals("binary"))
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_7 = ___param0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___encoding_3;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}
	{
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_10 = ___param0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___encoding_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_11, _stringLiteral739467894A3955BA22F911546C8FB6D8C5D4EC84, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}

IL_0045:
	{
		// var data = System.IO.File.ReadAllBytes(param.filePath);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_13 = ___param0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___filePath_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_14, NULL);
		V_0 = L_15;
		// CallbackReadFileResponse("", param.success, param.fail, data);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_16 = ___param0;
		NullCheck(L_16);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_17 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_16)->___success_0;
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_18 = ___param0;
		NullCheck(L_18);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_19 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_18)->___fail_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackReadFileResponse_mBE4A74999A69539354397B707B732A08589083D2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_17, L_19, L_20, (String_t*)NULL, NULL);
		return;
	}

IL_006a:
	{
		// var data = System.IO.File.ReadAllText(param.filePath);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_21 = ___param0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___filePath_2;
		String_t* L_23;
		L_23 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_22, NULL);
		V_1 = L_23;
		// CallbackReadFileResponse("", param.success, param.fail, null, data);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_24 = ___param0;
		NullCheck(L_24);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_25 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_24)->___success_0;
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_26 = ___param0;
		NullCheck(L_26);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_27 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_26)->___fail_1;
		String_t* L_28 = V_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackReadFileResponse_mBE4A74999A69539354397B707B732A08589083D2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_25, L_27, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_28, NULL);
		// }
		return;
	}
}
// System.Byte[] StarkSDKSpace.StarkFileSystemManagerDefault::ReadFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StarkFileSystemManagerDefault_ReadFileSync_m67453A74FFF3F4583D8D5118E0B66C0A7D01BDBB (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return System.IO.File.ReadAllBytes(filePath);
		String_t* L_0 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_0, NULL);
		V_0 = L_1;
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (System.Exception exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// UnityEngine.Debug.LogError($"ReadFileSync: {exception.Message}");
		Exception_t* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25B57548EF53D3F4053808D53E857E15852BEDB9)), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// return null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::ReadFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_ReadFileSync_m985F94885118D38C3506B24BCD7B2182E298362E (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___filePath0, String_t* ___encoding1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return System.IO.File.ReadAllText(filePath);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_0, NULL);
		V_0 = L_1;
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Exception)
		// catch (System.Exception exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// UnityEngine.Debug.LogError($"ReadFileSync: {exception.Message}");
		Exception_t* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25B57548EF53D3F4053808D53E857E15852BEDB9)), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// return null;
		V_0 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManagerDefault::AccessSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerDefault_AccessSync_m86C4848F6979D0B40AF666BB2EF17358959AC6F5 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// return System.IO.File.Exists(path) || System.IO.Directory.Exists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___path0;
		bool L_3;
		L_3 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::Access(StarkSDKSpace.AccessParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_Access_m392EC27749C1212898108C4847A6151C33D40FD8 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA40ED202B82776DCE6F6CE9D56F3D2B3EF6978F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// var exist = AccessSync(param.path);
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___path_2;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, __this, L_1);
		// CallbackBaseResponse(exist ? "" : "no such file or directory", param.success, param.fail);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteralDA40ED202B82776DCE6F6CE9D56F3D2B3EF6978F;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001a:
	{
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_4 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_3)->___success_0;
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(G_B3_0, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::CopyFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_CopyFileSync_mFDB60E9C614027F67D69078979677B8B01309FF7 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral858BA3146A583961E49E9416C264C5E7F2B2F8B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (System.IO.File.Exists(srcPath))
		String_t* L_0 = ___srcPath0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	try
	{// begin try (depth: 1)
		// System.IO.File.Copy(srcPath, destPath, true);
		String_t* L_2 = ___srcPath0;
		String_t* L_3 = ___destPath1;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_2, L_3, (bool)1, NULL);
		// }
		goto IL_001a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_001a:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0020:
	{
		// return "source file not exist";
		return _stringLiteral858BA3146A583961E49E9416C264C5E7F2B2F8B7;
	}

IL_0026:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::CopyFile(StarkSDKSpace.CopyFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_CopyFile_m165DE3CE445F1DE8A501FAC49A5C28003FBA602B (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = CopyFileSync(param.srcPath, param.destPath);
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___srcPath_2;
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_2 = ___param0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___destPath_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(13 /* System.String StarkSDKSpace.StarkFileSystemManager::CopyFileSync(System.String,System.String) */, __this, L_1, L_3);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::RenameFile(StarkSDKSpace.RenameFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_RenameFile_m270829696A62B446BA6D1B00139BEC69FB7952D2 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = RenameFileSync(param.srcPath, param.destPath);
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___srcPath_2;
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_2 = ___param0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___destPath_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(16 /* System.String StarkSDKSpace.StarkFileSystemManager::RenameFileSync(System.String,System.String) */, __this, L_1, L_3);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::RenameFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_RenameFileSync_mF4A526EA73E70C6DF21AE7AF4C210CF285BF711E (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral858BA3146A583961E49E9416C264C5E7F2B2F8B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (System.IO.File.Exists(srcPath))
		String_t* L_0 = ___srcPath0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if (System.IO.File.Exists(destPath))
			String_t* L_2 = ___destPath1;
			bool L_3;
			L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
			if (!L_3)
			{
				goto IL_0016_1;
			}
		}
		{
			// System.IO.File.Delete(destPath);
			String_t* L_4 = ___destPath1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_4, NULL);
		}

IL_0016_1:
		{
			// System.IO.File.Move(srcPath, destPath);
			String_t* L_5 = ___srcPath0;
			String_t* L_6 = ___destPath1;
			File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_5, L_6, NULL);
			// }
			goto IL_0027;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0033;
	}// end catch (depth: 1)

IL_0027:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		// return "source file not exist";
		return _stringLiteral858BA3146A583961E49E9416C264C5E7F2B2F8B7;
	}

IL_0033:
	{
		// }
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::UnlinkSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_UnlinkSync_m0C236361CCF7974DC8DCEE2969DCA1879A253EDB (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C55F5FE9AAA09967E1A1A2689C0DE01DF655760);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (System.IO.File.Exists(filePath))
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	try
	{// begin try (depth: 1)
		// System.IO.File.Delete(filePath);
		String_t* L_2 = ___filePath0;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_2, NULL);
		// }
		goto IL_0018;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0018:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001e:
	{
		// return "file not exist";
		return _stringLiteral3C55F5FE9AAA09967E1A1A2689C0DE01DF655760;
	}

IL_0024:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::Unlink(StarkSDKSpace.UnlinkParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_Unlink_mA47A7198696CDCAB04F675E2C849EE1495FBD46D (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = UnlinkSync(param.filePath);
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String StarkSDKSpace.StarkFileSystemManager::UnlinkSync(System.String) */, __this, L_1);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_4 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_3)->___success_0;
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::Mkdir(StarkSDKSpace.MkdirParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_Mkdir_mCA8995137D3F15695F32ADBF2881B5F8A0812D2B (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = MkdirSync(param.dirPath, param.recursive);
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___dirPath_2;
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_2 = ___param0;
		NullCheck(L_2);
		bool L_3 = L_2->___recursive_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(20 /* System.String StarkSDKSpace.StarkFileSystemManager::MkdirSync(System.String,System.Boolean) */, __this, L_1, L_3);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::MkdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_MkdirSync_m1DA83BD9DF89753E05F51B39A8A548F298723BDB (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!System.IO.Directory.Exists(dirPath))
		String_t* L_0 = ___dirPath0;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	try
	{// begin try (depth: 1)
		// System.IO.Directory.CreateDirectory(dirPath);
		String_t* L_2 = ___dirPath0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_0019:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001f:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::Rmdir(StarkSDKSpace.RmdirParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_Rmdir_mD04B27DD686334D5477018D66EFB9880E03366F7 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var errMsg = RmdirSync(param.dirPath, param.recursive);
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___dirPath_2;
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_2 = ___param0;
		NullCheck(L_2);
		bool L_3 = L_2->___recursive_3;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(22 /* System.String StarkSDKSpace.StarkFileSystemManager::RmdirSync(System.String,System.Boolean) */, __this, L_1, L_3);
		// CallbackBaseResponse(errMsg, param.success, param.fail);
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___fail_1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363(L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::RmdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_RmdirSync_m1CE19DE61C764D615C06709C4E66EE97DBD1C978 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral101640E19CC904F76555727476F5CC4041C7421A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (System.IO.Directory.Exists(dirPath))
		String_t* L_0 = ___dirPath0;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	try
	{// begin try (depth: 1)
		// System.IO.Directory.Delete(dirPath, recursive);
		String_t* L_2 = ___dirPath0;
		bool L_3 = ___recursive1;
		Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4(L_2, L_3, NULL);
		// }
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Exception)
		// return exception.Message;
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0025;
	}// end catch (depth: 1)

IL_0019:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001f:
	{
		// return "directory not exist";
		return _stringLiteral101640E19CC904F76555727476F5CC4041C7421A;
	}

IL_0025:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// StarkSDKSpace.StarkStatInfo StarkSDKSpace.StarkFileSystemManagerDefault::StatSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* StarkFileSystemManagerDefault_StatSync_mCCDD7C1DAFBED286C952F907B0BA9B26CF13BE68 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_2 = NULL;
	{
		// if (System.IO.File.Exists(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// var fileInfo = new System.IO.FileInfo(path);
		String_t* L_2 = ___path0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_3 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_3, L_2, NULL);
		V_0 = L_3;
		// return new StarkStatInfo()
		// {
		//     size = fileInfo.Length,
		//     mode = 33060,
		//     lastAccessedTime = GetUnixTime(fileInfo.LastAccessTime.Ticks),
		//     lastModifiedTime = GetUnixTime(fileInfo.LastWriteTime.Ticks)
		// };
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_4 = (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)il2cpp_codegen_object_new(StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45(L_4, NULL);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_5 = L_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_6 = V_0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_6, NULL);
		NullCheck(L_5);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_5)->___size_0 = L_7;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_8 = L_5;
		NullCheck(L_8);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_8)->___mode_1 = ((int32_t)33060);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_9 = L_8;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_10 = V_0;
		NullCheck(L_10);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11;
		L_11 = FileSystemInfo_get_LastAccessTime_mA514BB980D71BA1902E31F016578212754AF193D(L_10, NULL);
		V_1 = L_11;
		int64_t L_12;
		L_12 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C(L_12, NULL);
		NullCheck(L_9);
		L_9->___lastAccessedTime_2 = L_13;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_14 = L_9;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_15 = V_0;
		NullCheck(L_15);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_15, NULL);
		V_1 = L_16;
		int64_t L_17;
		L_17 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		int64_t L_18;
		L_18 = StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C(L_17, NULL);
		NullCheck(L_14);
		L_14->___lastModifiedTime_3 = L_18;
		return L_14;
	}

IL_005e:
	{
		// else if (System.IO.Directory.Exists(path))
		String_t* L_19 = ___path0;
		bool L_20;
		L_20 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_19, NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		// var dirInfo = new System.IO.DirectoryInfo(path);
		String_t* L_21 = ___path0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_22 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_22, L_21, NULL);
		V_2 = L_22;
		// return new StarkStatInfo()
		// {
		//     size = 0,
		//     mode = 16676,
		//     lastAccessedTime = GetUnixTime(dirInfo.LastAccessTime.Ticks),
		//     lastModifiedTime = GetUnixTime(dirInfo.LastWriteTime.Ticks)
		// };
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_23 = (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)il2cpp_codegen_object_new(StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45(L_23, NULL);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_24 = L_23;
		NullCheck(L_24);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_24)->___size_0 = ((int64_t)0);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_25 = L_24;
		NullCheck(L_25);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_25)->___mode_1 = ((int32_t)16676);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_26 = L_25;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_27 = V_2;
		NullCheck(L_27);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = FileSystemInfo_get_LastAccessTime_mA514BB980D71BA1902E31F016578212754AF193D(L_27, NULL);
		V_1 = L_28;
		int64_t L_29;
		L_29 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		int64_t L_30;
		L_30 = StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C(L_29, NULL);
		NullCheck(L_26);
		L_26->___lastAccessedTime_2 = L_30;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_31 = L_26;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_32 = V_2;
		NullCheck(L_32);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33;
		L_33 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_32, NULL);
		V_1 = L_33;
		int64_t L_34;
		L_34 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		int64_t L_35;
		L_35 = StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C(L_34, NULL);
		NullCheck(L_31);
		L_31->___lastModifiedTime_3 = L_35;
		return L_31;
	}

IL_00b8:
	{
		// return null;
		return (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)NULL;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::Stat(StarkSDKSpace.StatParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_Stat_m0DD4DABDDAA3D752AA4FB9B05329CC32E1A628B2 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDAC6DCF8F9F00555A47F046E94C5A282F642A29);
		s_Il2CppMethodInitialized = true;
	}
	StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* V_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B3_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B2_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B6_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B5_0 = NULL;
	{
		// var info = StatSync(param.path);
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___path_2;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_2;
		L_2 = VirtualFuncInvoker2< StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*, String_t*, bool >::Invoke(23 /* StarkSDKSpace.StarkStatInfo StarkSDKSpace.StarkFileSystemManager::StatSync(System.String,System.Boolean) */, __this, L_1, (bool)0);
		V_0 = L_2;
		// if (info != null)
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// param.success?.Invoke(new StarkStatResponse()
		// {
		//     stat = info
		// });
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_4 = ___param0;
		NullCheck(L_4);
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_5 = ((StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714*)L_4)->___success_0;
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_7 = (StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26*)il2cpp_codegen_object_new(StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StarkStatResponse__ctor_m12732EF05E3F284041AF19931A771B5792F6D1F8(L_7, NULL);
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_8 = L_7;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_9 = V_0;
		NullCheck(L_8);
		L_8->___stat_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___stat_3), (void*)L_9);
		NullCheck(G_B3_0);
		Action_1_Invoke_m27A8F1D79C649D336DC8538066DC53E643273B3D_inline(G_B3_0, L_8, NULL);
		return;
	}

IL_002e:
	{
		// param.fail?.Invoke(new StarkStatResponse()
		// {
		//     errCode = -1,
		//     errMsg = "No such file or directory"
		// });
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_10 = ___param0;
		NullCheck(L_10);
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_11 = ((StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714*)L_10)->___fail_1;
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_12 = L_11;
		G_B5_0 = L_12;
		if (L_12)
		{
			G_B6_0 = L_12;
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_13 = (StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26*)il2cpp_codegen_object_new(StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StarkStatResponse__ctor_m12732EF05E3F284041AF19931A771B5792F6D1F8(L_13, NULL);
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_14 = L_13;
		NullCheck(L_14);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_14)->___errCode_2 = (-1);
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_15 = L_14;
		NullCheck(L_15);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_15)->___errMsg_1 = _stringLiteralBDAC6DCF8F9F00555A47F046E94C5A282F642A29;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_15)->___errMsg_1), (void*)_stringLiteralBDAC6DCF8F9F00555A47F046E94C5A282F642A29);
		NullCheck(G_B6_0);
		Action_1_Invoke_m27A8F1D79C649D336DC8538066DC53E643273B3D_inline(G_B6_0, L_15, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::GetFilesRecursively(System.String,System.Collections.Generic.List`1<StarkSDKSpace.StarkFileInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_GetFilesRecursively_m81017E1C290E9932E66FCA68ABEC0B9872BCB7EE (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___path0, List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* ___fileInfos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_0 = NULL;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* V_1 = NULL;
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_2 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* V_4 = NULL;
	int32_t V_5 = 0;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_6 = NULL;
	int64_t V_7 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_8;
	memset((&V_8), 0, sizeof(V_8));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_9;
	memset((&V_9), 0, sizeof(V_9));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_10;
	memset((&V_10), 0, sizeof(V_10));
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_11 = NULL;
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_12 = NULL;
	int64_t V_13 = 0;
	{
		// System.IO.DirectoryInfo dir = new System.IO.DirectoryInfo(path);
		String_t* L_0 = ___path0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_1, L_0, NULL);
		V_0 = L_1;
		// if (dir.Exists)
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.FileSystemInfo::get_Exists() */, L_2);
		if (!L_3)
		{
			goto IL_0162;
		}
	}
	{
		// System.IO.FileInfo[] files = dir.GetFiles();
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4 = V_0;
		NullCheck(L_4);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_5;
		L_5 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_4, NULL);
		V_1 = L_5;
		// if (files != null && files.Length > 0)
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_6 = V_1;
		if (!L_6)
		{
			goto IL_00b5;
		}
	}
	{
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_7 = V_1;
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_00b5;
		}
	}
	{
		// System.DateTime unixEpoch = new System.DateTime(1970, 1, 1, 0, 0, 0, System.DateTimeKind.Utc);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_3), ((int32_t)1970), 1, 1, 0, 0, 0, 1, NULL);
		// foreach (System.IO.FileInfo file in files)
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_8 = V_1;
		V_4 = L_8;
		V_5 = 0;
		goto IL_00ad;
	}

IL_0040:
	{
		// foreach (System.IO.FileInfo file in files)
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		// long unixTimeStampInTicks = (file.CreationTime.ToUniversalTime() - unixEpoch).Ticks;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_13 = V_6;
		NullCheck(L_13);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = FileSystemInfo_get_CreationTime_mA78EF1799DC6825E70182125DD20BC6B37A850F4(L_13, NULL);
		V_8 = L_14;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_8), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_17;
		L_17 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_15, L_16, NULL);
		V_9 = L_17;
		int64_t L_18;
		L_18 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_9), NULL);
		// long unixTimeStampInSeconds = unixTimeStampInTicks / System.TimeSpan.TicksPerSecond;
		V_7 = ((int64_t)(L_18/((int64_t)((int32_t)10000000))));
		// fileInfos.Add(new StarkFileInfo()
		// {
		//     mode = 33060,
		//     size = file.Length,
		//     createTime = unixTimeStampInSeconds,
		//     filePath = file.FullName
		// });
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_19 = ___fileInfos1;
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_20 = (StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB*)il2cpp_codegen_object_new(StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StarkFileInfo__ctor_mB5E47E56717D3D31C5D40539664D13522A616D2F(L_20, NULL);
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_21 = L_20;
		NullCheck(L_21);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_21)->___mode_1 = ((int32_t)33060);
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_22 = L_21;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_23 = V_6;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_23, NULL);
		NullCheck(L_22);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_22)->___size_0 = L_24;
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_25 = L_22;
		int64_t L_26 = V_7;
		NullCheck(L_25);
		L_25->___createTime_2 = L_26;
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_27 = L_25;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_28 = V_6;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_28);
		NullCheck(L_27);
		L_27->___filePath_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___filePath_3), (void*)L_29);
		NullCheck(L_19);
		List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_inline(L_19, L_27, List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_RuntimeMethod_var);
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ad:
	{
		// foreach (System.IO.FileInfo file in files)
		int32_t L_31 = V_5;
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_32 = V_4;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0040;
		}
	}

IL_00b5:
	{
		// System.IO.DirectoryInfo[] subDirs = dir.GetDirectories();
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_33 = V_0;
		NullCheck(L_33);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_34;
		L_34 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_33, NULL);
		V_2 = L_34;
		// if (subDirs != null && subDirs.Length > 0)
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_35 = V_2;
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_36 = V_2;
		NullCheck(L_36);
		if (!(((RuntimeArray*)L_36)->max_length))
		{
			goto IL_0162;
		}
	}
	{
		// System.DateTime unixEpoch = new System.DateTime(1970, 1, 1, 0, 0, 0, System.DateTimeKind.Utc);
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&V_10), ((int32_t)1970), 1, 1, 0, 0, 0, 1, NULL);
		// foreach (var subDir in subDirs)
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_37 = V_2;
		V_11 = L_37;
		V_5 = 0;
		goto IL_015a;
	}

IL_00e3:
	{
		// foreach (var subDir in subDirs)
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_38 = V_11;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_12 = L_41;
		// long unixTimeStampInTicks = (subDir.CreationTime.ToUniversalTime() - unixEpoch).Ticks;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_42 = V_12;
		NullCheck(L_42);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = FileSystemInfo_get_CreationTime_mA78EF1799DC6825E70182125DD20BC6B37A850F4(L_42, NULL);
		V_8 = L_43;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44;
		L_44 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_8), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_10;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_46;
		L_46 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_44, L_45, NULL);
		V_9 = L_46;
		int64_t L_47;
		L_47 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_9), NULL);
		// long unixTimeStampInSeconds = unixTimeStampInTicks / System.TimeSpan.TicksPerSecond;
		V_13 = ((int64_t)(L_47/((int64_t)((int32_t)10000000))));
		// fileInfos.Add(new StarkFileInfo()
		// {
		//     mode = 16676,
		//     size = 0,
		//     createTime = unixTimeStampInSeconds,
		//     filePath = subDir.FullName
		// });
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_48 = ___fileInfos1;
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_49 = (StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB*)il2cpp_codegen_object_new(StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		StarkFileInfo__ctor_mB5E47E56717D3D31C5D40539664D13522A616D2F(L_49, NULL);
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_50 = L_49;
		NullCheck(L_50);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_50)->___mode_1 = ((int32_t)16676);
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_51 = L_50;
		NullCheck(L_51);
		((StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646*)L_51)->___size_0 = ((int64_t)0);
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_52 = L_51;
		int64_t L_53 = V_13;
		NullCheck(L_52);
		L_52->___createTime_2 = L_53;
		StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* L_54 = L_52;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_55 = V_12;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_55);
		NullCheck(L_54);
		L_54->___filePath_3 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___filePath_3), (void*)L_56);
		NullCheck(L_48);
		List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_inline(L_48, L_54, List_1_Add_mD9E2AE0CC8D21937C0B999AEC44E94E5DAEE4717_RuntimeMethod_var);
		// GetFilesRecursively(subDir.FullName, fileInfos);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_57 = V_12;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_57);
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_59 = ___fileInfos1;
		StarkFileSystemManagerDefault_GetFilesRecursively_m81017E1C290E9932E66FCA68ABEC0B9872BCB7EE(__this, L_58, L_59, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_015a:
	{
		// foreach (var subDir in subDirs)
		int32_t L_61 = V_5;
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_62 = V_11;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_00e3;
		}
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::GetSavedFileList(StarkSDKSpace.GetSavedFileListParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_GetSavedFileList_m79D7A8E765CEA3015D56497CC17AB4B27FBA15FD (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCA7FB4E98D23D40D181C58BF335EEAE6A1F9B878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m203C85290F119BC378064052E3FEAFB4B05E54B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* V_0 = NULL;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B2_0 = NULL;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B1_0 = NULL;
	{
		// System.Collections.Generic.List<StarkFileInfo> fileInfos =
		//     new System.Collections.Generic.List<StarkFileInfo>();
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_0 = (List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822*)il2cpp_codegen_object_new(List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m203C85290F119BC378064052E3FEAFB4B05E54B4(L_0, List_1__ctor_m203C85290F119BC378064052E3FEAFB4B05E54B4_RuntimeMethod_var);
		V_0 = L_0;
		// GetFilesRecursively(UnityEngine.Application.persistentDataPath, fileInfos);
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_2 = V_0;
		StarkFileSystemManagerDefault_GetFilesRecursively_m81017E1C290E9932E66FCA68ABEC0B9872BCB7EE(__this, L_1, L_2, NULL);
		// param.success?.Invoke(new StarkGetSavedFileListResponse()
		// {
		//     fileList = fileInfos.ToArray()
		// });
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_4 = ((StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609*)L_3)->___success_0;
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_6 = (StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82*)il2cpp_codegen_object_new(StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StarkGetSavedFileListResponse__ctor_mAD4B866D6E91AD09AC0ABF472B6948AAE0B8DD6E(L_6, NULL);
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_7 = L_6;
		List_1_t59E619B1B705838688192EFF40A2CE0A7D8C4822* L_8 = V_0;
		NullCheck(L_8);
		StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* L_9;
		L_9 = List_1_ToArray_mCA7FB4E98D23D40D181C58BF335EEAE6A1F9B878(L_8, List_1_ToArray_mCA7FB4E98D23D40D181C58BF335EEAE6A1F9B878_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___fileList_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___fileList_3), (void*)L_9);
		NullCheck(G_B2_0);
		Action_1_Invoke_m154D777D9501A52D19C7252829688C87383E1466_inline(G_B2_0, L_7, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerDefault::GetLocalCachedPathForUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerDefault_GetLocalCachedPathForUrl_mE0E6E975869AEBC273EED7850627113FA6C5EE10 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManagerDefault::IsUrlCached(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerDefault_IsUrlCached_m5C39508A1E19F07D18B4D5735BE94DE6A7D580EF (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::CallbackReadFileResponse(System.String,System.Action`1<StarkSDKSpace.StarkReadFileResponse>,System.Action`1<StarkSDKSpace.StarkReadFileResponse>,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_CallbackReadFileResponse_mBE4A74999A69539354397B707B732A08589083D2 (String_t* ___errMsg0, Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___success1, Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* ___fail2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___binData3, String_t* ___stringData4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(errMsg))
		String_t* L_0 = ___errMsg0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// success?.Invoke(new StarkReadFileResponse()
		// {
		//     binData = binData,
		//     stringData = stringData
		// });
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_2 = ___success1;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_3 = ___success1;
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_4 = (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*)il2cpp_codegen_object_new(StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D(L_4, NULL);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___binData3;
		NullCheck(L_5);
		L_5->___binData_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___binData_3), (void*)L_6);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_7 = L_5;
		String_t* L_8 = ___stringData4;
		NullCheck(L_7);
		L_7->___stringData_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___stringData_4), (void*)L_8);
		NullCheck(L_3);
		Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline(L_3, L_7, NULL);
		return;
	}

IL_0026:
	{
		// fail?.Invoke(new StarkReadFileResponse()
		// {
		//     errCode = -1,
		//     errMsg = errMsg
		// });
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_9 = ___fail2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_10 = ___fail2;
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_11 = (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*)il2cpp_codegen_object_new(StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D(L_11, NULL);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_12 = L_11;
		NullCheck(L_12);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_12)->___errCode_2 = (-1);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_13 = L_12;
		String_t* L_14 = ___errMsg0;
		NullCheck(L_13);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_13)->___errMsg_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_13)->___errMsg_1), (void*)L_14);
		NullCheck(L_10);
		Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline(L_10, L_13, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::CallbackBaseResponse(System.String,System.Action`1<StarkSDKSpace.StarkBaseResponse>,System.Action`1<StarkSDKSpace.StarkBaseResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault_CallbackBaseResponse_m8B065B2BB3E106E5A32F34DDE48E0AD03FE81363 (String_t* ___errMsg0, Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___success1, Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* ___fail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(errMsg))
		String_t* L_0 = ___errMsg0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// success?.Invoke(new StarkBaseResponse());
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_2 = ___success1;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_3 = ___success1;
		StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* L_4 = (StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)il2cpp_codegen_object_new(StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_mDCCD61210930C9E9871B8EFE88D86C0B6C6677DA_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// fail?.Invoke(new StarkBaseResponse()
		// {
		//     errCode = -1,
		//     errMsg = errMsg
		// });
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_5 = ___fail2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ___fail2;
		StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* L_7 = (StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)il2cpp_codegen_object_new(StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(L_7, NULL);
		StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* L_8 = L_7;
		NullCheck(L_8);
		L_8->___errCode_2 = (-1);
		StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* L_9 = L_8;
		String_t* L_10 = ___errMsg0;
		NullCheck(L_9);
		L_9->___errMsg_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___errMsg_1), (void*)L_10);
		NullCheck(L_6);
		Action_1_Invoke_mDCCD61210930C9E9871B8EFE88D86C0B6C6677DA_inline(L_6, L_9, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Int64 StarkSDKSpace.StarkFileSystemManagerDefault::GetUnixTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StarkFileSystemManagerDefault_GetUnixTime_m0DF797F6A811B7FE669744F7B106818ABC54F86C (int64_t ___ticks0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var epochTicks = new System.DateTime(1970, 1, 1).Ticks;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_0), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		V_1 = L_0;
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_1), NULL);
		V_0 = L_1;
		// var unixTime = ((ticks - epochTicks) / System.TimeSpan.TicksPerSecond);
		int64_t L_2 = ___ticks0;
		int64_t L_3 = V_0;
		// return unixTime;
		return ((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, L_3))/((int64_t)((int32_t)10000000))));
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault__ctor_mD7411AEB782937A5F0AAF2930E194E08FDE8BF98 (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		StarkFileSystemManager__ctor_m4EF16BD56E74FC412CCCBF5B82E5D41E1F455019(__this, NULL);
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerDefault::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerDefault__cctor_m07233F0D8491D7FE01C1C757289151E5B3748E20 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly StarkFileSystemManagerDefault Instance = new StarkFileSystemManagerDefault();
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = (StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5*)il2cpp_codegen_object_new(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StarkFileSystemManagerDefault__ctor_mD7411AEB782937A5F0AAF2930E194E08FDE8BF98(L_0, NULL);
		((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2), (void*)L_0);
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
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteStringFileSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkWriteStringFileSync_mC06EFC3F05C0927A9FA4E632014C8E8BE4F73333 (String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.WriteFileSync(filePath, data, encoding);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		String_t* L_2 = ___data1;
		String_t* L_3 = ___encoding2;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(4 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteBinFileSync(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkWriteBinFileSync_mF8AAC0E399783C972E1C184208C17D57EF7A4A66 (String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___dataLength2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.WriteFileSync(filePath, data);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.Byte[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteBinFile(System.String,System.Byte[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkWriteBinFile_m0BE492BAB7417FB97CDA0CC89E245582AEB5B654 (String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___dataLength2, String_t* ___s3, String_t* ___f4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.WriteFileSync(filePath, data);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.Byte[]) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkWriteStringFile(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkWriteStringFile_mE6AC5DD9CB97642D0A594B99A653674124D17C87 (String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, String_t* ___s3, String_t* ___f4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.WriteFileSync(filePath, data, encoding);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		String_t* L_2 = ___data1;
		String_t* L_3 = ___encoding2;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(4 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkReadFile_m09158CDD0CB39FAEF14D7F4E3638B823073B7182 (String_t* ___filePath0, String_t* ___encoding1, String_t* ___callbackId2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadStringFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkReadStringFileSync_m84E8CBAB7549E53B46FB4FD14E7FABC8AACF0D36 (String_t* ___filePath0, String_t* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.ReadFileSync(filePath, encoding);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		String_t* L_2 = ___encoding1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(10 /* System.String StarkSDKSpace.StarkFileSystemManager::ReadFileSync(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 StarkSDKSpace.StarkFileSystemManagerWebGL::StarkReadBinFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkFileSystemManagerWebGL_StarkReadBinFileSync_m5E27BD4D8E97CF3DFA4ECCC268870A4FA26E1284 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkShareFileBuffer(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkShareFileBuffer_m94A4B5E996E2AE035083924BA0E2D18B07550BB9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, String_t* ___callbackId1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManagerWebGL::StarkAccessFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerWebGL_StarkAccessFileSync_mC37E99C1096825C1142CFC990C7467C4BADB859B (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.AccessSync(filePath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkAccessFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkAccessFile_m574D62C37E1B832D6745AFD51768066BB6783732 (String_t* ___filePath0, String_t* ___s1, String_t* ___f2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkCopyFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkCopyFileSync_m5E3B140EF326AA5A2432EE320F0292E14B47CF4C (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.CopyFileSync(srcPath, destPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___srcPath0;
		String_t* L_2 = ___destPath1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(13 /* System.String StarkSDKSpace.StarkFileSystemManager::CopyFileSync(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRenameFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkRenameFileSync_mAC70A0519989A41CF509222469E315349DF3C320 (String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.RenameFileSync(srcPath, destPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___srcPath0;
		String_t* L_2 = ___destPath1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(16 /* System.String StarkSDKSpace.StarkFileSystemManager::RenameFileSync(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkCopyFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkCopyFile_mA1F5FBF6320B679A4CF1228DCB04F2C8FAD0E0F7 (String_t* ___srcPath0, String_t* ___destPath1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.CopyFileSync(srcPath, destPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___srcPath0;
		String_t* L_2 = ___destPath1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(13 /* System.String StarkSDKSpace.StarkFileSystemManager::CopyFileSync(System.String,System.String) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRenameFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkRenameFile_mEDD11512DB4EE09983E5DD0BDD3760AA289B187C (String_t* ___srcPath0, String_t* ___destPath1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.RenameFileSync(srcPath, destPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___srcPath0;
		String_t* L_2 = ___destPath1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(16 /* System.String StarkSDKSpace.StarkFileSystemManager::RenameFileSync(System.String,System.String) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkUnlinkSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkUnlinkSync_mE5925E3F5782B28CBE523D230DF22DA1572D2129 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.UnlinkSync(filePath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String StarkSDKSpace.StarkFileSystemManager::UnlinkSync(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkUnlink(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkUnlink_m15DD36CFC6B7A612F4BF5A27C3A45F6A91DC2CEB (String_t* ___filePath0, String_t* ___s1, String_t* ___f2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.UnlinkSync(filePath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___filePath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String StarkSDKSpace.StarkFileSystemManager::UnlinkSync(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkMkdir(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkMkdir_m4564BF7DD9C29CE26D8D0A074F43E2A6FBB681BD (String_t* ___dirPath0, bool ___recursive1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.MkdirSync(dirPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___dirPath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(20 /* System.String StarkSDKSpace.StarkFileSystemManager::MkdirSync(System.String,System.Boolean) */, L_0, L_1, (bool)0);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkMkdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkMkdirSync_m306B73C3C98A3AAE2AFEB778E3F47289A5118C34 (String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.MkdirSync(dirPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___dirPath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(20 /* System.String StarkSDKSpace.StarkFileSystemManager::MkdirSync(System.String,System.Boolean) */, L_0, L_1, (bool)0);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRmdir(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkRmdir_m264F260F5D88147CBB5B37D7DA561B6E539E5DC0 (String_t* ___dirPath0, bool ___recursive1, String_t* ___s2, String_t* ___f3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkFileSystemManagerDefault.Instance.RmdirSync(dirPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___dirPath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(22 /* System.String StarkSDKSpace.StarkFileSystemManager::RmdirSync(System.String,System.Boolean) */, L_0, L_1, (bool)0);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkRmdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkRmdirSync_mE31B2DA57954209FE476A8F1A36E90AFCED9C5CB (String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkFileSystemManagerDefault.Instance.RmdirSync(dirPath);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var);
		StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5* L_0 = ((StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerDefault_t1BE88D13555F42EDAB62845A69A998CF2C0E3AA5_il2cpp_TypeInfo_var))->___Instance_2;
		String_t* L_1 = ___dirPath0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(22 /* System.String StarkSDKSpace.StarkFileSystemManager::RmdirSync(System.String,System.Boolean) */, L_0, L_1, (bool)0);
		return L_2;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkStatSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkStatSync_mF47C539C814FD402BBEBE5E8A739238E3DDE2672 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkStat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkStat_mDBADA9EDB571F7A9325D1A0CA1864B99A5380723 (String_t* ___path0, String_t* ___callbackId1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::StarkGetSavedFileList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_StarkGetSavedFileList_m6EF877F64FC366F2CCDBA49FFD0634E749CA8894 (String_t* ___callbackId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::StarkGetCachedPathForUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_StarkGetCachedPathForUrl_m33153DD3716934C70F486ED05ECF79FDDEA0C0CE (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL__ctor_mACD0BA04C4181F60D8080EF47F01C48473FC2F43 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StarkFileSystemManagerWebGL()
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54_il2cpp_TypeInfo_var);
		StarkFileSystemManager__ctor_m4EF16BD56E74FC412CCCBF5B82E5D41E1F455019(__this, NULL);
		// MigratingData();
		StarkFileSystemManager_MigratingData_m33C8C075E34139F6A99985F9BDC9C35A3AC9CCB0(NULL);
		// CreateStarkFileSystemHandler();
		StarkFileSystemManagerWebGL_CreateStarkFileSystemHandler_m236A23EA8BD04F468FD051103E7E00B31744C7D2(__this, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::CreateStarkFileSystemHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_CreateStarkFileSystemHandler_m236A23EA8BD04F468FD051103E7E00B31744C7D2 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111_m8409917D62B74E1E6FD5BD82431A96B919099F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC4E68234F5971C388E26638D46C763DCB4CB725);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialized)
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		bool L_0 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->____initialized_6;
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// _initialized = true;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->____initialized_6 = (bool)1;
		// GameObject obj = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_1, NULL);
		// Object.DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// obj.name = "StarkFileSystemManager";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, _stringLiteralBC4E68234F5971C388E26638D46C763DCB4CB725, NULL);
		// obj.AddComponent<StarkFileSystemHandler>();
		NullCheck(L_3);
		StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* L_4;
		L_4 = GameObject_AddComponent_TisStarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111_m8409917D62B74E1E6FD5BD82431A96B919099F84(L_3, GameObject_AddComponent_TisStarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111_m8409917D62B74E1E6FD5BD82431A96B919099F84_RuntimeMethod_var);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::FixFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD6D83135EA7EEA4476E33C60098D5D47C384CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC65D3A87DBA5B8CF643E36E8393259CEDF7DB6B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (filePath.StartsWith(USER_DATA_PATH))
		String_t* L_0 = ___filePath0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral3CD6D83135EA7EEA4476E33C60098D5D47C384CF, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return filePath;
		String_t* L_2 = ___filePath0;
		return L_2;
	}

IL_000f:
	{
		// if (filePath.StartsWith(Application.persistentDataPath))
		String_t* L_3 = ___filePath0;
		String_t* L_4;
		L_4 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// filePath = filePath.Replace(Application.persistentDataPath, USER_DATA_PATH);
		String_t* L_6 = ___filePath0;
		String_t* L_7;
		L_7 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, L_7, _stringLiteral3CD6D83135EA7EEA4476E33C60098D5D47C384CF, NULL);
		___filePath0 = L_8;
		goto IL_0053;
	}

IL_0030:
	{
		// if (filePath.StartsWith("/"))
		String_t* L_9 = ___filePath0;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_9, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// filePath = filePath.Substring(1);
		String_t* L_11 = ___filePath0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, 1, NULL);
		___filePath0 = L_12;
	}

IL_0046:
	{
		// filePath = $"{USER_DATA_PATH}/{filePath}";
		String_t* L_13 = ___filePath0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC65D3A87DBA5B8CF643E36E8393259CEDF7DB6B1, L_13, NULL);
		___filePath0 = L_14;
	}

IL_0053:
	{
		// return filePath;
		String_t* L_15 = ___filePath0;
		return L_15;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::WriteFileSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_WriteFileSync_mBEE23A0FC4571F3361E864E94DF44EF3C3C76ED4 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, String_t* ___data1, String_t* ___encoding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(encoding))
		String_t* L_0 = ___encoding2;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// encoding = "utf8";
		___encoding2 = _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
	}

IL_000f:
	{
		// return StarkWriteStringFileSync(FixFilePath(filePath), data, encoding);
		String_t* L_2 = ___filePath0;
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_2, NULL);
		String_t* L_4 = ___data1;
		String_t* L_5 = ___encoding2;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = StarkFileSystemManagerWebGL_StarkWriteStringFileSync_mC06EFC3F05C0927A9FA4E632014C8E8BE4F73333(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::WriteFileSync(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_WriteFileSync_m40056C87C004CAD17DCB0FA5026E0D8C7F2F9CEB (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkWriteBinFileSync(FixFilePath(filePath), data, data.Length);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data1;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StarkFileSystemManagerWebGL_StarkWriteBinFileSync_mF8AAC0E399783C972E1C184208C17D57EF7A4A66(L_1, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return L_4;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::WriteFile(StarkSDKSpace.WriteFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_WriteFile_m77BDBF9D92B0FFBDFE0CAE004CE3376C69B28E6F (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkWriteBinFile(
		//     FixFilePath(param.filePath),
		//     param.data,
		//     param.data.Length,
		//     StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail)
		// );
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_3 = ___param0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___data_3;
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_5 = ___param0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5->___data_3;
		NullCheck(L_6);
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_7 = ___param0;
		NullCheck(L_7);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_8 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_7)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_8, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* L_10 = ___param0;
		NullCheck(L_10);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_11 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_10)->___fail_1;
		String_t* L_12;
		L_12 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_11, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkWriteBinFile_m0BE492BAB7417FB97CDA0CC89E245582AEB5B654(L_2, L_4, ((int32_t)(((RuntimeArray*)L_6)->max_length)), L_9, L_12, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::WriteFile(StarkSDKSpace.WriteFileStringParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_WriteFile_m4605D5D12C0FFEDD79F55B9EF80D065889DA0656 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(param.encoding))
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___encoding_4;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// param.encoding = "utf8";
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_3 = ___param0;
		NullCheck(L_3);
		L_3->___encoding_4 = _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___encoding_4), (void*)_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
	}

IL_0018:
	{
		// StarkWriteStringFile(
		//     FixFilePath(param.filePath),
		//     param.data,
		//     param.encoding,
		//     StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail)
		// );
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_4 = ___param0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___filePath_2;
		String_t* L_6;
		L_6 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_5, NULL);
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_7 = ___param0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___data_3;
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_9 = ___param0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___encoding_4;
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_11 = ___param0;
		NullCheck(L_11);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_12 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_11)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_12, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* L_14 = ___param0;
		NullCheck(L_14);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_15 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_14)->___fail_1;
		String_t* L_16;
		L_16 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_15, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkWriteStringFile_mE6AC5DD9CB97642D0A594B99A653674124D17C87(L_6, L_8, L_10, L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::ReadFile(StarkSDKSpace.ReadFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_ReadFile_m8C54F99041B8221514CF3D4D73C6CA8C04D9DCF9 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD6FE724CB9D30081CF8911FD58D244C4A5577A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var key = StarkCallbackHandler.MakeKey();
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = StarkCallbackHandler_MakeKey_m2C1596D3E3A890ECDCD607B9268275A833760036(NULL);
		V_0 = L_0;
		// s_readFileParams.Add(key, param);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* L_1 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_readFileParams_3;
		String_t* L_2 = V_0;
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_3 = ___param0;
		NullCheck(L_1);
		Dictionary_2_Add_mD6FE724CB9D30081CF8911FD58D244C4A5577A13(L_1, L_2, L_3, Dictionary_2_Add_mD6FE724CB9D30081CF8911FD58D244C4A5577A13_RuntimeMethod_var);
		// StarkReadFile(FixFilePath(param.filePath), param.encoding, key);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_4 = ___param0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___filePath_2;
		String_t* L_6;
		L_6 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_5, NULL);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_7 = ___param0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___encoding_3;
		String_t* L_9 = V_0;
		StarkFileSystemManagerWebGL_StarkReadFile_m09158CDD0CB39FAEF14D7F4E3638B823073B7182(L_6, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Byte[] StarkSDKSpace.StarkFileSystemManagerWebGL::ReadFileSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StarkFileSystemManagerWebGL_ReadFileSync_m2981003CF70050EF8202D3B126057A08BE2DCE0B (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Application.platform == RuntimePlatform.WebGLPlayer)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_002c;
		}
	}
	{
		// filePath = FixFilePath(filePath);
		String_t* L_1 = ___filePath0;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		___filePath0 = L_2;
		// var length = StarkReadBinFileSync(filePath);
		String_t* L_3 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = StarkFileSystemManagerWebGL_StarkReadBinFileSync_m5E27BD4D8E97CF3DFA4ECCC268870A4FA26E1284(L_3, NULL);
		V_0 = L_4;
		// if (length == 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_001e:
	{
		// var sharedBuffer = new byte[length];
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		// StarkShareFileBuffer(sharedBuffer, filePath);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		String_t* L_9 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkShareFileBuffer_m94A4B5E996E2AE035083924BA0E2D18B07550BB9(L_8, L_9, NULL);
		// return sharedBuffer;
		return L_8;
	}

IL_002c:
	{
		// return System.IO.File.ReadAllBytes(filePath);
		String_t* L_10 = ___filePath0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_10, NULL);
		return L_11;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::ReadFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_ReadFileSync_m21470EC5E61E44DB12D7FCAD8E757DCC32F05E82 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, String_t* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkReadStringFileSync(FixFilePath(filePath), encoding);
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		String_t* L_2 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_StarkReadStringFileSync_m84E8CBAB7549E53B46FB4FD14E7FABC8AACF0D36(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManagerWebGL::AccessSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerWebGL_AccessSync_mDEE4D3127DBD3D1EE58BDADB08C35441E04C23B1 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkAccessFileSync(FixFilePath(path));
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StarkFileSystemManagerWebGL_StarkAccessFileSync_mC37E99C1096825C1142CFC990C7467C4BADB859B(L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::Access(StarkSDKSpace.AccessParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_Access_m73910AC6ED6B2E3323C92D62732AEC1285A806CF (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkAccessFile(FixFilePath(param.path), StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___path_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_4 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_3)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_4, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* L_6 = ___param0;
		NullCheck(L_6);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_7 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_6)->___fail_1;
		String_t* L_8;
		L_8 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_7, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkAccessFile_m574D62C37E1B832D6745AFD51768066BB6783732(L_2, L_5, L_8, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::CopyFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_CopyFileSync_m69E1E2B33FDEB9F2D66DE368F852FED814A87E2D (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkCopyFileSync(FixFilePath(srcPath), FixFilePath(destPath));
		String_t* L_0 = ___srcPath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		String_t* L_2 = ___destPath1;
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StarkFileSystemManagerWebGL_StarkCopyFileSync_m5E3B140EF326AA5A2432EE320F0292E14B47CF4C(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::CopyFile(StarkSDKSpace.CopyFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_CopyFile_mF559D04AA1A84F0E5F6B6789B1971310340E482D (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkCopyFile(FixFilePath(param.srcPath), FixFilePath(param.destPath),
		//     StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___srcPath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_3 = ___param0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___destPath_3;
		String_t* L_5;
		L_5 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_4, NULL);
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_6 = ___param0;
		NullCheck(L_6);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_7 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_6)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_7, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* L_9 = ___param0;
		NullCheck(L_9);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_10 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_9)->___fail_1;
		String_t* L_11;
		L_11 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_10, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkCopyFile_mA1F5FBF6320B679A4CF1228DCB04F2C8FAD0E0F7(L_2, L_5, L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::RenameFile(StarkSDKSpace.RenameFileParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_RenameFile_m732C114676CC2548DC1C392E82F12F4B4808E487 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkRenameFile(FixFilePath(param.srcPath), FixFilePath(param.destPath),
		//     StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___srcPath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_3 = ___param0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___destPath_3;
		String_t* L_5;
		L_5 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_4, NULL);
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_6 = ___param0;
		NullCheck(L_6);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_7 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_6)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_7, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* L_9 = ___param0;
		NullCheck(L_9);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_10 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_9)->___fail_1;
		String_t* L_11;
		L_11 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_10, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkRenameFile_mEDD11512DB4EE09983E5DD0BDD3760AA289B187C(L_2, L_5, L_8, L_11, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::RenameFileSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_RenameFileSync_m2F8E157FD18DB2FBD2E562B8BC16AC633EBB5A2F (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___srcPath0, String_t* ___destPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkRenameFileSync(FixFilePath(srcPath), FixFilePath(destPath));
		String_t* L_0 = ___srcPath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		String_t* L_2 = ___destPath1;
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StarkFileSystemManagerWebGL_StarkRenameFileSync_mAC70A0519989A41CF509222469E315349DF3C320(L_1, L_3, NULL);
		return L_4;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::UnlinkSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_UnlinkSync_m77A49BE198FB1CC4DDDE43E319765E77277A6F8C (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkUnlinkSync(FixFilePath(filePath));
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_StarkUnlinkSync_mE5925E3F5782B28CBE523D230DF22DA1572D2129(L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::Unlink(StarkSDKSpace.UnlinkParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_Unlink_m2F8E69EB91CC5CD3BB97DC809043370776136C30 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkUnlink(FixFilePath(param.filePath), StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___filePath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_3 = ___param0;
		NullCheck(L_3);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_4 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_3)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_4, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* L_6 = ___param0;
		NullCheck(L_6);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_7 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_6)->___fail_1;
		String_t* L_8;
		L_8 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_7, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkUnlink_m15DD36CFC6B7A612F4BF5A27C3A45F6A91DC2CEB(L_2, L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::Mkdir(StarkSDKSpace.MkdirParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_Mkdir_mD508F2663B7CF6FDC88BA175B97304C42E3F51C6 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkMkdir(FixFilePath(param.dirPath), param.recursive, StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___dirPath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_3 = ___param0;
		NullCheck(L_3);
		bool L_4 = L_3->___recursive_3;
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_6, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* L_8 = ___param0;
		NullCheck(L_8);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_9 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_8)->___fail_1;
		String_t* L_10;
		L_10 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_9, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkMkdir_m4564BF7DD9C29CE26D8D0A074F43E2A6FBB681BD(L_2, L_4, L_7, L_10, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::MkdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_MkdirSync_mC3006DD36EDF8E5F1568B4A9E7A9E98E7F01705A (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkMkdirSync(FixFilePath(dirPath), recursive);
		String_t* L_0 = ___dirPath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		bool L_2 = ___recursive1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_StarkMkdirSync_m306B73C3C98A3AAE2AFEB778E3F47289A5118C34(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::Rmdir(StarkSDKSpace.RmdirParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_Rmdir_mEB3D908A044B88CE61DF4CAED2C820015FCA7DCB (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StarkRmdir(FixFilePath(param.dirPath), param.recursive, StarkCallbackHandler.Add(param.success),
		//     StarkCallbackHandler.Add(param.fail));
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_0 = ___param0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___dirPath_2;
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_1, NULL);
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_3 = ___param0;
		NullCheck(L_3);
		bool L_4 = L_3->___recursive_3;
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_5 = ___param0;
		NullCheck(L_5);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_6 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_5)->___success_0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_6, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* L_8 = ___param0;
		NullCheck(L_8);
		Action_1_tED0859F48DE76BE30D218CA1E533490353EF536D* L_9 = ((StarkBaseActionParam_1_t915486F2D5916C63D14DB66CF0A965F89CAC05CC*)L_8)->___fail_1;
		String_t* L_10;
		L_10 = StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B(L_9, StarkCallbackHandler_Add_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_mA8E03F9796F6BEF8C9C55C1EAF6A10BF246F8F8B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkRmdir_m264F260F5D88147CBB5B37D7DA561B6E539E5DC0(L_2, L_4, L_7, L_10, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::RmdirSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_RmdirSync_m93E2438BFD30547109738902A9E8F583B8A2BC4D (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___dirPath0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkRmdirSync(FixFilePath(dirPath), recursive);
		String_t* L_0 = ___dirPath0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		bool L_2 = ___recursive1;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = StarkFileSystemManagerWebGL_StarkRmdirSync_mE31B2DA57954209FE476A8F1A36E90AFCED9C5CB(L_1, L_2, NULL);
		return L_3;
	}
}
// StarkSDKSpace.StarkStatInfo StarkSDKSpace.StarkFileSystemManagerWebGL::StatSync(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* StarkFileSystemManagerWebGL_StatSync_m774F39057B94BF138852D769AEF0135F37962E72 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisStarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_m155C164490FFFE936C7C674CD129AD82C22D9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var info = StarkStatSync(FixFilePath(path));
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = StarkFileSystemManagerWebGL_StarkStatSync_mF47C539C814FD402BBEBE5E8A739238E3DDE2672(L_1, NULL);
		V_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		// return JsonUtility.FromJson<StarkStatInfo>(info);
		String_t* L_3 = V_0;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_4;
		L_4 = JsonUtility_FromJson_TisStarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_m155C164490FFFE936C7C674CD129AD82C22D9255(L_3, JsonUtility_FromJson_TisStarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_m155C164490FFFE936C7C674CD129AD82C22D9255_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		{
			// catch (Exception exception)
			// if (throwException)
			bool L_5 = ___throwException1;
			if (!L_5)
			{
				goto IL_002f;
			}
		}
		{
			// if (string.IsNullOrEmpty(info))
			String_t* L_6 = V_0;
			bool L_7;
			L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
			if (!L_7)
			{
				goto IL_0028;
			}
		}
		{
			// info = "stat failed";
			V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56294DE9E487EE343E7A29CAE6B9C52435963860));
		}

IL_0028:
		{
			// throw new Exception(info);
			String_t* L_8 = V_0;
			Exception_t* L_9 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_9, L_8, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StarkFileSystemManagerWebGL_StatSync_m774F39057B94BF138852D769AEF0135F37962E72_RuntimeMethod_var)));
		}

IL_002f:
		{
			// return null;
			V_1 = (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0033;
		}
	}// end catch (depth: 1)

IL_0033:
	{
		// }
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_10 = V_1;
		return L_10;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::Stat(StarkSDKSpace.StatParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_Stat_m54CAE65DF7495F3A289AAC9FA9F48B24679651ED (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m38EF8D3C0355B3735E220E75ABE396AF5E399988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var key = StarkCallbackHandler.MakeKey();
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = StarkCallbackHandler_MakeKey_m2C1596D3E3A890ECDCD607B9268275A833760036(NULL);
		V_0 = L_0;
		// s_statParams.Add(key, param);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* L_1 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4;
		String_t* L_2 = V_0;
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_3 = ___param0;
		NullCheck(L_1);
		Dictionary_2_Add_m38EF8D3C0355B3735E220E75ABE396AF5E399988(L_1, L_2, L_3, Dictionary_2_Add_m38EF8D3C0355B3735E220E75ABE396AF5E399988_RuntimeMethod_var);
		// StarkStat(FixFilePath(param.path), key);
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_4 = ___param0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___path_2;
		String_t* L_6;
		L_6 = StarkFileSystemManagerWebGL_FixFilePath_m060569FDF750ED58464CFDEDFFF14D4E1C0EC7D8(__this, L_5, NULL);
		String_t* L_7 = V_0;
		StarkFileSystemManagerWebGL_StarkStat_mDBADA9EDB571F7A9325D1A0CA1864B99A5380723(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::GetSavedFileList(StarkSDKSpace.GetSavedFileListParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL_GetSavedFileList_m5AA63BED7AD8BB755632E48FF98D45C75E27A048 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* ___param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA0C50A6DA565AE11121CCC7A2AB45EC10ED991E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var key = StarkCallbackHandler.MakeKey();
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = StarkCallbackHandler_MakeKey_m2C1596D3E3A890ECDCD607B9268275A833760036(NULL);
		V_0 = L_0;
		// s_getSavedFileListParams.Add(key, param);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* L_1 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_getSavedFileListParams_5;
		String_t* L_2 = V_0;
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_3 = ___param0;
		NullCheck(L_1);
		Dictionary_2_Add_mA0C50A6DA565AE11121CCC7A2AB45EC10ED991E9(L_1, L_2, L_3, Dictionary_2_Add_mA0C50A6DA565AE11121CCC7A2AB45EC10ED991E9_RuntimeMethod_var);
		// StarkGetSavedFileList(key);
		String_t* L_4 = V_0;
		StarkFileSystemManagerWebGL_StarkGetSavedFileList_m6EF877F64FC366F2CCDBA49FFD0634E749CA8894(L_4, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkFileSystemManagerWebGL::GetLocalCachedPathForUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkFileSystemManagerWebGL_GetLocalCachedPathForUrl_mA14C4A33C05303B72245A18784123EB56DCA6BC5 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StarkGetCachedPathForUrl(url);
		String_t* L_0 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = StarkFileSystemManagerWebGL_StarkGetCachedPathForUrl_m33153DD3716934C70F486ED05ECF79FDDEA0C0CE(L_0, NULL);
		return L_1;
	}
}
// System.Boolean StarkSDKSpace.StarkFileSystemManagerWebGL::IsUrlCached(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkFileSystemManagerWebGL_IsUrlCached_m721D47B1C8153CD3C178437C32CC6981FE8B8752 (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var path = GetLocalCachedPathForUrl(url);
		String_t* L_0 = ___url0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(26 /* System.String StarkSDKSpace.StarkFileSystemManager::GetLocalCachedPathForUrl(System.String) */, __this, L_0);
		V_0 = L_1;
		// return !string.IsNullOrEmpty(path) && AccessSync(path);
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, __this, L_4);
		return L_5;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemManagerWebGL__cctor_mD14BA0A865D521180ABFE4242AF8545883FAC58E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m031D5C8F933670FC1E733EC7A8ECF50CA474CD11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m695AC03575B79F85AA8BFACA56574FFC976917B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC6E98A79E2C39D2C413806E4397F8EB5AECCCB72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly StarkFileSystemManagerWebGL Instance = new StarkFileSystemManagerWebGL();
		StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE* L_0 = (StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE*)il2cpp_codegen_object_new(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StarkFileSystemManagerWebGL__ctor_mACD0BA04C4181F60D8080EF47F01C48473FC2F43(L_0, NULL);
		((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___Instance_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___Instance_2), (void*)L_0);
		// private static Dictionary<string, ReadFileParam> s_readFileParams = new Dictionary<string, ReadFileParam>();
		Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* L_1 = (Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D*)il2cpp_codegen_object_new(Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m031D5C8F933670FC1E733EC7A8ECF50CA474CD11(L_1, Dictionary_2__ctor_m031D5C8F933670FC1E733EC7A8ECF50CA474CD11_RuntimeMethod_var);
		((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_readFileParams_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_readFileParams_3), (void*)L_1);
		// private static Dictionary<string, StatParam> s_statParams = new Dictionary<string, StatParam>();
		Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* L_2 = (Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287*)il2cpp_codegen_object_new(Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m695AC03575B79F85AA8BFACA56574FFC976917B6(L_2, Dictionary_2__ctor_m695AC03575B79F85AA8BFACA56574FFC976917B6_RuntimeMethod_var);
		((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4), (void*)L_2);
		// private static Dictionary<string, GetSavedFileListParam> s_getSavedFileListParams =
		//     new Dictionary<string, GetSavedFileListParam>();
		Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* L_3 = (Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505*)il2cpp_codegen_object_new(Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mC6E98A79E2C39D2C413806E4397F8EB5AECCCB72(L_3, Dictionary_2__ctor_mC6E98A79E2C39D2C413806E4397F8EB5AECCCB72_RuntimeMethod_var);
		((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_getSavedFileListParams_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_getSavedFileListParams_5), (void*)L_3);
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
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler::HandleNativeCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemHandler_HandleNativeCallback_m9D7D27209AD2E49BB422D088DA49F77F76837BAE (StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_InvokeResponseCallback_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_m42702D471EC180FEC6817DC46B18FA1D510C9CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC8F0256CB53131C4E4B30371BCC70B69F7B7BC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"HandleNativeCallback - {msg}");
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFC8F0256CB53131C4E4B30371BCC70B69F7B7BC8, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// StarkCallbackHandler.InvokeResponseCallback<StarkBaseResponse>(msg);
		String_t* L_2 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		StarkCallbackHandler_InvokeResponseCallback_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_m42702D471EC180FEC6817DC46B18FA1D510C9CFE(L_2, StarkCallbackHandler_InvokeResponseCallback_TisStarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A_m42702D471EC180FEC6817DC46B18FA1D510C9CFE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler::HandleReadFileCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemHandler_HandleReadFileCallback_m33D75FB8304659C8DEF023EC6E6ED8F53ED371FA (StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7692889BDB5C2D6770F44F589681A4CC2BE50A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA028A42E4ABD9A862299DBE952F8B3C71C649CFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisStarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D_m576EC215E394D4B39BB93739FAF66EA833EE1F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739467894A3955BA22F911546C8FB6D8C5D4EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAC3A4FDBDBA11ED6EAD55328B4CDB0AA0CED7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD693CFF529590FF91ECFACE870B7A4D3894FF1A6);
		s_Il2CppMethodInitialized = true;
	}
	StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* V_0 = NULL;
	ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* V_3 = NULL;
	StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* V_4 = NULL;
	StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* V_5 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B7_0 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B6_0 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B10_0 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B9_0 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B13_0 = NULL;
	Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* G_B12_0 = NULL;
	{
		// Debug.Log($"HandleReadFileCallback - {msg}");
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBAAC3A4FDBDBA11ED6EAD55328B4CDB0AA0CED7B, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// var res = JsonUtility.FromJson<StarkReadFileCallback>(msg);
		String_t* L_2 = ___msg0;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_3;
		L_3 = JsonUtility_FromJson_TisStarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D_m576EC215E394D4B39BB93739FAF66EA833EE1F8F(L_2, JsonUtility_FromJson_TisStarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D_m576EC215E394D4B39BB93739FAF66EA833EE1F8F_RuntimeMethod_var);
		V_0 = L_3;
		// var conf = s_readFileParams[res.callbackId];
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* L_4 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_readFileParams_3;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_5)->___callbackId_0;
		NullCheck(L_4);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_7;
		L_7 = Dictionary_2_get_Item_mA028A42E4ABD9A862299DBE952F8B3C71C649CFD(L_4, L_6, Dictionary_2_get_Item_mA028A42E4ABD9A862299DBE952F8B3C71C649CFD_RuntimeMethod_var);
		V_1 = L_7;
		// if (conf == null)
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_8 = V_1;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.LogWarning($"HandleReadFileCallback - no callback for callbackId: {res.callbackId}");
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_9)->___callbackId_0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD693CFF529590FF91ECFACE870B7A4D3894FF1A6, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_11, NULL);
		// return;
		return;
	}

IL_0041:
	{
		// s_readFileParams.Remove(res.callbackId);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t494A00DEC47E93FC5653FD3232F8D70BFE39C37D* L_12 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_readFileParams_3;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_13)->___callbackId_0;
		NullCheck(L_12);
		bool L_15;
		L_15 = Dictionary_2_Remove_m7692889BDB5C2D6770F44F589681A4CC2BE50A47(L_12, L_14, Dictionary_2_Remove_m7692889BDB5C2D6770F44F589681A4CC2BE50A47_RuntimeMethod_var);
		// if (res.errCode == 0)
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_16)->___errCode_2;
		if (L_17)
		{
			goto IL_00d6;
		}
	}
	{
		// if (string.IsNullOrEmpty(conf.encoding) || conf.encoding.Equals("binary"))
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = L_18->___encoding_3;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_0079;
		}
	}
	{
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22 = L_21->___encoding_3;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_22, _stringLiteral739467894A3955BA22F911546C8FB6D8C5D4EC84, NULL);
		if (!L_23)
		{
			goto IL_00b0;
		}
	}

IL_0079:
	{
		// var sharedBuffer = new byte[res.byteLength];
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___byteLength_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_2 = L_26;
		// StarkShareFileBuffer(sharedBuffer, res.callbackId);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_28)->___callbackId_0;
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		StarkFileSystemManagerWebGL_StarkShareFileBuffer_m94A4B5E996E2AE035083924BA0E2D18B07550BB9(L_27, L_29, NULL);
		// var obj = new StarkReadFileResponse()
		// {
		//     binData = sharedBuffer,
		// };
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_30 = (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*)il2cpp_codegen_object_new(StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D(L_30, NULL);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_31 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		NullCheck(L_31);
		L_31->___binData_3 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___binData_3), (void*)L_32);
		V_3 = L_31;
		// conf.success?.Invoke(obj);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_33 = V_1;
		NullCheck(L_33);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_34 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_33)->___success_0;
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_35 = L_34;
		G_B6_0 = L_35;
		if (L_35)
		{
			G_B7_0 = L_35;
			goto IL_00a9;
		}
	}
	{
		return;
	}

IL_00a9:
	{
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_36 = V_3;
		NullCheck(G_B7_0);
		Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline(G_B7_0, L_36, NULL);
		return;
	}

IL_00b0:
	{
		// var obj = new StarkReadFileResponse()
		// {
		//     stringData = res.data
		// };
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_37 = (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*)il2cpp_codegen_object_new(StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D(L_37, NULL);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_38 = L_37;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = L_39->___data_3;
		NullCheck(L_38);
		L_38->___stringData_4 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___stringData_4), (void*)L_40);
		V_4 = L_38;
		// conf.success?.Invoke(obj);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_41 = V_1;
		NullCheck(L_41);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_42 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_41)->___success_0;
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_43 = L_42;
		G_B9_0 = L_43;
		if (L_43)
		{
			G_B10_0 = L_43;
			goto IL_00ce;
		}
	}
	{
		return;
	}

IL_00ce:
	{
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_44 = V_4;
		NullCheck(G_B10_0);
		Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline(G_B10_0, L_44, NULL);
		return;
	}

IL_00d6:
	{
		// var obj = new StarkReadFileResponse()
		// {
		//     errCode = res.errCode,
		//     errMsg = res.errMsg
		// };
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_45 = (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D*)il2cpp_codegen_object_new(StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D(L_45, NULL);
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_46 = L_45;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_47)->___errCode_2;
		NullCheck(L_46);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_46)->___errCode_2 = L_48;
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_49 = L_46;
		StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_50)->___errMsg_1;
		NullCheck(L_49);
		((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_49)->___errMsg_1 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_49)->___errMsg_1), (void*)L_51);
		V_5 = L_49;
		// conf.fail?.Invoke(obj);
		ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* L_52 = V_1;
		NullCheck(L_52);
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_53 = ((StarkBaseActionParam_1_tC792025B47F8D02DA45DE212115D745B08E23BD8*)L_52)->___fail_1;
		Action_1_tDF91050B84EF6BEA263FD253FCC3EACEE0264728* L_54 = L_53;
		G_B12_0 = L_54;
		if (L_54)
		{
			G_B13_0 = L_54;
			goto IL_0100;
		}
	}
	{
		return;
	}

IL_0100:
	{
		StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* L_55 = V_5;
		NullCheck(G_B13_0);
		Action_1_Invoke_m9DC185F045DD735BB1E59B6079961B9B85BE55EA_inline(G_B13_0, L_55, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler::HandleStatCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemHandler_HandleStatCallback_m77E6B4F56D2322D8AEE6BD78C58C465083521B9C (StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4584EC2EB970E7BF638F5D571C97D454514D0B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisStarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_mDBBF3230225F1CCBC5161F5A7EFAAD2111E24242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral134A611797B4A96A1AC2C5A6221E50A16A30864D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB78ABDC9ADAF9FF84117532D1D79CB124BD1643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73C286CCC70CAE2D1B5222768D0AB2417F88614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1513AF475794AB4B2E2F6A501F7974AE3A30F74);
		s_Il2CppMethodInitialized = true;
	}
	StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* V_0 = NULL;
	StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B12_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B11_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B15_0 = NULL;
	Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* G_B14_0 = NULL;
	{
		// Debug.Log($"HandleStatCallback - {msg}");
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral134A611797B4A96A1AC2C5A6221E50A16A30864D, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
	}
	try
	{// begin try (depth: 1)
		// res = JsonMapper.ToObject<StarkStatResponse>(msg);
		String_t* L_2 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_3;
		L_3 = JsonMapper_ToObject_TisStarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_mDBBF3230225F1CCBC5161F5A7EFAAD2111E24242(L_2, JsonMapper_ToObject_TisStarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26_mDBBF3230225F1CCBC5161F5A7EFAAD2111E24242_RuntimeMethod_var);
		V_0 = L_3;
		// }
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"failed to parse json data: {msg}, {exception}");
		String_t* L_4 = ___msg0;
		Exception_t* L_5 = V_2;
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76731EF43884084DD62A02E7B1C9909430AAED22)), L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cc;
	}// end catch (depth: 1)

IL_0030:
	{
		// if (res == null)
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError("empty response");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF1513AF475794AB4B2E2F6A501F7974AE3A30F74, NULL);
		// return;
		return;
	}

IL_003e:
	{
		// var conf = s_statParams[res.callbackId];
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* L_8 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4;
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_9)->___callbackId_0;
		NullCheck(L_8);
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_11;
		L_11 = Dictionary_2_get_Item_m4584EC2EB970E7BF638F5D571C97D454514D0B1B(L_8, L_10, Dictionary_2_get_Item_m4584EC2EB970E7BF638F5D571C97D454514D0B1B_RuntimeMethod_var);
		V_1 = L_11;
		// if (conf == null)
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_12 = V_1;
		if (L_12)
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogWarning($"HandleStatCallback - no callback for callbackId: {res.callbackId}");
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_13)->___callbackId_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCB78ABDC9ADAF9FF84117532D1D79CB124BD1643, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_15, NULL);
		// return;
		return;
	}

IL_0068:
	{
		// s_statParams.Remove(res.callbackId);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* L_16 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4;
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_17)->___callbackId_0;
		NullCheck(L_16);
		bool L_19;
		L_19 = Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55(L_16, L_18, Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55_RuntimeMethod_var);
		// if (res.errCode == 0)
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_20)->___errCode_2;
		if (L_21)
		{
			goto IL_00b0;
		}
	}
	{
		// if (res.stat == null)
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_22 = V_0;
		NullCheck(L_22);
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_23 = L_22->___stat_3;
		if (L_23)
		{
			goto IL_009e;
		}
	}
	{
		// Debug.LogWarning("empty stat info");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE73C286CCC70CAE2D1B5222768D0AB2417F88614, NULL);
		// res.stat = new StarkStatInfo();
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_24 = V_0;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_25 = (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)il2cpp_codegen_object_new(StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45(L_25, NULL);
		NullCheck(L_24);
		L_24->___stat_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___stat_3), (void*)L_25);
	}

IL_009e:
	{
		// conf.success?.Invoke(res);
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_26 = V_1;
		NullCheck(L_26);
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_27 = ((StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714*)L_26)->___success_0;
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_28 = L_27;
		G_B11_0 = L_28;
		if (L_28)
		{
			G_B12_0 = L_28;
			goto IL_00a9;
		}
	}
	{
		return;
	}

IL_00a9:
	{
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_29 = V_0;
		NullCheck(G_B12_0);
		Action_1_Invoke_m27A8F1D79C649D336DC8538066DC53E643273B3D_inline(G_B12_0, L_29, NULL);
		return;
	}

IL_00b0:
	{
		// res.stat = new StarkStatInfo();
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_30 = V_0;
		StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* L_31 = (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405*)il2cpp_codegen_object_new(StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45(L_31, NULL);
		NullCheck(L_30);
		L_30->___stat_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___stat_3), (void*)L_31);
		// conf.fail?.Invoke(res);
		StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* L_32 = V_1;
		NullCheck(L_32);
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_33 = ((StarkBaseActionParam_1_t238F91E0F457A7273F7B6127000E286133E86714*)L_32)->___fail_1;
		Action_1_t0CDF629DAC152A815E33952138A0459AAC8A7499* L_34 = L_33;
		G_B14_0 = L_34;
		if (L_34)
		{
			G_B15_0 = L_34;
			goto IL_00c6;
		}
	}
	{
		return;
	}

IL_00c6:
	{
		StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* L_35 = V_0;
		NullCheck(G_B15_0);
		Action_1_Invoke_m27A8F1D79C649D336DC8538066DC53E643273B3D_inline(G_B15_0, L_35, NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler::HandleGetSavedFileListCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemHandler_HandleGetSavedFileListCallback_m443696A113B47863CA8DEB3A7338394AC80B74F0 (StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m04D4BD82E616548EEEE75CDBD78141F0EED71A3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisStarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_m29546474E195A771BB98B596290FA7E1923A4A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94848E7C0149958DC4DCF42D5C19707736450B83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB78ABDC9ADAF9FF84117532D1D79CB124BD1643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1513AF475794AB4B2E2F6A501F7974AE3A30F74);
		s_Il2CppMethodInitialized = true;
	}
	StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* V_0 = NULL;
	GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B12_0 = NULL;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B11_0 = NULL;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B15_0 = NULL;
	Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* G_B14_0 = NULL;
	{
		// Debug.Log($"HandleGetSavedFileListCallback - {msg}");
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral94848E7C0149958DC4DCF42D5C19707736450B83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
	}
	try
	{// begin try (depth: 1)
		// res = JsonMapper.ToObject<StarkGetSavedFileListResponse>(msg);
		String_t* L_2 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_3;
		L_3 = JsonMapper_ToObject_TisStarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_m29546474E195A771BB98B596290FA7E1923A4A4C(L_2, JsonMapper_ToObject_TisStarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82_m29546474E195A771BB98B596290FA7E1923A4A4C_RuntimeMethod_var);
		V_0 = L_3;
		// }
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"failed to parse json data: {msg}, {exception}");
		String_t* L_4 = ___msg0;
		Exception_t* L_5 = V_2;
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76731EF43884084DD62A02E7B1C9909430AAED22)), L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c4;
	}// end catch (depth: 1)

IL_0030:
	{
		// if (res == null)
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError("empty response");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF1513AF475794AB4B2E2F6A501F7974AE3A30F74, NULL);
		// return;
		return;
	}

IL_003e:
	{
		// var conf = s_getSavedFileListParams[res.callbackId];
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t2F11584BAA14300B77D998C7113AAD46024D3505* L_8 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_getSavedFileListParams_5;
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_9)->___callbackId_0;
		NullCheck(L_8);
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_11;
		L_11 = Dictionary_2_get_Item_m04D4BD82E616548EEEE75CDBD78141F0EED71A3E(L_8, L_10, Dictionary_2_get_Item_m04D4BD82E616548EEEE75CDBD78141F0EED71A3E_RuntimeMethod_var);
		V_1 = L_11;
		// if (conf == null)
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_12 = V_1;
		if (L_12)
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogWarning($"HandleStatCallback - no callback for callbackId: {res.callbackId}");
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_13)->___callbackId_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCB78ABDC9ADAF9FF84117532D1D79CB124BD1643, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_15, NULL);
		// return;
		return;
	}

IL_0068:
	{
		// s_statParams.Remove(res.callbackId);
		il2cpp_codegen_runtime_class_init_inline(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var);
		Dictionary_2_t3E6F4BB6D47E18DAF0626686E3F3327966C27287* L_16 = ((StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_StaticFields*)il2cpp_codegen_static_fields_for(StarkFileSystemManagerWebGL_t17D23F6C2ECED7B357308744AD7755BA8D3707EE_il2cpp_TypeInfo_var))->___s_statParams_4;
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_17)->___callbackId_0;
		NullCheck(L_16);
		bool L_19;
		L_19 = Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55(L_16, L_18, Dictionary_2_Remove_mDD74B4FDE104A3CBE5EF7787CB40D931DA8A4F55_RuntimeMethod_var);
		// if (res.errCode == 0)
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = ((StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A*)L_20)->___errCode_2;
		if (L_21)
		{
			goto IL_00a7;
		}
	}
	{
		// if (res.fileList == null)
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_22 = V_0;
		NullCheck(L_22);
		StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* L_23 = L_22->___fileList_3;
		if (L_23)
		{
			goto IL_0095;
		}
	}
	{
		// res.fileList = new StarkFileInfo[0];
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_24 = V_0;
		StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* L_25 = (StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534*)(StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534*)SZArrayNew(StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_24);
		L_24->___fileList_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___fileList_3), (void*)L_25);
	}

IL_0095:
	{
		// conf.success?.Invoke(res);
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_26 = V_1;
		NullCheck(L_26);
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_27 = ((StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609*)L_26)->___success_0;
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_28 = L_27;
		G_B11_0 = L_28;
		if (L_28)
		{
			G_B12_0 = L_28;
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00a0:
	{
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_29 = V_0;
		NullCheck(G_B12_0);
		Action_1_Invoke_m154D777D9501A52D19C7252829688C87383E1466_inline(G_B12_0, L_29, NULL);
		return;
	}

IL_00a7:
	{
		// res.fileList = new StarkFileInfo[0];
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_30 = V_0;
		StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534* L_31 = (StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534*)(StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534*)SZArrayNew(StarkFileInfoU5BU5D_t2E31B84A5D1709BF6BBAEDE354EED88398876534_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_30);
		L_30->___fileList_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___fileList_3), (void*)L_31);
		// conf.fail?.Invoke(res);
		GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* L_32 = V_1;
		NullCheck(L_32);
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_33 = ((StarkBaseActionParam_1_tEBF48D42EF67B38BBC18E1ADEA53CB49C47BE609*)L_32)->___fail_1;
		Action_1_tDF495F6649B8368BBBFE826E2CDF94EB84CCB661* L_34 = L_33;
		G_B14_0 = L_34;
		if (L_34)
		{
			G_B15_0 = L_34;
			goto IL_00be;
		}
	}
	{
		return;
	}

IL_00be:
	{
		StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* L_35 = V_0;
		NullCheck(G_B15_0);
		Action_1_Invoke_m154D777D9501A52D19C7252829688C87383E1466_inline(G_B15_0, L_35, NULL);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkFileSystemManagerWebGL/StarkFileSystemHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileSystemHandler__ctor_m429F931316156089C4A228DD9BE406AD3D2004E5 (StarkFileSystemHandler_tE7F6BCEED966E992AA6F3FE190ED5A672C4A0111* __this, const RuntimeMethod* method) 
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
// System.Int32 StarkSDKSpace.StarkCallbackHandler::GenarateCallbackId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkCallbackHandler_GenarateCallbackId_m3B5127154F282391F3B2FFC5C3631331FA11B38E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (htCounter > 1000000)
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)1000000))))
		{
			goto IL_0012;
		}
	}
	{
		// htCounter = 0;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1 = 0;
	}

IL_0012:
	{
		// htCounter++;
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		int32_t L_1 = ((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1;
		((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// return htCounter;
		int32_t L_2 = ((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1;
		return L_2;
	}
}
// System.String StarkSDKSpace.StarkCallbackHandler::MakeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkCallbackHandler_MakeKey_m2C1596D3E3A890ECDCD607B9268275A833760036 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	{
		// int id = GenarateCallbackId();
		il2cpp_codegen_runtime_class_init_inline(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = StarkCallbackHandler_GenarateCallbackId_m3B5127154F282391F3B2FFC5C3631331FA11B38E(NULL);
		V_0 = L_0;
		// TimeSpan ts = DateTime.Now - new DateTime(1970, 1, 1, 0, 0, 0, 0);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		memset((&L_2), 0, sizeof(L_2));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_2), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_1 = L_3;
		// var timestamp = Convert.ToInt64(ts.TotalSeconds);
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_5;
		L_5 = Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333(L_4, NULL);
		V_2 = L_5;
		// var key = timestamp.ToString() + '-' + id;
		String_t* L_6;
		L_6 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_2), NULL);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_7, NULL);
		// return key;
		return L_8;
	}
}
// System.Void StarkSDKSpace.StarkCallbackHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkCallbackHandler__ctor_m4A1B8425738BC95F9819643851D3D014D0439228 (StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void StarkSDKSpace.StarkCallbackHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkCallbackHandler__cctor_m23FB5FB3328EB1183AED37918845D116EA800BA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Hashtable responseHT = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___responseHT_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___responseHT_0), (void*)L_0);
		// private static int htCounter = 0;
		((StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_StaticFields*)il2cpp_codegen_static_fields_for(StarkCallbackHandler_t4EA144C149427892ACA53E95FBEE2B9E77866665_il2cpp_TypeInfo_var))->___htCounter_1 = 0;
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
// System.Void StarkSDKSpace.StarkBaseResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8 (StarkBaseResponse_t93FFDA14AA82F488B26C2CEC1F8C913EE2334B4A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void StarkSDKSpace.StarkReadFileResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkReadFileResponse__ctor_m4C84FDE06DA4C9A7E18AE9B1426D58E4B2473E8D (StarkReadFileResponse_t465360D2430B36545AE70B503587F05E64D6082D* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(__this, NULL);
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
// System.Void StarkSDKSpace.AccessParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessParam__ctor_m50400B7ABA1B70D8FEE4D9E45A4734968C8CF22D (AccessParam_tB731E4BA8420FC2F72B46AE878043D57DD806E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.UnlinkParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkParam__ctor_mC4A34F3FBFBE8FD80C76964D337613E01DB2C57C (UnlinkParam_t82992F995FF3ADF06D9310F3BF3030690C1F1B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.MkdirParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MkdirParam__ctor_mC48137BB7431C38FD2470A18653ECF0CA1078D7F (MkdirParam_t7C7099D198CBC385B0482F22F0E543CC3B55DB0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.RmdirParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RmdirParam__ctor_m518928AD37EEA91603407EF7FD63FAB9C9EB2CE9 (RmdirParam_tCADB8C7442E19776456971CCAC5C7B45469BD34D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.CopyFileParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyFileParam__ctor_m2B7736026B4BC47B17118B3747AE277B2A5EB62F (CopyFileParam_tB3D93D305F1546B9044A3E4619BE1BF20AA2A2B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.RenameFileParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenameFileParam__ctor_mCA6035035279DFF6752BA2B0564E645817B8C4AA (RenameFileParam_t3F3FDEB32748AB892A6B274D7630F44B308DA0A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.WriteFileParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteFileParam__ctor_mDDE4167F7A472E12D98CA85C7B024EE9887559BA (WriteFileParam_tFD7D9BF81175C16B2D47B638E7331EF095A3A7D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.WriteFileStringParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteFileStringParam__ctor_mFB6F9A110C93B88FCE1025A7DF4B5EF45E9943C2 (WriteFileStringParam_tB05611F4D2FFAF34CBEE54A3FE93145DC2FF5252* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string encoding = "utf8";
		__this->___encoding_4 = _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_4), (void*)_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7(__this, StarkBaseActionParam_1__ctor_mE93C26AE324E78C72B5C26EDF0AAB41D8A2B9FB7_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.ReadFileParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadFileParam__ctor_m672C94D95910AB65D1CFC969FE77167A700F8DBE (ReadFileParam_t61FA02724C9FA2BC4F1CDCD75DC0AC4D6B28925E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_m923BF92D8255AFF6FED1A1272B17E926B8B5FCA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_m923BF92D8255AFF6FED1A1272B17E926B8B5FCA4(__this, StarkBaseActionParam_1__ctor_m923BF92D8255AFF6FED1A1272B17E926B8B5FCA4_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.StatParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatParam__ctor_mA71A7B264E69ACE431CBE64B4A55638CE26A8D4A (StatParam_t23461E9DD5B8944403EF6294DA62DEA53439153F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_m21A9AC4E4D39E3B163BA9A2F6ED8E13CA7BF97D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_m21A9AC4E4D39E3B163BA9A2F6ED8E13CA7BF97D4(__this, StarkBaseActionParam_1__ctor_m21A9AC4E4D39E3B163BA9A2F6ED8E13CA7BF97D4_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.GetSavedFileListParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetSavedFileListParam__ctor_mC84105031310618F095AF410A58E7B8A14EDE67A (GetSavedFileListParam_t4697C5E024737F751AF21E3F603DFADD75390F44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkBaseActionParam_1__ctor_mE71B60DA299471CCA6AF5E4B0E00834E0AFC7BC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StarkBaseActionParam_1__ctor_mE71B60DA299471CCA6AF5E4B0E00834E0AFC7BC5(__this, StarkBaseActionParam_1__ctor_mE71B60DA299471CCA6AF5E4B0E00834E0AFC7BC5_RuntimeMethod_var);
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
// System.Void StarkSDKSpace.StarkReadFileCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkReadFileCallback__ctor_m87C10C5348C0DCEF3E44CBD7B201945095703C7A (StarkReadFileCallback_t0BA3D13A12330ADCC4FC79509AC968A15E37476D* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(__this, NULL);
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
// System.Void StarkSDKSpace.StarkGetSavedFileListResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkGetSavedFileListResponse__ctor_mAD4B866D6E91AD09AC0ABF472B6948AAE0B8DD6E (StarkGetSavedFileListResponse_tC098F30714A3EF1663507E89E51291F5B6947B82* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(__this, NULL);
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
// System.Void StarkSDKSpace.StarkStatResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStatResponse__ctor_m12732EF05E3F284041AF19931A771B5792F6D1F8 (StarkStatResponse_t876E325FF2338A5DAF9DB824BA7D5D8D7F7C0D26* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseResponse__ctor_mE3EF6BA910A5058A72FB450EC40E09258A2B73F8(__this, NULL);
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
// System.Boolean StarkSDKSpace.StarkBaseFileInfo::IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkBaseFileInfo_IsFile_m75FE86FB75E20B15637961BC4D33865CC7E5FC13 (StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646* __this, const RuntimeMethod* method) 
{
	{
		// return (61440 & mode) == 32768;
		int32_t L_0 = __this->___mode_1;
		return (bool)((((int32_t)((int32_t)(((int32_t)61440)&L_0))) == ((int32_t)((int32_t)32768)))? 1 : 0);
	}
}
// System.Boolean StarkSDKSpace.StarkBaseFileInfo::IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkBaseFileInfo_IsDirectory_m6FC351BDFD638B369D6A4D5CA77403CB7CDCD44C (StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646* __this, const RuntimeMethod* method) 
{
	{
		// return (61440 & mode) == 16384;
		int32_t L_0 = __this->___mode_1;
		return (bool)((((int32_t)((int32_t)(((int32_t)61440)&L_0))) == ((int32_t)((int32_t)16384)))? 1 : 0);
	}
}
// System.Void StarkSDKSpace.StarkBaseFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkBaseFileInfo__ctor_mA0963955BDE09099E5C047B5B3B87C9503C13156 (StarkBaseFileInfo_t2A1267CAFC3004675CF07C7D7B01EA3C34923646* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void StarkSDKSpace.StarkFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkFileInfo__ctor_mB5E47E56717D3D31C5D40539664D13522A616D2F (StarkFileInfo_t8EAEB8266A64486FA9BD68CD894E67105AE464AB* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseFileInfo__ctor_mA0963955BDE09099E5C047B5B3B87C9503C13156(__this, NULL);
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
// System.Void StarkSDKSpace.StarkStatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStatInfo__ctor_m7AD21A25B4F6EB83648E34DCB903F8CAF06F9A45 (StarkStatInfo_tA82661E0066CB13BC0C5C9F527716DF560F80405* __this, const RuntimeMethod* method) 
{
	{
		StarkBaseFileInfo__ctor_mA0963955BDE09099E5C047B5B3B87C9503C13156(__this, NULL);
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
// System.Void StarkSDKSpace.StarkStorage::SetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_SetIntSync_m08528519ECCEC0FD18E0B377FD31BA6380C08018 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// StarkStorageSetIntSync(key, value);
		String_t* L_0 = ___key0;
		int32_t L_1 = ___value1;
		StarkStorage_StarkStorageSetIntSync_m7C50763CC18019E9FDB83BED13CDC66A0997F10A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 StarkSDKSpace.StarkStorage::GetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkStorage_GetIntSync_m62EC0F3F3C559F3956020DF28164C6C9F1FC9B29 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return StarkStorageGetIntSync(key, defaultValue);
		String_t* L_0 = ___key0;
		int32_t L_1 = ___defaultValue1;
		int32_t L_2;
		L_2 = StarkStorage_StarkStorageGetIntSync_m4474B18C8BBF23FDB316643D4A06D604499AA3D8(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkStorage::SetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_SetFloatSync_m9FF604A581199D6D30C4C0BF786C104906B03D66 (String_t* ___key0, float ___value1, const RuntimeMethod* method) 
{
	{
		// StarkStorageSetFloatSync(key, value);
		String_t* L_0 = ___key0;
		float L_1 = ___value1;
		StarkStorage_StarkStorageSetFloatSync_mF3812D78BE636B4E9C457D0B8849641C4C660699(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Single StarkSDKSpace.StarkStorage::GetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StarkStorage_GetFloatSync_m8A3C4F9A0FCAEC33A873D87335138EB5BFECA2AB (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return StarkStorageGetFloatSync(key, defaultValue);
		String_t* L_0 = ___key0;
		float L_1 = ___defaultValue1;
		float L_2;
		L_2 = StarkStorage_StarkStorageGetFloatSync_m08804752F7D4E23E065EF1E16BB384A254E1BA05(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkStorage::SetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_SetStringSync_m2C93B37FF1474CE5546CA464EEC30379CB7E5750 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		// StarkStorageSetStringSync(key, value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		StarkStorage_StarkStorageSetStringSync_mFF107C659BEE0D20DBE3A2F101FF2D09BED84EE1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkStorage::GetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkStorage_GetStringSync_mF45E893A3A0881EA837D244ECC3A1DB4DED3072E (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return StarkStorageGetStringSync(key, defaultValue);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___defaultValue1;
		String_t* L_2;
		L_2 = StarkStorage_StarkStorageGetStringSync_m32A76E416CDCA44E8915A6841863292D00745485(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean StarkSDKSpace.StarkStorage::HasKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkStorage_HasKeySync_m625990FAAA21E2EDAA717856AEFC8D186ECDB737 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return StarkStorageHasKeySync(key);
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = StarkStorage_StarkStorageHasKeySync_m8035ECA58448AA45E9811229619C0C94AE181BFD(L_0, NULL);
		return L_1;
	}
}
// System.Void StarkSDKSpace.StarkStorage::DeleteKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_DeleteKeySync_mE43E82974EB636B285AF9C9872FAD163F23E171A (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// StarkStorageDeleteKeySync(key);
		String_t* L_0 = ___key0;
		StarkStorage_StarkStorageDeleteKeySync_mF8DDA18E3B457DA5209ABD9567F09BF955EB3620(L_0, NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkStorage::DeleteAllSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_DeleteAllSync_mB1A6975CF3D9B8993D3BF60D28E2F0E08825DA7D (const RuntimeMethod* method) 
{
	{
		// StarkStorageDeleteAllSync();
		StarkStorage_StarkStorageDeleteAllSync_m1C2A50559F114479AFF9366F26DDC27FCDCE7FA0(NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetIntSync_m7C50763CC18019E9FDB83BED13CDC66A0997F10A (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// UnityEngine.PlayerPrefs.SetInt(key, value);
		String_t* L_0 = ___key0;
		int32_t L_1 = ___value1;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 StarkSDKSpace.StarkStorage::StarkStorageGetIntSync(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StarkStorage_StarkStorageGetIntSync_m4474B18C8BBF23FDB316643D4A06D604499AA3D8 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.PlayerPrefs.GetInt(key, defaultValue);
		String_t* L_0 = ___key0;
		int32_t L_1 = ___defaultValue1;
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetStringSync_mFF107C659BEE0D20DBE3A2F101FF2D09BED84EE1 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		// UnityEngine.PlayerPrefs.SetString(key, value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkStorage::StarkStorageGetStringSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkStorage_StarkStorageGetStringSync_m32A76E416CDCA44E8915A6841863292D00745485 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.PlayerPrefs.GetString(key, defaultValue);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___defaultValue1;
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkStorage::StarkStorageSetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageSetFloatSync_mF3812D78BE636B4E9C457D0B8849641C4C660699 (String_t* ___key0, float ___value1, const RuntimeMethod* method) 
{
	{
		// UnityEngine.PlayerPrefs.SetFloat(key, value);
		String_t* L_0 = ___key0;
		float L_1 = ___value1;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Single StarkSDKSpace.StarkStorage::StarkStorageGetFloatSync(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StarkStorage_StarkStorageGetFloatSync_m08804752F7D4E23E065EF1E16BB384A254E1BA05 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.PlayerPrefs.GetFloat(key, defaultValue);
		String_t* L_0 = ___key0;
		float L_1 = ___defaultValue1;
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StarkSDKSpace.StarkStorage::StarkStorageDeleteAllSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageDeleteAllSync_m1C2A50559F114479AFF9366F26DDC27FCDCE7FA0 (const RuntimeMethod* method) 
{
	{
		// UnityEngine.PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E(NULL);
		// }
		return;
	}
}
// System.Void StarkSDKSpace.StarkStorage::StarkStorageDeleteKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkStorage_StarkStorageDeleteKeySync_mF8DDA18E3B457DA5209ABD9567F09BF955EB3620 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// UnityEngine.PlayerPrefs.DeleteKey(key);
		String_t* L_0 = ___key0;
		PlayerPrefs_DeleteKey_mF3A7857B52DCEF4139843CD28716788624C2AD30(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean StarkSDKSpace.StarkStorage::StarkStorageHasKeySync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkStorage_StarkStorageHasKeySync_m8035ECA58448AA45E9811229619C0C94AE181BFD (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.PlayerPrefs.HasKey(key);
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
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
// System.Void StarkSDKSpace.StarkWebGLInterface::unityCallJs(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkWebGLInterface_unityCallJs_mF2F1089C396EA11B7FCFF3EA481879C72D52E61B (String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String StarkSDKSpace.StarkWebGLInterface::unityCallJsSync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkWebGLInterface_unityCallJsSync_mCD0BF13E10E224F26CF1CBAFF80DCC91F80866CF (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean StarkSDKSpace.StarkWebGLInterface::h5HasAPI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkWebGLInterface_h5HasAPI_mE62E16772E17C0009FCF907746F8C9769524797D (String_t* ___apiName0, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.String StarkSDKSpace.StarkWebGLInterface::unityMixCallJs(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StarkWebGLInterface_unityMixCallJs_m0CA6F2F5A7EE5F8F49F3643DFE7B25F7481B3925 (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void StarkSDKSpace.StarkWebGLInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkWebGLInterface__ctor_m3D87328D650EF41AE8EA3AA276536CBD6E88704D (StarkWebGLInterface_tE0A8E735364BB5393E2825655A64B0E549D73101* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
