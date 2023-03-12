#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// Utilities.Audio.AbstractRecordingBehaviour`1<System.Object>
struct AbstractRecordingBehaviour_1_tB027D11CCC6843A055768A7D32CF3761A5B2F704;
// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.Wav.WavEncoder>
struct AbstractRecordingBehaviour_1_tA04686BCFF771FDE96FCE28707E09B990CCF2020;
// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct TaskFactory_1_tBB104CB5AB77377E459CE42D40D6685CA6A51ECC;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.String,UnityEngine.AudioClip>
struct Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Utilities.Encoding.Wav.WavEncoder
struct WavEncoder_tD7FC81B1A046C20DEE2CA3345F69CB9425B7325B;
// Utilities.Encoding.Wav.WavRecordingBehaviour
struct WavRecordingBehaviour_t4B3684952E52E2202A49A565AB5D99988E8FF1CC;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral0C0789DB9936D6A8F08C6BDF82CEC890371BF1B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1DDA6E62BBD690A6FB96CD24ED35541E30E5D38D;
IL2CPP_EXTERN_C String_t* _stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90;
IL2CPP_EXTERN_C String_t* _stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68;
IL2CPP_EXTERN_C String_t* _stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68;
IL2CPP_EXTERN_C String_t* _stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral639EDD13E80C7AB1E738F109795CB5AED20E741B;
IL2CPP_EXTERN_C String_t* _stringLiteral69E2C0DA190A1BB7AF26E38DEC44971686449293;
IL2CPP_EXTERN_C String_t* _stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488;
IL2CPP_EXTERN_C String_t* _stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1B199097D409A8D6AE7A87F2052C1CAE7D2612;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5;
IL2CPP_EXTERN_C String_t* _stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractRecordingBehaviour_1__ctor_m333F7EBA241AAEBB3C9384D7F1F914FF860FC6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mD6F70F9613CC797FBE099FC843107215E14806CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m48F575FAF5F155CF6ED410A30D7B65866113F58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m7D2637477E930FCB12EDDCA4080D0BD05D76DDEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m3674368CF26179BB15E617AFFB3489089A27D902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipExtensions_EncodeToWav_m735CFAFDAE9ABF7ED0ED17E9F089558D81AFA53C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC19B6E15C0458353A35D69909B6F5E5FC0991A6B 
{
};

// System.Tuple`2<System.String,UnityEngine.AudioClip>
struct Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	String_t* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_Item2_1;
};
struct Il2CppArrayBounds;

// Utilities.Encoding.Wav.AudioClipExtensions
struct AudioClipExtensions_t6706BA0619B931AEE09100D530599FF2A7F463E8  : public RuntimeObject
{
};

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A  : public RuntimeObject
{
};

struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::<UnityMainThread>k__BackingField
	UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___U3CUnityMainThreadU3Ek__BackingField_0;
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::<BackgroundThread>k__BackingField
	BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___U3CBackgroundThreadU3Ek__BackingField_1;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Utilities.Encoding.Wav.Constants
struct Constants_t5813722E8F744E9753268A398C15607588E71D25  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
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

// Utilities.Audio.RecordingManager
struct RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009  : public RuntimeObject
{
};

struct RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_StaticFields
{
	// System.Int32 Utilities.Audio.RecordingManager::maxRecordingLength
	int32_t ___maxRecordingLength_0;
	// System.Object Utilities.Audio.RecordingManager::recordingLock
	RuntimeObject* ___recordingLock_1;
	// System.Threading.CancellationTokenSource Utilities.Audio.RecordingManager::cancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cancellationTokenSource_2;
	// System.Int32 Utilities.Audio.RecordingManager::<Frequency>k__BackingField
	int32_t ___U3CFrequencyU3Ek__BackingField_3;
	// System.Boolean Utilities.Audio.RecordingManager::isRecording
	bool ___isRecording_4;
	// System.Boolean Utilities.Audio.RecordingManager::isProcessing
	bool ___isProcessing_5;
	// System.Boolean Utilities.Audio.RecordingManager::<EnableDebug>k__BackingField
	bool ___U3CEnableDebugU3Ek__BackingField_6;
	// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Audio.RecordingManager::OnClipRecorded
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___OnClipRecorded_7;
	// System.String Utilities.Audio.RecordingManager::defaultSaveLocation
	String_t* ___defaultSaveLocation_8;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Utilities.Encoding.Wav.WavEncoder
struct WavEncoder_tD7FC81B1A046C20DEE2CA3345F69CB9425B7325B  : public RuntimeObject
{
};

// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25  : public RuntimeObject
{
	// System.Exception Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___m_result_22;
};

struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBB104CB5AB77377E459CE42D40D6685CA6A51ECC* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_22;
};

struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>
struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
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

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1
struct U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34 
{
	// System.Int32 Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 ___U3CU3Et__builder_1;
	// UnityEngine.AudioClip Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_2;
	// System.Boolean Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::trim
	bool ___trim_3;
	// System.Threading.CancellationToken Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Int32 Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<frequency>5__2
	int32_t ___U3CfrequencyU3E5__2_5;
	// System.Int32 Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<channels>5__3
	int32_t ___U3CchannelsU3E5__3_6;
	// System.Byte[] Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<pcmData>5__4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CpcmDataU3E5__4_7;
	// System.IO.MemoryStream Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<stream>5__5
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___U3CstreamU3E5__5_8;
	// System.Byte[] Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<result>5__6
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CresultU3E5__6_9;
	// System.Object Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>u__1
	RuntimeObject* ___U3CU3Eu__1_10;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>u__2
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__2_11;
	// System.Object Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>7__wrap6
	RuntimeObject* ___U3CU3E7__wrap6_12;
	// System.Int32 Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>7__wrap7
	int32_t ___U3CU3E7__wrap7_13;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::<>u__3
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__3_14;
};

// Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0
struct U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA 
{
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD ___U3CU3Et__builder_1;
	// System.String Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::callingMethodName
	String_t* ___callingMethodName_2;
	// UnityEngine.AudioClip Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_3;
	// System.String Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::saveDirectory
	String_t* ___saveDirectory_4;
	// System.Threading.CancellationToken Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::callback
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___callback_6;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<lastPosition>5__2
	int32_t ___U3ClastPositionU3E5__2_7;
	// System.String Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<clipName>5__3
	String_t* ___U3CclipNameU3E5__3_8;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<channels>5__4
	int32_t ___U3CchannelsU3E5__4_9;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<frequency>5__5
	int32_t ___U3CfrequencyU3E5__5_10;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<sampleCount>5__6
	int32_t ___U3CsampleCountU3E5__6_11;
	// System.Single[] Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<samples>5__7
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CsamplesU3E5__7_12;
	// System.Byte[] Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<readBuffer>5__8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CreadBufferU3E5__8_13;
	// System.String Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<path>5__9
	String_t* ___U3CpathU3E5__9_14;
	// System.IO.FileStream Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<outStream>5__10
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___U3CoutStreamU3E5__10_15;
	// System.IO.BinaryWriter Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<writer>5__11
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___U3CwriterU3E5__11_16;
	// System.Single[] Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<microphoneData>5__12
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CmicrophoneDataU3E5__12_17;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_18;
	// System.Object Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>7__wrap12
	RuntimeObject* ___U3CU3E7__wrap12_19;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>7__wrap13
	int32_t ___U3CU3E7__wrap13_20;
	// System.Tuple`2<System.String,UnityEngine.AudioClip> Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>7__wrap14
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___U3CU3E7__wrap14_21;
	// System.Boolean Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<shouldStop>5__16
	bool ___U3CshouldStopU3E5__16_22;
	// System.Int32 Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<currentPosition>5__17
	int32_t ___U3CcurrentPositionU3E5__17_23;
	// System.Object Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>u__2
	RuntimeObject* ___U3CU3Eu__2_24;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::<>u__3
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__3_25;
};

// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.Wav.WavEncoder>
struct AbstractRecordingBehaviour_1_tA04686BCFF771FDE96FCE28707E09B990CCF2020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Utilities.Audio.AbstractRecordingBehaviour`1::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.KeyCode Utilities.Audio.AbstractRecordingBehaviour`1::recordingKey
	int32_t ___recordingKey_5;
	// System.Boolean Utilities.Audio.AbstractRecordingBehaviour`1::debug
	bool ___debug_6;
	// System.String Utilities.Audio.AbstractRecordingBehaviour`1::defaultSaveLocation
	String_t* ___defaultSaveLocation_7;
	// System.Threading.CancellationTokenSource Utilities.Audio.AbstractRecordingBehaviour`1::gameObjectCts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___gameObjectCts_8;
};

