#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData>
struct IDictionary_2_tFF2384BB5331B3277C5A8813E6548E808AD92723;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData>>
struct IList_1_t3034A381626F683C1BA9897F96CF2AB872187659;
// System.Collections.Generic.IList`1<StarkSDKSpace.UNBridgeLib.LitJson.JsonData>
struct IList_1_tC4451B2B6CF56444236B79EEE49C701A60EBBDC4;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// StarkSDKSpace.SimpleJSON.JSONNode
struct JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonData
struct JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// StarkSDKSpace.RTCEngineManager
struct RTCEngineManager_t494010406ED792D0FC5CBD59435D01888A481F7F;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// StarkSDKSpace.StarkAccount
struct StarkAccount_t8FA6FD8D0FE364B9C09F250253422C0C582F8914;
// StarkSDKSpace.StarkAdManager
struct StarkAdManager_t1EF130C38D23152B513D301FEAD42E34FB17F34D;
// StarkSDKSpace.StarkFavorite
struct StarkFavorite_t43B70A9A1404018766C2B77A56F69D63824CDCF2;
// StarkSDKSpace.StarkGameRecorder
struct StarkGameRecorder_t899C6C0B70C05147C90D1D137EC292108795A53B;
// StarkSDKSpace.StarkNavigateGame
struct StarkNavigateGame_t3FBF9FF310F665711632163E1DC5DDE2DC699D01;
// StarkSDKSpace.StarkPayService
struct StarkPayService_tC7232C418B937F255155251B5D3281CE2A959F3F;
// StarkSDKSpace.StarkRequest
struct StarkRequest_t03BC87BC5DA787275A62BC83CE78427B8E823C23;
// StarkSDKSpace.StarkShare
struct StarkShare_tDDB5B94C6F896A917E56B9D7CE281A452D3B1454;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// a
struct a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8;
// ay
struct ay_tEB633F0537F907A541131A00D2DAC6794732446A;
// b
struct b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7;
// bo
struct bo_tC29345C2AC194C9983AF519F27FEED56F34A7EF3;
// i
struct i_tFB7A585674EBA5EC10018038707AA9871C0CF716;
// q
struct q_t6BC8C754B8B9F41F90BF500C0605B50DEF6DCE63;
// r
struct r_t8CA9B9189DACA7CF4780B8E5C77DC35750190131;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AB1B6A3C73ACD4191867F441C7C06B206029725;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral148E5E70385F5A48A26A4B563727CBF2368D2C37;
IL2CPP_EXTERN_C String_t* _stringLiteral2656989C71198233C2EC51678786DEDB87070CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral3F28EE3E527EAF4B46C373B70813BFF856115330;
IL2CPP_EXTERN_C String_t* _stringLiteral46C8BF2D56E05BF7E1A90AB1C177DDF9EE313D27;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5545A9A3B8D5820BACEF6A142C40355ECBCCEE31;
IL2CPP_EXTERN_C String_t* _stringLiteral55605EAD5140F047F29B681125CA890F499FF29C;
IL2CPP_EXTERN_C String_t* _stringLiteral694A0555D778B10725D67C5CE4CF135461B15931;
IL2CPP_EXTERN_C String_t* _stringLiteral72D6DA79D63F89429B2907F80F55BB4FA4DDE000;
IL2CPP_EXTERN_C String_t* _stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E;
IL2CPP_EXTERN_C String_t* _stringLiteral78C75BF3C9423E4C9C2FA1E37B7D7D5E14095CD5;
IL2CPP_EXTERN_C String_t* _stringLiteral7C48502C7E50AAFEDAA85A0C363597DBE6364E78;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A;
IL2CPP_EXTERN_C String_t* _stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3344E349CE2E7CCFEB617BF15DE1F43135A8FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralBA989C05F2225827D5991C8E9F5F600D90E12595;
IL2CPP_EXTERN_C String_t* _stringLiteralBCB3F8D4653AFF561904AC5C5337672BFC25E2C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC131F02B0322237DBD0144AA2AC24FA83574E76E;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC45D77C5A7DECE598244EB0F0F0C4B3AE1537965;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE08A6E8486D1CF253B66512888686DC97F62E5;
IL2CPP_EXTERN_C String_t* _stringLiteralCF757FAE53BF7250407F41077A27684D0D649636;
IL2CPP_EXTERN_C String_t* _stringLiteralD91731C88A04481B71DFC41D47EF7F68D7051ABB;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDF0724F9E4D4FCAA97A0EA6B9856C468B0D936D3;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE58A9F012F710310D00A1D8BB8B615599612995A;
IL2CPP_EXTERN_C String_t* _stringLiteralECD986A5D06BF4859A22DC0FBE63A7135862DE2C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
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

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::imported
	bool ___imported_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::shared
	bool ___shared_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedExplicitRelease
	bool ___sharedExplicitRelease_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::requestFallBack
	bool ___requestFallBack_3;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::writeCount
	uint32_t ___writeCount_4;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::cachedHash
	int32_t ___cachedHash_5;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedResourceLastFrameUsed
	int32_t ___sharedResourceLastFrameUsed_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::m_Pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool_8;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};

// StarkSDKSpace.IStarkAPI
struct IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E  : public RuntimeObject
{
};

struct IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E_StaticFields
{
	// System.String StarkSDKSpace.IStarkAPI::Version
	String_t* ___Version_0;
};

// StarkSDKSpace.SimpleJSON.JSONNode
struct JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96  : public RuntimeObject
{
};

struct JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96_StaticFields
{
	// System.Boolean StarkSDKSpace.SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean StarkSDKSpace.SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// System.Boolean StarkSDKSpace.SimpleJSON.JSONNode::allowLineComments
	bool ___allowLineComments_2;
};

struct JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96_ThreadStaticFields
{
	// System.Text.StringBuilder StarkSDKSpace.SimpleJSON.JSONNode::a
	StringBuilder_t* ___a_3;
};

// StarkSDKSpace.UNBridgeLib.LitJson.JsonData
struct JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<StarkSDKSpace.UNBridgeLib.LitJson.JsonData> StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData> StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String StarkSDKSpace.UNBridgeLib.LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String StarkSDKSpace.UNBridgeLib.LitJson.JsonData::json
	String_t* ___json_7;
	// StarkSDKSpace.UNBridgeLib.LitJson.JsonType StarkSDKSpace.UNBridgeLib.LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData>> StarkSDKSpace.UNBridgeLib.LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// ah
struct ah_tDB39887BC58C19FD2378307091C24549F27ACA03  : public RuntimeObject
{
};

// i
struct i_tFB7A585674EBA5EC10018038707AA9871C0CF716  : public RuntimeObject
{
	// StarkSDKSpace.UNBridgeLib.LitJson.JsonData i::a
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___a_0;
	// System.String i::b
	String_t* ___b_1;
	// System.String[] i::c
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___c_2;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::resourceArray
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::sharedResourcesCount
	int32_t ___sharedResourcesCount_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::createResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback_3;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::releaseResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback_4;
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<System.Object>
struct U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Vector4>
struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// a
struct a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8  : public IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E
{
	// r a::b
	r_t8CA9B9189DACA7CF4780B8E5C77DC35750190131* ___b_2;
	// q a::c
	q_t6BC8C754B8B9F41F90BF500C0605B50DEF6DCE63* ___c_3;
	// StarkSDKSpace.StarkNavigateGame a::d
	StarkNavigateGame_t3FBF9FF310F665711632163E1DC5DDE2DC699D01* ___d_4;
	// System.Boolean a::e
	bool ___e_5;
	// System.Action`1<System.Boolean> a::f
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___f_6;
	// System.Int64 a::g
	int64_t ___g_7;
};

struct a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields
{
	// System.String a::a
	String_t* ___a_1;
};

// b
struct b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7  : public IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> b::c
	Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* ___c_2;
	// StarkSDKSpace.StarkAdManager b::d
	StarkAdManager_t1EF130C38D23152B513D301FEAD42E34FB17F34D* ___d_3;
	// StarkSDKSpace.StarkGameRecorder b::e
	StarkGameRecorder_t899C6C0B70C05147C90D1D137EC292108795A53B* ___e_4;
	// StarkSDKSpace.RTCEngineManager b::f
	RTCEngineManager_t494010406ED792D0FC5CBD59435D01888A481F7F* ___f_5;
	// StarkSDKSpace.StarkShare b::g
	StarkShare_tDDB5B94C6F896A917E56B9D7CE281A452D3B1454* ___g_6;
	// StarkSDKSpace.StarkFavorite b::h
	StarkFavorite_t43B70A9A1404018766C2B77A56F69D63824CDCF2* ___h_7;
	// StarkSDKSpace.StarkAccount b::i
	StarkAccount_t8FA6FD8D0FE364B9C09F250253422C0C582F8914* ___i_8;
	// StarkSDKSpace.StarkPayService b::j
	StarkPayService_tC7232C418B937F255155251B5D3281CE2A959F3F* ___j_9;
	// ay b::k
	ay_tEB633F0537F907A541131A00D2DAC6794732446A* ___k_10;
	// StarkSDKSpace.StarkRequest b::l
	StarkRequest_t03BC87BC5DA787275A62BC83CE78427B8E823C23* ___l_11;
	// System.Boolean b::m
	bool ___m_12;
	// System.Int64 b::n
	int64_t ___n_13;
};

struct b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields
{
	// System.String b::b
	String_t* ___b_1;
};