// Utilities.Encoding.Wav.WavRecordingBehaviour
struct WavRecordingBehaviour_t4B3684952E52E2202A49A565AB5D99988E8FF1CC  : public AbstractRecordingBehaviour_1_tA04686BCFF771FDE96FCE28707E09B990CCF2020
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mBD8FE66B67E993956077983638964714E6382FEE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m028C9428730D97E66A72FC83593371396E67E40E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m462C43D961B3664F8A1AD5507A293F2066351986_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mC3AD4B7CFD08E6574EF72B1895CE9F1A8D750D31_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m34BD4AD8C0B2F544E4E66644ABA471C2A53F5423_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m5DED9C55BEF164A4C6CB3684938C79C502918EBF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mD2DB4FE122952372A5C24A3043639BBEF4ECE53D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mB5CB2CCA9F663D47D05DC1371F269B848B6C21BD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.AbstractRecordingBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractRecordingBehaviour_1__ctor_m953A51AC5843256D1571FD416286A629AB19735F_gshared (AbstractRecordingBehaviour_1_tB027D11CCC6843A055768A7D32CF3761A5B2F704* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Byte[] Utilities.Audio.AudioClipExtensions::EncodeToPCM(UnityEngine.AudioClip,Utilities.Audio.PCMFormatSize,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, int32_t ___size1, bool ___trim2, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter_Dispose_m62A1213D09FA2598A6F7866DC60357D53393E5B2 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Start<Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m7D2637477E930FCB12EDDCA4080D0BD05D76DDEC (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mBD8FE66B67E993956077983638964714E6382FEE_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline Task_1_t46575E75F710D631831E756B5DE20429700F6B95* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t46575E75F710D631831E756B5DE20429700F6B95* (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::get_UnityMainThread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline (const RuntimeMethod* method) ;
// Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.UnityMainThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* AwaiterExtensions_GetAwaiter_mC96810DC801511CFFD411B50CE08286888FCABB2 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___instruction0, const RuntimeMethod* method) ;
// System.Boolean Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitOnCompleted<Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mD6F70F9613CC797FBE099FC843107215E14806CE (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25** ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25**, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m028C9428730D97E66A72FC83593371396E67E40E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1 (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_mE80CABEC364832FBA3042CA2460AA3913B74C10B (int32_t ___millisecondsDelay0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m48F575FAF5F155CF6ED410A30D7B65866113F58A (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m462C43D961B3664F8A1AD5507A293F2066351986_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mC3AD4B7CFD08E6574EF72B1895CE9F1A8D750D31_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6 (U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToWavAsyncU3Ed__1_SetStateMachine_m906A64AF5E328B19F0D0533F48AD5AD7F6838B72 (U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Create()
inline AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Start<Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m3674368CF26179BB15E617AFFB3489089A27D902 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m34BD4AD8C0B2F544E4E66644ABA471C2A53F5423_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::get_Task()
inline Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653 (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.RecordingManager::get_IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordingManager_get_IsProcessing_m88DE0039BF7E64229A4AB9C0CBCD844307173E66 (const RuntimeMethod* method) ;
// System.Void System.AccessViolationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67 (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.RecordingManager::set_IsProcessing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1 (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.RecordingManager::get_EnableDebug()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m5DED9C55BEF164A4C6CB3684938C79C502918EBF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitOnCompleted<Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25** ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25**, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mD2DB4FE122952372A5C24A3043639BBEF4ECE53D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459 (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___deviceName0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Boolean Utilities.Audio.RecordingManager::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842 (const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.RecordingManager::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingManager_set_IsRecording_mA048B915DF22BC4B0BC60AF4BEC7879D86934953 (bool ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.IO.Stream::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Stream_FlushAsync_m2C8614B69BF3C562B2BEFACAC1183FA5F3C2BBEF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mB5CB2CCA9F663D47D05DC1371F269B848B6C21BD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.String,UnityEngine.AudioClip>::.ctor(T1,T2)
inline void Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* __this, String_t* ___item10, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, String_t*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Invoke(T)
inline void Action_1_Invoke_mFF8241424A9BAD483DBC9139F1FB9A34D9AE62AE_inline (Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* __this, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4*, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986 (U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__0_SetStateMachine_m82EB6193CC3AD3A20B0B49A5C567DA7275CED993 (U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.Wav.WavEncoder>::.ctor()
inline void AbstractRecordingBehaviour_1__ctor_m333F7EBA241AAEBB3C9384D7F1F914FF860FC6F0 (AbstractRecordingBehaviour_1_tA04686BCFF771FDE96FCE28707E09B990CCF2020* __this, const RuntimeMethod* method)
{
	((  void (*) (AbstractRecordingBehaviour_1_tA04686BCFF771FDE96FCE28707E09B990CCF2020*, const RuntimeMethod*))AbstractRecordingBehaviour_1__ctor_m953A51AC5843256D1571FD416286A629AB19735F_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::ValidateEnd(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
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
// System.Byte[] Utilities.Encoding.Wav.AudioClipExtensions::EncodeToWav(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AudioClipExtensions_EncodeToWav_m735CFAFDAE9ABF7ED0ED17E9F089558D81AFA53C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, bool ___trim1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (audioClip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___audioClip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(audioClip));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69E2C0DA190A1BB7AF26E38DEC44971686449293)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipExtensions_EncodeToWav_m735CFAFDAE9ABF7ED0ED17E9F089558D81AFA53C_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var frequency = audioClip.frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___audioClip0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_3, NULL);
		V_0 = L_4;
		// var channels = audioClip.channels;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___audioClip0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_5, NULL);
		V_1 = L_6;
		// var pcmData = audioClip.EncodeToPCM(PCMFormatSize.EightBit, trim);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = ___audioClip0;
		bool L_8 = ___trim1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48(L_7, 1, L_8, NULL);
		V_2 = L_9;
		// var stream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_10, NULL);
		V_3 = L_10;
		// var writer = new BinaryWriter(stream);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_3;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_12, L_11, NULL);
		V_4 = L_12;
		// byte[] result = null;
		V_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fb:
			{// begin finally (depth: 1)
				// writer.Dispose();
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = V_4;
				NullCheck(L_13);
				BinaryWriter_Dispose_m62A1213D09FA2598A6F7866DC60357D53393E5B2(L_13, NULL);
				// stream.Dispose();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_3;
				NullCheck(L_14);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_14, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// writer.Write(Constants.RIFF.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_15 = V_4;
				NullCheck(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16;
				L_16 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758, NULL);
				NullCheck(L_15);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_15, L_16);
				// writer.Write(Constants.WavHeaderSize + pcmData.Length - 8);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
				NullCheck(L_18);
				NullCheck(L_17);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)44), ((int32_t)(((RuntimeArray*)L_18)->max_length)))), 8)));
				// writer.Write(Constants.WAVE.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_19 = V_4;
				NullCheck(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20;
				L_20 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E, NULL);
				NullCheck(L_19);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_19, L_20);
				// writer.Write(Constants.FMT.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_21 = V_4;
				NullCheck(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22;
				L_22 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F, NULL);
				NullCheck(L_21);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_21, L_22);
				// writer.Write(16);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_23 = V_4;
				NullCheck(L_23);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_23, ((int32_t)16));
				// writer.Write((ushort)1);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_24 = V_4;
				NullCheck(L_24);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_24, (uint16_t)1);
				// writer.Write((ushort)channels);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = V_4;
				int32_t L_26 = V_1;
				NullCheck(L_25);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_25, (uint16_t)((int32_t)(uint16_t)L_26));
				// writer.Write(frequency);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_27 = V_4;
				int32_t L_28 = V_0;
				NullCheck(L_27);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_27, L_28);
				// writer.Write(frequency * channels * sizeof(short));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_29 = V_4;
				int32_t L_30 = V_0;
				int32_t L_31 = V_1;
				NullCheck(L_29);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_29, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_30, L_31)), 2)));
				// writer.Write((ushort)(channels * sizeof(short)));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_32 = V_4;
				int32_t L_33 = V_1;
				NullCheck(L_32);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_32, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_33, 2))));
				// writer.Write((ushort)16);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_34 = V_4;
				NullCheck(L_34);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_34, (uint16_t)((int32_t)16));
				// writer.Write(Constants.DATA.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_35 = V_4;
				NullCheck(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36;
				L_36 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
				NullCheck(L_35);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_35, L_36);
				// writer.Write(pcmData.Length);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_37 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
				NullCheck(L_38);
				NullCheck(L_37);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_37, ((int32_t)(((RuntimeArray*)L_38)->max_length)));
				// writer.Write(pcmData);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
				NullCheck(L_39);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_39, L_40);
				// writer.Flush();
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_41 = V_4;
				NullCheck(L_41);
				VirtualActionInvoker0::Invoke(8 /* System.Void System.IO.BinaryWriter::Flush() */, L_41);
				// result = stream.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_42 = V_3;
				NullCheck(L_42);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
				L_43 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_42);
				V_5 = L_43;
				// }
				goto IL_0109;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00f4_1;
				}
				throw e;
			}

CATCH_00f4_1:
			{// begin catch(System.Exception)
				// Debug.LogError(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0109;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0109:
	{
		// return result;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_5;
		return L_44;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.Wav.AudioClipExtensions::EncodeToWavAsync(UnityEngine.AudioClip,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* AudioClipExtensions_EncodeToWavAsync_mD5161D8A0710BC9191B5A0F0CDA577CA99C7AFC7 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip0, bool ___trim1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m7D2637477E930FCB12EDDCA4080D0BD05D76DDEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891(AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___audioClip0;
		(&V_0)->___audioClip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___audioClip_2), (void*)L_1);
		bool L_2 = ___trim1;
		(&V_0)->___trim_3 = L_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken2;
		(&V_0)->___cancellationToken_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m7D2637477E930FCB12EDDCA4080D0BD05D76DDEC(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m7D2637477E930FCB12EDDCA4080D0BD05D76DDEC_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A(L_5, AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
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
// System.Void Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6 (U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mD6F70F9613CC797FBE099FC843107215E14806CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m48F575FAF5F155CF6ED410A30D7B65866113F58A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_2 = NULL;
	SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* V_3 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_7;
	memset((&V_7), 0, sizeof(V_7));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	Exception_t* G_B24_0 = NULL;
	Exception_t* G_B23_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_006c_1;
				}
				case 1:
				{
					goto IL_0112_1;
				}
				case 2:
				{
					goto IL_0299_1;
				}
				case 3:
				{
					goto IL_030a_1;
				}
			}
		}
		{
			// if (audioClip == null)
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___audioClip_2;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_0036_1;
			}
		}
		{
			// throw new ArgumentNullException(nameof(audioClip));
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69E2C0DA190A1BB7AF26E38DEC44971686449293)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6_RuntimeMethod_var)));
		}

IL_0036_1:
		{
			// await Awaiters.UnityMainThread;
			il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
			UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_5;
			L_5 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mC96810DC801511CFFD411B50CE08286888FCABB2(L_5, NULL);
			V_3 = L_6;
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_7 = V_3;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(L_7, NULL);
			if (L_8)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_10 = V_3;
			__this->___U3CU3Eu__1_10 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_10), (void*)L_10);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mD6F70F9613CC797FBE099FC843107215E14806CE(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mD6F70F9613CC797FBE099FC843107215E14806CE_RuntimeMethod_var);
			goto IL_03b8;
		}

IL_006c_1:
		{
			RuntimeObject* L_12 = __this->___U3CU3Eu__1_10;
			V_3 = ((SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25*)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_10 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_10), (void*)NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0088_1:
		{
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_14 = V_3;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1(L_14, NULL);
			// var frequency = audioClip.frequency;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = __this->___audioClip_2;
			NullCheck(L_15);
			int32_t L_16;
			L_16 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_15, NULL);
			__this->___U3CfrequencyU3E5__2_5 = L_16;
			// var channels = audioClip.channels;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = __this->___audioClip_2;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_17, NULL);
			__this->___U3CchannelsU3E5__3_6 = L_18;
			// var pcmData = audioClip.EncodeToPCM(PCMFormatSize.EightBit, trim);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___audioClip_2;
			bool L_20 = __this->___trim_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
			L_21 = AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48(L_19, 1, L_20, NULL);
			__this->___U3CpcmDataU3E5__4_7 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpcmDataU3E5__4_7), (void*)L_21);
			// await Task.Delay(1, cancellationToken).ConfigureAwait(false);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_22 = __this->___cancellationToken_4;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_23;
			L_23 = Task_Delay_mE80CABEC364832FBA3042CA2460AA3913B74C10B(1, L_22, NULL);
			NullCheck(L_23);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_24;
			L_24 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_23, (bool)0, NULL);
			V_5 = L_24;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_25;
			L_25 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
			V_4 = L_25;
			bool L_26;
			L_26 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
			if (L_26)
			{
				goto IL_012f_1;
			}
		}
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_28 = V_4;
			__this->___U3CU3Eu__2_11 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_11))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_29 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m48F575FAF5F155CF6ED410A30D7B65866113F58A(L_29, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_m48F575FAF5F155CF6ED410A30D7B65866113F58A_RuntimeMethod_var);
			goto IL_03b8;
		}

IL_0112_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_30 = __this->___U3CU3Eu__2_11;
			V_4 = L_30;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_31 = (&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_31, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_012f_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
			// var stream = new MemoryStream();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_33, NULL);
			__this->___U3CstreamU3E5__5_8 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstreamU3E5__5_8), (void*)L_33);
			// var writer = new BinaryWriter(stream);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_34 = __this->___U3CstreamU3E5__5_8;
			BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_35 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
			NullCheck(L_35);
			BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_35, L_34, NULL);
			V_2 = L_35;
			// byte[] result = null;
			__this->___U3CresultU3E5__6_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__6_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			__this->___U3CU3E7__wrap6_12 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap6_12), (void*)NULL);
			__this->___U3CU3E7__wrap7_13 = 0;
		}
		try
		{// begin try (depth: 2)
			try
			{// begin try (depth: 3)
				// writer.Write(Constants.RIFF.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_36 = V_2;
				NullCheck(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37;
				L_37 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758, NULL);
				NullCheck(L_36);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_36, L_37);
				// writer.Write(Constants.WavHeaderSize + pcmData.Length - 8);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_38 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___U3CpcmDataU3E5__4_7;
				NullCheck(L_39);
				NullCheck(L_38);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)44), ((int32_t)(((RuntimeArray*)L_39)->max_length)))), 8)));
				// writer.Write(Constants.WAVE.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_40 = V_2;
				NullCheck(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41;
				L_41 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E, NULL);
				NullCheck(L_40);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_40, L_41);
				// writer.Write(Constants.FMT.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_42 = V_2;
				NullCheck(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43;
				L_43 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F, NULL);
				NullCheck(L_42);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_42, L_43);
				// writer.Write(16);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_44 = V_2;
				NullCheck(L_44);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_44, ((int32_t)16));
				// writer.Write((ushort)1);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_45 = V_2;
				NullCheck(L_45);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_45, (uint16_t)1);
				// writer.Write((ushort)channels);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_46 = V_2;
				int32_t L_47 = __this->___U3CchannelsU3E5__3_6;
				NullCheck(L_46);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_46, (uint16_t)((int32_t)(uint16_t)L_47));
				// writer.Write(frequency);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = V_2;
				int32_t L_49 = __this->___U3CfrequencyU3E5__2_5;
				NullCheck(L_48);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_48, L_49);
				// writer.Write(frequency * channels * sizeof(short));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_50 = V_2;
				int32_t L_51 = __this->___U3CfrequencyU3E5__2_5;
				int32_t L_52 = __this->___U3CchannelsU3E5__3_6;
				NullCheck(L_50);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_50, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_51, L_52)), 2)));
				// writer.Write((ushort)(channels * sizeof(short)));
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = V_2;
				int32_t L_54 = __this->___U3CchannelsU3E5__3_6;
				NullCheck(L_53);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_53, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_54, 2))));
				// writer.Write((ushort)16);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_55 = V_2;
				NullCheck(L_55);
				VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_55, (uint16_t)((int32_t)16));
				// writer.Write(Constants.DATA.ToCharArray());
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_56 = V_2;
				NullCheck(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57;
				L_57 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
				NullCheck(L_56);
				VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_56, L_57);
				// writer.Write(pcmData.Length);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_58 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___U3CpcmDataU3E5__4_7;
				NullCheck(L_59);
				NullCheck(L_58);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_58, ((int32_t)(((RuntimeArray*)L_59)->max_length)));
				// writer.Write(pcmData);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_60 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___U3CpcmDataU3E5__4_7;
				NullCheck(L_60);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_60, L_61);
				// writer.Flush();
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_62 = V_2;
				NullCheck(L_62);
				VirtualActionInvoker0::Invoke(8 /* System.Void System.IO.BinaryWriter::Flush() */, L_62);
				// result = stream.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_63 = __this->___U3CstreamU3E5__5_8;
				NullCheck(L_63);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
				L_64 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_63);
				__this->___U3CresultU3E5__6_9 = L_64;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__6_9), (void*)L_64);
				// }
				goto IL_0243_2;
			}// end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_023c_2;
				}
				throw e;
			}

CATCH_023c_2:
			{// begin catch(System.Exception)
				// Debug.LogError(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0243_2;
			}// end catch (depth: 3)

IL_0243_2:
			{
				goto IL_0251_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0245_1;
			}
			throw e;
		}

CATCH_0245_1:
		{// begin catch(System.Object)
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_65 = V_6;
			__this->___U3CU3E7__wrap6_12 = L_65;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap6_12), (void*)L_65);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0251_1;
		}// end catch (depth: 2)