// bo
struct bo_tC29345C2AC194C9983AF519F27FEED56F34A7EF3  : public JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96
{
	// StarkSDKSpace.SimpleJSON.JSONNode bo::a
	JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96* ___a_4;
	// System.String bo::b
	String_t* ___b_5;
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
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

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UNBridge
struct UNBridge_t7431F9B745D9F66BAFE5466ED4B37C214FBAFEE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct UNBridge_t7431F9B745D9F66BAFE5466ED4B37C214FBAFEE3_StaticFields
{
	// System.Boolean UNBridge::initialized
	bool ___initialized_4;
	// UNBridge UNBridge::_current
	UNBridge_t7431F9B745D9F66BAFE5466ED4B37C214FBAFEE3* ____current_5;
};

// c
struct c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3  : public UNBridge_t7431F9B745D9F66BAFE5466ED4B37C214FBAFEE3
{
};

struct c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_StaticFields
{
	// System.String c::a
	String_t* ___a_6;
	// System.Boolean c::b
	bool ___b_7;
	// System.Boolean c::c
	bool ___c_8;
	// i c::d
	i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___d_9;
	// System.Collections.Generic.List`1<System.String> c::e
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___e_10;
	// System.Collections.Generic.List`1<System.String> c::f
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___f_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DynamicArray`1<System.Object>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DynamicArray`1<System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method) ;
// T& UnityEngine.Rendering.DynamicArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Boolean a::h()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool a_h_m5D232F2BA9A95E05CF03482AA94B5D1415890843 (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String a::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* a_d_m27E72E89409118E6074D2B7905A67FE0047260DA (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___A_00, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkLog::d(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4 (String_t* ___A_00, String_t* ___A_11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___A_22, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkLog::b(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkLog_b_m58F71E1C66FB99A96C8164A64017C67000E32A3A (String_t* ___A_00, String_t* ___A_11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___A_22, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.UNBridgeLib.LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m624B0380EF4643945916425C172AB75206061969 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonData StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* JsonData_op_Implicit_m583D83EC42650899AE18FFBB3D8F9C9F1C57F8E1 (String_t* ___data0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.UNBridgeLib.LitJson.JsonData::set_Item(System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, String_t* ___prop_name0, JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void StarkSDKSpace.UNBridgeLib.LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m1905EFE93054F02AE91405E8D03E5551FDD3669F (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void StarkSDKSpace.StarkUtils::StaticsReport(System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkUtils_StaticsReport_m45392C8ABA7585691A50CD23A5761B9E0C9ABC87 (String_t* ___eventName0, JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___msg1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkLog::a(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5 (String_t* ___A_00, String_t* ___A_11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___A_22, const RuntimeMethod* method) ;
// System.Int64 a::e()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t a_e_mACB8F86725A74B759727173252A2608BCE6E081E (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Int64 a::d()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t a_d_m2AA97E3199B3A0F209AF38D40A3F200BDDBE872C (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37 (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.StarkLog::c(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarkLog_c_mAD34DCBDBBEA2F5DE5DC236AD0E8C456F1B2B71D (String_t* ___A_00, String_t* ___A_11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___A_22, const RuntimeMethod* method) ;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonData UNBridge::CallSync(System.String,StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645 (String_t* ___target0, JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___param1, const RuntimeMethod* method) ;
// System.String a::f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* a_f_m9C9524D6247937351E82FD35EE6DB4F92A435B6A (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.String b::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* b_d_m9B8D594421640EFCA3CB871B69A30FCDEF5DF470 (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, String_t* ___A_00, const RuntimeMethod* method) ;
// System.Int64 b::e()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t b_e_mCBD6B5C0826CB82F0561AF6A78CB616F3AC83B0F (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, const RuntimeMethod* method) ;
// System.Int64 b::d()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t b_d_m5401FCD827E7ABF3A543C8FCEB6DD63CF53D8EE7 (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, const RuntimeMethod* method) ;
// System.Boolean c::f(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924 (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) ;
// System.String i::d()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, const RuntimeMethod* method) ;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonData i::e()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.StarkUtils::IsSCRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9 (const RuntimeMethod* method) ;
// System.String StarkSDKSpace.UNBridgeLib.LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m6CABB09C28D29E99A93F22AD374B5A1BC232F337 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonType StarkSDKSpace.UNBridgeLib.LitJson.JsonData::GetJsonType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.String StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Explicit(StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___data0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___value0, Type_t* ___conversionType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_m870236CC47CA9981C30746CC64558FC2782BE47B (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Explicit(StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_op_Explicit_m8FECD72757B346250C619CAB016BAC96025DFAB9 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___data0, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m50EF84A92ABBA848F2CFBC1626BE55F91F97D4D9 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Double StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Explicit(StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___data0, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E (double ___value0, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_mA1D6AD2FB056DE6ACB200029467C51E100A0661A (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_mE56F49354E2227A612856C5101FA42EA82423E8B (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Int64 StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Explicit(StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_op_Explicit_mB358F70C42B7D992BE2AB35E11763F4BBC35A263 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___data0, const RuntimeMethod* method) ;
// System.Int32 StarkSDKSpace.UNBridgeLib.LitJson.JsonData::op_Explicit(StarkSDKSpace.UNBridgeLib.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_op_Explicit_mF8D3B33F90BEE2F4D5948BFF201C9B943E068F56 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* ___data0, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m6B2C2ABB5C1983A98E0243C2C85C9C8B8A4CE7AD (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Boolean StarkSDKSpace.UNBridgeLib.LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_mFF37743CF06435EF0FDC920F80CA3A5DFFB14F04 (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) ;
// System.Boolean i::c(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool i_c_mDDBDE1CE4A3AA50D79FDB7F85DD5A8AF5A6820A8 (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, int32_t ___A_00, const RuntimeMethod* method) ;
// System.Boolean i::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool i_c_mB657217825785C4354F4BF3964EFB1DF927373F4 (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, String_t* ___A_00, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void StarkSDKSpace.UNBridgeLib.LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9EE07D39045E06DD4028BB342CB485A843BAD0AA (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, double ___number0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String i::c(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* i_c_mC03230071AA020AB83B1B7BB0882B98F594DAAE4 (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, RuntimeObject* ___A_00, const RuntimeMethod* method) ;
// StarkSDKSpace.UNBridgeLib.LitJson.JsonData StarkSDKSpace.UNBridgeLib.LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* JsonMapper_ToObject_m6F6EF8426A735A4D314E13D73F7683AB8255FCE0 (String_t* ___json0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___newSize0, ___keepContent1, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___index0, method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Void a::DeleteSaving<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a_DeleteSaving_TisRuntimeObject_m4CFFF69B9ADBDA91DFA6FFD14F0712EAE768D198_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___saveName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0019;
		}
	}
	{
		bool L_1;
		L_1 = a_h_m5D232F2BA9A95E05CF03482AA94B5D1415890843(__this, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___saveName0;
		((  void (*) (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0019:
	{
		String_t* L_3 = ___saveName0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck((MemberInfo_t*)L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_6);
		___saveName0 = L_7;
	}

IL_0032:
	{
		String_t* L_8 = ___saveName0;
		String_t* L_9;
		L_9 = a_d_m27E72E89409118E6074D2B7905A67FE0047260DA(__this, L_8, NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_12 = V_0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_13 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_13, L_12, NULL);
		NullCheck(L_13);
		int64_t L_14;
		L_14 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_13, NULL);
		V_1 = L_14;
		int64_t L_15 = (int64_t)__this->___g_7;
		int64_t L_16 = V_1;
		__this->___g_7 = ((int64_t)il2cpp_codegen_subtract(L_15, L_16));
		String_t* L_17 = V_0;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_17, NULL);
	}

IL_0062:
	{
		return;
	}
}
// T a::LoadSaving<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* a_LoadSaving_TisRuntimeObject_mD542FCEEBE1CEC1BE9D33793D416E9D11AE9E324_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___saveName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD91731C88A04481B71DFC41D47EF7F68D7051ABB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0019;
		}
	}
	{
		bool L_1;
		L_1 = a_h_m5D232F2BA9A95E05CF03482AA94B5D1415890843(__this, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___saveName0;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}

IL_0019:
	{
		String_t* L_4 = ___saveName0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_7);
		___saveName0 = L_8;
	}

IL_0032:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		String_t* L_9 = ___saveName0;
		String_t* L_10;
		L_10 = a_d_m27E72E89409118E6074D2B7905A67FE0047260DA(__this, L_9, NULL);
		V_1 = L_10;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_11 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12;
			L_12 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_11, (int32_t)3, NULL);
			V_2 = L_12;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0076_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13 = V_2;
						if (!L_13)
						{
							goto IL_007f_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_2;
						NullCheck((RuntimeObject*)L_14);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
					}

IL_007f_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_15 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_15, NULL);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_17;
				L_17 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_15, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_16, NULL);
				V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 2)));
				il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
				String_t* L_18 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
				String_t* L_21 = V_1;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
				StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4(L_18, _stringLiteralD91731C88A04481B71DFC41D47EF7F68D7051ABB, L_20, NULL);
				goto IL_0080_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0080_1:
		{
			goto IL_00a3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var)));
		String_t* L_22 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		Exception_t* L_25 = V_3;
		NullCheck((RuntimeObject*)L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_25);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		StarkLog_b_m58F71E1C66FB99A96C8164A64017C67000E32A3A(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC131F02B0322237DBD0144AA2AC24FA83574E76E)), L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a3;
	}// end catch (depth: 1)

IL_00a3:
	{
		RuntimeObject* L_27 = V_0;
		return L_27;
	}
}
// System.Void a::ReportAnalytics<System.Object>(System.String,System.Collections.Generic.Dictionary`2<System.String,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a_ReportAnalytics_TisRuntimeObject_m304A3FD5DDD267801D8BC3E30ED508C6BE43F8EB_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55605EAD5140F047F29B681125CA890F499FF29C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C48502C7E50AAFEDAA85A0C363597DBE6364E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF0724F9E4D4FCAA97A0EA6B9856C468B0D936D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE58A9F012F710310D00A1D8BB8B615599612995A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = ___eventName0;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral55605EAD5140F047F29B681125CA890F499FF29C, (RuntimeObject*)L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB((RuntimeObject*)L_1, NULL);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_2 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)il2cpp_codegen_object_new(JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JsonData__ctor_m624B0380EF4643945916425C172AB75206061969(L_2, NULL);
		V_0 = L_2;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_3 = V_0;
		String_t* L_4 = ___eventName0;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_5;
		L_5 = JsonData_op_Implicit_m583D83EC42650899AE18FFBB3D8F9C9F1C57F8E1(L_4, NULL);
		NullCheck(L_3);
		JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_3, _stringLiteralDF0724F9E4D4FCAA97A0EA6B9856C468B0D936D3, L_5, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___param1;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___param1;
		NullCheck(L_7);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_8;
		L_8 = ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_1), il2cpp_rgctx_method(method->rgctx_data, 8));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0033_1:
			{
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_9;
				L_9 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
				V_2 = L_9;
				JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_10 = V_0;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
				RuntimeObject* L_12;
				L_12 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 4));
				JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_13 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)il2cpp_codegen_object_new(JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				JsonData__ctor_m1905EFE93054F02AE91405E8D03E5551FDD3669F(L_13, L_12, NULL);
				NullCheck(L_10);
				JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_10, L_11, L_13, NULL);
			}