IL_0251_1:
		{
			// await writer.DisposeAsync().ConfigureAwait(false);
			BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_66 = V_2;
			NullCheck(L_66);
			ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_67;
			L_67 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(11 /* System.Threading.Tasks.ValueTask System.IO.BinaryWriter::DisposeAsync() */, L_66);
			V_8 = L_67;
			ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_68;
			L_68 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_8), (bool)0, NULL);
			V_9 = L_68;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_69;
			L_69 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_9), NULL);
			V_7 = L_69;
			bool L_70;
			L_70 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_7), NULL);
			if (L_70)
			{
				goto IL_02b6_1;
			}
		}
		{
			int32_t L_71 = 2;
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_72 = V_7;
			__this->___U3CU3Eu__3_14 = L_72;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->____value_0))->____obj_1), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_73 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084(L_73, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084_RuntimeMethod_var);
			goto IL_03b8;
		}

IL_0299_1:
		{
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_74 = __this->___U3CU3Eu__3_14;
			V_7 = L_74;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_75 = (&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_75, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
			int32_t L_76 = (-1);
			V_0 = L_76;
			__this->___U3CU3E1__state_0 = L_76;
		}

IL_02b6_1:
		{
			ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_7), NULL);
			// await stream.DisposeAsync().ConfigureAwait(false);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_77 = __this->___U3CstreamU3E5__5_8;
			NullCheck(L_77);
			ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_78;
			L_78 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(39 /* System.Threading.Tasks.ValueTask System.IO.Stream::DisposeAsync() */, L_77);
			V_8 = L_78;
			ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_79;
			L_79 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_8), (bool)0, NULL);
			V_9 = L_79;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_80;
			L_80 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_9), NULL);
			V_7 = L_80;
			bool L_81;
			L_81 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_7), NULL);
			if (L_81)
			{
				goto IL_0327_1;
			}
		}
		{
			int32_t L_82 = 3;
			V_0 = L_82;
			__this->___U3CU3E1__state_0 = L_82;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_83 = V_7;
			__this->___U3CU3Eu__3_14 = L_83;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->____value_0))->____obj_1), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_84 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084(L_84, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34_mDFB3F691773A76ECCF3BEEB8AC8DA4350556A084_RuntimeMethod_var);
			goto IL_03b8;
		}

IL_030a_1:
		{
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_85 = __this->___U3CU3Eu__3_14;
			V_7 = L_85;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_86 = (&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_86, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
			int32_t L_87 = (-1);
			V_0 = L_87;
			__this->___U3CU3E1__state_0 = L_87;
		}

IL_0327_1:
		{
			ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_7), NULL);
			RuntimeObject* L_88 = __this->___U3CU3E7__wrap6_12;
			V_6 = L_88;
			RuntimeObject* L_89 = V_6;
			if (!L_89)
			{
				goto IL_0351_1;
			}
		}
		{
			RuntimeObject* L_90 = V_6;
			Exception_t* L_91 = ((Exception_t*)IsInstClass((RuntimeObject*)L_90, Exception_t_il2cpp_TypeInfo_var));
			G_B23_0 = L_91;
			if (L_91)
			{
				G_B24_0 = L_91;
				goto IL_0347_1;
			}
		}
		{
			RuntimeObject* L_92 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6_RuntimeMethod_var)));
		}

IL_0347_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_93;
			L_93 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B24_0, NULL);
			NullCheck(L_93);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_93, NULL);
		}

IL_0351_1:
		{
			__this->___U3CU3E7__wrap6_12 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap6_12), (void*)NULL);
			// return result;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___U3CresultU3E5__6_9;
			V_1 = L_94;
			goto IL_038f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0361;
		}
		throw e;
	}

CATCH_0361:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CpcmDataU3E5__4_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpcmDataU3E5__4_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___U3CstreamU3E5__5_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstreamU3E5__5_8), (void*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL);
		__this->___U3CresultU3E5__6_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__6_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_95 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_96 = V_10;
		AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6(L_95, L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03b8;
	}// end catch (depth: 1)

IL_038f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CpcmDataU3E5__4_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpcmDataU3E5__4_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___U3CstreamU3E5__5_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstreamU3E5__5_8), (void*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL);
		__this->___U3CresultU3E5__6_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__6_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_97 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0(L_97, L_98, AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
	}

IL_03b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*>(__this + _offset);
	U3CEncodeToWavAsyncU3Ed__1_MoveNext_m3534BECA840E000A642D9B6E6C05873796484AD6(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.Wav.AudioClipExtensions/<EncodeToWavAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToWavAsyncU3Ed__1_SetStateMachine_m906A64AF5E328B19F0D0533F48AD5AD7F6838B72 (U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEncodeToWavAsyncU3Ed__1_SetStateMachine_m906A64AF5E328B19F0D0533F48AD5AD7F6838B72_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEncodeToWavAsyncU3Ed__1_t14F25E1866FA776A5A890F69DB83E804C9D51B34*>(__this + _offset);
	U3CEncodeToWavAsyncU3Ed__1_SetStateMachine_m906A64AF5E328B19F0D0533F48AD5AD7F6838B72(_thisAdjusted, ___stateMachine0, method);
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
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.Wav.WavEncoder::StreamSaveToDiskAsync(UnityEngine.AudioClip,System.String,System.Threading.CancellationToken,System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* WavEncoder_StreamSaveToDiskAsync_m040B52F8233414003DAC7303D5CAD1780E52C30A (WavEncoder_tD7FC81B1A046C20DEE2CA3345F69CB9425B7325B* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, String_t* ___saveDirectory1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___callback3, String_t* ___callingMethodName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m3674368CF26179BB15E617AFFB3489089A27D902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2(AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		(&V_0)->___clip_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clip_3), (void*)L_1);
		String_t* L_2 = ___saveDirectory1;
		(&V_0)->___saveDirectory_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___saveDirectory_4), (void*)L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken2;
		(&V_0)->___cancellationToken_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_5))->____source_0), (void*)NULL);
		Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_4 = ___callback3;
		(&V_0)->___callback_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callback_6), (void*)L_4);
		String_t* L_5 = ___callingMethodName4;
		(&V_0)->___callingMethodName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callingMethodName_2), (void*)L_5);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m3674368CF26179BB15E617AFFB3489089A27D902(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m3674368CF26179BB15E617AFFB3489089A27D902_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F(L_7, AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Utilities.Encoding.Wav.WavEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WavEncoder__ctor_m62D818E0F4EEEECE63090EBA4749C8A562F97960 (WavEncoder_tD7FC81B1A046C20DEE2CA3345F69CB9425B7325B* __this, const RuntimeMethod* method) 
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
// System.Void Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986 (U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DDA6E62BBD690A6FB96CD24ED35541E30E5D38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* V_1 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* V_3 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_5;
	memset((&V_5), 0, sizeof(V_5));
	SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_9 = NULL;
	int32_t V_10 = 0;
	int16_t V_11 = 0;
	int64_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_14;
	memset((&V_14), 0, sizeof(V_14));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_15;
	memset((&V_15), 0, sizeof(V_15));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	Exception_t* G_B75_0 = NULL;
	Exception_t* G_B74_0 = NULL;
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* G_B87_0 = NULL;
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* G_B86_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_013b_1;
				}
				case 1:
				{
					goto IL_01fd_1;
				}
				case 2:
				{
					goto IL_01fd_1;
				}
				case 3:
				{
					goto IL_01fd_1;
				}
				case 4:
				{
					goto IL_01fd_1;
				}
				case 5:
				{
					goto IL_072e_1;
				}
				case 6:
				{
					goto IL_079f_1;
				}
				case 7:
				{
					goto IL_0883_1;
				}
			}
		}
		{
			// if (callingMethodName != nameof(RecordingManager.StartRecordingAsync))
			String_t* L_2 = __this->___callingMethodName_2;
			bool L_3;
			L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F, NULL);
			if (!L_3)
			{
				goto IL_004a_1;
			}
		}
		{
			// throw new InvalidOperationException($"{nameof(StreamSaveToDiskAsync)} can only be called from {nameof(RecordingManager.StartRecordingAsync)}");
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B1B199097D409A8D6AE7A87F2052C1CAE7D2612)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_RuntimeMethod_var)));
		}

IL_004a_1:
		{
			// if (!Microphone.IsRecording(null))
			bool L_5;
			L_5 = Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653((String_t*)NULL, NULL);
			if (L_5)
			{
				goto IL_005d_1;
			}
		}
		{
			// throw new InvalidOperationException("Microphone is not initialized!");
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_6);
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral639EDD13E80C7AB1E738F109795CB5AED20E741B)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_RuntimeMethod_var)));
		}

IL_005d_1:
		{
			// if (RecordingManager.IsProcessing)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = RecordingManager_get_IsProcessing_m88DE0039BF7E64229A4AB9C0CBCD844307173E66(NULL);
			if (!L_7)
			{
				goto IL_006f_1;
			}
		}
		{
			// throw new AccessViolationException("Recording already in progress!");
			AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_8 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
			NullCheck(L_8);
			AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C0789DB9936D6A8F08C6BDF82CEC890371BF1B5)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_RuntimeMethod_var)));
		}

IL_006f_1:
		{
			// RecordingManager.IsProcessing = true;
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1((bool)1, NULL);
			// if (RecordingManager.EnableDebug)
			bool L_9;
			L_9 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_9)
			{
				goto IL_0086_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Recording started...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1DDA6E62BBD690A6FB96CD24ED35541E30E5D38D, NULL);
		}

IL_0086_1:
		{
			// var clipName = clip.name;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___clip_3;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
			__this->___U3CclipNameU3E5__3_8 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)L_11);
			// var channels = clip.channels;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___clip_3;
			NullCheck(L_12);
			int32_t L_13;
			L_13 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_12, NULL);
			__this->___U3CchannelsU3E5__4_9 = L_13;
			// var frequency = clip.frequency;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = __this->___clip_3;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_14, NULL);
			__this->___U3CfrequencyU3E5__5_10 = L_15;
			// var sampleCount = clip.samples;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = __this->___clip_3;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_16, NULL);
			__this->___U3CsampleCountU3E5__6_11 = L_17;
			// var samples = new float[sampleCount * channels];
			int32_t L_18 = __this->___U3CsampleCountU3E5__6_11;
			int32_t L_19 = __this->___U3CchannelsU3E5__4_9;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_18, L_19)));
			__this->___U3CsamplesU3E5__7_12 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__7_12), (void*)L_20);
			// var readBuffer = new byte[samples.Length * sizeof(short)];
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___U3CsamplesU3E5__7_12;
			NullCheck(L_21);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_21)->max_length)), 2)));
			__this->___U3CreadBufferU3E5__8_13 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreadBufferU3E5__8_13), (void*)L_22);
			// await Task.Delay(1).ConfigureAwait(false);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_23;
			L_23 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(1, NULL);
			NullCheck(L_23);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_24;
			L_24 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_23, (bool)0, NULL);
			V_5 = L_24;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_25;
			L_25 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
			V_4 = L_25;
			bool L_26;
			L_26 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
			if (L_26)
			{
				goto IL_0158_1;
			}
		}
		{
			int32_t L_27 = 0;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_28 = V_4;
			__this->___U3CU3Eu__1_18 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_18))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_29 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190(L_29, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190_RuntimeMethod_var);
			goto IL_099f;
		}

IL_013b_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_30 = __this->___U3CU3Eu__1_18;
			V_4 = L_30;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_31 = (&__this->___U3CU3Eu__1_18);
			il2cpp_codegen_initobj(L_31, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_0158_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
			// if (!Directory.Exists(saveDirectory))
			String_t* L_33 = __this->___saveDirectory_4;
			bool L_34;
			L_34 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_33, NULL);
			if (L_34)
			{
				goto IL_0178_1;
			}
		}
		{
			// Directory.CreateDirectory(saveDirectory);
			String_t* L_35 = __this->___saveDirectory_4;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_36;
			L_36 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_35, NULL);
		}

IL_0178_1:
		{
			// var path = $"{saveDirectory}/{clipName}.wav";
			String_t* L_37 = __this->___saveDirectory_4;
			String_t* L_38 = __this->___U3CclipNameU3E5__3_8;
			String_t* L_39;
			L_39 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_37, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_38, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, NULL);
			__this->___U3CpathU3E5__9_14 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__9_14), (void*)L_39);
			// if (File.Exists(path))
			String_t* L_40 = __this->___U3CpathU3E5__9_14;
			bool L_41;
			L_41 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_40, NULL);
			if (!L_41)
			{
				goto IL_01cb_1;
			}
		}
		{
			// Debug.LogWarning($"[{nameof(RecordingManager)}] {path} already exists, attempting to delete");
			String_t* L_42 = __this->___U3CpathU3E5__9_14;
			String_t* L_43;
			L_43 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68, L_42, _stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_43, NULL);
			// File.Delete(path);
			String_t* L_44 = __this->___U3CpathU3E5__9_14;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_44, NULL);
		}

IL_01cb_1:
		{
			// var outStream = new FileStream(path, FileMode.Create, FileAccess.Write);
			String_t* L_45 = __this->___U3CpathU3E5__9_14;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_46 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_46);
			FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_46, L_45, 2, 2, NULL);
			__this->___U3CoutStreamU3E5__10_15 = L_46;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__10_15), (void*)L_46);
			// var writer = new BinaryWriter(outStream);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_47 = __this->___U3CoutStreamU3E5__10_15;
			BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_48 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
			NullCheck(L_48);
			BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_48, L_47, NULL);
			__this->___U3CwriterU3E5__11_16 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwriterU3E5__11_16), (void*)L_48);
			__this->___U3CU3E7__wrap12_19 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap12_19), (void*)NULL);
			__this->___U3CU3E7__wrap13_20 = 0;
		}

IL_01fd_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_49 = V_0;
			}
			try
			{// begin try (depth: 3)
				{
					int32_t L_50 = V_0;
					switch (((int32_t)il2cpp_codegen_subtract(L_50, 1)))
					{
						case 0:
						{
							goto IL_0348_3;
						}
						case 1:
						{
							goto IL_03eb_3;
						}
						case 2:
						{
							goto IL_04e0_3;
						}
						case 3:
						{
							goto IL_0685_3;
						}
					}
				}
				{
					// writer.Write(Constants.RIFF.ToCharArray());
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = __this->___U3CwriterU3E5__11_16;
					NullCheck(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_52;
					L_52 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758, NULL);
					NullCheck(L_51);
					VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_51, L_52);
					// writer.Write(0); // temp data
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_53);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_53, 0);
					// writer.Write(Constants.WAVE.ToCharArray());
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_54 = __this->___U3CwriterU3E5__11_16;
					NullCheck(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55;
					L_55 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E, NULL);
					NullCheck(L_54);
					VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_54, L_55);
					// writer.Write(Constants.FMT.ToCharArray());
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_56 = __this->___U3CwriterU3E5__11_16;
					NullCheck(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57;
					L_57 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F, NULL);
					NullCheck(L_56);
					VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_56, L_57);
					// writer.Write(16);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_58 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_58);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_58, ((int32_t)16));
					// writer.Write((ushort)1);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_59);
					VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_59, (uint16_t)1);
					// writer.Write((ushort)channels);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_60 = __this->___U3CwriterU3E5__11_16;
					int32_t L_61 = __this->___U3CchannelsU3E5__4_9;
					NullCheck(L_60);
					VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_60, (uint16_t)((int32_t)(uint16_t)L_61));
					// writer.Write(frequency);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_62 = __this->___U3CwriterU3E5__11_16;
					int32_t L_63 = __this->___U3CfrequencyU3E5__5_10;
					NullCheck(L_62);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_62, L_63);
					// writer.Write(frequency * channels * sizeof(short));
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_64 = __this->___U3CwriterU3E5__11_16;
					int32_t L_65 = __this->___U3CfrequencyU3E5__5_10;
					int32_t L_66 = __this->___U3CchannelsU3E5__4_9;
					NullCheck(L_64);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_64, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_65, L_66)), 2)));
					// writer.Write((ushort)(channels * sizeof(short)));
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_67 = __this->___U3CwriterU3E5__11_16;
					int32_t L_68 = __this->___U3CchannelsU3E5__4_9;
					NullCheck(L_67);
					VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_67, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_68, 2))));
					// writer.Write((ushort)16);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_69 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_69);
					VirtualActionInvoker1< uint16_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_69, (uint16_t)((int32_t)16));
					// writer.Write(Constants.DATA.ToCharArray());
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_70 = __this->___U3CwriterU3E5__11_16;
					NullCheck(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71;
					L_71 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
					NullCheck(L_70);
					VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_70, L_71);
					// writer.Write(0); // temp data
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_72 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_72);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_72, 0);
					// lastPosition = Constants.WavHeaderSize;
					__this->___U3ClastPositionU3E5__2_7 = ((int32_t)44);
					// var shouldStop = false;
					__this->___U3CshouldStopU3E5__16_22 = (bool)0;
				}

IL_030f_3:
				{
					// await Awaiters.UnityMainThread;
					il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
					UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_73;
					L_73 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_74;
					L_74 = AwaiterExtensions_GetAwaiter_mC96810DC801511CFFD411B50CE08286888FCABB2(L_73, NULL);
					V_6 = L_74;
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_75 = V_6;
					NullCheck(L_75);
					bool L_76;
					L_76 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(L_75, NULL);
					if (L_76)
					{
						goto IL_0365_3;
					}
				}
				{
					int32_t L_77 = 1;
					V_0 = L_77;
					__this->___U3CU3E1__state_0 = L_77;
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_78 = V_6;
					__this->___U3CU3Eu__2_24 = L_78;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)L_78);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_79 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E(L_79, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E_RuntimeMethod_var);
					goto IL_099f;
				}

IL_0348_3:
				{
					RuntimeObject* L_80 = __this->___U3CU3Eu__2_24;
					V_6 = ((SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25*)CastclassClass((RuntimeObject*)L_80, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var));
					__this->___U3CU3Eu__2_24 = NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)NULL);
					int32_t L_81 = (-1);
					V_0 = L_81;
					__this->___U3CU3E1__state_0 = L_81;
				}