IL_0059_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_1), il2cpp_rgctx_method(method->rgctx_data, 6));
				if (L_14)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		String_t* L_15 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16;
		L_16 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4(L_15, _stringLiteral7C48502C7E50AAFEDAA85A0C363597DBE6364E78, L_16, NULL);
	}

IL_0086:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		StarkUtils_StaticsReport_m45392C8ABA7585691A50CD23A5761B9E0C9ABC87(_stringLiteralE58A9F012F710310D00A1D8BB8B615599612995A, L_17, NULL);
		return;
	}
}
// System.Boolean a::Save<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool a_Save_TisRuntimeObject_m5E0F1AAA01E5B821BB1B8DDF8E922325C1748768_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, RuntimeObject* ___serializableObject0, String_t* ___saveName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148E5E70385F5A48A26A4B563727CBF2368D2C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F28EE3E527EAF4B46C373B70813BFF856115330);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46C8BF2D56E05BF7E1A90AB1C177DDF9EE313D27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78C75BF3C9423E4C9C2FA1E37B7D7D5E14095CD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE08A6E8486D1CF253B66512888686DC97F62E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF757FAE53BF7250407F41077A27684D0D649636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECD986A5D06BF4859A22DC0FBE63A7135862DE2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001a;
		}
	}
	{
		bool L_1;
		L_1 = a_h_m5D232F2BA9A95E05CF03482AA94B5D1415890843(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___serializableObject0;
		String_t* L_3 = ___saveName1;
		bool L_4;
		L_4 = ((  bool (*) (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8*, RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_001a:
	{
		RuntimeObject* L_5 = ___serializableObject0;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		String_t* L_6 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_6, _stringLiteral3F28EE3E527EAF4B46C373B70813BFF856115330, L_7, NULL);
		return (bool)0;
	}

IL_0038:
	{
		String_t* L_8 = ___saveName1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck((MemberInfo_t*)L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_11);
		___saveName1 = L_12;
	}

IL_0051:
	{
		int64_t L_13;
		L_13 = a_e_mACB8F86725A74B759727173252A2608BCE6E081E(__this, NULL);
		V_0 = L_13;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_14 = ___saveName1;
			String_t* L_15;
			L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralCF757FAE53BF7250407F41077A27684D0D649636, NULL);
			String_t* L_16;
			L_16 = a_d_m27E72E89409118E6074D2B7905A67FE0047260DA(__this, L_15, NULL);
			V_1 = L_16;
			String_t* L_17 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18;
			L_18 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_17, (int32_t)2, NULL);
			V_3 = L_18;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_009e_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_3;
						if (!L_19)
						{
							goto IL_00a7_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_20 = V_3;
						NullCheck((RuntimeObject*)L_20);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
					}

IL_00a7_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_21 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_21, NULL);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_22 = V_3;
				RuntimeObject* L_23 = ___serializableObject0;
				NullCheck(L_21);
				BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_21, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_22, L_23, NULL);
				il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
				String_t* L_24 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
				String_t* L_27 = V_1;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, L_27);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
				StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4(L_24, _stringLiteralCDE08A6E8486D1CF253B66512888686DC97F62E5, L_26, NULL);
				goto IL_00a8_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00a8_1:
		{
			String_t* L_28 = ___saveName1;
			String_t* L_29;
			L_29 = a_d_m27E72E89409118E6074D2B7905A67FE0047260DA(__this, L_28, NULL);
			V_2 = L_29;
			String_t* L_30 = V_1;
			bool L_31;
			L_31 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_30, NULL);
			if (!L_31)
			{
				goto IL_0158_1;
			}
		}
		{
			V_4 = ((int64_t)0);
			String_t* L_32 = V_2;
			bool L_33;
			L_33 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_32, NULL);
			if (!L_33)
			{
				goto IL_00d4_1;
			}
		}
		{
			String_t* L_34 = V_2;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_35 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_35);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_35, L_34, NULL);
			NullCheck(L_35);
			int64_t L_36;
			L_36 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_35, NULL);
			V_4 = L_36;
		}

IL_00d4_1:
		{
			String_t* L_37 = V_1;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_38 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_38, L_37, NULL);
			NullCheck(L_38);
			int64_t L_39;
			L_39 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_38, NULL);
			V_5 = L_39;
			int64_t L_40 = V_0;
			int64_t L_41 = V_4;
			int64_t L_42 = V_5;
			V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(L_40, L_41)), L_42));
			int64_t L_43 = V_6;
			int64_t L_44;
			L_44 = a_d_m2AA97E3199B3A0F209AF38D40A3F200BDDBE872C(__this, NULL);
			if ((((int64_t)L_43) <= ((int64_t)L_44)))
			{
				goto IL_0128_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
			String_t* L_45 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46;
			int64_t L_48 = V_6;
			float L_49 = ((float)(((float)L_48)/(1048576.0f)));
			RuntimeObject* L_50 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_49);
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, L_50);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_50);
			StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_45, _stringLiteral78C75BF3C9423E4C9C2FA1E37B7D7D5E14095CD5, L_47, NULL);
			String_t* L_51 = V_1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_51, NULL);
			V_7 = (bool)0;
			goto IL_01b0;
		}

IL_0128_1:
		{
			String_t* L_52 = V_2;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_52, NULL);
			String_t* L_53 = V_1;
			String_t* L_54 = V_2;
			File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_53, L_54, NULL);
			int64_t L_55 = V_6;
			__this->___g_7 = L_55;
			il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
			String_t* L_56 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_57;
			String_t* L_59 = V_2;
			NullCheck(L_58);
			ArrayElementTypeCheck (L_58, L_59);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
			StarkLog_c_mAD34DCBDBBEA2F5DE5DC236AD0E8C456F1B2B71D(L_56, _stringLiteralECD986A5D06BF4859A22DC0FBE63A7135862DE2C, L_58, NULL);
			goto IL_0171_1;
		}

IL_0158_1:
		{
			il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
			String_t* L_60 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61;
			L_61 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_60, _stringLiteral148E5E70385F5A48A26A4B563727CBF2368D2C37, L_61, NULL);
			V_7 = (bool)0;
			goto IL_01b0;
		}

IL_0171_1:
		{
			goto IL_0199;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0173;
		}
		throw e;
	}

CATCH_0173:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var)));
		String_t* L_62 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_63;
		Exception_t* L_65 = V_8;
		NullCheck((RuntimeObject*)L_65);
		String_t* L_66;
		L_66 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_65);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA989C05F2225827D5991C8E9F5F600D90E12595)), L_64, NULL);
		V_7 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b0;
	}// end catch (depth: 1)

IL_0199:
	{
		int32_t L_67;
		L_67 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_01ae;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_68;
		L_68 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(_stringLiteral46C8BF2D56E05BF7E1A90AB1C177DDF9EE313D27, (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)NULL, NULL);
	}

IL_01ae:
	{
		return (bool)1;
	}

IL_01b0:
	{
		bool L_69 = V_7;
		return L_69;
	}
}
// System.Boolean a::d<System.Object>(a,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool a_d_TisRuntimeObject_m0365170167367C13468FAB95ABEA7D9B70642B0F_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, RuntimeObject* ___A_00, String_t* ___A_11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2656989C71198233C2EC51678786DEDB87070CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F28EE3E527EAF4B46C373B70813BFF856115330);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___A_00;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		String_t* L_1 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_1, _stringLiteral3F28EE3E527EAF4B46C373B70813BFF856115330, L_2, NULL);
		return (bool)0;
	}

IL_001e:
	{
		String_t* L_3 = ___A_11;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck((MemberInfo_t*)L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_6);
		___A_11 = L_7;
	}

IL_0037:
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_8;
			L_8 = a_f_m9C9524D6247937351E82FD35EE6DB4F92A435B6A(__this, NULL);
			V_0 = L_8;
			NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_9;
			L_9 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			String_t* L_10 = V_0;
			NullCheck(L_9);
			bool L_11;
			L_11 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, L_9, L_10);
			if (L_11)
			{
				goto IL_005b_1;
			}
		}
		{
			NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_12;
			L_12 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			String_t* L_13 = V_0;
			NullCheck(L_12);
			String_t* L_14;
			L_14 = VirtualFuncInvoker2< String_t*, String_t*, bool >::Invoke(20 /* System.String StarkSDKSpace.StarkFileSystemManager::MkdirSync(System.String,System.Boolean) */, L_12, L_13, (bool)0);
		}

IL_005b_1:
		{
			String_t* L_15 = V_0;
			String_t* L_16 = ___A_11;
			String_t* L_17;
			L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_16, NULL);
			V_1 = L_17;
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_18 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_18, NULL);
			V_2 = L_18;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_19, NULL);
			V_3 = L_19;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c2_1:
				{// begin finally (depth: 2)
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_3;
						if (!L_20)
						{
							goto IL_00cb_1;
						}
					}
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_3;
						NullCheck((RuntimeObject*)L_21);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
					}

IL_00cb_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_22 = V_2;
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_3;
					RuntimeObject* L_24 = ___A_00;
					NullCheck(L_22);
					BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_22, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_23, L_24, NULL);
					NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
					StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_25;
					L_25 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
					String_t* L_26 = V_1;
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_3;
					NullCheck(L_27);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_27);
					NullCheck(L_25);
					String_t* L_29;
					L_29 = VirtualFuncInvoker2< String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.String StarkSDKSpace.StarkFileSystemManager::WriteFileSync(System.String,System.Byte[]) */, L_25, L_26, L_28);
					V_4 = L_29;
					String_t* L_30 = V_4;
					bool L_31;
					L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
					if (!L_31)
					{
						goto IL_00a3_2;
					}
				}
				{
					V_5 = (bool)1;
					goto IL_00f2;
				}

IL_00a3_2:
				{
					il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
					String_t* L_32 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
					String_t* L_35 = V_4;
					NullCheck(L_34);
					ArrayElementTypeCheck (L_34, L_35);
					(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
					StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_32, _stringLiteral2656989C71198233C2EC51678786DEDB87070CDD, L_34, NULL);
					V_5 = (bool)0;
					goto IL_00f2;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var)));
		String_t* L_36 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		Exception_t* L_39 = V_6;
		NullCheck((RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_40);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA989C05F2225827D5991C8E9F5F600D90E12595)), L_38, NULL);
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f2;
	}// end catch (depth: 1)

IL_00f2:
	{
		bool L_41 = V_5;
		return L_41;
	}
}
// System.Void a::e<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a_e_TisRuntimeObject_m34108836A43CCC9A1449A1B477DFD4EDA77E8757_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = a_f_m9C9524D6247937351E82FD35EE6DB4F92A435B6A(__this, NULL);
		String_t* L_1 = ___A_00;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_001f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck((MemberInfo_t*)L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_4);
		___A_00 = L_5;
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		String_t* L_6 = ___A_00;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B2_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, NULL);
		V_0 = L_7;
		NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_8;
		L_8 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, L_8, L_9);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_11;
		L_11 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		String_t* L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String StarkSDKSpace.StarkFileSystemManager::UnlinkSync(System.String) */, L_11, L_12);
	}

IL_0046:
	{
		return;
	}
}
// a a::f<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* a_f_TisRuntimeObject_mBDB8EF1AE81769EE49AB0056A6CB1491DD678872_gshared (a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8* __this, String_t* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCB3F8D4653AFF561904AC5C5337672BFC25E2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___A_00;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck((MemberInfo_t*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_3);
		___A_00 = L_4;
	}

IL_0019:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		String_t* L_5;
		L_5 = a_f_m9C9524D6247937351E82FD35EE6DB4F92A435B6A(__this, NULL);
		String_t* L_6 = ___A_00;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, NULL);
		V_1 = L_7;
		NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_8;
		L_8 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
		String_t* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, String_t* >::Invoke(11 /* System.Boolean StarkSDKSpace.StarkFileSystemManager::AccessSync(System.String) */, L_8, L_9);
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		return L_11;
	}

IL_0043:
	{
	}
	try
	{// begin try (depth: 1)
		{
			NullCheck((IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* L_12;
			L_12 = VirtualFuncInvoker0< StarkFileSystemManager_t1ABC5B4A3A17C219BC08066C598EE0D9DBC2CC54* >::Invoke(47 /* StarkSDKSpace.StarkFileSystemManager StarkSDKSpace.IStarkAPI::GetStarkFileSystemManager() */, (IStarkAPI_t69752F365D7FA397DEE9F7453D77E04196BA963E*)__this);
			String_t* L_13 = V_1;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(9 /* System.Byte[] StarkSDKSpace.StarkFileSystemManager::ReadFileSync(System.String) */, L_12, L_13);
			V_2 = L_14;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
			if (!L_15)
			{
				goto IL_005a_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
			NullCheck(L_16);
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) >= ((int32_t)1)))
			{
				goto IL_0078_1;
			}
		}

IL_005a_1:
		{
			il2cpp_codegen_runtime_class_init_inline(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var);
			String_t* L_17 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))->___a_1;
			String_t* L_18 = V_1;
			String_t* L_19;
			L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBCB3F8D4653AFF561904AC5C5337672BFC25E2C9, L_18, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20;
			L_20 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			StarkLog_b_m58F71E1C66FB99A96C8164A64017C67000E32A3A(L_17, L_19, L_20, NULL);
			RuntimeObject* L_21 = V_0;
			V_3 = L_21;
			goto IL_00dd;
		}

IL_0078_1:
		{
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_22, NULL);
			V_4 = L_22;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00aa_1:
				{// begin finally (depth: 2)
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_4;
						if (!L_23)
						{
							goto IL_00b5_1;
						}
					}
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_24 = V_4;
						NullCheck((RuntimeObject*)L_24);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
					}

IL_00b5_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
				NullCheck(L_27);
				NullCheck((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_25);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_4;
				NullCheck((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_28);
				int64_t L_29;
				L_29 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_28, ((int64_t)0), (int32_t)0);
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_30 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_30, NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = V_4;
				NullCheck(L_30);
				RuntimeObject* L_32;
				L_32 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_30, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_31, NULL);
				V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_32, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_00b6_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00b6_1:
		{
			goto IL_00db;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b8;
		}
		throw e;
	}

CATCH_00b8:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var)));
		String_t* L_33 = ((a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&a_t7C437FD4C34AE0577C33F0317EBC5B92615C0FC8_il2cpp_TypeInfo_var))))->___a_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
		Exception_t* L_36 = V_5;
		NullCheck((RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_37);
		StarkLog_b_m58F71E1C66FB99A96C8164A64017C67000E32A3A(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC131F02B0322237DBD0144AA2AC24FA83574E76E)), L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00db;
	}// end catch (depth: 1)

IL_00db:
	{
		RuntimeObject* L_38 = V_0;
		return L_38;
	}

IL_00dd:
	{
		RuntimeObject* L_39 = V_3;
		return L_39;
	}
}
// a[] ah::a<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<a,b>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ah_a_TisRuntimeObject_TisRuntimeObject_mA954DB3F4C6628D2A7C33A4073C0B10C8B27E2BD_gshared (RuntimeObject* ___A_00, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___A_00;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___A_00;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_4;
	}
}
// System.Void b::DeleteSaving<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void b_DeleteSaving_TisRuntimeObject_m49A1615C0FAB335AAB42B0BE46C9F231E5B2AE70_gshared (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, String_t* ___saveName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	{
		String_t* L_0 = ___saveName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck((MemberInfo_t*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_3);
		___saveName0 = L_4;
	}

IL_0019:
	{
		String_t* L_5 = ___saveName0;
		String_t* L_6;
		L_6 = b_d_m9B8D594421640EFCA3CB871B69A30FCDEF5DF470(__this, L_5, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_9 = V_0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_10 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_10, L_9, NULL);
		NullCheck(L_10);
		int64_t L_11;
		L_11 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_10, NULL);
		V_1 = L_11;
		int64_t L_12 = (int64_t)__this->___n_13;
		int64_t L_13 = V_1;
		__this->___n_13 = ((int64_t)il2cpp_codegen_subtract(L_12, L_13));
		String_t* L_14 = V_0;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_14, NULL);
	}

IL_0049:
	{
		return;
	}
}
// T b::LoadSaving<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* b_LoadSaving_TisRuntimeObject_m11134A6521D560C7FBE962BC4C4A968451A322B5_gshared (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, String_t* ___saveName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD91731C88A04481B71DFC41D47EF7F68D7051ABB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___saveName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck((MemberInfo_t*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_3);
		___saveName0 = L_4;
	}

IL_0019:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		String_t* L_5 = ___saveName0;
		String_t* L_6;
		L_6 = b_d_m9B8D594421640EFCA3CB871B69A30FCDEF5DF470(__this, L_5, NULL);
		V_1 = L_6;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_7 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8;
			L_8 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_7, (int32_t)3, NULL);
			V_2 = L_8;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_005d_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_2;
						if (!L_9)
						{
							goto IL_0066_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_2;
						NullCheck((RuntimeObject*)L_10);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
					}

IL_0066_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_11 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_11, NULL);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_13;
				L_13 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_11, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_12, NULL);
				V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 1)));
				il2cpp_codegen_runtime_class_init_inline(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
				String_t* L_14 = ((b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields*)il2cpp_codegen_static_fields_for(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var))->___b_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
				String_t* L_17 = V_1;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, L_17);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
				StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4(L_14, _stringLiteralD91731C88A04481B71DFC41D47EF7F68D7051ABB, L_16, NULL);
				goto IL_0067_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0067_1:
		{
			goto IL_008a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		Exception_t* L_20 = V_3;
		NullCheck((RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		StarkLog_b_m58F71E1C66FB99A96C8164A64017C67000E32A3A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72D6DA79D63F89429B2907F80F55BB4FA4DDE000)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC131F02B0322237DBD0144AA2AC24FA83574E76E)), L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008a;
	}// end catch (depth: 1)

IL_008a:
	{
		RuntimeObject* L_22 = V_0;
		return L_22;
	}
}
// System.Void b::ReportAnalytics<System.Object>(System.String,System.Collections.Generic.Dictionary`2<System.String,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void b_ReportAnalytics_TisRuntimeObject_m4CA19608BEBEEA6313B51EDE521F2ED1D847C3E7_gshared (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55605EAD5140F047F29B681125CA890F499FF29C);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___eventName0;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral55605EAD5140F047F29B681125CA890F499FF29C, (RuntimeObject*)L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB((RuntimeObject*)L_1, NULL);
		return;
	}
}
// System.Boolean b::Save<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool b_Save_TisRuntimeObject_m8E05CA083626B5B450317A884EF79A49733C8CDB_gshared (b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7* __this, RuntimeObject* ___serializableObject0, String_t* ___saveName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148E5E70385F5A48A26A4B563727CBF2368D2C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78C75BF3C9423E4C9C2FA1E37B7D7D5E14095CD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE08A6E8486D1CF253B66512888686DC97F62E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF757FAE53BF7250407F41077A27684D0D649636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECD986A5D06BF4859A22DC0FBE63A7135862DE2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___saveName1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck((MemberInfo_t*)L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_3);
		___saveName1 = L_4;
	}

IL_0019:
	{
		int64_t L_5;
		L_5 = b_e_mCBD6B5C0826CB82F0561AF6A78CB616F3AC83B0F(__this, NULL);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_6 = ___saveName1;
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralCF757FAE53BF7250407F41077A27684D0D649636, NULL);
			String_t* L_8;
			L_8 = b_d_m9B8D594421640EFCA3CB871B69A30FCDEF5DF470(__this, L_7, NULL);
			V_1 = L_8;
			String_t* L_9 = V_1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10;
			L_10 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_9, (int32_t)2, NULL);
			V_3 = L_10;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0066_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_3;
						if (!L_11)
						{
							goto IL_006f_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_3;
						NullCheck((RuntimeObject*)L_12);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
					}