IL_0365_3:
				{
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_82 = V_6;
					NullCheck(L_82);
					SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1(L_82, NULL);
					// var currentPosition = Microphone.GetPosition(null);
					int32_t L_83;
					L_83 = Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459((String_t*)NULL, NULL);
					__this->___U3CcurrentPositionU3E5__17_23 = L_83;
					// if (clip != null)
					AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_84 = __this->___clip_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					bool L_85;
					L_85 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_84, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
					if (!L_85)
					{
						goto IL_0399_3;
					}
				}
				{
					// clip.GetData(samples, 0);
					AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_86 = __this->___clip_3;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = __this->___U3CsamplesU3E5__7_12;
					NullCheck(L_86);
					bool L_88;
					L_88 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_86, L_87, 0, NULL);
				}

IL_0399_3:
				{
					// if (shouldStop)
					bool L_89 = __this->___U3CshouldStopU3E5__16_22;
					if (!L_89)
					{
						goto IL_03a7_3;
					}
				}
				{
					// Microphone.End(null);
					Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6((String_t*)NULL, NULL);
				}

IL_03a7_3:
				{
					// await Task.Delay(1).ConfigureAwait(false);
					il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_90;
					L_90 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(1, NULL);
					NullCheck(L_90);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_91;
					L_91 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_90, (bool)0, NULL);
					V_5 = L_91;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_92;
					L_92 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_92;
					bool L_93;
					L_93 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_93)
					{
						goto IL_0408_3;
					}
				}
				{
					int32_t L_94 = 2;
					V_0 = L_94;
					__this->___U3CU3E1__state_0 = L_94;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_95 = V_4;
					__this->___U3CU3Eu__1_18 = L_95;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_18))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_96 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190(L_96, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190_RuntimeMethod_var);
					goto IL_099f;
				}

IL_03eb_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_97 = __this->___U3CU3Eu__1_18;
					V_4 = L_97;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_98 = (&__this->___U3CU3Eu__1_18);
					il2cpp_codegen_initobj(L_98, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_99 = (-1);
					V_0 = L_99;
					__this->___U3CU3E1__state_0 = L_99;
				}

IL_0408_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// if (currentPosition != 0)
					int32_t L_100 = __this->___U3CcurrentPositionU3E5__17_23;
					if (!L_100)
					{
						goto IL_04a7_3;
					}
				}
				{
					// var sampleIndex = 0;
					V_7 = 0;
					// var length = currentPosition - lastPosition;
					int32_t L_101 = __this->___U3CcurrentPositionU3E5__17_23;
					int32_t L_102 = __this->___U3ClastPositionU3E5__2_7;
					V_8 = ((int32_t)il2cpp_codegen_subtract(L_101, L_102));
					// foreach (var pcm in samples)
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_103 = __this->___U3CsamplesU3E5__7_12;
					V_9 = L_103;
					V_10 = 0;
					goto IL_0471_3;
				}

IL_0439_3:
				{
					// foreach (var pcm in samples)
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_104 = V_9;
					int32_t L_105 = V_10;
					NullCheck(L_104);
					int32_t L_106 = L_105;
					float L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
					// var sample = (short)(pcm * short.MaxValue);
					V_11 = il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_107, (32767.0f))));
					// readBuffer[sampleIndex++] = (byte)(sample >> 0);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___U3CreadBufferU3E5__8_13;
					int32_t L_109 = V_7;
					int32_t L_110 = L_109;
					V_7 = ((int32_t)il2cpp_codegen_add(L_110, 1));
					int16_t L_111 = V_11;
					NullCheck(L_108);
					(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (uint8_t)((int32_t)(uint8_t)L_111));
					// readBuffer[sampleIndex++] = (byte)(sample >> 8);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = __this->___U3CreadBufferU3E5__8_13;
					int32_t L_113 = V_7;
					int32_t L_114 = L_113;
					V_7 = ((int32_t)il2cpp_codegen_add(L_114, 1));
					int16_t L_115 = V_11;
					NullCheck(L_112);
					(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_115>>8))));
					int32_t L_116 = V_10;
					V_10 = ((int32_t)il2cpp_codegen_add(L_116, 1));
				}