IL_006f_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_13 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_13, NULL);
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_3;
				RuntimeObject* L_15 = ___serializableObject0;
				NullCheck(L_13);
				BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_13, (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_14, L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
				String_t* L_16 = ((b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields*)il2cpp_codegen_static_fields_for(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var))->___b_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
				String_t* L_19 = V_1;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
				StarkLog_d_m110D83BB876475E780ACC2A1679EB32B50880CD4(L_16, _stringLiteralCDE08A6E8486D1CF253B66512888686DC97F62E5, L_18, NULL);
				goto IL_0070_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0070_1:
		{
			String_t* L_20 = ___saveName1;
			String_t* L_21;
			L_21 = b_d_m9B8D594421640EFCA3CB871B69A30FCDEF5DF470(__this, L_20, NULL);
			V_2 = L_21;
			String_t* L_22 = V_1;
			bool L_23;
			L_23 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_22, NULL);
			if (!L_23)
			{
				goto IL_011d_1;
			}
		}
		{
			V_4 = ((int64_t)0);
			String_t* L_24 = V_2;
			bool L_25;
			L_25 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_24, NULL);
			if (!L_25)
			{
				goto IL_009c_1;
			}
		}
		{
			String_t* L_26 = V_2;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_27 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_27, L_26, NULL);
			NullCheck(L_27);
			int64_t L_28;
			L_28 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_27, NULL);
			V_4 = L_28;
		}

IL_009c_1:
		{
			String_t* L_29 = V_1;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_30 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_30);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_30, L_29, NULL);
			NullCheck(L_30);
			int64_t L_31;
			L_31 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_30, NULL);
			V_5 = L_31;
			int64_t L_32 = V_0;
			int64_t L_33 = V_4;
			int64_t L_34 = V_5;
			V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(L_32, L_33)), L_34));
			int64_t L_35 = V_6;
			int64_t L_36;
			L_36 = b_d_m5401FCD827E7ABF3A543C8FCEB6DD63CF53D8EE7(__this, NULL);
			if ((((int64_t)L_35) <= ((int64_t)L_36)))
			{
				goto IL_00ed_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
			String_t* L_37 = ((b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields*)il2cpp_codegen_static_fields_for(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var))->___b_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_38;
			int64_t L_40 = V_6;
			float L_41 = ((float)(((float)L_40)/(1048576.0f)));
			RuntimeObject* L_42 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_41);
			NullCheck(L_39);
			ArrayElementTypeCheck (L_39, L_42);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_42);
			StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_37, _stringLiteral78C75BF3C9423E4C9C2FA1E37B7D7D5E14095CD5, L_39, NULL);
			String_t* L_43 = V_1;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_43, NULL);
			V_7 = (bool)0;
			goto IL_0160;
		}

IL_00ed_1:
		{
			String_t* L_44 = V_2;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_44, NULL);
			String_t* L_45 = V_1;
			String_t* L_46 = V_2;
			File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_45, L_46, NULL);
			int64_t L_47 = V_6;
			__this->___n_13 = L_47;
			il2cpp_codegen_runtime_class_init_inline(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
			String_t* L_48 = ((b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields*)il2cpp_codegen_static_fields_for(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var))->___b_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49;
			String_t* L_51 = V_2;
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, L_51);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
			StarkLog_c_mAD34DCBDBBEA2F5DE5DC236AD0E8C456F1B2B71D(L_48, _stringLiteralECD986A5D06BF4859A22DC0FBE63A7135862DE2C, L_50, NULL);
			goto IL_0136_1;
		}

IL_011d_1:
		{
			il2cpp_codegen_runtime_class_init_inline(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var);
			String_t* L_52 = ((b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_StaticFields*)il2cpp_codegen_static_fields_for(b_t9E5DB4157BF89EF6D747065200C80BD3562C7EF7_il2cpp_TypeInfo_var))->___b_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53;
			L_53 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(L_52, _stringLiteral148E5E70385F5A48A26A4B563727CBF2368D2C37, L_53, NULL);
			V_7 = (bool)0;
			goto IL_0160;
		}

IL_0136_1:
		{
			goto IL_015e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_54;
		Exception_t* L_56 = V_8;
		NullCheck((RuntimeObject*)L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_56);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_57);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72D6DA79D63F89429B2907F80F55BB4FA4DDE000)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA989C05F2225827D5991C8E9F5F600D90E12595)), L_55, NULL);
		V_7 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0160;
	}// end catch (depth: 1)

IL_015e:
	{
		return (bool)1;
	}

IL_0160:
	{
		bool L_58 = V_7;
		return L_58;
	}
}
// a bo::k<System.Object>(a)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bo_k_TisRuntimeObject_m6EB307362B345BEB70F9E2FF0D584BA7AAAD5B46_gshared (bo_tC29345C2AC194C9983AF519F27FEED56F34A7EF3* __this, RuntimeObject* ___A_00, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___b_5;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96* L_1 = (JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)__this->___a_4;
		RuntimeObject* L_2 = ___A_00;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96* >::Invoke(21 /* System.Void StarkSDKSpace.SimpleJSON.JSONNode::Add(StarkSDKSpace.SimpleJSON.JSONNode) */, L_1, (JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)L_2);
		goto IL_0032;
	}

IL_001b:
	{
		JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96* L_3 = (JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)__this->___a_4;
		String_t* L_4 = (String_t*)__this->___b_5;
		RuntimeObject* L_5 = ___A_00;
		NullCheck(L_3);
		VirtualActionInvoker2< String_t*, JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96* >::Invoke(20 /* System.Void StarkSDKSpace.SimpleJSON.JSONNode::Add(System.String,StarkSDKSpace.SimpleJSON.JSONNode) */, L_3, L_4, (JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)L_5);
	}

IL_0032:
	{
		__this->___a_4 = (JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_4), (void*)(JSONNode_t2904BC0E4E1D90E873AA9378DF8E952CE76F5A96*)NULL);
		RuntimeObject* L_6 = ___A_00;
		return L_6;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,a> c::a<System.Object>(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* c_a_TisRuntimeObject_m5FA1A4BF9B20478590FF5A44E9803936C839A87A_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AB1B6A3C73ACD4191867F441C7C06B206029725);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral694A0555D778B10725D67C5CE4CF135461B15931);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3344E349CE2E7CCFEB617BF15DE1F43135A8FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45D77C5A7DECE598244EB0F0F0C4B3AE1537965);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_0 = ___A_00;
		il2cpp_codegen_runtime_class_init_inline(c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924(L_0, NULL);
		if (!L_1)
		{
			goto IL_0157;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_2 = ___A_00;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_3 = ___A_00;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0017:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_5 = ___A_00;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0023;
	}

IL_001d:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_6 = ___A_00;
		NullCheck(L_6);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7;
		L_7 = i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline(L_6, NULL);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_8;
		L_8 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(G_B7_1, G_B7_0, NULL);
		V_0 = L_8;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_9 = V_0;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9(NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_11 = ___A_00;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral694A0555D778B10725D67C5CE4CF135461B15931, L_12, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_13, L_14, NULL);
	}

IL_0052:
	{
		return (RuntimeObject*)NULL;
	}

IL_0054:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = JsonData_ToJson_m6CABB09C28D29E99A93F22AD374B5A1BC232F337(L_15, NULL);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline(L_17, NULL);
		V_1 = L_18;
		Il2CppFakeBox<int32_t> L_19(JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_20;
		L_20 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_19), NULL);
		String_t* L_21;
		L_21 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC45D77C5A7DECE598244EB0F0F0C4B3AE1537965, L_16, _stringLiteral0AB1B6A3C73ACD4191867F441C7C06B206029725, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB((RuntimeObject*)L_21, NULL);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8(L_22, NULL);
		if (!L_23)
		{
			goto IL_0157;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_24 = V_0;
		String_t* L_25;
		L_25 = JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F(L_24, NULL);
		V_2 = L_25;
		String_t* L_26 = V_2;
		NullCheck(L_26);
		bool L_27;
		L_27 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_26, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		if (!L_27)
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_28 = V_2;
		NullCheck(L_28);
		bool L_29;
		L_29 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_28, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		if (!L_29)
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_30 = V_2;
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		NullCheck(L_30);
		String_t* L_33;
		L_33 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_30, 1, ((int32_t)il2cpp_codegen_subtract(L_32, 2)), NULL);
		V_3 = L_33;
		String_t* L_34 = V_3;
		bool L_35;
		L_35 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_34, NULL);
		if (L_35)
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_36 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_36, L_38, NULL);
		V_4 = L_39;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_4;
		NullCheck(L_40);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_41 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_41);
		((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_41, ((int32_t)(((RuntimeArray*)L_40)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = (RuntimeObject*)L_41;
		V_6 = 0;
		goto IL_014c;
	}

IL_00f2:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_4;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		String_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		String_t* L_46;
		L_46 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_45, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = L_47;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)61));
		NullCheck(L_46);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49;
		L_49 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_46, L_48, NULL);
		V_7 = L_49;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = V_7;
		if (!L_50)
		{
			goto IL_0146;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = V_7;
		NullCheck(L_51);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0146;
		}
	}
	{
		RuntimeObject* L_52 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_7;
		NullCheck(L_53);
		int32_t L_54 = 0;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		String_t* L_56;
		L_56 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_55, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_7;
		NullCheck(L_57);
		int32_t L_58 = 1;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_62;
		L_62 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_59, L_61, NULL);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_63;
		memset((&L_63), 0, sizeof(L_63));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_63), L_56, ((RuntimeObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 3))), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck((RuntimeObject*)L_52);
		InterfaceActionInvoker1< KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T) */, il2cpp_rgctx_data(method->rgctx_data, 6), (RuntimeObject*)L_52, L_63);
	}

IL_0146:
	{
		int32_t L_64 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_014c:
	{
		int32_t L_65 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_4;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)))))
		{
			goto IL_00f2;
		}
	}
	{
		RuntimeObject* L_67 = V_5;
		return L_67;
	}

IL_0157:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_68 = ___A_00;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_68, NULL);
		String_t* L_70;
		L_70 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB3344E349CE2E7CCFEB617BF15DE1F43135A8FC8, L_69, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71;
		L_71 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_70, L_71, NULL);
		return (RuntimeObject*)NULL;
	}
}
// System.Collections.Generic.IList`1<a> c::b<System.Object>(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* c_b_TisRuntimeObject_mF9C9E6267606586A42A852D58F5DD8FCA8ABCC17_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5545A9A3B8D5820BACEF6A142C40355ECBCCEE31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral694A0555D778B10725D67C5CE4CF135461B15931);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_0 = ___A_00;
		il2cpp_codegen_runtime_class_init_inline(c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924(L_0, NULL);
		if (!L_1)
		{
			goto IL_00ec;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_2 = ___A_00;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_3 = ___A_00;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0017:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_5 = ___A_00;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0023;
	}

IL_001d:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_6 = ___A_00;
		NullCheck(L_6);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7;
		L_7 = i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline(L_6, NULL);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_8;
		L_8 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(G_B7_1, G_B7_0, NULL);
		V_0 = L_8;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_9 = V_0;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9(NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_11 = ___A_00;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral694A0555D778B10725D67C5CE4CF135461B15931, L_12, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_13, L_14, NULL);
	}

IL_0052:
	{
		return (RuntimeObject*)NULL;
	}

IL_0054:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8(L_15, NULL);
		if (!L_16)
		{
			goto IL_00ec;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_17 = V_0;
		String_t* L_18;
		L_18 = JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F(L_17, NULL);
		V_1 = L_18;
		String_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_19, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		if (!L_20)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_21, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_23 = V_1;
		String_t* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_24, NULL);
		NullCheck(L_23);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_23, 1, ((int32_t)il2cpp_codegen_subtract(L_25, 2)), NULL);
		V_2 = L_26;
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_27, NULL);
		if (L_28)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_29 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32;
		L_32 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_29, L_31, NULL);
		V_3 = L_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_3;
		NullCheck(L_33);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_34 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_34);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_34, ((int32_t)(((RuntimeArray*)L_33)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = (RuntimeObject*)L_34;
		V_5 = 0;
		goto IL_00e2;
	}

IL_00b9:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_3;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_41;
		L_41 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_38, L_40, NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 3)));
		RuntimeObject* L_42 = V_4;
		RuntimeObject* L_43 = V_6;
		NullCheck((RuntimeObject*)L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T) */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_42, L_43);
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e2:
	{
		int32_t L_45 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_3;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_47 = V_4;
		return L_47;
	}

IL_00ec:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_48 = ___A_00;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5545A9A3B8D5820BACEF6A142C40355ECBCCEE31, L_49, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51;
		L_51 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_50, L_51, NULL);
		return (RuntimeObject*)NULL;
	}
}
// a c::c<System.Boolean>(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool c_c_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0D563BADB332A904D63BF3331DE1AD5667BDD7E2_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_0 = ___A_00;
		il2cpp_codegen_runtime_class_init_inline(c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924(L_0, NULL);
		if (!L_1)
		{
			goto IL_0214;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_2 = ___A_00;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_3 = ___A_00;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0017:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_5 = ___A_00;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0023;
	}

IL_001d:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_6 = ___A_00;
		NullCheck(L_6);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7;
		L_7 = i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline(L_6, NULL);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_8;
		L_8 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(G_B7_1, G_B7_0, NULL);
		V_0 = L_8;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_9 = V_0;
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9(NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_11 = ___A_00;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A, L_12, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_13, L_14, NULL);
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = (-1);
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		return ((*(bool*)((bool*)(bool*)UnBox(L_21, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0079:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		bool L_22 = V_2;
		return L_22;
	}

IL_0083:
	{
		V_1 = NULL;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = JsonData_get_IsBoolean_m870236CC47CA9981C30746CC64558FC2782BE47B(L_23, NULL);
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_30 = V_0;
		bool L_31;
		L_31 = JsonData_op_Explicit_m8FECD72757B346250C619CAB016BAC96025DFAB9(L_30, NULL);
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_32);
		V_1 = L_33;
		goto IL_0200;
	}

IL_00bc:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = JsonData_get_IsDouble_m50EF84A92ABBA848F2CFBC1626BE55F91F97D4D9(L_34, NULL);
		if (!L_35)
		{
			goto IL_0126;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00f1;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_41 = V_0;
		double L_42;
		L_42 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_41, NULL);
		double L_43 = ((double)L_42);
		RuntimeObject* L_44 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_43);
		V_1 = L_44;
		goto IL_0200;
	}

IL_00f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_50 = V_0;
		double L_51;
		L_51 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_52;
		L_52 = Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E(((double)L_51), NULL);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_53);
		V_1 = L_54;
		goto IL_0200;
	}

IL_0126:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_55 = V_0;
		NullCheck(L_55);
		bool L_56;
		L_56 = JsonData_get_IsLong_mA1D6AD2FB056DE6ACB200029467C51E100A0661A(L_55, NULL);
		if (L_56)
		{
			goto IL_0136;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_57 = V_0;
		NullCheck(L_57);
		bool L_58;
		L_58 = JsonData_get_IsInt_mE56F49354E2227A612856C5101FA42EA82423E8B(L_57, NULL);
		if (!L_58)
		{
			goto IL_018e;
		}
	}

IL_0136:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		if (!L_63)
		{
			goto IL_0162;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_64 = V_0;
		int64_t L_65;
		L_65 = JsonData_op_Explicit_mB358F70C42B7D992BE2AB35E11763F4BBC35A263(L_64, NULL);
		int64_t L_66 = L_65;
		RuntimeObject* L_67 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_66);
		V_1 = L_67;
		goto IL_0200;
	}

IL_0162:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_73 = V_0;
		int32_t L_74;
		L_74 = JsonData_op_Explicit_mF8D3B33F90BEE2F4D5948BFF201C9B943E068F56(L_73, NULL);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		V_1 = L_76;
		goto IL_0200;
	}

IL_018e:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_77 = V_0;
		NullCheck(L_77);
		bool L_78;
		L_78 = JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8(L_77, NULL);
		if (!L_78)
		{
			goto IL_01ba;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		if (!L_83)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_84 = V_0;
		String_t* L_85;
		L_85 = JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F(L_84, NULL);
		V_1 = (RuntimeObject*)L_85;
		goto IL_0200;
	}

IL_01ba:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_86 = V_0;
		NullCheck(L_86);
		bool L_87;
		L_87 = JsonData_get_IsArray_m6B2C2ABB5C1983A98E0243C2C85C9C8B8A4CE7AD(L_86, NULL);
		if (L_87)
		{
			goto IL_01ca;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_88 = V_0;
		NullCheck(L_88);
		bool L_89;
		L_89 = JsonData_get_IsObject_mFF37743CF06435EF0FDC920F80CA3A5DFFB14F04(L_88, NULL);
		if (!L_89)
		{
			goto IL_0200;
		}
	}

IL_01ca:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_90;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline(L_92, NULL);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var, &L_94);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_91;
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_97 = ___A_00;
		NullCheck(L_97);
		String_t* L_98;
		L_98 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_97, NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_98);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, _stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E, L_96, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		bool L_99 = V_2;
		return L_99;
	}

IL_0200:
	{
		RuntimeObject* L_100 = V_1;
		if (L_100)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		bool L_101 = V_2;
		return L_101;
	}

IL_020d:
	{
		RuntimeObject* L_102 = V_1;
		return ((*(bool*)((bool*)(bool*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0214:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_103 = ___A_00;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_103, NULL);
		String_t* L_105;
		L_105 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE, L_104, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106;
		L_106 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_105, L_106, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		bool L_107 = V_2;
		return L_107;
	}
}
// a c::c<System.Int32>(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t c_c_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m09246B950E0C0211B190A82989B994F5C6B29045_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_0 = ___A_00;
		il2cpp_codegen_runtime_class_init_inline(c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924(L_0, NULL);
		if (!L_1)
		{
			goto IL_0214;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_2 = ___A_00;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_3 = ___A_00;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0017:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_5 = ___A_00;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0023;
	}

IL_001d:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_6 = ___A_00;
		NullCheck(L_6);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7;
		L_7 = i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline(L_6, NULL);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_8;
		L_8 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(G_B7_1, G_B7_0, NULL);
		V_0 = L_8;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_9 = V_0;
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9(NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_11 = ___A_00;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A, L_12, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_13, L_14, NULL);
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = (-1);
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_21, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0079:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_22 = V_2;
		return L_22;
	}

IL_0083:
	{
		V_1 = NULL;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = JsonData_get_IsBoolean_m870236CC47CA9981C30746CC64558FC2782BE47B(L_23, NULL);
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_30 = V_0;
		bool L_31;
		L_31 = JsonData_op_Explicit_m8FECD72757B346250C619CAB016BAC96025DFAB9(L_30, NULL);
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_32);
		V_1 = L_33;
		goto IL_0200;
	}

IL_00bc:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = JsonData_get_IsDouble_m50EF84A92ABBA848F2CFBC1626BE55F91F97D4D9(L_34, NULL);
		if (!L_35)
		{
			goto IL_0126;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00f1;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_41 = V_0;
		double L_42;
		L_42 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_41, NULL);
		double L_43 = ((double)L_42);
		RuntimeObject* L_44 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_43);
		V_1 = L_44;
		goto IL_0200;
	}

IL_00f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_50 = V_0;
		double L_51;
		L_51 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_52;
		L_52 = Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E(((double)L_51), NULL);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_53);
		V_1 = L_54;
		goto IL_0200;
	}

IL_0126:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_55 = V_0;
		NullCheck(L_55);
		bool L_56;
		L_56 = JsonData_get_IsLong_mA1D6AD2FB056DE6ACB200029467C51E100A0661A(L_55, NULL);
		if (L_56)
		{
			goto IL_0136;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_57 = V_0;
		NullCheck(L_57);
		bool L_58;
		L_58 = JsonData_get_IsInt_mE56F49354E2227A612856C5101FA42EA82423E8B(L_57, NULL);
		if (!L_58)
		{
			goto IL_018e;
		}
	}