IL_0471_3:
				{
					// foreach (var pcm in samples)
					int32_t L_117 = V_10;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_118 = V_9;
					NullCheck(L_118);
					if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
					{
						goto IL_0439_3;
					}
				}
				{
					// writer.Write(new ReadOnlySpan<byte>(readBuffer, lastPosition * sizeof(short), length * sizeof(short)));
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_119 = __this->___U3CwriterU3E5__11_16;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = __this->___U3CreadBufferU3E5__8_13;
					int32_t L_121 = __this->___U3ClastPositionU3E5__2_7;
					int32_t L_122 = V_8;
					ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_123;
					memset((&L_123), 0, sizeof(L_123));
					ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_123), L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 2)), ((int32_t)il2cpp_codegen_multiply(L_122, 2)), /*hidden argument*/ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_RuntimeMethod_var);
					NullCheck(L_119);
					VirtualActionInvoker1< ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.ReadOnlySpan`1<System.Byte>) */, L_119, L_123);
					// lastPosition = currentPosition;
					int32_t L_124 = __this->___U3CcurrentPositionU3E5__17_23;
					__this->___U3ClastPositionU3E5__2_7 = L_124;
				}

IL_04a7_3:
				{
					// await Awaiters.UnityMainThread;
					il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
					UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_125;
					L_125 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_126;
					L_126 = AwaiterExtensions_GetAwaiter_mC96810DC801511CFFD411B50CE08286888FCABB2(L_125, NULL);
					V_6 = L_126;
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_127 = V_6;
					NullCheck(L_127);
					bool L_128;
					L_128 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(L_127, NULL);
					if (L_128)
					{
						goto IL_04fd_3;
					}
				}
				{
					int32_t L_129 = 3;
					V_0 = L_129;
					__this->___U3CU3E1__state_0 = L_129;
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_130 = V_6;
					__this->___U3CU3Eu__2_24 = L_130;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)L_130);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_131 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E(L_131, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E_RuntimeMethod_var);
					goto IL_099f;
				}

IL_04e0_3:
				{
					RuntimeObject* L_132 = __this->___U3CU3Eu__2_24;
					V_6 = ((SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25*)CastclassClass((RuntimeObject*)L_132, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var));
					__this->___U3CU3Eu__2_24 = NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)NULL);
					int32_t L_133 = (-1);
					V_0 = L_133;
					__this->___U3CU3E1__state_0 = L_133;
				}

IL_04fd_3:
				{
					SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_134 = V_6;
					NullCheck(L_134);
					SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1(L_134, NULL);
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_135;
					L_135 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_135)
					{
						goto IL_055e_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] State: {nameof(RecordingManager.IsRecording)}? {RecordingManager.IsRecording} | {currentPosition} | isCancelled? {cancellationToken.IsCancellationRequested}");
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_136 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_137 = L_136;
					NullCheck(L_137);
					ArrayElementTypeCheck (L_137, _stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
					(L_137)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_138 = L_137;
					NullCheck(L_138);
					ArrayElementTypeCheck (L_138, _stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
					(L_138)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_139 = L_138;
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_140;
					L_140 = RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842(NULL);
					bool L_141 = L_140;
					RuntimeObject* L_142 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_141);
					NullCheck(L_139);
					ArrayElementTypeCheck (L_139, L_142);
					(L_139)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_142);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_143 = L_139;
					int32_t L_144 = __this->___U3CcurrentPositionU3E5__17_23;
					int32_t L_145 = L_144;
					RuntimeObject* L_146 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_145);
					NullCheck(L_143);
					ArrayElementTypeCheck (L_143, L_146);
					(L_143)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_146);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_147 = L_143;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_148 = (&__this->___cancellationToken_5);
					bool L_149;
					L_149 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_148, NULL);
					bool L_150 = L_149;
					RuntimeObject* L_151 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_150);
					NullCheck(L_147);
					ArrayElementTypeCheck (L_147, L_151);
					(L_147)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_151);
					String_t* L_152;
					L_152 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E, L_147, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_152, NULL);
				}

IL_055e_3:
				{
					// if (currentPosition == sampleCount ||
					//     cancellationToken.IsCancellationRequested)
					int32_t L_153 = __this->___U3CcurrentPositionU3E5__17_23;
					int32_t L_154 = __this->___U3CsampleCountU3E5__6_11;
					if ((((int32_t)L_153) == ((int32_t)L_154)))
					{
						goto IL_057c_3;
					}
				}
				{
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_155 = (&__this->___cancellationToken_5);
					bool L_156;
					L_156 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_155, NULL);
					if (!L_156)
					{
						goto IL_030f_3;
					}
				}

IL_057c_3:
				{
					// if (RecordingManager.IsRecording)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_157;
					L_157 = RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842(NULL);
					if (!L_157)
					{
						goto IL_059a_3;
					}
				}
				{
					// RecordingManager.IsRecording = false;
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					RecordingManager_set_IsRecording_mA048B915DF22BC4B0BC60AF4BEC7879D86934953((bool)0, NULL);
					// if (RecordingManager.EnableDebug)
					bool L_158;
					L_158 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_158)
					{
						goto IL_059a_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Finished recording...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5, NULL);
				}

IL_059a_3:
				{
					// if (shouldStop)
					bool L_159 = __this->___U3CshouldStopU3E5__16_22;
					if (!L_159)
					{
						goto IL_0603_3;
					}
				}
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_160;
					L_160 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_160)
					{
						goto IL_05b3_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Writing end of stream...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90, NULL);
				}

IL_05b3_3:
				{
					// var fileSize = outStream.Position;
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_161 = __this->___U3CoutStreamU3E5__10_15;
					NullCheck(L_161);
					int64_t L_162;
					L_162 = VirtualFuncInvoker0< int64_t >::Invoke(13 /* System.Int64 System.IO.Stream::get_Position() */, L_161);
					V_12 = L_162;
					// writer.Seek(4, SeekOrigin.Begin);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_163 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_163);
					int64_t L_164;
					L_164 = VirtualFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(9 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_163, 4, 0);
					// writer.Write((int)(fileSize - 8));
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_165 = __this->___U3CwriterU3E5__11_16;
					int64_t L_166 = V_12;
					NullCheck(L_165);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_165, ((int32_t)((int64_t)il2cpp_codegen_subtract(L_166, ((int64_t)8)))));
					// writer.Seek(40, SeekOrigin.Begin);
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_167 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_167);
					int64_t L_168;
					L_168 = VirtualFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(9 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_167, ((int32_t)40), 0);
					// writer.Write(lastPosition * sizeof(short));
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_169 = __this->___U3CwriterU3E5__11_16;
					int32_t L_170 = __this->___U3ClastPositionU3E5__2_7;
					NullCheck(L_169);
					VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_169, ((int32_t)il2cpp_codegen_multiply(L_170, 2)));
					// break;
					goto IL_0620_3;
				}

IL_0603_3:
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_171;
					L_171 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_171)
					{
						goto IL_0614_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Stop stream requested...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68, NULL);
				}

IL_0614_3:
				{
					// shouldStop = true;
					__this->___U3CshouldStopU3E5__16_22 = (bool)1;
					// while (true)
					goto IL_030f_3;
				}

IL_0620_3:
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_172;
					L_172 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_172)
					{
						goto IL_0631_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Flush stream...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7, NULL);
				}

IL_0631_3:
				{
					// writer.Flush();
					BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_173 = __this->___U3CwriterU3E5__11_16;
					NullCheck(L_173);
					VirtualActionInvoker0::Invoke(8 /* System.Void System.IO.BinaryWriter::Flush() */, L_173);
					// await outStream.FlushAsync().ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_174 = __this->___U3CoutStreamU3E5__10_15;
					NullCheck(L_174);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_175;
					L_175 = Stream_FlushAsync_m2C8614B69BF3C562B2BEFACAC1183FA5F3C2BBEF(L_174, NULL);
					NullCheck(L_175);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_176;
					L_176 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_175, (bool)0, NULL);
					V_5 = L_176;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_177;
					L_177 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_177;
					bool L_178;
					L_178 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_178)
					{
						goto IL_06a2_3;
					}
				}
				{
					int32_t L_179 = 4;
					V_0 = L_179;
					__this->___U3CU3E1__state_0 = L_179;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_180 = V_4;
					__this->___U3CU3Eu__1_18 = L_180;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_18))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_181 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190(L_181, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m8DD5A8E8169715FF19B89894FD19DA165E71B190_RuntimeMethod_var);
					goto IL_099f;
				}

IL_0685_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_182 = __this->___U3CU3Eu__1_18;
					V_4 = L_182;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_183 = (&__this->___U3CU3Eu__1_18);
					il2cpp_codegen_initobj(L_183, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_184 = (-1);
					V_0 = L_184;
					__this->___U3CU3E1__state_0 = L_184;
				}

IL_06a2_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// }
					goto IL_06b9_2;
				}
			}// end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_06ab_2;
				}
				throw e;
			}

CATCH_06ab_2:
			{// begin catch(System.Exception)
				// Debug.LogError(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				__this->___U3CU3E7__wrap14_21 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap14_21), (void*)(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_06bb_2;
			}// end catch (depth: 3)

IL_06b9_2:
			{
				goto IL_06d0_1;
			}

IL_06bb_2:
			{
				__this->___U3CU3E7__wrap13_20 = 1;
				goto IL_06d0_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_06c4_1;
			}
			throw e;
		}

CATCH_06c4_1:
		{// begin catch(System.Object)
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_185 = V_13;
			__this->___U3CU3E7__wrap12_19 = L_185;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap12_19), (void*)L_185);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_06d0_1;
		}// end catch (depth: 2)

IL_06d0_1:
		{
			// if (RecordingManager.EnableDebug)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_186;
			L_186 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_186)
			{
				goto IL_06e1_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Dispose stream...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3, NULL);
		}

IL_06e1_1:
		{
			// await writer.DisposeAsync().ConfigureAwait(false);
			BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_187 = __this->___U3CwriterU3E5__11_16;
			NullCheck(L_187);
			ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_188;
			L_188 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(11 /* System.Threading.Tasks.ValueTask System.IO.BinaryWriter::DisposeAsync() */, L_187);
			V_15 = L_188;
			ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_189;
			L_189 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_15), (bool)0, NULL);
			V_16 = L_189;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_190;
			L_190 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_16), NULL);
			V_14 = L_190;
			bool L_191;
			L_191 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_14), NULL);
			if (L_191)
			{
				goto IL_074b_1;
			}
		}
		{
			int32_t L_192 = 5;
			V_0 = L_192;
			__this->___U3CU3E1__state_0 = L_192;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_193 = V_14;
			__this->___U3CU3Eu__3_25 = L_193;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_25))->____value_0))->____obj_1), (void*)NULL);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_194 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B(L_194, (&V_14), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B_RuntimeMethod_var);
			goto IL_099f;
		}

IL_072e_1:
		{
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_195 = __this->___U3CU3Eu__3_25;
			V_14 = L_195;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_196 = (&__this->___U3CU3Eu__3_25);
			il2cpp_codegen_initobj(L_196, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
			int32_t L_197 = (-1);
			V_0 = L_197;
			__this->___U3CU3E1__state_0 = L_197;
		}

IL_074b_1:
		{
			ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_14), NULL);
			// await outStream.DisposeAsync().ConfigureAwait(false);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_198 = __this->___U3CoutStreamU3E5__10_15;
			NullCheck(L_198);
			ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_199;
			L_199 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(39 /* System.Threading.Tasks.ValueTask System.IO.Stream::DisposeAsync() */, L_198);
			V_15 = L_199;
			ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_200;
			L_200 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_15), (bool)0, NULL);
			V_16 = L_200;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_201;
			L_201 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_16), NULL);
			V_14 = L_201;
			bool L_202;
			L_202 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_14), NULL);
			if (L_202)
			{
				goto IL_07bc_1;
			}
		}
		{
			int32_t L_203 = 6;
			V_0 = L_203;
			__this->___U3CU3E1__state_0 = L_203;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_204 = V_14;
			__this->___U3CU3Eu__3_25 = L_204;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_25))->____value_0))->____obj_1), (void*)NULL);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_205 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B(L_205, (&V_14), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_m175729E42486700564F45EF9ED911A6EC825BE5B_RuntimeMethod_var);
			goto IL_099f;
		}

IL_079f_1:
		{
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_206 = __this->___U3CU3Eu__3_25;
			V_14 = L_206;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_207 = (&__this->___U3CU3Eu__3_25);
			il2cpp_codegen_initobj(L_207, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
			int32_t L_208 = (-1);
			V_0 = L_208;
			__this->___U3CU3E1__state_0 = L_208;
		}

IL_07bc_1:
		{
			ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_14), NULL);
			RuntimeObject* L_209 = __this->___U3CU3E7__wrap12_19;
			V_13 = L_209;
			RuntimeObject* L_210 = V_13;
			if (!L_210)
			{
				goto IL_07e6_1;
			}
		}
		{
			RuntimeObject* L_211 = V_13;
			Exception_t* L_212 = ((Exception_t*)IsInstClass((RuntimeObject*)L_211, Exception_t_il2cpp_TypeInfo_var));
			G_B74_0 = L_212;
			if (L_212)
			{
				G_B75_0 = L_212;
				goto IL_07dc_1;
			}
		}
		{
			RuntimeObject* L_213 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_213, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_RuntimeMethod_var)));
		}

IL_07dc_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_214;
			L_214 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B75_0, NULL);
			NullCheck(L_214);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_214, NULL);
		}

IL_07e6_1:
		{
			int32_t L_215 = __this->___U3CU3E7__wrap13_20;
			V_10 = L_215;
			int32_t L_216 = V_10;
			if ((!(((uint32_t)L_216) == ((uint32_t)1))))
			{
				goto IL_07ff_1;
			}
		}
		{
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_217 = __this->___U3CU3E7__wrap14_21;
			V_1 = L_217;
			goto IL_095a;
		}

IL_07ff_1:
		{
			__this->___U3CU3E7__wrap12_19 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap12_19), (void*)NULL);
			__this->___U3CU3E7__wrap14_21 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap14_21), (void*)(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL);
			// if (RecordingManager.EnableDebug)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_218;
			L_218 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_218)
			{
				goto IL_081e_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Copying recording data stream...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7, NULL);
		}

IL_081e_1:
		{
			// var microphoneData = new float[lastPosition];
			int32_t L_219 = __this->___U3ClastPositionU3E5__2_7;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_220 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_219);
			__this->___U3CmicrophoneDataU3E5__12_17 = L_220;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__12_17), (void*)L_220);
			// Array.Copy(samples, microphoneData, microphoneData.Length - 1);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_221 = __this->___U3CsamplesU3E5__7_12;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_222 = __this->___U3CmicrophoneDataU3E5__12_17;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_223 = __this->___U3CmicrophoneDataU3E5__12_17;
			NullCheck(L_223);
			Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_221, (RuntimeArray*)L_222, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_223)->max_length)), 1)), NULL);
			// await Awaiters.UnityMainThread;
			il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
			UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_224;
			L_224 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_225;
			L_225 = AwaiterExtensions_GetAwaiter_mC96810DC801511CFFD411B50CE08286888FCABB2(L_224, NULL);
			V_6 = L_225;
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_226 = V_6;
			NullCheck(L_226);
			bool L_227;
			L_227 = SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline(L_226, NULL);
			if (L_227)
			{
				goto IL_08a0_1;
			}
		}
		{
			int32_t L_228 = 7;
			V_0 = L_228;
			__this->___U3CU3E1__state_0 = L_228;
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_229 = V_6;
			__this->___U3CU3Eu__2_24 = L_229;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)L_229);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_230 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E(L_230, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_TisU3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA_mE0B6D389D40FD591CBD606A666BC3FD4572DD45E_RuntimeMethod_var);
			goto IL_099f;
		}

IL_0883_1:
		{
			RuntimeObject* L_231 = __this->___U3CU3Eu__2_24;
			V_6 = ((SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25*)CastclassClass((RuntimeObject*)L_231, SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__2_24 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_24), (void*)NULL);
			int32_t L_232 = (-1);
			V_0 = L_232;
			__this->___U3CU3E1__state_0 = L_232;
		}

IL_08a0_1:
		{
			SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* L_233 = V_6;
			NullCheck(L_233);
			SimpleCoroutineAwaiter_GetResult_m15EE5EE65719C860AF24F8DF7572B64C309B69D1(L_233, NULL);
			// var newClip = AudioClip.Create(clipName, microphoneData.Length, channels, frequency, false);
			String_t* L_234 = __this->___U3CclipNameU3E5__3_8;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_235 = __this->___U3CmicrophoneDataU3E5__12_17;
			NullCheck(L_235);
			int32_t L_236 = __this->___U3CchannelsU3E5__4_9;
			int32_t L_237 = __this->___U3CfrequencyU3E5__5_10;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_238;
			L_238 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(L_234, ((int32_t)(((RuntimeArray*)L_235)->max_length)), L_236, L_237, (bool)0, NULL);
			V_2 = L_238;
			// newClip.SetData(microphoneData, 0);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_239 = V_2;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_240 = __this->___U3CmicrophoneDataU3E5__12_17;
			NullCheck(L_239);
			bool L_241;
			L_241 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_239, L_240, 0, NULL);
			// var result = new Tuple<string, AudioClip>(path, newClip);
			String_t* L_242 = __this->___U3CpathU3E5__9_14;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_243 = V_2;
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_244 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)il2cpp_codegen_object_new(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var);
			NullCheck(L_244);
			Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE(L_244, L_242, L_243, Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var);
			V_3 = L_244;
			// RecordingManager.IsProcessing = false;
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1((bool)0, NULL);
			// if (RecordingManager.EnableDebug)
			bool L_245;
			L_245 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_245)
			{
				goto IL_08fa_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Finished processing...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488, NULL);
		}

IL_08fa_1:
		{
			// callback?.Invoke(result);
			Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_246 = __this->___callback_6;
			Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_247 = L_246;
			G_B86_0 = L_247;
			if (L_247)
			{
				G_B87_0 = L_247;
				goto IL_0906_1;
			}
		}
		{
			goto IL_090c_1;
		}

IL_0906_1:
		{
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_248 = V_3;
			NullCheck(G_B87_0);
			Action_1_Invoke_mFF8241424A9BAD483DBC9139F1FB9A34D9AE62AE_inline(G_B87_0, L_248, NULL);
		}

IL_090c_1:
		{
			// return result;
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_249 = V_3;
			V_1 = L_249;
			goto IL_095a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0910;
		}
		throw e;
	}

CATCH_0910:
	{// begin catch(System.Exception)
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclipNameU3E5__3_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)(String_t*)NULL);
		__this->___U3CsamplesU3E5__7_12 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__7_12), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		__this->___U3CreadBufferU3E5__8_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreadBufferU3E5__8_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___U3CpathU3E5__9_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__9_14), (void*)(String_t*)NULL);
		__this->___U3CoutStreamU3E5__10_15 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__10_15), (void*)(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL);
		__this->___U3CwriterU3E5__11_16 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwriterU3E5__11_16), (void*)(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)NULL);
		__this->___U3CmicrophoneDataU3E5__12_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__12_17), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_250 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_251 = V_17;
		AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9(L_250, L_251, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_099f;
	}// end catch (depth: 1)

IL_095a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclipNameU3E5__3_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)(String_t*)NULL);
		__this->___U3CsamplesU3E5__7_12 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__7_12), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		__this->___U3CreadBufferU3E5__8_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreadBufferU3E5__8_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___U3CpathU3E5__9_14 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__9_14), (void*)(String_t*)NULL);
		__this->___U3CoutStreamU3E5__10_15 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__10_15), (void*)(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL);
		__this->___U3CwriterU3E5__11_16 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwriterU3E5__11_16), (void*)(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)NULL);
		__this->___U3CmicrophoneDataU3E5__12_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__12_17), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_252 = (&__this->___U3CU3Et__builder_1);
		Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_253 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A(L_252, L_253, AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var);
	}

IL_099f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*>(__this + _offset);
	U3CStreamSaveToDiskAsyncU3Ed__0_MoveNext_m8DB98BE28F74E65D4CFF838184B9148348153986(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.Wav.WavEncoder/<StreamSaveToDiskAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__0_SetStateMachine_m82EB6193CC3AD3A20B0B49A5C567DA7275CED993 (U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamSaveToDiskAsyncU3Ed__0_SetStateMachine_m82EB6193CC3AD3A20B0B49A5C567DA7275CED993_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStreamSaveToDiskAsyncU3Ed__0_t3DB96694F44B94E77A1A2B91C45634565CBDADBA*>(__this + _offset);
	U3CStreamSaveToDiskAsyncU3Ed__0_SetStateMachine_m82EB6193CC3AD3A20B0B49A5C567DA7275CED993(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utilities.Encoding.Wav.WavRecordingBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WavRecordingBehaviour__ctor_m8DF3B0BA44F5E6605DEEE16C0E20C5CCAC96FDE0 (WavRecordingBehaviour_t4B3684952E52E2202A49A565AB5D99988E8FF1CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractRecordingBehaviour_1__ctor_m333F7EBA241AAEBB3C9384D7F1F914FF860FC6F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AbstractRecordingBehaviour_1__ctor_m333F7EBA241AAEBB3C9384D7F1F914FF860FC6F0(__this, AbstractRecordingBehaviour_1__ctor_m333F7EBA241AAEBB3C9384D7F1F914FF860FC6F0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = ((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m8E79D1C1A9831173CCA2EB80450E7B8B0817B06A_inline (SimpleCoroutineAwaiter_t37DFB9767BA805E1903350CC0301647F67ED5E25* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_1;
		int16_t L_1 = __this->____token_2;
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = __this->____value_0;
		ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool EnableDebug { get; set; }
		il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		bool L_0 = ((RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_StaticFields*)il2cpp_codegen_static_fields_for(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var))->___U3CEnableDebugU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___start1;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___length2;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____obj_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)L_0);
		int16_t L_1 = ___token1;
		__this->____token_2 = L_1;
		bool L_2 = ___continueOnCapturedContext2;
		__this->____continueOnCapturedContext_3 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_4, NULL);
		return;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = il2cpp_unsafe_as<RuntimeObject*>(L_5);
		int16_t L_7 = __this->____token_2;
		NullCheck(L_6);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