IL_0136:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		if (!L_63)
		{
			goto IL_0162;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_64 = V_0;
		int64_t L_65;
		L_65 = JsonData_op_Explicit_mB358F70C42B7D992BE2AB35E11763F4BBC35A263(L_64, NULL);
		int64_t L_66 = L_65;
		RuntimeObject* L_67 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_66);
		V_1 = L_67;
		goto IL_0200;
	}

IL_0162:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_73 = V_0;
		int32_t L_74;
		L_74 = JsonData_op_Explicit_mF8D3B33F90BEE2F4D5948BFF201C9B943E068F56(L_73, NULL);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		V_1 = L_76;
		goto IL_0200;
	}

IL_018e:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_77 = V_0;
		NullCheck(L_77);
		bool L_78;
		L_78 = JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8(L_77, NULL);
		if (!L_78)
		{
			goto IL_01ba;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		if (!L_83)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_84 = V_0;
		String_t* L_85;
		L_85 = JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F(L_84, NULL);
		V_1 = (RuntimeObject*)L_85;
		goto IL_0200;
	}

IL_01ba:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_86 = V_0;
		NullCheck(L_86);
		bool L_87;
		L_87 = JsonData_get_IsArray_m6B2C2ABB5C1983A98E0243C2C85C9C8B8A4CE7AD(L_86, NULL);
		if (L_87)
		{
			goto IL_01ca;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_88 = V_0;
		NullCheck(L_88);
		bool L_89;
		L_89 = JsonData_get_IsObject_mFF37743CF06435EF0FDC920F80CA3A5DFFB14F04(L_88, NULL);
		if (!L_89)
		{
			goto IL_0200;
		}
	}

IL_01ca:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_90;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline(L_92, NULL);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var, &L_94);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_91;
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_97 = ___A_00;
		NullCheck(L_97);
		String_t* L_98;
		L_98 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_97, NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_98);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, _stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E, L_96, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_99 = V_2;
		return L_99;
	}

IL_0200:
	{
		RuntimeObject* L_100 = V_1;
		if (L_100)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_101 = V_2;
		return L_101;
	}

IL_020d:
	{
		RuntimeObject* L_102 = V_1;
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_102, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}

IL_0214:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_103 = ___A_00;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_103, NULL);
		String_t* L_105;
		L_105 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE, L_104, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106;
		L_106 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_105, L_106, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_107 = V_2;
		return L_107;
	}
}
// a c::c<System.Object>(i)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* c_c_TisRuntimeObject_mAB0E9445EF591D3BA3B1E67A0AFF45F713959177_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* ___A_00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_0 = ___A_00;
		il2cpp_codegen_runtime_class_init_inline(c_t58E78AD3D565D5AAEBECA45214AE59E17752E5F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = c_f_m810A77501ABAE49198F3BFE882ADB502C4FB7924(L_0, NULL);
		if (!L_1)
		{
			goto IL_0214;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_2 = ___A_00;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_3 = ___A_00;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0017:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_5 = ___A_00;
		G_B5_0 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_0023;
	}

IL_001d:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_6 = ___A_00;
		NullCheck(L_6);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7;
		L_7 = i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline(L_6, NULL);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_0;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_8;
		L_8 = UNBridge_CallSync_mE57E94432F33FB3C27147DA20031909676BD1645(G_B7_1, G_B7_0, NULL);
		V_0 = L_8;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_9 = V_0;
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StarkUtils_tC2FDAEF46DCA55DC0419446217FD63F027652EF5_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = StarkUtils_IsSCRuntime_m6F08C52941BF427DFC5E761095C04E76CA0883B9(NULL);
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_11 = ___A_00;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8F0B031CBE52FD858B25B78D8B8151E2CFA6292A, L_12, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_13, L_14, NULL);
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = (-1);
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_21, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0079:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_22 = V_2;
		return L_22;
	}

IL_0083:
	{
		V_1 = NULL;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = JsonData_get_IsBoolean_m870236CC47CA9981C30746CC64558FC2782BE47B(L_23, NULL);
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_30 = V_0;
		bool L_31;
		L_31 = JsonData_op_Explicit_m8FECD72757B346250C619CAB016BAC96025DFAB9(L_30, NULL);
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_32);
		V_1 = L_33;
		goto IL_0200;
	}

IL_00bc:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_34 = V_0;
		NullCheck(L_34);
		bool L_35;
		L_35 = JsonData_get_IsDouble_m50EF84A92ABBA848F2CFBC1626BE55F91F97D4D9(L_34, NULL);
		if (!L_35)
		{
			goto IL_0126;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00f1;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_41 = V_0;
		double L_42;
		L_42 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_41, NULL);
		double L_43 = ((double)L_42);
		RuntimeObject* L_44 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_43);
		V_1 = L_44;
		goto IL_0200;
	}

IL_00f1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_50 = V_0;
		double L_51;
		L_51 = JsonData_op_Explicit_mC293B9DF43ACF36215D1FDEEE6CA99E5665149B4(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_52;
		L_52 = Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E(((double)L_51), NULL);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_53);
		V_1 = L_54;
		goto IL_0200;
	}

IL_0126:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_55 = V_0;
		NullCheck(L_55);
		bool L_56;
		L_56 = JsonData_get_IsLong_mA1D6AD2FB056DE6ACB200029467C51E100A0661A(L_55, NULL);
		if (L_56)
		{
			goto IL_0136;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_57 = V_0;
		NullCheck(L_57);
		bool L_58;
		L_58 = JsonData_get_IsInt_mE56F49354E2227A612856C5101FA42EA82423E8B(L_57, NULL);
		if (!L_58)
		{
			goto IL_018e;
		}
	}

IL_0136:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		if (!L_63)
		{
			goto IL_0162;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_64 = V_0;
		int64_t L_65;
		L_65 = JsonData_op_Explicit_mB358F70C42B7D992BE2AB35E11763F4BBC35A263(L_64, NULL);
		int64_t L_66 = L_65;
		RuntimeObject* L_67 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_66);
		V_1 = L_67;
		goto IL_0200;
	}

IL_0162:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_73 = V_0;
		int32_t L_74;
		L_74 = JsonData_op_Explicit_mF8D3B33F90BEE2F4D5948BFF201C9B943E068F56(L_73, NULL);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_75);
		V_1 = L_76;
		goto IL_0200;
	}

IL_018e:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_77 = V_0;
		NullCheck(L_77);
		bool L_78;
		L_78 = JsonData_get_IsString_mBD2E7901E215915AF8D85EB656B2D8417E4BCEC8(L_77, NULL);
		if (!L_78)
		{
			goto IL_01ba;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		if (!L_83)
		{
			goto IL_0200;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_84 = V_0;
		String_t* L_85;
		L_85 = JsonData_op_Explicit_mAD80013077EAB73260365A38DF80A2C3FC30224F(L_84, NULL);
		V_1 = (RuntimeObject*)L_85;
		goto IL_0200;
	}

IL_01ba:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_86 = V_0;
		NullCheck(L_86);
		bool L_87;
		L_87 = JsonData_get_IsArray_m6B2C2ABB5C1983A98E0243C2C85C9C8B8A4CE7AD(L_86, NULL);
		if (L_87)
		{
			goto IL_01ca;
		}
	}
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_88 = V_0;
		NullCheck(L_88);
		bool L_89;
		L_89 = JsonData_get_IsObject_mFF37743CF06435EF0FDC920F80CA3A5DFFB14F04(L_88, NULL);
		if (!L_89)
		{
			goto IL_0200;
		}
	}

IL_01ca:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_90;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline(L_92, NULL);
		int32_t L_94 = L_93;
		RuntimeObject* L_95 = Box(JsonType_t2D85F0245C1EDC68865F85F5F8B5624409766920_il2cpp_TypeInfo_var, &L_94);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_91;
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_97 = ___A_00;
		NullCheck(L_97);
		String_t* L_98;
		L_98 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_97, NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_98);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, _stringLiteral76E09BDF5738EBB9182B0ECA0A4B32ECFD9D787E, L_96, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_99 = V_2;
		return L_99;
	}

IL_0200:
	{
		RuntimeObject* L_100 = V_1;
		if (L_100)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_101 = V_2;
		return L_101;
	}

IL_020d:
	{
		RuntimeObject* L_102 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0214:
	{
		i_tFB7A585674EBA5EC10018038707AA9871C0CF716* L_103 = ___A_00;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline(L_103, NULL);
		String_t* L_105;
		L_105 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0BA1459ADB9916E31DF58DC921CAFC1CB5D29AE, L_104, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106;
		L_106 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		StarkLog_a_m4EA52FA3E09AED9995A6FEFCA7C93B7EE4F7C3F5(_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, L_105, L_106, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_2;
		return L_107;
	}
}
// System.Void i::c<System.Object>(System.Int32,System.Collections.Generic.IDictionary`2<System.String,a>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void i_c_TisRuntimeObject_m1A6172F3F32B3A1624512E43DAAC8D4D5717290E_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, int32_t ___A_00, RuntimeObject* ___A_11, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___A_00;
		bool L_1;
		L_1 = i_c_mDDBDE1CE4A3AA50D79FDB7F85DD5A8AF5A6820A8(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)__this->___c_2;
		int32_t L_3 = ___A_00;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = ___A_11;
		((  void (*) (i_tFB7A585674EBA5EC10018038707AA9871C0CF716*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void i::c<System.Object>(System.Int32,System.Collections.Generic.IList`1<a>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void i_c_TisRuntimeObject_m05C0190FB1518FA57087E62BF8BD6853FED2A01B_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, int32_t ___A_00, RuntimeObject* ___A_11, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___A_00;
		bool L_1;
		L_1 = i_c_mDDBDE1CE4A3AA50D79FDB7F85DD5A8AF5A6820A8(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)__this->___c_2;
		int32_t L_3 = ___A_00;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = ___A_11;
		((  void (*) (i_tFB7A585674EBA5EC10018038707AA9871C0CF716*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void i::c<System.Object>(System.String,System.Collections.Generic.IDictionary`2<System.String,a>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void i_c_TisRuntimeObject_m336B53C6D64BDAFACF561E8253325CEB1C5084EA_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, String_t* ___A_00, RuntimeObject* ___A_11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* G_B9_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B8_1 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* G_B10_2 = NULL;
	{
		String_t* L_0 = ___A_00;
		bool L_1;
		L_1 = i_c_mB657217825785C4354F4BF3964EFB1DF927373F4(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___A_11;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___A_11;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_5 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)__this->___a_0;
		String_t* L_6 = ___A_00;
		NullCheck(L_5);
		JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_5, L_6, (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)NULL, NULL);
		return;
	}

IL_0023:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_7 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)il2cpp_codegen_object_new(JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JsonData__ctor_m624B0380EF4643945916425C172AB75206061969(L_7, NULL);
		V_0 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		V_1 = L_12;
		RuntimeObject* L_13 = ___A_11;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_13);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_2;
					if (!L_15)
					{
						goto IL_009f;
					}
				}
				{
					RuntimeObject* L_16 = V_2;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_009f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_004c_1:
			{
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_18;
				L_18 = InterfaceFuncInvoker0< KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 5), L_17);
				V_3 = L_18;
				JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_19 = V_0;
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 7));
				bool L_21 = V_1;
				G_B8_0 = L_20;
				G_B8_1 = L_19;
				if (L_21)
				{
					G_B9_0 = L_20;
					G_B9_1 = L_19;
					goto IL_0071_1;
				}
			}
			{
				RuntimeObject* L_22;
				L_22 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 8));
				JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_23 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)il2cpp_codegen_object_new(JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				JsonData__ctor_m1905EFE93054F02AE91405E8D03E5551FDD3669F(L_23, L_22, NULL);
				G_B10_0 = L_23;
				G_B10_1 = G_B8_0;
				G_B10_2 = G_B8_1;
				goto IL_0087_1;
			}

IL_0071_1:
			{
				RuntimeObject* L_24;
				L_24 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 8));
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				double L_25;
				L_25 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_24, NULL);
				JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_26 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)il2cpp_codegen_object_new(JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				JsonData__ctor_m9EE07D39045E06DD4028BB342CB485A843BAD0AA(L_26, L_25, NULL);
				G_B10_0 = L_26;
				G_B10_1 = G_B9_0;
				G_B10_2 = G_B9_1;
			}

IL_0087_1:
			{
				NullCheck(G_B10_2);
				JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(G_B10_2, G_B10_1, G_B10_0, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_27 = V_2;
				NullCheck((RuntimeObject*)L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				if (L_28)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_29 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)__this->___a_0;
		String_t* L_30 = ___A_00;
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_31 = V_0;
		NullCheck(L_29);
		JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_29, L_30, L_31, NULL);
		return;
	}
}
// System.Void i::c<System.Object>(System.String,System.Collections.Generic.IList`1<a>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void i_c_TisRuntimeObject_m3DB3DACC49B2D703BF5C6755095B61DD7D9C7252_gshared (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, String_t* ___A_00, RuntimeObject* ___A_11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___A_00;
		bool L_1;
		L_1 = i_c_mB657217825785C4354F4BF3964EFB1DF927373F4(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_2 = ___A_11;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___A_11;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_3);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_5 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)__this->___a_0;
		String_t* L_6 = ___A_00;
		NullCheck(L_5);
		JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_5, L_6, (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)NULL, NULL);
		return;
	}

IL_0023:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_7, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = ___A_11;
		NullCheck((RuntimeObject*)L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		RuntimeObject* L_11 = ___A_11;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_11, 0);
		String_t* L_13;
		L_13 = i_c_mC03230071AA020AB83B1B7BB0882B98F594DAAE4(__this, L_12, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, L_13, NULL);
	}

IL_0050:
	{
		V_1 = 1;
		goto IL_007d;
	}

IL_0054:
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeObject* L_18 = ___A_11;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_18, L_19);
		String_t* L_21;
		L_21 = i_c_mC03230071AA020AB83B1B7BB0882B98F594DAAE4(__this, L_20, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_21, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007d:
	{
		int32_t L_24 = V_1;
		RuntimeObject* L_25 = ___A_11;
		NullCheck((RuntimeObject*)L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), (RuntimeObject*)L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_29 = (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC*)__this->___a_0;
		String_t* L_30 = ___A_00;
		StringBuilder_t* L_31 = V_0;
		NullCheck((RuntimeObject*)L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_31);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_tCF235F82706E45B9B89C5DABE19A033AFA8845CA_il2cpp_TypeInfo_var);
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_33;
		L_33 = JsonMapper_ToObject_m6F6EF8426A735A4D314E13D73F7683AB8255FCE0(L_32, NULL);
		NullCheck(L_29);
		JsonData_set_Item_m1098A7B23A08BAF99AC38F94AFBEF4258FFCEE92(L_29, L_30, L_33, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<System.Object>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisRuntimeObject_mFE9A6CFE373BF8B47CB4E078C093E2CA7621B00C_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* p2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_0 = p2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_5 = p2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_8 = p2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_13 = p2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_13->___data_0;
		int32_t L_15 = ___b1;
		RuntimeObject* L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Vector4>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_0 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_5 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_8 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_13 = p2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_13->___data_0;
		int32_t L_15 = ___b1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method) 
{
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_0 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_0->___data_0;
		int32_t L_2 = ___a0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_5 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_5->___data_0;
		int32_t L_7 = ___a0;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_8 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_8->___data_0;
		int32_t L_10 = ___b1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_13 = p2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_13->___data_0;
		int32_t L_15 = ___b1;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisRuntimeObject_m4311827E7E157529882E08D52A07A4A9FB8A9A9B_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___data0;
		int32_t L_7 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (RuntimeObject*)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_14 = ___compare3;
		RuntimeObject* L_15 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___data0;
		int32_t L_22 = V_2;
		RuntimeObject* L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (RuntimeObject*)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___data0;
		int32_t L_7 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_14 = ___compare3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___data0;
		int32_t L_22 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___data0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___data0;
		int32_t L_7 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = ___data0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_14 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___data0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___data0;
		int32_t L_22 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___end2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<System.Object>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sorting_Median3Pivot_TisRuntimeObject_m331E6EFCA267740A36CB1505C560A1A90DE3EC64_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare4, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_21 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_30 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_35 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_43 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_16 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_21 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_30 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_35 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_43 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_44 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___start1;
		int32_t L_14 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_15 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_16 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_16.___data_0;
		int32_t L_18 = ___pivot2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_21 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_21.___data_0;
		int32_t L_23 = ___start1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___start1;
		int32_t L_28 = ___pivot2;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_29 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_30 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_30.___data_0;
		int32_t L_32 = ___end3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_35 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_35.___data_0;
		int32_t L_37 = ___pivot2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___pivot2;
		int32_t L_42 = ___end3;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_43 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_44 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_43.___data_0;
		int32_t L_45 = ___pivot2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisRuntimeObject_mAEB1C1A3082076ADE5B61B6C9AC9A89101C53F67_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_8 = ___compare3;
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_11 = ___compare3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RuntimeObject* L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_19 = ___compare3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		RuntimeObject* L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (RuntimeObject*)L_39);
		// data[end--] = tmp;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		RuntimeObject* L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (RuntimeObject*)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___compare3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_39);
		// data[end--] = tmp;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___data0;
		int32_t L_21 = ___end2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___start1;
		int32_t L_27 = ___end2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___end2;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_29 = ___data0;
		int32_t L_30 = ___start1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = ___data0;
		int32_t L_34 = ___start1;
		int32_t L_35 = L_34;
		___start1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___data0;
		int32_t L_37 = ___end2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_39);
		// data[end--] = tmp;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_40 = ___data0;
		int32_t L_41 = ___end2;
		int32_t L_42 = L_41;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<System.Object>(T[],System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisRuntimeObject_m5F0268010291B8DED7B27E8AEDA500B98D0599DD_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data0, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare1, const RuntimeMethod* method) 
{
	{
		// QuickSort<T>(data, 0, data.Length - 1, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___data0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___data0;
		NullCheck(L_1);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_2 = ___compare1;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisRuntimeObject_mAAA1DBAA4A0A535AEAFF0BDE59F16D9907F96DEE_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_7 = ___compare3;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_13 = ___compare3;
		int32_t L_14;
		L_14 = ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_19 = ___compare3;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_25 = ___compare3;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_7 = ___compare3;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_13 = ___compare3;
		int32_t L_14;
		L_14 = ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___compare3;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_25 = ___compare3;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_7 = ___compare3;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___start1;
		int32_t L_9 = ___end2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___data0;
		int32_t L_11 = ___start1;
		int32_t L_12 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_13 = ___compare3;
		int32_t L_14;
		L_14 = ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___data0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___compare3;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = ___data0;
		int32_t L_23 = V_1;
		int32_t L_24 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_25 = ___compare3;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::AddNewRenderGraphResource<System.Object>(ResType&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___outRes0, bool ___pooledResource1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		// int result = resourceArray.size;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_9 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_11;
		L_11 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_9, L_10, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
	}

IL_004b:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject** L_13 = ___outRes0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_14 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_16;
		L_16 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_14, L_15, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_17 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_16);
		*(RuntimeObject**)L_13 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		// outRes.Reset(pooledResource ? pool : null);
		RuntimeObject** L_18 = ___outRes0;
		bool L_19 = ___pooledResource1;
		G_B3_0 = L_18;
		if (L_19)
		{
			G_B4_0 = L_18;
			goto IL_006f;
		}
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0075;
	}

IL_006f:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_20 = (IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)__this->___pool_2;
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0075:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool) */, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		// return result;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* i_d_m2C1171487A19253AC5094D8F44EC4BE29FFC82D4_inline (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___b_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* i_e_m84D9A141E6A0E2436426F7778B9C4E1C7E1CAE54_inline (i_tFB7A585674EBA5EC10018038707AA9871C0CF716* __this, const RuntimeMethod* method) 
{
	{
		JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* L_0 = __this->___a_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_mCF174B91555B8D4FCDCF34A762A274486007F8AE_inline (JsonData_tFCCD989B3D4A12AF514B8C26945EC4D759DAF3BC* __this, const RuntimeMethod* method) 
{
	{
		// return type;
		int32_t L_0 = __this->___type_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CsizeU3Ek__BackingField_1;
		return L_0;
	}
}
