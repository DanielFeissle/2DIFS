#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DeleteEverything
struct DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63;
// DestroyAfterDistance
struct DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C;
// DestroyAfterStartTime
struct DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06;
// Exp2017
struct Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// POLF
struct POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TouchAndDie
struct TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UPUPaway
struct UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// VertMinusCameraFOV
struct VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WorldLoader
struct WorldLoader_tB25E1D98F63A3850238DB60096D81FD94F30B6D2;
// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF;
// alt_gauge
struct alt_gauge_tCD8EF9AE6165A0E768B78D3C7FFA68DA067D2DFA;
// mplane_controller
struct mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2;
// pIntegrity
struct pIntegrity_t3660C86E5EFEEDD5749FAF372CCF1EC8CFAC57AA;
// realDeleteAfterPlainAniScript
struct realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024;
// realGenericButton
struct realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A;
// realGenericButtonListner
struct realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE;
// wheelHealth
struct wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316;
// wogen1
struct wogen1_t420F1173A8F2A5A9720B687848CAE322166F51F4;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// mplane_controller/<GetSpeed>d__55
struct U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1117FCBEB4DD26399CFF49C4E456FB501B25F1A1;
IL2CPP_EXTERN_C String_t* _stringLiteral13F3D34AA162025D98C63ADF6080554F07E0AB3F;
IL2CPP_EXTERN_C String_t* _stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25;
IL2CPP_EXTERN_C String_t* _stringLiteral181E9435AD514E31987A68ADB30D178B9B95DCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1BDF24CBBF623C17D4A827055BA8C9A9F5230B53;
IL2CPP_EXTERN_C String_t* _stringLiteral1DDD6F4084868EA9A579867F6A43C49508718CE8;
IL2CPP_EXTERN_C String_t* _stringLiteral2099E55A52864065039492AA67ECE286527C20A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2139A356C5F48773DB17C61284D45AB3A82DF1BD;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F436BE9C8024C923F77167C3E8C78F781278FC8;
IL2CPP_EXTERN_C String_t* _stringLiteral388ED85BF00F1B3E555675535E4FE09C9C6455C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92;
IL2CPP_EXTERN_C String_t* _stringLiteral409FA91D53D91CBDE9CA93A796B4EAF58787052F;
IL2CPP_EXTERN_C String_t* _stringLiteral41F3F4BEFE895389DC863349A9EDF5CDCA51C993;
IL2CPP_EXTERN_C String_t* _stringLiteral45E0FB711BC6B37561C8B6C8D396041A203EFE75;
IL2CPP_EXTERN_C String_t* _stringLiteral460A278B95F6FE6C474F72CD405204A1EAF8B67D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEEFD25D1869129442FDA9D692ED24FF43F28C5;
IL2CPP_EXTERN_C String_t* _stringLiteral56249B5AD634747D3B38ABAD300430058EA1F6B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5734700A5FB7A8E96AE0C53330A882F21EB52F53;
IL2CPP_EXTERN_C String_t* _stringLiteral57C592A50CFF6DB10C0D353380E2A85D2F6951C8;
IL2CPP_EXTERN_C String_t* _stringLiteral587BBE369F5469239CC66C0072D1353BE41431AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5D20868E6724A929719D85A0C7E7BFAD004CC3;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE57020BC9BE9C1CEE4F4D374A864D2ACB7E41C;
IL2CPP_EXTERN_C String_t* _stringLiteral67D658583A794EC6D85470E7133EE566EABB9C6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C7AB7357637FB7E2DBEC2E22BC2F52840DF5C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral72D407EAD80CD5AC447B938FBDFCCB0AB6B4B2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F50040D9ACC6690560900784FF8027F628B41A2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2;
IL2CPP_EXTERN_C String_t* _stringLiteral868229D86F307A2C5496E790C6B36DDDB1796BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117;
IL2CPP_EXTERN_C String_t* _stringLiteral8F613818B9E75C9DAF880518950A7F42921E3FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral92E8D61B76F0862EDB76828154D9A37E6BA31916;
IL2CPP_EXTERN_C String_t* _stringLiteral98CC9ECD766E8B33B5EB6119EEDE7EFED4F1ABAC;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C1C4C13780AEAAB9765F9C087D47D0448D947B;
IL2CPP_EXTERN_C String_t* _stringLiteralAD684D95DBBE39EFA353A7A068D17689761F993D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3936608F8AB1C0E605D1A0721A22925DCD517F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC14DE0F0E9FD7D7E8EC4EBC61865AD9030B2E6FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC339E6D798E448CF162409CCD8065B85E4CE19D0;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CBC5C2033E2AE3C4C3A498084FDB81CEC9D83C;
IL2CPP_EXTERN_C String_t* _stringLiteralC63DC366F5C0448ADCACA61ED363D49CBC0DF239;
IL2CPP_EXTERN_C String_t* _stringLiteralC7810AA46E8C2E73876600EC5E006FC63B66F2B9;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD5FDB825E9A819C919A3F31844C00E48E2571E;
IL2CPP_EXTERN_C String_t* _stringLiteralD74D04486A2657C56BC5A7F24DB828FC2EEB3116;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE48DA6E31FE87AB95994C9FFB352959102FAB7C;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB75C3A1E4503B289543C11CE87E5A8580FD0BA;
IL2CPP_EXTERN_C String_t* _stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0BF3AC8BCEA21E01F5EE39C07E24030D99CF0B2;
IL2CPP_EXTERN_C String_t* _stringLiteralE334DC21F5219A6AA102B97D59C987FD73E038E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE6208679377669197F37E13713C654CFBDAA11EE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisrealGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE_m7A3B9E8A85DE942FCAFD7473557715F54712B96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetSpeedU3Ed__55_System_Collections_IEnumerator_Reset_m8A36859AA26E7CB6868D2397ECB82D2CCF6465F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* realGenericButton_TaskOnClick_mEAC0C9E484EF63F4E871DF08023D380C4119B4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_0_0_0_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.ContactPoint2D
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Point_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Normal_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_RelativeVelocity_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RigidbodyConstraints2D
struct RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// mplane_controller/<GetSpeed>d__55
struct U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4  : public RuntimeObject
{
public:
	// System.Int32 mplane_controller/<GetSpeed>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object mplane_controller/<GetSpeed>d__55::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// mplane_controller mplane_controller/<GetSpeed>d__55::<>4__this
	mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * ___U3CU3E4__this_2;
	// UnityEngine.YieldInstruction mplane_controller/<GetSpeed>d__55::<timedWait>5__2
	YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * ___U3CtimedWaitU3E5__2_3;
	// UnityEngine.Vector3 mplane_controller/<GetSpeed>d__55::<lastPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClastPositionU3E5__3_4;
	// System.Single mplane_controller/<GetSpeed>d__55::<lastTimestamp>5__4
	float ___U3ClastTimestampU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3CU3E4__this_2)); }
	inline mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimedWaitU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3CtimedWaitU3E5__2_3)); }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * get_U3CtimedWaitU3E5__2_3() const { return ___U3CtimedWaitU3E5__2_3; }
	inline YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF ** get_address_of_U3CtimedWaitU3E5__2_3() { return &___U3CtimedWaitU3E5__2_3; }
	inline void set_U3CtimedWaitU3E5__2_3(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * value)
	{
		___U3CtimedWaitU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtimedWaitU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPositionU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3ClastPositionU3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClastPositionU3E5__3_4() const { return ___U3ClastPositionU3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClastPositionU3E5__3_4() { return &___U3ClastPositionU3E5__3_4; }
	inline void set_U3ClastPositionU3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClastPositionU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3ClastTimestampU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4, ___U3ClastTimestampU3E5__4_5)); }
	inline float get_U3ClastTimestampU3E5__4_5() const { return ___U3ClastTimestampU3E5__4_5; }
	inline float* get_address_of_U3ClastTimestampU3E5__4_5() { return &___U3ClastTimestampU3E5__4_5; }
	inline void set_U3ClastTimestampU3E5__4_5(float value)
	{
		___U3ClastTimestampU3E5__4_5 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___offset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_5() const { return ___offset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_5 = value;
	}
};


// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// DeleteEverything
struct DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DestroyAfterDistance
struct DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DestroyAfterDistance::mainChar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainChar_4;

public:
	inline static int32_t get_offset_of_mainChar_4() { return static_cast<int32_t>(offsetof(DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C, ___mainChar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainChar_4() const { return ___mainChar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainChar_4() { return &___mainChar_4; }
	inline void set_mainChar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainChar_4), (void*)value);
	}
};


// DestroyAfterStartTime
struct DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DestroyAfterStartTime::delay
	float ___delay_4;
	// System.Single DestroyAfterStartTime::nextUsage
	float ___nextUsage_5;

public:
	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_nextUsage_5() { return static_cast<int32_t>(offsetof(DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06, ___nextUsage_5)); }
	inline float get_nextUsage_5() const { return ___nextUsage_5; }
	inline float* get_address_of_nextUsage_5() { return &___nextUsage_5; }
	inline void set_nextUsage_5(float value)
	{
		___nextUsage_5 = value;
	}
};


// Exp2017
struct Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Exp2017::delay
	float ___delay_4;
	// System.Single Exp2017::nextUsage
	float ___nextUsage_5;
	// System.Int32 Exp2017::fired
	int32_t ___fired_6;
	// UnityEngine.AudioClip Exp2017::exp5
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___exp5_7;
	// System.Int32 Exp2017::expSize
	int32_t ___expSize_8;

public:
	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_nextUsage_5() { return static_cast<int32_t>(offsetof(Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28, ___nextUsage_5)); }
	inline float get_nextUsage_5() const { return ___nextUsage_5; }
	inline float* get_address_of_nextUsage_5() { return &___nextUsage_5; }
	inline void set_nextUsage_5(float value)
	{
		___nextUsage_5 = value;
	}

	inline static int32_t get_offset_of_fired_6() { return static_cast<int32_t>(offsetof(Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28, ___fired_6)); }
	inline int32_t get_fired_6() const { return ___fired_6; }
	inline int32_t* get_address_of_fired_6() { return &___fired_6; }
	inline void set_fired_6(int32_t value)
	{
		___fired_6 = value;
	}

	inline static int32_t get_offset_of_exp5_7() { return static_cast<int32_t>(offsetof(Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28, ___exp5_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_exp5_7() const { return ___exp5_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_exp5_7() { return &___exp5_7; }
	inline void set_exp5_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___exp5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exp5_7), (void*)value);
	}

	inline static int32_t get_offset_of_expSize_8() { return static_cast<int32_t>(offsetof(Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28, ___expSize_8)); }
	inline int32_t get_expSize_8() const { return ___expSize_8; }
	inline int32_t* get_address_of_expSize_8() { return &___expSize_8; }
	inline void set_expSize_8(int32_t value)
	{
		___expSize_8 = value;
	}
};


// POLF
struct POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Double POLF::curTime
	double ___curTime_4;
	// System.Single POLF::MaxSpeed
	float ___MaxSpeed_5;
	// System.Single POLF::impactDev
	float ___impactDev_6;
	// System.Double POLF::MaxAlt
	double ___MaxAlt_7;
	// System.Boolean POLF::bailed
	bool ___bailed_8;
	// System.String POLF::stats_msg
	String_t* ___stats_msg_9;
	// System.Single POLF::delay
	float ___delay_10;
	// System.Single POLF::nextUsage
	float ___nextUsage_11;
	// System.Boolean POLF::timeStart
	bool ___timeStart_12;
	// System.Boolean POLF::curSceneOver
	bool ___curSceneOver_13;

public:
	inline static int32_t get_offset_of_curTime_4() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___curTime_4)); }
	inline double get_curTime_4() const { return ___curTime_4; }
	inline double* get_address_of_curTime_4() { return &___curTime_4; }
	inline void set_curTime_4(double value)
	{
		___curTime_4 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_5() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___MaxSpeed_5)); }
	inline float get_MaxSpeed_5() const { return ___MaxSpeed_5; }
	inline float* get_address_of_MaxSpeed_5() { return &___MaxSpeed_5; }
	inline void set_MaxSpeed_5(float value)
	{
		___MaxSpeed_5 = value;
	}

	inline static int32_t get_offset_of_impactDev_6() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___impactDev_6)); }
	inline float get_impactDev_6() const { return ___impactDev_6; }
	inline float* get_address_of_impactDev_6() { return &___impactDev_6; }
	inline void set_impactDev_6(float value)
	{
		___impactDev_6 = value;
	}

	inline static int32_t get_offset_of_MaxAlt_7() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___MaxAlt_7)); }
	inline double get_MaxAlt_7() const { return ___MaxAlt_7; }
	inline double* get_address_of_MaxAlt_7() { return &___MaxAlt_7; }
	inline void set_MaxAlt_7(double value)
	{
		___MaxAlt_7 = value;
	}

	inline static int32_t get_offset_of_bailed_8() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___bailed_8)); }
	inline bool get_bailed_8() const { return ___bailed_8; }
	inline bool* get_address_of_bailed_8() { return &___bailed_8; }
	inline void set_bailed_8(bool value)
	{
		___bailed_8 = value;
	}

	inline static int32_t get_offset_of_stats_msg_9() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___stats_msg_9)); }
	inline String_t* get_stats_msg_9() const { return ___stats_msg_9; }
	inline String_t** get_address_of_stats_msg_9() { return &___stats_msg_9; }
	inline void set_stats_msg_9(String_t* value)
	{
		___stats_msg_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stats_msg_9), (void*)value);
	}

	inline static int32_t get_offset_of_delay_10() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___delay_10)); }
	inline float get_delay_10() const { return ___delay_10; }
	inline float* get_address_of_delay_10() { return &___delay_10; }
	inline void set_delay_10(float value)
	{
		___delay_10 = value;
	}

	inline static int32_t get_offset_of_nextUsage_11() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___nextUsage_11)); }
	inline float get_nextUsage_11() const { return ___nextUsage_11; }
	inline float* get_address_of_nextUsage_11() { return &___nextUsage_11; }
	inline void set_nextUsage_11(float value)
	{
		___nextUsage_11 = value;
	}

	inline static int32_t get_offset_of_timeStart_12() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___timeStart_12)); }
	inline bool get_timeStart_12() const { return ___timeStart_12; }
	inline bool* get_address_of_timeStart_12() { return &___timeStart_12; }
	inline void set_timeStart_12(bool value)
	{
		___timeStart_12 = value;
	}

	inline static int32_t get_offset_of_curSceneOver_13() { return static_cast<int32_t>(offsetof(POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5, ___curSceneOver_13)); }
	inline bool get_curSceneOver_13() const { return ___curSceneOver_13; }
	inline bool* get_address_of_curSceneOver_13() { return &___curSceneOver_13; }
	inline void set_curSceneOver_13(bool value)
	{
		___curSceneOver_13 = value;
	}
};


// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// TouchAndDie
struct TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String TouchAndDie::defTag1
	String_t* ___defTag1_4;
	// System.String TouchAndDie::defTag2
	String_t* ___defTag2_5;

public:
	inline static int32_t get_offset_of_defTag1_4() { return static_cast<int32_t>(offsetof(TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB, ___defTag1_4)); }
	inline String_t* get_defTag1_4() const { return ___defTag1_4; }
	inline String_t** get_address_of_defTag1_4() { return &___defTag1_4; }
	inline void set_defTag1_4(String_t* value)
	{
		___defTag1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defTag1_4), (void*)value);
	}

	inline static int32_t get_offset_of_defTag2_5() { return static_cast<int32_t>(offsetof(TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB, ___defTag2_5)); }
	inline String_t* get_defTag2_5() const { return ___defTag2_5; }
	inline String_t** get_address_of_defTag2_5() { return &___defTag2_5; }
	inline void set_defTag2_5(String_t* value)
	{
		___defTag2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defTag2_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UPUPaway
struct UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VertMinusCameraFOV
struct VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single VertMinusCameraFOV::targetRatio
	float ___targetRatio_4;

public:
	inline static int32_t get_offset_of_targetRatio_4() { return static_cast<int32_t>(offsetof(VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F, ___targetRatio_4)); }
	inline float get_targetRatio_4() const { return ___targetRatio_4; }
	inline float* get_address_of_targetRatio_4() { return &___targetRatio_4; }
	inline void set_targetRatio_4(float value)
	{
		___targetRatio_4 = value;
	}
};


// WorldLoader
struct WorldLoader_tB25E1D98F63A3850238DB60096D81FD94F30B6D2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// alt_gauge
struct alt_gauge_tCD8EF9AE6165A0E768B78D3C7FFA68DA067D2DFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// mplane_controller
struct mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D mplane_controller::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// System.Single mplane_controller::moveVertSense
	float ___moveVertSense_5;
	// System.Single mplane_controller::moveHorSense
	float ___moveHorSense_6;
	// System.Boolean mplane_controller::moveVertButt
	bool ___moveVertButt_7;
	// System.Single mplane_controller::moveVertSense2
	float ___moveVertSense2_8;
	// System.Boolean mplane_controller::bypass
	bool ___bypass_9;
	// System.Boolean mplane_controller::bypass2
	bool ___bypass2_10;
	// System.Single mplane_controller::engineSpool
	float ___engineSpool_11;
	// System.Boolean mplane_controller::moveHortButt
	bool ___moveHortButt_12;
	// System.Single mplane_controller::rotateSpeed
	float ___rotateSpeed_13;
	// UnityEngine.Vector3 mplane_controller::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_14;
	// UnityEngine.Vector3 mplane_controller::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_15;
	// System.Boolean mplane_controller::pdead
	bool ___pdead_16;
	// System.Boolean mplane_controller::toggleLandGear
	bool ___toggleLandGear_17;
	// System.Boolean mplane_controller::onground
	bool ___onground_18;
	// System.Boolean mplane_controller::heavyMass
	bool ___heavyMass_19;
	// System.Random mplane_controller::blarg
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___blarg_20;
	// UnityEngine.Animator mplane_controller::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_21;
	// System.Int32 mplane_controller::Xbox_One_Controller
	int32_t ___Xbox_One_Controller_22;
	// System.Int32 mplane_controller::PS4_Controller
	int32_t ___PS4_Controller_23;
	// System.Boolean mplane_controller::controlerUsed
	bool ___controlerUsed_24;
	// System.Boolean mplane_controller::movechk
	bool ___movechk_25;
	// System.Boolean mplane_controller::moveHorchk
	bool ___moveHorchk_26;
	// System.Single mplane_controller::impact
	float ___impact_27;
	// System.Double mplane_controller::OBJaltitude
	double ___OBJaltitude_28;
	// System.Double mplane_controller::altitude
	double ___altitude_29;
	// System.Single mplane_controller::basense
	float ___basense_30;
	// System.Single[] mplane_controller::speedArr
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___speedArr_31;
	// System.Single mplane_controller::res
	float ___res_32;
	// System.Int32 mplane_controller::gib
	int32_t ___gib_33;
	// System.Boolean mplane_controller::colSignal
	bool ___colSignal_34;
	// System.Int32 mplane_controller::postmortem
	int32_t ___postmortem_35;
	// System.Single mplane_controller::floatHeight
	float ___floatHeight_36;
	// System.Single mplane_controller::liftForce
	float ___liftForce_37;
	// System.Single mplane_controller::damping
	float ___damping_38;
	// System.Single mplane_controller::Speed
	float ___Speed_39;
	// System.Single mplane_controller::UpdateDelay
	float ___UpdateDelay_40;
	// System.Boolean mplane_controller::<IsGrounded>k__BackingField
	bool ___U3CIsGroundedU3Ek__BackingField_41;
	// UnityEngine.Transform mplane_controller::groundRaycaster
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundRaycaster_42;
	// UnityEngine.Transform mplane_controller::feetLocationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___feetLocationTransform_43;
	// System.Single mplane_controller::raycastDistance
	float ___raycastDistance_44;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_moveVertSense_5() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveVertSense_5)); }
	inline float get_moveVertSense_5() const { return ___moveVertSense_5; }
	inline float* get_address_of_moveVertSense_5() { return &___moveVertSense_5; }
	inline void set_moveVertSense_5(float value)
	{
		___moveVertSense_5 = value;
	}

	inline static int32_t get_offset_of_moveHorSense_6() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveHorSense_6)); }
	inline float get_moveHorSense_6() const { return ___moveHorSense_6; }
	inline float* get_address_of_moveHorSense_6() { return &___moveHorSense_6; }
	inline void set_moveHorSense_6(float value)
	{
		___moveHorSense_6 = value;
	}

	inline static int32_t get_offset_of_moveVertButt_7() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveVertButt_7)); }
	inline bool get_moveVertButt_7() const { return ___moveVertButt_7; }
	inline bool* get_address_of_moveVertButt_7() { return &___moveVertButt_7; }
	inline void set_moveVertButt_7(bool value)
	{
		___moveVertButt_7 = value;
	}

	inline static int32_t get_offset_of_moveVertSense2_8() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveVertSense2_8)); }
	inline float get_moveVertSense2_8() const { return ___moveVertSense2_8; }
	inline float* get_address_of_moveVertSense2_8() { return &___moveVertSense2_8; }
	inline void set_moveVertSense2_8(float value)
	{
		___moveVertSense2_8 = value;
	}

	inline static int32_t get_offset_of_bypass_9() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___bypass_9)); }
	inline bool get_bypass_9() const { return ___bypass_9; }
	inline bool* get_address_of_bypass_9() { return &___bypass_9; }
	inline void set_bypass_9(bool value)
	{
		___bypass_9 = value;
	}

	inline static int32_t get_offset_of_bypass2_10() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___bypass2_10)); }
	inline bool get_bypass2_10() const { return ___bypass2_10; }
	inline bool* get_address_of_bypass2_10() { return &___bypass2_10; }
	inline void set_bypass2_10(bool value)
	{
		___bypass2_10 = value;
	}

	inline static int32_t get_offset_of_engineSpool_11() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___engineSpool_11)); }
	inline float get_engineSpool_11() const { return ___engineSpool_11; }
	inline float* get_address_of_engineSpool_11() { return &___engineSpool_11; }
	inline void set_engineSpool_11(float value)
	{
		___engineSpool_11 = value;
	}

	inline static int32_t get_offset_of_moveHortButt_12() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveHortButt_12)); }
	inline bool get_moveHortButt_12() const { return ___moveHortButt_12; }
	inline bool* get_address_of_moveHortButt_12() { return &___moveHortButt_12; }
	inline void set_moveHortButt_12(bool value)
	{
		___moveHortButt_12 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_13() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___rotateSpeed_13)); }
	inline float get_rotateSpeed_13() const { return ___rotateSpeed_13; }
	inline float* get_address_of_rotateSpeed_13() { return &___rotateSpeed_13; }
	inline void set_rotateSpeed_13(float value)
	{
		___rotateSpeed_13 = value;
	}

	inline static int32_t get_offset_of_pos_14() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___pos_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_14() const { return ___pos_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_14() { return &___pos_14; }
	inline void set_pos_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_14 = value;
	}

	inline static int32_t get_offset_of_velocity_15() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___velocity_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_15() const { return ___velocity_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_15() { return &___velocity_15; }
	inline void set_velocity_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_15 = value;
	}

	inline static int32_t get_offset_of_pdead_16() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___pdead_16)); }
	inline bool get_pdead_16() const { return ___pdead_16; }
	inline bool* get_address_of_pdead_16() { return &___pdead_16; }
	inline void set_pdead_16(bool value)
	{
		___pdead_16 = value;
	}

	inline static int32_t get_offset_of_toggleLandGear_17() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___toggleLandGear_17)); }
	inline bool get_toggleLandGear_17() const { return ___toggleLandGear_17; }
	inline bool* get_address_of_toggleLandGear_17() { return &___toggleLandGear_17; }
	inline void set_toggleLandGear_17(bool value)
	{
		___toggleLandGear_17 = value;
	}

	inline static int32_t get_offset_of_onground_18() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___onground_18)); }
	inline bool get_onground_18() const { return ___onground_18; }
	inline bool* get_address_of_onground_18() { return &___onground_18; }
	inline void set_onground_18(bool value)
	{
		___onground_18 = value;
	}

	inline static int32_t get_offset_of_heavyMass_19() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___heavyMass_19)); }
	inline bool get_heavyMass_19() const { return ___heavyMass_19; }
	inline bool* get_address_of_heavyMass_19() { return &___heavyMass_19; }
	inline void set_heavyMass_19(bool value)
	{
		___heavyMass_19 = value;
	}

	inline static int32_t get_offset_of_blarg_20() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___blarg_20)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_blarg_20() const { return ___blarg_20; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_blarg_20() { return &___blarg_20; }
	inline void set_blarg_20(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___blarg_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blarg_20), (void*)value);
	}

	inline static int32_t get_offset_of_ani_21() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___ani_21)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_21() const { return ___ani_21; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_21() { return &___ani_21; }
	inline void set_ani_21(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_21), (void*)value);
	}

	inline static int32_t get_offset_of_Xbox_One_Controller_22() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___Xbox_One_Controller_22)); }
	inline int32_t get_Xbox_One_Controller_22() const { return ___Xbox_One_Controller_22; }
	inline int32_t* get_address_of_Xbox_One_Controller_22() { return &___Xbox_One_Controller_22; }
	inline void set_Xbox_One_Controller_22(int32_t value)
	{
		___Xbox_One_Controller_22 = value;
	}

	inline static int32_t get_offset_of_PS4_Controller_23() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___PS4_Controller_23)); }
	inline int32_t get_PS4_Controller_23() const { return ___PS4_Controller_23; }
	inline int32_t* get_address_of_PS4_Controller_23() { return &___PS4_Controller_23; }
	inline void set_PS4_Controller_23(int32_t value)
	{
		___PS4_Controller_23 = value;
	}

	inline static int32_t get_offset_of_controlerUsed_24() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___controlerUsed_24)); }
	inline bool get_controlerUsed_24() const { return ___controlerUsed_24; }
	inline bool* get_address_of_controlerUsed_24() { return &___controlerUsed_24; }
	inline void set_controlerUsed_24(bool value)
	{
		___controlerUsed_24 = value;
	}

	inline static int32_t get_offset_of_movechk_25() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___movechk_25)); }
	inline bool get_movechk_25() const { return ___movechk_25; }
	inline bool* get_address_of_movechk_25() { return &___movechk_25; }
	inline void set_movechk_25(bool value)
	{
		___movechk_25 = value;
	}

	inline static int32_t get_offset_of_moveHorchk_26() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___moveHorchk_26)); }
	inline bool get_moveHorchk_26() const { return ___moveHorchk_26; }
	inline bool* get_address_of_moveHorchk_26() { return &___moveHorchk_26; }
	inline void set_moveHorchk_26(bool value)
	{
		___moveHorchk_26 = value;
	}

	inline static int32_t get_offset_of_impact_27() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___impact_27)); }
	inline float get_impact_27() const { return ___impact_27; }
	inline float* get_address_of_impact_27() { return &___impact_27; }
	inline void set_impact_27(float value)
	{
		___impact_27 = value;
	}

	inline static int32_t get_offset_of_OBJaltitude_28() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___OBJaltitude_28)); }
	inline double get_OBJaltitude_28() const { return ___OBJaltitude_28; }
	inline double* get_address_of_OBJaltitude_28() { return &___OBJaltitude_28; }
	inline void set_OBJaltitude_28(double value)
	{
		___OBJaltitude_28 = value;
	}

	inline static int32_t get_offset_of_altitude_29() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___altitude_29)); }
	inline double get_altitude_29() const { return ___altitude_29; }
	inline double* get_address_of_altitude_29() { return &___altitude_29; }
	inline void set_altitude_29(double value)
	{
		___altitude_29 = value;
	}

	inline static int32_t get_offset_of_basense_30() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___basense_30)); }
	inline float get_basense_30() const { return ___basense_30; }
	inline float* get_address_of_basense_30() { return &___basense_30; }
	inline void set_basense_30(float value)
	{
		___basense_30 = value;
	}

	inline static int32_t get_offset_of_speedArr_31() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___speedArr_31)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_speedArr_31() const { return ___speedArr_31; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_speedArr_31() { return &___speedArr_31; }
	inline void set_speedArr_31(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___speedArr_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speedArr_31), (void*)value);
	}

	inline static int32_t get_offset_of_res_32() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___res_32)); }
	inline float get_res_32() const { return ___res_32; }
	inline float* get_address_of_res_32() { return &___res_32; }
	inline void set_res_32(float value)
	{
		___res_32 = value;
	}

	inline static int32_t get_offset_of_gib_33() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___gib_33)); }
	inline int32_t get_gib_33() const { return ___gib_33; }
	inline int32_t* get_address_of_gib_33() { return &___gib_33; }
	inline void set_gib_33(int32_t value)
	{
		___gib_33 = value;
	}

	inline static int32_t get_offset_of_colSignal_34() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___colSignal_34)); }
	inline bool get_colSignal_34() const { return ___colSignal_34; }
	inline bool* get_address_of_colSignal_34() { return &___colSignal_34; }
	inline void set_colSignal_34(bool value)
	{
		___colSignal_34 = value;
	}

	inline static int32_t get_offset_of_postmortem_35() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___postmortem_35)); }
	inline int32_t get_postmortem_35() const { return ___postmortem_35; }
	inline int32_t* get_address_of_postmortem_35() { return &___postmortem_35; }
	inline void set_postmortem_35(int32_t value)
	{
		___postmortem_35 = value;
	}

	inline static int32_t get_offset_of_floatHeight_36() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___floatHeight_36)); }
	inline float get_floatHeight_36() const { return ___floatHeight_36; }
	inline float* get_address_of_floatHeight_36() { return &___floatHeight_36; }
	inline void set_floatHeight_36(float value)
	{
		___floatHeight_36 = value;
	}

	inline static int32_t get_offset_of_liftForce_37() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___liftForce_37)); }
	inline float get_liftForce_37() const { return ___liftForce_37; }
	inline float* get_address_of_liftForce_37() { return &___liftForce_37; }
	inline void set_liftForce_37(float value)
	{
		___liftForce_37 = value;
	}

	inline static int32_t get_offset_of_damping_38() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___damping_38)); }
	inline float get_damping_38() const { return ___damping_38; }
	inline float* get_address_of_damping_38() { return &___damping_38; }
	inline void set_damping_38(float value)
	{
		___damping_38 = value;
	}

	inline static int32_t get_offset_of_Speed_39() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___Speed_39)); }
	inline float get_Speed_39() const { return ___Speed_39; }
	inline float* get_address_of_Speed_39() { return &___Speed_39; }
	inline void set_Speed_39(float value)
	{
		___Speed_39 = value;
	}

	inline static int32_t get_offset_of_UpdateDelay_40() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___UpdateDelay_40)); }
	inline float get_UpdateDelay_40() const { return ___UpdateDelay_40; }
	inline float* get_address_of_UpdateDelay_40() { return &___UpdateDelay_40; }
	inline void set_UpdateDelay_40(float value)
	{
		___UpdateDelay_40 = value;
	}

	inline static int32_t get_offset_of_U3CIsGroundedU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___U3CIsGroundedU3Ek__BackingField_41)); }
	inline bool get_U3CIsGroundedU3Ek__BackingField_41() const { return ___U3CIsGroundedU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CIsGroundedU3Ek__BackingField_41() { return &___U3CIsGroundedU3Ek__BackingField_41; }
	inline void set_U3CIsGroundedU3Ek__BackingField_41(bool value)
	{
		___U3CIsGroundedU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_groundRaycaster_42() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___groundRaycaster_42)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundRaycaster_42() const { return ___groundRaycaster_42; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundRaycaster_42() { return &___groundRaycaster_42; }
	inline void set_groundRaycaster_42(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundRaycaster_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundRaycaster_42), (void*)value);
	}

	inline static int32_t get_offset_of_feetLocationTransform_43() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___feetLocationTransform_43)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_feetLocationTransform_43() const { return ___feetLocationTransform_43; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_feetLocationTransform_43() { return &___feetLocationTransform_43; }
	inline void set_feetLocationTransform_43(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___feetLocationTransform_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feetLocationTransform_43), (void*)value);
	}

	inline static int32_t get_offset_of_raycastDistance_44() { return static_cast<int32_t>(offsetof(mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2, ___raycastDistance_44)); }
	inline float get_raycastDistance_44() const { return ___raycastDistance_44; }
	inline float* get_address_of_raycastDistance_44() { return &___raycastDistance_44; }
	inline void set_raycastDistance_44(float value)
	{
		___raycastDistance_44 = value;
	}
};


// pIntegrity
struct pIntegrity_t3660C86E5EFEEDD5749FAF372CCF1EC8CFAC57AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// realDeleteAfterPlainAniScript
struct realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator realDeleteAfterPlainAniScript::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_4;

public:
	inline static int32_t get_offset_of_ani_4() { return static_cast<int32_t>(offsetof(realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024, ___ani_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_4() const { return ___ani_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_4() { return &___ani_4; }
	inline void set_ani_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_4), (void*)value);
	}
};


// realGenericButton
struct realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button realGenericButton::yourButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___yourButton_4;
	// System.Int32 realGenericButton::buttonVal
	int32_t ___buttonVal_5;
	// System.Single realGenericButton::nextUsage
	float ___nextUsage_6;
	// System.Single realGenericButton::delay
	float ___delay_7;
	// UnityEngine.GameObject realGenericButton::listner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___listner_8;

public:
	inline static int32_t get_offset_of_yourButton_4() { return static_cast<int32_t>(offsetof(realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A, ___yourButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_yourButton_4() const { return ___yourButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_yourButton_4() { return &___yourButton_4; }
	inline void set_yourButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___yourButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yourButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonVal_5() { return static_cast<int32_t>(offsetof(realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A, ___buttonVal_5)); }
	inline int32_t get_buttonVal_5() const { return ___buttonVal_5; }
	inline int32_t* get_address_of_buttonVal_5() { return &___buttonVal_5; }
	inline void set_buttonVal_5(int32_t value)
	{
		___buttonVal_5 = value;
	}

	inline static int32_t get_offset_of_nextUsage_6() { return static_cast<int32_t>(offsetof(realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A, ___nextUsage_6)); }
	inline float get_nextUsage_6() const { return ___nextUsage_6; }
	inline float* get_address_of_nextUsage_6() { return &___nextUsage_6; }
	inline void set_nextUsage_6(float value)
	{
		___nextUsage_6 = value;
	}

	inline static int32_t get_offset_of_delay_7() { return static_cast<int32_t>(offsetof(realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A, ___delay_7)); }
	inline float get_delay_7() const { return ___delay_7; }
	inline float* get_address_of_delay_7() { return &___delay_7; }
	inline void set_delay_7(float value)
	{
		___delay_7 = value;
	}

	inline static int32_t get_offset_of_listner_8() { return static_cast<int32_t>(offsetof(realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A, ___listner_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_listner_8() const { return ___listner_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_listner_8() { return &___listner_8; }
	inline void set_listner_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___listner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listner_8), (void*)value);
	}
};


// realGenericButtonListner
struct realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 realGenericButtonListner::buttonScreeen
	int32_t ___buttonScreeen_4;

public:
	inline static int32_t get_offset_of_buttonScreeen_4() { return static_cast<int32_t>(offsetof(realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE, ___buttonScreeen_4)); }
	inline int32_t get_buttonScreeen_4() const { return ___buttonScreeen_4; }
	inline int32_t* get_address_of_buttonScreeen_4() { return &___buttonScreeen_4; }
	inline void set_buttonScreeen_4(int32_t value)
	{
		___buttonScreeen_4 = value;
	}
};


// wheelHealth
struct wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 wheelHealth::wheelHP
	int32_t ___wheelHP_4;
	// UnityEngine.Vector3 wheelHealth::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_5;
	// UnityEngine.Vector3 wheelHealth::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_6;
	// UnityEngine.Vector3 wheelHealth::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_7;
	// System.Int32 wheelHealth::lastDamage
	int32_t ___lastDamage_8;
	// System.Single wheelHealth::delay
	float ___delay_9;
	// System.Single wheelHealth::nextUsage
	float ___nextUsage_10;
	// UnityEngine.Color wheelHealth::curCol
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___curCol_11;

public:
	inline static int32_t get_offset_of_wheelHP_4() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___wheelHP_4)); }
	inline int32_t get_wheelHP_4() const { return ___wheelHP_4; }
	inline int32_t* get_address_of_wheelHP_4() { return &___wheelHP_4; }
	inline void set_wheelHP_4(int32_t value)
	{
		___wheelHP_4 = value;
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___pos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_5() const { return ___pos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___velocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_6 = value;
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___offset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_7() const { return ___offset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_7 = value;
	}

	inline static int32_t get_offset_of_lastDamage_8() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___lastDamage_8)); }
	inline int32_t get_lastDamage_8() const { return ___lastDamage_8; }
	inline int32_t* get_address_of_lastDamage_8() { return &___lastDamage_8; }
	inline void set_lastDamage_8(int32_t value)
	{
		___lastDamage_8 = value;
	}

	inline static int32_t get_offset_of_delay_9() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___delay_9)); }
	inline float get_delay_9() const { return ___delay_9; }
	inline float* get_address_of_delay_9() { return &___delay_9; }
	inline void set_delay_9(float value)
	{
		___delay_9 = value;
	}

	inline static int32_t get_offset_of_nextUsage_10() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___nextUsage_10)); }
	inline float get_nextUsage_10() const { return ___nextUsage_10; }
	inline float* get_address_of_nextUsage_10() { return &___nextUsage_10; }
	inline void set_nextUsage_10(float value)
	{
		___nextUsage_10 = value;
	}

	inline static int32_t get_offset_of_curCol_11() { return static_cast<int32_t>(offsetof(wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316, ___curCol_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_curCol_11() const { return ___curCol_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_curCol_11() { return &___curCol_11; }
	inline void set_curCol_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___curCol_11 = value;
	}
};


// wogen1
struct wogen1_t420F1173A8F2A5A9720B687848CAE322166F51F4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  m_Items[1];

public:
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m020815F180AA8D3485CC6AB59A7E596BBA11D6CF (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<mplane_controller>()
inline mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void WorldLoader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLoader_ReadString_m30927E3A838C9EF249AD2E7BF36465CD64199CE3 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70 (double ___value0, int32_t ___digits1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Input_GetJoystickNames_mBD6976AEAFB4B2930FA2AB3215C0E8ED27A7938B (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void mplane_controller::tireAni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_tireAni_mFB7CBA27AD6155AD29916784C43CA88E35DAE5BB (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_freezeRotation_mF8E01A84694933A5E21F71869CAA42DB247CE987 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void mplane_controller::tireDisappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_tireDisappear_m13D51F834413FDF22E3A598A38783FCFC7321259 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularDrag_m874C6830561CC79E6513548C0A495A84992CF421 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m0C8D3C6B599467E6E791E92E2122282D4A0B055C (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.PolygonCollider2D>()
inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddRelativeForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___relativeForce0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Collections.IEnumerator mplane_controller::GetSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mplane_controller_GetSpeed_m4892E4EE7F6CF70C9EF63F3C8E52D4713C0C487B (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void mplane_controller::controllerCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_controllerCheck_m0701A34C6F9DD28BCF3CC95482FCA8BD25133AD6 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Void mplane_controller::set_IsGrounded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mplane_controller_set_IsGrounded_mAA1929C84C2C7A6635596E3C0BA3F9D092740696_inline (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void mplane_controller/<GetSpeed>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpeedU3Ed__55__ctor_mFBD5B020C45A66AC14B8014A2BBA1AE9E61A961F (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<realGenericButtonListner>()
inline realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * GameObject_GetComponent_TisrealGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE_m7A3B9E8A85DE942FCAFD7473557715F54712B96E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* Collision2D_get_contacts_m81A37C7FA34C8DE0B0C71F0C586F13BFACC1BFF5 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ContactPoint2D::get_normalImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ContactPoint2D_get_normalImpulse_mAE66735E3267B1BB71D4A260E2516A31D83F7D82 (ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE (float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// offset = transform.position - player.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_5(L_5);
		// }
		return;
	}
}
// System.Void CameraController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LateUpdate_mC56B3BF8EB8ED598E9CEE999332BF2F2942DAF24 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = player.transform.position + offset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_offset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DeleteEverything::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteEverything_Start_m0D3790AD572EDFCC184013E6CC944202AB4E2538 (DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DeleteEverything::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteEverything_Update_m0431451F178CBE901A1E65BE125CD1F3F0F8DAD6 (DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DeleteEverything::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteEverything_OnTriggerEnter2D_m19FD7ACA2CF02A27E0B4369E3131A9CA95ED7F9D (DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE334DC21F5219A6AA102B97D59C987FD73E038E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Removed without a check");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE334DC21F5219A6AA102B97D59C987FD73E038E2, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeleteEverything::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteEverything__ctor_m385FDFE6AEAC4648AD370631D651845A75B2BC62 (DeleteEverything_t236253165A5B5F596538BD70B26F25007F2B0E63 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DestroyAfterDistance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterDistance_Start_m620F3717934C94E43AC6C7BD3B5701103E59D2D2 (DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DestroyAfterDistance::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterDistance_Update_m588811B3FB097D27499AE49196EA69AA26F16BA9 (DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float distance = Vector3.Distance(this.transform.position, GameObject.Find(mainChar.name).transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_mainChar_4();
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_6, /*hidden argument*/NULL);
		// if (distance>500)
		if ((!(((float)L_7) > ((float)(500.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void DestroyAfterDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterDistance__ctor_m9319D4BF31451DFCE500805BD87A3C7E11EDE05B (DestroyAfterDistance_t3C99B65B2889F695A32F44B9728EE6226E2AE17C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DestroyAfterStartTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterStartTime_Start_m327BE9F74E9FC93D8130FDC4DB842142978D7F3E (DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06 * __this, const RuntimeMethod* method)
{
	{
		// nextUsage = Time.time + delay; //it is on display
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_delay_4();
		__this->set_nextUsage_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void DestroyAfterStartTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterStartTime_Update_m0E3D6C03FAC7A82DCE968C9C6C32AB9DA2D8C48F (DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time > nextUsage) //continue scrolling
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_nextUsage_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_002a;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// nextUsage = Time.time + delay; //it is on display
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_4 = __this->get_delay_4();
		__this->set_nextUsage_5(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void DestroyAfterStartTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyAfterStartTime__ctor_mC1279BB445EA246D920517E7303589239C7F5029 (DestroyAfterStartTime_tDE9EC225B454D085059A32FFF954461890207A06 * __this, const RuntimeMethod* method)
{
	{
		// public  float delay = 1.5f; //only half delay
		__this->set_delay_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Exp2017::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exp2017_Start_mEF21DBCA6B7C173ED227059C29745DBACC35EC20 (Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AudioSource.PlayClipAtPoint(exp5, new Vector3(transform.position.x, transform.position.y, 0.0f));
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_exp5_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_3, L_6, (0.0f), /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79(L_0, L_7, /*hidden argument*/NULL);
		// nextUsage = Time.time + delay; //it is on display
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_delay_4();
		__this->set_nextUsage_5(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// Destroy(gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11;
		L_11 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_12;
		L_12 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_11, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13;
		L_13 = AnimatorStateInfo_get_length_m020815F180AA8D3485CC6AB59A7E596BBA11D6CF((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), /*hidden argument*/NULL);
		float L_14 = __this->get_delay_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_10, ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Exp2017::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exp2017_Update_m2C0EC8CC69243DD464873180FEB6F7271631D8D6 (Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Exp2017::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exp2017__ctor_m16268D9F1A2243597CFC77CEA3081C89EFDA5811 (Exp2017_t96D156CD62A85146F7C675950FC6DD57E40C1D28 * __this, const RuntimeMethod* method)
{
	{
		// float delay = 0.1f; //only tenth delay
		__this->set_delay_4((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void POLF::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POLF_Start_m889A1B5628E2EEC5909413DB3AA371D46B956854 (POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void POLF::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POLF_Update_m175077191ABDDD9D2B8107FEC78D3B9C29B6323D (POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F436BE9C8024C923F77167C3E8C78F781278FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral388ED85BF00F1B3E555675535E4FE09C9C6455C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E0FB711BC6B37561C8B6C8D396041A203EFE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587BBE369F5469239CC66C0072D1353BE41431AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE57020BC9BE9C1CEE4F4D374A864D2ACB7E41C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD5FDB825E9A819C919A3F31844C00E48E2571E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().pdead == true && curSceneOver == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_1;
		L_1 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_0, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		bool L_2 = L_1->get_pdead_16();
		if (!L_2)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_3 = __this->get_curSceneOver_13();
		if (L_3)
		{
			goto IL_00c7;
		}
	}
	{
		// curSceneOver = true;
		__this->set_curSceneOver_13((bool)1);
		// stats_msg = "Flight facts: \n" + "Max Speed: " + MaxSpeed + "\n Impact: " + impactDev + "\n Max Altitude: " + MaxAlt + "\n Total Elapsed time: " + curTime + "Bailed: " + bailed;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral5DE57020BC9BE9C1CEE4F4D374A864D2ACB7E41C);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5DE57020BC9BE9C1CEE4F4D374A864D2ACB7E41C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		float* L_7 = __this->get_address_of_MaxSpeed_5();
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteral2F436BE9C8024C923F77167C3E8C78F781278FC8);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2F436BE9C8024C923F77167C3E8C78F781278FC8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		float* L_11 = __this->get_address_of_impactDev_6();
		String_t* L_12;
		L_12 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteral388ED85BF00F1B3E555675535E4FE09C9C6455C8);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral388ED85BF00F1B3E555675535E4FE09C9C6455C8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		double* L_15 = __this->get_address_of_MaxAlt_7();
		String_t* L_16;
		L_16 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_15, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteralCCD5FDB825E9A819C919A3F31844C00E48E2571E);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralCCD5FDB825E9A819C919A3F31844C00E48E2571E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		double* L_19 = __this->get_address_of_curTime_4();
		String_t* L_20;
		L_20 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_19, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_18;
		ArrayElementTypeCheck (L_21, _stringLiteral587BBE369F5469239CC66C0072D1353BE41431AD);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral587BBE369F5469239CC66C0072D1353BE41431AD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		bool* L_23 = __this->get_address_of_bailed_8();
		String_t* L_24;
		L_24 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_23, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_24);
		String_t* L_25;
		L_25 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_22, /*hidden argument*/NULL);
		__this->set_stats_msg_9(L_25);
		// GameObject uiAltiText2 = GameObject.Find("txt_stats");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral45E0FB711BC6B37561C8B6C8D396041A203EFE75, /*hidden argument*/NULL);
		// Text delta21 = uiAltiText2.GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27;
		L_27 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_26, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		// delta21.text = stats_msg;//.Substring(0, locCnt);
		String_t* L_28 = __this->get_stats_msg_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		// } else if (Time.time > nextUsage && timeStart == true) //continue scrolling
		return;
	}

IL_00c7:
	{
		// } else if (Time.time > nextUsage && timeStart == true) //continue scrolling
		float L_29;
		L_29 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_30 = __this->get_nextUsage_11();
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_01ac;
		}
	}
	{
		bool L_31 = __this->get_timeStart_12();
		if (!L_31)
		{
			goto IL_01ac;
		}
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>MaxSpeed)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_33;
		L_33 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_32, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_34 = L_33->get_Speed_39();
		float L_35 = __this->get_MaxSpeed_5();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0118;
		}
	}
	{
		// MaxSpeed = GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_37;
		L_37 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_36, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_38 = L_37->get_Speed_39();
		__this->set_MaxSpeed_5(L_38);
	}

IL_0118:
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>impactDev)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_40;
		L_40 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_39, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_41 = L_40->get_Speed_39();
		float L_42 = __this->get_impactDev_6();
		if ((!(((float)L_41) > ((float)L_42))))
		{
			goto IL_014e;
		}
	}
	{
		// impactDev = GameObject.Find("Player_plane").GetComponent<mplane_controller>().impact;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_44;
		L_44 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_43, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_45 = L_44->get_impact_27();
		__this->set_impactDev_6(L_45);
	}

IL_014e:
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().altitude>MaxAlt)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_47;
		L_47 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_46, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		double L_48 = L_47->get_altitude_29();
		double L_49 = __this->get_MaxAlt_7();
		if ((!(((double)L_48) > ((double)L_49))))
		{
			goto IL_0184;
		}
	}
	{
		// MaxAlt = GameObject.Find("Player_plane").GetComponent<mplane_controller>().altitude;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_51;
		L_51 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_50, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		double L_52 = L_51->get_altitude_29();
		__this->set_MaxAlt_7(L_52);
	}

IL_0184:
	{
		// curTime = curTime + 0.1;
		double L_53 = __this->get_curTime_4();
		__this->set_curTime_4(((double)il2cpp_codegen_add((double)L_53, (double)(0.10000000000000001))));
		// nextUsage = Time.time + delay; //it is on display
		float L_54;
		L_54 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_55 = __this->get_delay_10();
		__this->set_nextUsage_11(((float)il2cpp_codegen_add((float)L_54, (float)L_55)));
	}

IL_01ac:
	{
		// }
		return;
	}
}
// System.Void POLF::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POLF_OnTriggerExit2D_m5C1DDF1B0E5AEA60010DFD02CC98A2A287D00FB7 (POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)0, /*hidden argument*/NULL);
		// timeStart = true;
		__this->set_timeStart_12((bool)1);
		// }
		return;
	}
}
// System.Void POLF::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void POLF__ctor_m5154F18F928DA271D9DC650FE2EDC1A71629B76C (POLF_tBEFA04C5CE90449ACA0E69AC84B029EDF00476F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2099E55A52864065039492AA67ECE286527C20A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool bailed = true;
		__this->set_bailed_8((bool)1);
		// string stats_msg = "stats go here";
		__this->set_stats_msg_9(_stringLiteral2099E55A52864065039492AA67ECE286527C20A3);
		// float delay = .1f; //only one sec
		__this->set_delay_10((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TouchAndDie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchAndDie_Start_m513F6EDA1278C652E6308690A4169F6E4DC74FDB (TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TouchAndDie::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchAndDie_Update_m5D642FE4A37876994A8B0F58D248E80CB2B00E2C (TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TouchAndDie::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchAndDie_OnTriggerEnter2D_mFDB8EBDFD54EA2B63CEC1B0245C720C17D57AA39 (TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag != defTag1)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_defTag1_4();
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// if (collision.tag != defTag2)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		String_t* L_5;
		L_5 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_defTag2_5();
		bool L_7;
		L_7 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_9;
		L_9 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_8, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_9->set_colSignal_34((bool)1);
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_11;
		L_11 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_10, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_11->set_postmortem_35(1);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void TouchAndDie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchAndDie__ctor_mDBD117F3512FBB2BC96B1D7FA012C96A9ED4B157 (TouchAndDie_tAA6479122D95550FB4266C4AE04C158FBD5AC5CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string defTag1 = "";
		__this->set_defTag1_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string defTag2 = "";
		__this->set_defTag2_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UPUPaway::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UPUPaway_Start_m946D13D52647570F790CE4E14DAA56497D07F594 (UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UPUPaway::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UPUPaway_Update_mBD7C1DAA4ECD068E3F3BAC82F55B8095DA1E3000 (UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UPUPaway::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UPUPaway_OnCollisionStay2D_m20E5DE6D7E5972E2A1563716108992B2E756B973 (UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>17)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_1;
		L_1 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_0, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_2 = L_1->get_Speed_39();
		if ((!(((float)L_2) > ((float)(17.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// GameObject.Find("Player_plane").GetComponent<Rigidbody2D>().AddForce(new Vector3(0,-2500, 0));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4;
		L_4 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_3, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (-2500.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UPUPaway::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UPUPaway__ctor_mF4B21F28368BA4830DA74E54BE64D66097F7277B (UPUPaway_tD59422EB01D4B87F19711796D6A3E350648F551B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void VertMinusCameraFOV::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertMinusCameraFOV_Start_m0C7DA34318A04C4A6BF2B8C775A1ADC4FE708D56 (VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		// cam.aspect = targetRatio;
		float L_1 = __this->get_targetRatio_4();
		Camera_set_aspect_mF0D72E1250A4408B6A7C32700EE3D80C75C3879C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VertMinusCameraFOV::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertMinusCameraFOV_Update_mA8322751529EF04F5C26CCE3C3A54076F0107183 (VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void VertMinusCameraFOV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertMinusCameraFOV__ctor_mCF60753C0FC38E4A585C7D18A01F36CA3CF25FA1 (VertMinusCameraFOV_t16DCC22D0E94EA60D098159CB25D2827457A785F * __this, const RuntimeMethod* method)
{
	{
		// public float targetRatio = 1920f / 1080f; //The aspect ratio you did for the game.
		__this->set_targetRatio_4((1.77777779f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WorldLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLoader_Start_m86697027D9AAD7580B1C32EF44C20430F1DBEB3D (WorldLoader_tB25E1D98F63A3850238DB60096D81FD94F30B6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC339E6D798E448CF162409CCD8065B85E4CE19D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("HI");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC339E6D798E448CF162409CCD8065B85E4CE19D0, /*hidden argument*/NULL);
		// ReadString();
		WorldLoader_ReadString_m30927E3A838C9EF249AD2E7BF36465CD64199CE3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WorldLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLoader_Update_m860E4AC8446CD93586F5B44C31484628225D38FB (WorldLoader_tB25E1D98F63A3850238DB60096D81FD94F30B6D2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WorldLoader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLoader_ReadString_m30927E3A838C9EF249AD2E7BF36465CD64199CE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1117FCBEB4DD26399CFF49C4E456FB501B25F1A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E8D61B76F0862EDB76828154D9A37E6BA31916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD684D95DBBE39EFA353A7A068D17689761F993D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// int xpos = 0;
		V_0 = 0;
		// TextAsset txt = (TextAsset)Resources.Load("scenes\\readme", typeof(TextAsset));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral92E8D61B76F0862EDB76828154D9A37E6BA31916, L_1, /*hidden argument*/NULL);
		// foreach (string tta in txt.text.Split('\n') )
		String_t* L_3;
		L_3 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)CastclassClass((RuntimeObject*)L_2, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_008d;
	}

IL_0035:
	{
		// foreach (string tta in txt.text.Split('\n') )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// GameObject picky = Instantiate(Resources.Load("DefTextMesh")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11;
		L_11 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral1117FCBEB4DD26399CFF49C4E456FB501B25F1A1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12;
		L_12 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_11, /*hidden argument*/NULL);
		// picky.name = "regCool";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_12, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_13, _stringLiteralAD684D95DBBE39EFA353A7A068D17689761F993D, /*hidden argument*/NULL);
		// picky.transform.position = new Vector2(xpos, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), ((float)((float)L_16)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_18, /*hidden argument*/NULL);
		// TextMesh TxtTm = picky.GetComponent<TextMesh>();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_19;
		L_19 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00(L_14, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m81EC88132D7EDC335BD0C2BE0287BC44F468FC00_RuntimeMethod_var);
		// TxtTm.text = tta.ToString();
		String_t* L_20 = V_3;
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_19, L_21, /*hidden argument*/NULL);
		// xpos = xpos + 10;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)((int32_t)10)));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008d:
	{
		// foreach (string tta in txt.text.Split('\n') )
		int32_t L_24 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WorldLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLoader__ctor_mB312B3305DF36B5D062A91AD4D034C328A92897F (WorldLoader_tB25E1D98F63A3850238DB60096D81FD94F30B6D2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void alt_gauge::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alt_gauge_Start_m014079F9F5D825FBFD85DC18919E164AD41BC40F (alt_gauge_tCD8EF9AE6165A0E768B78D3C7FFA68DA067D2DFA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void alt_gauge::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alt_gauge_Update_mE21B964D2FCC25B12ED05AE87D33384C42D69130 (alt_gauge_tCD8EF9AE6165A0E768B78D3C7FFA68DA067D2DFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181E9435AD514E31987A68ADB30D178B9B95DCD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral409FA91D53D91CBDE9CA93A796B4EAF58787052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	{
		// RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_2, ((float)il2cpp_codegen_subtract((float)L_5, (float)(0.100000001f))), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_10;
		L_10 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11;
		L_11 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0187;
		}
	}
	{
		// if (hit.collider.gameObject.tag!="game")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13;
		L_13 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0187;
		}
	}
	{
		// if (hit.collider.gameObject.tag != "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17;
		L_17 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_19, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0187;
		}
	}
	{
		// float pos = this.transform.position.y - hit.collider.bounds.center.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24;
		L_24 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_25;
		L_25 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_23, (float)L_27));
		// GameObject txtAlt = GameObject.Find("txt_alt_OBJ");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral409FA91D53D91CBDE9CA93A796B4EAF58787052F, /*hidden argument*/NULL);
		// txtAlt.GetComponent<Text>().text = "ALT: " + (Math.Round(pos, 2));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29;
		L_29 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_28, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		float L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_31;
		L_31 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_30)), 2, /*hidden argument*/NULL);
		V_3 = L_31;
		String_t* L_32;
		L_32 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_3), /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral181E9435AD514E31987A68ADB30D178B9B95DCD2, L_32, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_33);
		// if (pos < .5f)
		float L_34 = V_1;
		if ((!(((float)L_34) < ((float)(0.5f)))))
		{
			goto IL_010f;
		}
	}
	{
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_36;
		L_36 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_35, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_36->set_onground_18((bool)1);
		// }
		goto IL_0124;
	}

IL_010f:
	{
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().onground = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_38;
		L_38 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_37, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_38->set_onground_18((bool)0);
	}

IL_0124:
	{
		// if (pos < .25f)
		float L_39 = V_1;
		if ((!(((float)L_39) < ((float)(0.25f)))))
		{
			goto IL_0187;
		}
	}
	{
		// GameObject.Find("Player_plane").GetComponent<Transform>().transform.position = new Vector2(GameObject.Find("Player_plane").GetComponent<Transform>().position.x, hit.collider.bounds.center.y + 0.75f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_40, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_43, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_47;
		L_47 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_48;
		L_48 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_50 = L_49.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), L_46, ((float)il2cpp_codegen_add((float)L_50, (float)(0.75f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_51, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_52, /*hidden argument*/NULL);
	}

IL_0187:
	{
		// }
		return;
	}
}
// System.Void alt_gauge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void alt_gauge__ctor_m23291299BC9453E15DA742D8C52C65826844D0BD (alt_gauge_tCD8EF9AE6165A0E768B78D3C7FFA68DA067D2DFA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void mplane_controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_Start_mFA96234EDE71F74EAF619A1204E0F184F0CC0BBA (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_4(L_2);
		// }
		return;
	}
}
// System.Void mplane_controller::controllerCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_controllerCheck_m0701A34C6F9DD28BCF3CC95482FCA8BD25133AD6 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C7AB7357637FB7E2DBEC2E22BC2F52840DF5C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3936608F8AB1C0E605D1A0721A22925DCD517F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63DC366F5C0448ADCACA61ED363D49CBC0DF239);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE48DA6E31FE87AB95994C9FFB352959102FAB7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6208679377669197F37E13713C654CFBDAA11EE);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// string[] names = Input.GetJoystickNames();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Input_GetJoystickNames_mBD6976AEAFB4B2930FA2AB3215C0E8ED27A7938B(/*hidden argument*/NULL);
		V_0 = L_0;
		// for (int x = 0; x < names.Length; x++)
		V_2 = 0;
		goto IL_0067;
	}

IL_000a:
	{
		// if (names[x].Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// PS4_Controller = 0;
		__this->set_PS4_Controller_23(0);
		// Xbox_One_Controller = 0;
		__this->set_Xbox_One_Controller_22(0);
	}

IL_0029:
	{
		// if (names[x].Contains("PS"))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_9, _stringLiteralE6208679377669197F37E13713C654CFBDAA11EE, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// PS4_Controller = 1;
		__this->set_PS4_Controller_23(1);
		// Xbox_One_Controller = 0;
		__this->set_Xbox_One_Controller_22(0);
	}

IL_0046:
	{
		// if (names[x].Contains("Xbox"))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_14, _stringLiteralB3936608F8AB1C0E605D1A0721A22925DCD517F2, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// PS4_Controller = 0;
		__this->set_PS4_Controller_23(0);
		// Xbox_One_Controller = 1;
		__this->set_Xbox_One_Controller_22(1);
	}

IL_0063:
	{
		// for (int x = 0; x < names.Length; x++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0067:
	{
		// for (int x = 0; x < names.Length; x++)
		int32_t L_17 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// if (names.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_0;
		if ((((RuntimeArray*)L_19)->max_length))
		{
			goto IL_0086;
		}
	}
	{
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// PS4_Controller = 0;
		__this->set_PS4_Controller_23(0);
		// Xbox_One_Controller = 0;
		__this->set_Xbox_One_Controller_22(0);
	}

IL_0086:
	{
		// if (Xbox_One_Controller == 1)
		int32_t L_20 = __this->get_Xbox_One_Controller_22();
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0098;
		}
	}
	{
		// controlerUsed = true;
		__this->set_controlerUsed_24((bool)1);
		// }
		goto IL_00b1;
	}

IL_0098:
	{
		// else if (PS4_Controller == 1)
		int32_t L_21 = __this->get_PS4_Controller_23();
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// controlerUsed = true;
		__this->set_controlerUsed_24((bool)1);
		// }
		goto IL_00b1;
	}

IL_00aa:
	{
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
	}

IL_00b1:
	{
		// moveVertButt = Input.GetButton("Vertical");
		bool L_22;
		L_22 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_moveVertButt_7(L_22);
		// movechk=Input.GetButtonUp("Vertical");
		bool L_23;
		L_23 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_movechk_25(L_23);
		// moveHortButt = Input.GetButton("Horizontal");
		bool L_24;
		L_24 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_moveHortButt_12(L_24);
		// moveHorchk = Input.GetButtonUp("Horizontal");
		bool L_25;
		L_25 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_moveHorchk_26(L_25);
		// if (controlerUsed==true)
		bool L_26 = __this->get_controlerUsed_24();
		if (!L_26)
		{
			goto IL_0167;
		}
	}
	{
		// if (movechk==true)
		bool L_27 = __this->get_movechk_25();
		if (!L_27)
		{
			goto IL_011a;
		}
	}
	{
		// moveVertSense = 0;
		__this->set_moveVertSense_5((0.0f));
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// bypass = true;
		__this->set_bypass_9((bool)1);
	}

IL_011a:
	{
		// if (moveHorchk == true)
		bool L_28 = __this->get_moveHorchk_26();
		if (!L_28)
		{
			goto IL_013b;
		}
	}
	{
		// moveHorSense = 0;
		__this->set_moveHorSense_6((0.0f));
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// bypass2 = true;
		__this->set_bypass2_10((bool)1);
	}

IL_013b:
	{
		// if (moveVertButt == true )
		bool L_29 = __this->get_moveVertButt_7();
		if (!L_29)
		{
			goto IL_0151;
		}
	}
	{
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// bypass = false;
		__this->set_bypass_9((bool)0);
	}

IL_0151:
	{
		// if (moveHortButt == true)
		bool L_30 = __this->get_moveHortButt_12();
		if (!L_30)
		{
			goto IL_0167;
		}
	}
	{
		// controlerUsed = false;
		__this->set_controlerUsed_24((bool)0);
		// bypass2 = false;
		__this->set_bypass2_10((bool)0);
	}

IL_0167:
	{
		// float TriggerRight = Input.GetAxis("Cont_Trigger");
		float L_31;
		L_31 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral6C7AB7357637FB7E2DBEC2E22BC2F52840DF5C4C, /*hidden argument*/NULL);
		V_1 = L_31;
		// if (TriggerRight!=0)
		float L_32 = V_1;
		if ((((float)L_32) == ((float)(0.0f))))
		{
			goto IL_0181;
		}
	}
	{
		// moveHorSense = TriggerRight;
		float L_33 = V_1;
		__this->set_moveHorSense_6(L_33);
	}

IL_0181:
	{
		// if (Input.GetButtonDown("Jump") )
		bool L_34;
		L_34 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0226;
		}
	}
	{
		// if (onground==false)
		bool L_35 = __this->get_onground_18();
		if (L_35)
		{
			goto IL_0226;
		}
	}
	{
		// if (toggleLandGear == false)
		bool L_36 = __this->get_toggleLandGear_17();
		if (L_36)
		{
			goto IL_01e5;
		}
	}
	{
		// GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2, /*hidden argument*/NULL);
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_38;
		L_38 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_37, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_38, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92, /*hidden argument*/NULL);
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_40;
		L_40 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_39, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_40, (bool)0, /*hidden argument*/NULL);
		// toggleLandGear = true;
		__this->set_toggleLandGear_17((bool)1);
		// tireAni();
		mplane_controller_tireAni_mFB7CBA27AD6155AD29916784C43CA88E35DAE5BB(__this, /*hidden argument*/NULL);
		// Debug.Log("LANDING GEAR");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDE48DA6E31FE87AB95994C9FFB352959102FAB7C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01e5:
	{
		// GameObject.Find("planeSkid_back").GetComponent<CapsuleCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2, /*hidden argument*/NULL);
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_42;
		L_42 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_41, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_42, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("planeSkid_front").GetComponent<CapsuleCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92, /*hidden argument*/NULL);
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_44;
		L_44 = GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A(L_43, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m8FDC71011F0F8D320F0B0446C50F71F5B1EB699A_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_44, (bool)1, /*hidden argument*/NULL);
		// toggleLandGear = false;
		__this->set_toggleLandGear_17((bool)0);
		// tireAni();
		mplane_controller_tireAni_mFB7CBA27AD6155AD29916784C43CA88E35DAE5BB(__this, /*hidden argument*/NULL);
		// Debug.Log("NO LANDING GEAR");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC63DC366F5C0448ADCACA61ED363D49CBC0DF239, /*hidden argument*/NULL);
	}

IL_0226:
	{
		// }
		return;
	}
}
// System.Void mplane_controller::tireAni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_tireAni_mFB7CBA27AD6155AD29916784C43CA88E35DAE5BB (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D407EAD80CD5AC447B938FBDFCCB0AB6B4B2D1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i=0; i<3;i++)
		V_0 = 0;
		goto IL_0075;
	}

IL_0004:
	{
		// ani = GameObject.Find("plane_wheel_" + i).GetComponent<Animator>();
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25, L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_ani_21(L_3);
		// if (toggleLandGear == false)
		bool L_4 = __this->get_toggleLandGear_17();
		if (L_4)
		{
			goto IL_0050;
		}
	}
	{
		// ani.SetInteger("ani_tire", 2);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_ani_21();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_5, _stringLiteral72D407EAD80CD5AC447B938FBDFCCB0AB6B4B2D1, 2, /*hidden argument*/NULL);
		// ani.speed = 0.1f;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_ani_21();
		Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041(L_6, (0.100000001f), /*hidden argument*/NULL);
		// }
		goto IL_0071;
	}

IL_0050:
	{
		// ani.speed = 0.1f;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_ani_21();
		Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041(L_7, (0.100000001f), /*hidden argument*/NULL);
		// ani.SetInteger("ani_tire", 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_ani_21();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_8, _stringLiteral72D407EAD80CD5AC447B938FBDFCCB0AB6B4B2D1, 1, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// for (int i=0; i<3;i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0075:
	{
		// for (int i=0; i<3;i++)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void mplane_controller::tireDisappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_tireDisappear_m13D51F834413FDF22E3A598A38783FCFC7321259 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// GameObject.Find("plane_wheel_" + i).GetComponent<SpriteRenderer>().enabled=false;
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25, L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_1, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_2, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < 3; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void mplane_controller::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_OnTriggerEnter2D_m72E79FC613526F78BAEBF7BFDBE9E427E74C0F93 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13F3D34AA162025D98C63ADF6080554F07E0AB3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DDD6F4084868EA9A579867F6A43C49508718CE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2139A356C5F48773DB17C61284D45AB3A82DF1BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F3F4BEFE895389DC863349A9EDF5CDCA51C993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56249B5AD634747D3B38ABAD300430058EA1F6B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57C592A50CFF6DB10C0D353380E2A85D2F6951C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D658583A794EC6D85470E7133EE566EABB9C6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C1C4C13780AEAAB9765F9C087D47D0448D947B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB75C3A1E4503B289543C11CE87E5A8580FD0BA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// impact = Vector3.Magnitude(rb.velocity);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_2, /*hidden argument*/NULL);
		__this->set_impact_27(L_3);
		// Debug.Log(collision.name);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// if (collision.gameObject.tag!="Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_026e;
		}
	}
	{
		// if (impact > 15)
		float L_10 = __this->get_impact_27();
		if ((!(((float)L_10) > ((float)(15.0f)))))
		{
			goto IL_026e;
		}
	}
	{
		// int randoExplod = UnityEngine.Random.Range(2, 5);
		int32_t L_11;
		L_11 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, 5, /*hidden argument*/NULL);
		V_0 = L_11;
		// for (int qt = 0; qt < randoExplod; qt++)
		V_1 = 0;
		goto IL_0267;
	}

IL_005f:
	{
		// GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12;
		L_12 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral67D658583A794EC6D85470E7133EE566EABB9C6C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_13;
		L_13 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_12, /*hidden argument*/NULL);
		// RepeatGround33.name = "plaxplode(" + qt + ")";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_13, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralDFB75C3A1E4503B289543C11CE87E5A8580FD0BA, L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_14, L_16, /*hidden argument*/NULL);
		// RepeatGround33.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		int32_t L_21;
		L_21 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2), 2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		int32_t L_25;
		L_25 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2), 2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)L_21)))), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_25)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_27, /*hidden argument*/NULL);
		// rb.velocity = Vector3.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_29, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_28, L_30, /*hidden argument*/NULL);
		// rb.freezeRotation = true;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_31 = __this->get_rb_4();
		Rigidbody2D_set_freezeRotation_mF8E01A84694933A5E21F71869CAA42DB247CE987(L_31, (bool)1, /*hidden argument*/NULL);
		// rb.constraints = RigidbodyConstraints2D.FreezeAll;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_32 = __this->get_rb_4();
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_32, 7, /*hidden argument*/NULL);
		// if (pdead == false)
		bool L_33 = __this->get_pdead_16();
		if (L_33)
		{
			goto IL_023c;
		}
	}
	{
		// if (impact > 25)
		float L_34 = __this->get_impact_27();
		if ((!(((float)L_34) > ((float)(25.0f)))))
		{
			goto IL_023c;
		}
	}
	{
		// GameObject pback = Instantiate(Resources.Load("player\\gib\\p_back")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_35;
		L_35 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral2139A356C5F48773DB17C61284D45AB3A82DF1BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_36;
		L_36 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_35, /*hidden argument*/NULL);
		// pback.name = "p_back)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_36, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_37, _stringLiteral13F3D34AA162025D98C63ADF6080554F07E0AB3F, /*hidden argument*/NULL);
		// pback.transform.position = new Vector2(transform.position.x - 0.5f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_45), ((float)il2cpp_codegen_subtract((float)L_41, (float)(0.5f))), L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_45, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_38, L_46, /*hidden argument*/NULL);
		// GameObject pmid = Instantiate(Resources.Load("player\\gib\\p_mid")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_47;
		L_47 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral1DDD6F4084868EA9A579867F6A43C49508718CE8, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_48;
		L_48 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_47, /*hidden argument*/NULL);
		// pmid.name = "p_mid)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_48, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_49, _stringLiteralA1C1C4C13780AEAAB9765F9C087D47D0448D947B, /*hidden argument*/NULL);
		// pmid.transform.position = new Vector2(transform.position.x, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_57), L_53, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_57, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_50, L_58, /*hidden argument*/NULL);
		// GameObject pfront = Instantiate(Resources.Load("player\\gib\\p_front")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_59;
		L_59 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral41F3F4BEFE895389DC863349A9EDF5CDCA51C993, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_60;
		L_60 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_59, /*hidden argument*/NULL);
		// pfront.name = "p_front)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_60, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_61, _stringLiteral56249B5AD634747D3B38ABAD300430058EA1F6B1, /*hidden argument*/NULL);
		// pfront.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_69), ((float)il2cpp_codegen_add((float)L_65, (float)(0.5f))), L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_69, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_62, L_70, /*hidden argument*/NULL);
		// this.GetComponent<SpriteRenderer>().enabled = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_71;
		L_71 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_71, (bool)0, /*hidden argument*/NULL);
		// this.GetComponent<Collider2D>().enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_72;
		L_72 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_72, (bool)0, /*hidden argument*/NULL);
	}

IL_023c:
	{
		// Debug.Log("HEY YOUR DEAD NOW"+ collision.gameObject.tag);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_73 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_73, /*hidden argument*/NULL);
		String_t* L_75;
		L_75 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_74, /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral57C592A50CFF6DB10C0D353380E2A85D2F6951C8, L_75, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_76, /*hidden argument*/NULL);
		// tireDisappear();
		mplane_controller_tireDisappear_m13D51F834413FDF22E3A598A38783FCFC7321259(__this, /*hidden argument*/NULL);
		// pdead = true;
		__this->set_pdead_16((bool)1);
		// for (int qt = 0; qt < randoExplod; qt++)
		int32_t L_77 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0267:
	{
		// for (int qt = 0; qt < randoExplod; qt++)
		int32_t L_78 = V_1;
		int32_t L_79 = V_0;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_005f;
		}
	}

IL_026e:
	{
		// }
		return;
	}
}
// System.Void mplane_controller::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_OnCollisionStay2D_m48B3761DEF91BD9A61DD2F81A3081A62E71FA9F5 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void mplane_controller::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_OnCollisionExit2D_mE937123CA968B1D8B68B83DAB12DFCDD7E1C0AAF (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void mplane_controller::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_OnCollisionEnter2D_m210BDE7F11653B3E66415609CEF2C7197400A2E6 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void mplane_controller::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_LateUpdate_m7058B170C8F2A1B229B7A416989AC85DA247FE76 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13F3D34AA162025D98C63ADF6080554F07E0AB3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BDF24CBBF623C17D4A827055BA8C9A9F5230B53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DDD6F4084868EA9A579867F6A43C49508718CE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2139A356C5F48773DB17C61284D45AB3A82DF1BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F3F4BEFE895389DC863349A9EDF5CDCA51C993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEEFD25D1869129442FDA9D692ED24FF43F28C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56249B5AD634747D3B38ABAD300430058EA1F6B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5734700A5FB7A8E96AE0C53330A882F21EB52F53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5D20868E6724A929719D85A0C7E7BFAD004CC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C1C4C13780AEAAB9765F9C087D47D0448D947B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC14DE0F0E9FD7D7E8EC4EBC61865AD9030B2E6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	double V_6 = 0.0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// RaycastHit2D hit = Physics2D.Raycast(new Vector3(transform.position.x, transform.position.y - 0.1f, 0), -Vector2.up);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_2, ((float)il2cpp_codegen_subtract((float)L_5, (float)(0.100000001f))), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_10;
		L_10 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11;
		L_11 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b8;
		}
	}
	{
		// if (transform.position.y<hit.collider.transform.position.y)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16;
		L_16 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		if ((!(((float)L_15) < ((float)L_19))))
		{
			goto IL_00a8;
		}
	}
	{
		// rb.angularDrag = 9999999999999999;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20 = __this->get_rb_4();
		Rigidbody2D_set_angularDrag_m874C6830561CC79E6513548C0A495A84992CF421(L_20, (1.00000003E+16f), /*hidden argument*/NULL);
		// rb.AddForce(Vector2.up*-50);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_21 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_22, (-50.0f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_21, L_23, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_00a8:
	{
		// rb.angularDrag = 117;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24 = __this->get_rb_4();
		Rigidbody2D_set_angularDrag_m874C6830561CC79E6513548C0A495A84992CF421(L_24, (117.0f), /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// if (colSignal==true)
		bool L_25 = __this->get_colSignal_34();
		if (!L_25)
		{
			goto IL_03ab;
		}
	}
	{
		// if (postmortem==1)
		int32_t L_26 = __this->get_postmortem_35();
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0212;
		}
	}
	{
		// if (gib < 5)
		int32_t L_27 = __this->get_gib_33();
		if ((((int32_t)L_27) >= ((int32_t)5)))
		{
			goto IL_03a4;
		}
	}
	{
		// GameObject pback = Instantiate(Resources.Load("player\\gib\\p_back")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_28;
		L_28 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral2139A356C5F48773DB17C61284D45AB3A82DF1BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_29;
		L_29 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_28, /*hidden argument*/NULL);
		// pback.name = "p_back)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_29, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_30, _stringLiteral13F3D34AA162025D98C63ADF6080554F07E0AB3F, /*hidden argument*/NULL);
		// pback.transform.position = new Vector2(transform.position.x - 0.5f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), ((float)il2cpp_codegen_subtract((float)L_34, (float)(0.5f))), L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_38, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_39, /*hidden argument*/NULL);
		// GameObject pmid = Instantiate(Resources.Load("player\\gib\\p_mid")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_40;
		L_40 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral1DDD6F4084868EA9A579867F6A43C49508718CE8, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_41;
		L_41 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_40, /*hidden argument*/NULL);
		// pmid.name = "p_mid)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_41, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_42, _stringLiteralA1C1C4C13780AEAAB9765F9C087D47D0448D947B, /*hidden argument*/NULL);
		// pmid.transform.position = new Vector2(transform.position.x, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_50), L_46, L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_50, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_51, /*hidden argument*/NULL);
		// GameObject pfront = Instantiate(Resources.Load("player\\gib\\p_front")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_52;
		L_52 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral41F3F4BEFE895389DC863349A9EDF5CDCA51C993, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_53;
		L_53 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_52, /*hidden argument*/NULL);
		// pfront.name = "p_front)";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_53, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_54, _stringLiteral56249B5AD634747D3B38ABAD300430058EA1F6B1, /*hidden argument*/NULL);
		// pfront.transform.position = new Vector2(transform.position.x + 0.5f, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_62), ((float)il2cpp_codegen_add((float)L_58, (float)(0.5f))), L_61, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_62, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_55, L_63, /*hidden argument*/NULL);
		// this.GetComponent<SpriteRenderer>().enabled = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_64;
		L_64 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_64, (bool)0, /*hidden argument*/NULL);
		// this.GetComponent<Collider2D>().enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_65;
		L_65 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_65, (bool)0, /*hidden argument*/NULL);
		// pdead = true;
		__this->set_pdead_16((bool)1);
		// gib++;
		int32_t L_66 = __this->get_gib_33();
		__this->set_gib_33(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
		// }
		goto IL_03a4;
	}

IL_0212:
	{
		// else if (postmortem==2)
		int32_t L_67 = __this->get_postmortem_35();
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_03a4;
		}
	}
	{
		// for (int i = 0; i < 3; i++)
		V_1 = 0;
		goto IL_039d;
	}

IL_0225:
	{
		// if (i==0)
		int32_t L_68 = V_1;
		if (L_68)
		{
			goto IL_02d0;
		}
	}
	{
		// GameObject wheely = GameObject.Find("plane_wheel_" + i);
		String_t* L_69;
		L_69 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_70;
		L_70 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25, L_69, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_70, /*hidden argument*/NULL);
		V_2 = L_71;
		// wheely.transform.position = new Vector3((this.GetComponent<SpriteRenderer>().bounds.extents.x) + this.transform.position.x, wheely.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_74;
		L_74 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_75;
		L_75 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_74, /*hidden argument*/NULL);
		V_3 = L_75;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_77 = L_76.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_78, /*hidden argument*/NULL);
		float L_80 = L_79.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_82, /*hidden argument*/NULL);
		float L_84 = L_83.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_85), ((float)il2cpp_codegen_add((float)L_77, (float)L_80)), L_84, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_73, L_85, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86 = V_2;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_87;
		L_87 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_86, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_87, 0, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().simulated = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = V_2;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_89;
		L_89 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_88, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_simulated_m0C8D3C6B599467E6E791E92E2122282D4A0B055C(L_89, (bool)1, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().AddForce(Vector2.right * i);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = V_2;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_91;
		L_91 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_90, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_92;
		L_92 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		int32_t L_93 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		L_94 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_92, ((float)((float)L_93)), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_91, L_94, /*hidden argument*/NULL);
		// wheely.GetComponent<PolygonCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = V_2;
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_96;
		L_96 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_95, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_96, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0399;
	}

IL_02d0:
	{
		// GameObject wheely = GameObject.Find("plane_wheel_" + i);
		String_t* L_97;
		L_97 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_98;
		L_98 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral16CA69E24C10F1993BE22C328F583B6543689E25, L_97, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99;
		L_99 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_98, /*hidden argument*/NULL);
		V_4 = L_99;
		// wheely.transform.position = new Vector3(this.transform.position.x-(this.GetComponent<SpriteRenderer>().bounds.extents.x), wheely.transform.position.y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_102, /*hidden argument*/NULL);
		float L_104 = L_103.get_x_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_105;
		L_105 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_106;
		L_106 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_105, /*hidden argument*/NULL);
		V_3 = L_106;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_108 = L_107.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_109 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110;
		L_110 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_109, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		L_111 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_110, /*hidden argument*/NULL);
		float L_112 = L_111.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_113), ((float)il2cpp_codegen_subtract((float)L_104, (float)L_108)), L_112, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_101, L_113, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114 = V_4;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_115;
		L_115 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_114, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_115, 0, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().simulated = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = V_4;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_117;
		L_117 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_116, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_simulated_m0C8D3C6B599467E6E791E92E2122282D4A0B055C(L_117, (bool)1, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().AddForce(Vector2.left * i);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = V_4;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_119;
		L_119 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_118, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_120;
		L_120 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		int32_t L_121 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_122;
		L_122 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_120, ((float)((float)L_121)), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_119, L_122, /*hidden argument*/NULL);
		// wheely.GetComponent<PolygonCollider2D>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = V_4;
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_124;
		L_124 = GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82(L_123, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_m734FCF5A42A89193927B270F69F5A1CBCA00FD82_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_124, (bool)1, /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().gravityScale = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = V_4;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_126;
		L_126 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_125, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_126, (1.0f), /*hidden argument*/NULL);
		// wheely.GetComponent<Rigidbody2D>().mass = 10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127 = V_4;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_128;
		L_128 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_127, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_128, (10.0f), /*hidden argument*/NULL);
	}

IL_0399:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_129 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
	}

IL_039d:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_130 = V_1;
		if ((((int32_t)L_130) < ((int32_t)3)))
		{
			goto IL_0225;
		}
	}

IL_03a4:
	{
		// pdead = true;
		__this->set_pdead_16((bool)1);
	}

IL_03ab:
	{
		// if (pdead==false)
		bool L_131 = __this->get_pdead_16();
		if (L_131)
		{
			goto IL_0da9;
		}
	}
	{
		// GameObject throttle = GameObject.Find("sld_throttleGauge");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_132;
		L_132 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5734700A5FB7A8E96AE0C53330A882F21EB52F53, /*hidden argument*/NULL);
		// throttle.GetComponent<Slider>().value = engineSpool;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_133;
		L_133 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_132, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		float L_134 = __this->get_engineSpool_11();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_133, L_134);
		// basense = transform.rotation.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_135;
		L_135 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_136;
		L_136 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_135, /*hidden argument*/NULL);
		V_5 = L_136;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_138 = L_137.get_z_4();
		__this->set_basense_30(L_138);
		// basense = basense - 180;
		float L_139 = __this->get_basense_30();
		__this->set_basense_30(((float)il2cpp_codegen_subtract((float)L_139, (float)(180.0f))));
		// basense = basense * -1;
		float L_140 = __this->get_basense_30();
		__this->set_basense_30(((float)il2cpp_codegen_multiply((float)L_140, (float)(-1.0f))));
		// if (basense<0)
		float L_141 = __this->get_basense_30();
		if ((!(((float)L_141) < ((float)(0.0f)))))
		{
			goto IL_0432;
		}
	}
	{
		// basense = 360+basense;
		float L_142 = __this->get_basense_30();
		__this->set_basense_30(((float)il2cpp_codegen_add((float)(360.0f), (float)L_142)));
	}

IL_0432:
	{
		// GameObject aoa_gauge = GameObject.Find("sld_AOA");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143;
		L_143 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1BDF24CBBF623C17D4A827055BA8C9A9F5230B53, /*hidden argument*/NULL);
		// aoa_gauge.GetComponent<Slider>().value = basense;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_144;
		L_144 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_143, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		float L_145 = __this->get_basense_30();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_144, L_145);
		// GameObject txtAlt = GameObject.Find("txt_altitude");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146;
		L_146 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4FEEFD25D1869129442FDA9D692ED24FF43F28C5, /*hidden argument*/NULL);
		// altitude = Math.Round(transform.position.y, 2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_147;
		L_147 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148;
		L_148 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_147, /*hidden argument*/NULL);
		float L_149 = L_148.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_150;
		L_150 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_149)), 2, /*hidden argument*/NULL);
		__this->set_altitude_29(L_150);
		// txtAlt.GetComponent<Text>().text = "SEA: " + altitude;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_151;
		L_151 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_146, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		double* L_152 = __this->get_address_of_altitude_29();
		String_t* L_153;
		L_153 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_152, /*hidden argument*/NULL);
		String_t* L_154;
		L_154 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B5D20868E6724A929719D85A0C7E7BFAD004CC3, L_153, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_151, L_154);
		// GameObject txtSpd = GameObject.Find("txt_speed");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155;
		L_155 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC14DE0F0E9FD7D7E8EC4EBC61865AD9030B2E6FC, /*hidden argument*/NULL);
		// txtSpd.GetComponent<Text>().text = "Speed: " + Math.Round(Speed, 2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_156;
		L_156 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_155, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		float L_157 = __this->get_Speed_39();
		double L_158;
		L_158 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_157)), 2, /*hidden argument*/NULL);
		V_6 = L_158;
		String_t* L_159;
		L_159 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_6), /*hidden argument*/NULL);
		String_t* L_160;
		L_160 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D, L_159, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_156, L_160);
		// rb.AddRelativeForce(Vector3.right * 20 * 340 * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_161 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		L_162 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163;
		L_163 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_162, (20.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
		L_164 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_163, (340.0f), /*hidden argument*/NULL);
		float L_165;
		L_165 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166;
		L_166 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_164, L_165, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_167;
		L_167 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_166, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_161, L_167, /*hidden argument*/NULL);
		// if (engineSpool > 0)
		float L_168 = __this->get_engineSpool_11();
		if ((!(((float)L_168) > ((float)(0.0f)))))
		{
			goto IL_053c;
		}
	}
	{
		// rb.AddRelativeForce(Vector3.right * engineSpool * 440 * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_169 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170;
		L_170 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_171 = __this->get_engineSpool_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172;
		L_172 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_170, L_171, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_172, (440.0f), /*hidden argument*/NULL);
		float L_174;
		L_174 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		L_175 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_173, L_174, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_176;
		L_176 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_175, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_169, L_176, /*hidden argument*/NULL);
		// }
		goto IL_0570;
	}

IL_053c:
	{
		// rb.AddRelativeForce(Vector3.right * engineSpool * 200 * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_177 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_178;
		L_178 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_179 = __this->get_engineSpool_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180;
		L_180 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_178, L_179, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_180, (200.0f), /*hidden argument*/NULL);
		float L_182;
		L_182 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_181, L_182, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_184;
		L_184 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_183, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_177, L_184, /*hidden argument*/NULL);
	}

IL_0570:
	{
		// if (onground==false)
		bool L_185 = __this->get_onground_18();
		if (L_185)
		{
			goto IL_0d78;
		}
	}
	{
		// if (transform.rotation.eulerAngles.z > 0 && transform.rotation.eulerAngles.z < 45)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_186;
		L_186 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_187;
		L_187 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_186, /*hidden argument*/NULL);
		V_5 = L_187;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188;
		L_188 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_189 = L_188.get_z_4();
		if ((!(((float)L_189) > ((float)(0.0f)))))
		{
			goto IL_0735;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_190;
		L_190 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_191;
		L_191 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_190, /*hidden argument*/NULL);
		V_5 = L_191;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_192;
		L_192 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_193 = L_192.get_z_4();
		if ((!(((float)L_193) < ((float)(45.0f)))))
		{
			goto IL_0735;
		}
	}
	{
		// if (engineSpool > 90 && altitude < 100)
		float L_194 = __this->get_engineSpool_11();
		if ((!(((float)L_194) > ((float)(90.0f)))))
		{
			goto IL_0658;
		}
	}
	{
		double L_195 = __this->get_altitude_29();
		if ((!(((double)L_195) < ((double)(100.0)))))
		{
			goto IL_0658;
		}
	}
	{
		// rb.AddRelativeForce(Vector3.up * 2400 * Time.deltaTime * 2);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_196 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197;
		L_197 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198;
		L_198 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_197, (2400.0f), /*hidden argument*/NULL);
		float L_199;
		L_199 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200;
		L_200 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_198, L_199, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_200, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_202;
		L_202 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_201, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_196, L_202, /*hidden argument*/NULL);
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_203;
		L_203 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_204;
		L_204 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_203, /*hidden argument*/NULL);
		V_7 = L_204;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .0001f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205;
		L_205 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_7), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206;
		memset((&L_206), 0, sizeof(L_206));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_206), (0.0f), (0.0f), (9.99999975E-05f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207;
		L_207 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_205, L_206, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_7), L_207, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_208;
		L_208 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_209 = V_7;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_208, L_209, /*hidden argument*/NULL);
		// }
		goto IL_06cc;
	}

IL_0658:
	{
		// rb.AddRelativeForce(Vector3.up * 2400 * Time.deltaTime * 2);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_210 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_211;
		L_211 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_212;
		L_212 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_211, (2400.0f), /*hidden argument*/NULL);
		float L_213;
		L_213 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_214;
		L_214 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_212, L_213, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215;
		L_215 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_214, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_216;
		L_216 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_215, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_210, L_216, /*hidden argument*/NULL);
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_217;
		L_217 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_218;
		L_218 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_217, /*hidden argument*/NULL);
		V_8 = L_218;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .02f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_219;
		L_219 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220;
		memset((&L_220), 0, sizeof(L_220));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_220), (0.0f), (0.0f), (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_221;
		L_221 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_219, L_220, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_8), L_221, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_222;
		L_222 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_223 = V_8;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_222, L_223, /*hidden argument*/NULL);
	}

IL_06cc:
	{
		// if (altitude < 150)
		double L_224 = __this->get_altitude_29();
		if ((!(((double)L_224) < ((double)(150.0)))))
		{
			goto IL_0709;
		}
	}
	{
		// rb.mass = 60;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_225 = __this->get_rb_4();
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_225, (60.0f), /*hidden argument*/NULL);
		// rb.drag = .5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_226 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_226, (0.5f), /*hidden argument*/NULL);
		// heavyMass = false;
		__this->set_heavyMass_19((bool)0);
		// }
		goto IL_0963;
	}

IL_0709:
	{
		// rb.mass = 88;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_227 = __this->get_rb_4();
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_227, (88.0f), /*hidden argument*/NULL);
		// rb.drag = .55f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_228 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_228, (0.550000012f), /*hidden argument*/NULL);
		// heavyMass = true;
		__this->set_heavyMass_19((bool)1);
		// }
		goto IL_0963;
	}

IL_0735:
	{
		// else if (transform.rotation.eulerAngles.z > 45 && transform.rotation.eulerAngles.z < 74)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_229;
		L_229 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_230;
		L_230 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_229, /*hidden argument*/NULL);
		V_5 = L_230;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_231;
		L_231 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_232 = L_231.get_z_4();
		if ((!(((float)L_232) > ((float)(45.0f)))))
		{
			goto IL_081f;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_233;
		L_233 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_234;
		L_234 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_233, /*hidden argument*/NULL);
		V_5 = L_234;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_235;
		L_235 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_236 = L_235.get_z_4();
		if ((!(((float)L_236) < ((float)(74.0f)))))
		{
			goto IL_081f;
		}
	}
	{
		// res = transform.rotation.eulerAngles.z - 74;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_237;
		L_237 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_238;
		L_238 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_237, /*hidden argument*/NULL);
		V_5 = L_238;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_239;
		L_239 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_240 = L_239.get_z_4();
		__this->set_res_32(((float)il2cpp_codegen_subtract((float)L_240, (float)(74.0f))));
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_241;
		L_241 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_242;
		L_242 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_241, /*hidden argument*/NULL);
		V_9 = L_242;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_243;
		L_243 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_9), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_244;
		memset((&L_244), 0, sizeof(L_244));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_244), (0.0f), (0.0f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_245;
		L_245 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_243, L_244, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_9), L_245, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_246;
		L_246 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_247 = V_9;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_246, L_247, /*hidden argument*/NULL);
		// res = res * -50;
		float L_248 = __this->get_res_32();
		__this->set_res_32(((float)il2cpp_codegen_multiply((float)L_248, (float)(-50.0f))));
		// rb.mass = 60;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_249 = __this->get_rb_4();
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_249, (60.0f), /*hidden argument*/NULL);
		// rb.drag = .5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_250 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_250, (0.5f), /*hidden argument*/NULL);
		// heavyMass = false;
		__this->set_heavyMass_19((bool)0);
		// }
		goto IL_0963;
	}

IL_081f:
	{
		// else if (transform.rotation.eulerAngles.z > 74 && transform.rotation.eulerAngles.z < 250)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_251;
		L_251 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_252;
		L_252 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_251, /*hidden argument*/NULL);
		V_5 = L_252;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_253;
		L_253 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_254 = L_253.get_z_4();
		if ((!(((float)L_254) > ((float)(74.0f)))))
		{
			goto IL_0913;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_255;
		L_255 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_256;
		L_256 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_255, /*hidden argument*/NULL);
		V_5 = L_256;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_257;
		L_257 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_258 = L_257.get_z_4();
		if ((!(((float)L_258) < ((float)(250.0f)))))
		{
			goto IL_0913;
		}
	}
	{
		// res = transform.rotation.eulerAngles.z - 74;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_259;
		L_259 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_260;
		L_260 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_259, /*hidden argument*/NULL);
		V_5 = L_260;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_261;
		L_261 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_262 = L_261.get_z_4();
		__this->set_res_32(((float)il2cpp_codegen_subtract((float)L_262, (float)(74.0f))));
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_263;
		L_263 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_264;
		L_264 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_263, /*hidden argument*/NULL);
		V_10 = L_264;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_265;
		L_265 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_266;
		memset((&L_266), 0, sizeof(L_266));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_266), (0.0f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_267;
		L_267 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_265, L_266, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_10), L_267, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_268;
		L_268 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_269 = V_10;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_268, L_269, /*hidden argument*/NULL);
		// res = res * 200;
		float L_270 = __this->get_res_32();
		__this->set_res_32(((float)il2cpp_codegen_multiply((float)L_270, (float)(200.0f))));
		// if (Speed < 20)
		float L_271 = __this->get_Speed_39();
		if ((!(((float)L_271) < ((float)(20.0f)))))
		{
			goto IL_0963;
		}
	}
	{
		// rb.mass = 175;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_272 = __this->get_rb_4();
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_272, (175.0f), /*hidden argument*/NULL);
		// rb.drag = .1f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_273 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_273, (0.100000001f), /*hidden argument*/NULL);
		// heavyMass = true;
		__this->set_heavyMass_19((bool)1);
		// }
		goto IL_0963;
	}

IL_0913:
	{
		// else if (transform.rotation.eulerAngles.z > 250 && transform.rotation.eulerAngles.z < 360)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_274;
		L_274 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_275;
		L_275 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_274, /*hidden argument*/NULL);
		V_5 = L_275;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_276;
		L_276 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_277 = L_276.get_z_4();
		if ((!(((float)L_277) > ((float)(250.0f)))))
		{
			goto IL_0963;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_278;
		L_278 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_279;
		L_279 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_278, /*hidden argument*/NULL);
		V_5 = L_279;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_280;
		L_280 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_281 = L_280.get_z_4();
		if ((!(((float)L_281) < ((float)(360.0f)))))
		{
			goto IL_0963;
		}
	}
	{
		// rb.drag = .88f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_282 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_282, (0.879999995f), /*hidden argument*/NULL);
	}

IL_0963:
	{
		// if (Speed < 25)
		float L_283 = __this->get_Speed_39();
		if ((!(((float)L_283) < ((float)(25.0f)))))
		{
			goto IL_09e4;
		}
	}
	{
		// rb.AddRelativeForce(Vector3.up * 2500 * Time.deltaTime * 4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_284 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_285;
		L_285 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_286;
		L_286 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_285, (2500.0f), /*hidden argument*/NULL);
		float L_287;
		L_287 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_288;
		L_288 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_286, L_287, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_289;
		L_289 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_288, (4.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_290;
		L_290 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_289, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_284, L_290, /*hidden argument*/NULL);
		// if (Speed < 20 && engineSpool < 20)
		float L_291 = __this->get_Speed_39();
		if ((!(((float)L_291) < ((float)(20.0f)))))
		{
			goto IL_09e4;
		}
	}
	{
		float L_292 = __this->get_engineSpool_11();
		if ((!(((float)L_292) < ((float)(20.0f)))))
		{
			goto IL_09e4;
		}
	}
	{
		// rb.mass = 225;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_293 = __this->get_rb_4();
		Rigidbody2D_set_mass_mF66267DE577C5EC36F27FBF2F48FA405DFA24791(L_293, (225.0f), /*hidden argument*/NULL);
		// rb.drag = .01f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_294 = __this->get_rb_4();
		Rigidbody2D_set_drag_m861543742E06889169BB1A496193B9226475D628(L_294, (0.00999999978f), /*hidden argument*/NULL);
		// heavyMass = true;
		__this->set_heavyMass_19((bool)1);
	}

IL_09e4:
	{
		// if (Speed > 20)
		float L_295 = __this->get_Speed_39();
		if ((!(((float)L_295) > ((float)(20.0f)))))
		{
			goto IL_0a6a;
		}
	}
	{
		// rb.AddRelativeForce(Vector3.up * 2000 * Time.deltaTime * 4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_296 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_297;
		L_297 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_298;
		L_298 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_297, (2000.0f), /*hidden argument*/NULL);
		float L_299;
		L_299 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_300;
		L_300 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_298, L_299, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_301;
		L_301 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_300, (4.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_302;
		L_302 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_301, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_296, L_302, /*hidden argument*/NULL);
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_303;
		L_303 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_304;
		L_304 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_303, /*hidden argument*/NULL);
		V_11 = L_304;
		// rot.eulerAngles = rot.eulerAngles + new Vector3(0, 0, .01f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_305;
		L_305 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_306;
		memset((&L_306), 0, sizeof(L_306));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_306), (0.0f), (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_307;
		L_307 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_305, L_306, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), L_307, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_308;
		L_308 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_309 = V_11;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_308, L_309, /*hidden argument*/NULL);
		// }
		goto IL_0d78;
	}

IL_0a6a:
	{
		// if (!(transform.rotation.eulerAngles.z > 260 && transform.rotation.eulerAngles.z < 290))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_310;
		L_310 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_311;
		L_311 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_310, /*hidden argument*/NULL);
		V_5 = L_311;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_312;
		L_312 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_313 = L_312.get_z_4();
		if ((!(((float)L_313) > ((float)(260.0f)))))
		{
			goto IL_0aad;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_314;
		L_314 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_315;
		L_315 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_314, /*hidden argument*/NULL);
		V_5 = L_315;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_316;
		L_316 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_317 = L_316.get_z_4();
		if ((((float)L_317) < ((float)(290.0f))))
		{
			goto IL_0d45;
		}
	}

IL_0aad:
	{
		// res = transform.rotation.eulerAngles.z - 74;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_318;
		L_318 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_319;
		L_319 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_318, /*hidden argument*/NULL);
		V_5 = L_319;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_320;
		L_320 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_321 = L_320.get_z_4();
		__this->set_res_32(((float)il2cpp_codegen_subtract((float)L_321, (float)(74.0f))));
		// Quaternion rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_322;
		L_322 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_323;
		L_323 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_322, /*hidden argument*/NULL);
		V_12 = L_323;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_324;
		L_324 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_325;
		memset((&L_325), 0, sizeof(L_325));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_325), (0.0f), (0.0f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_326;
		L_326 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_324, L_325, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), L_326, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_327;
		L_327 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_328 = V_12;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_327, L_328, /*hidden argument*/NULL);
		// res = res * -50;
		float L_329 = __this->get_res_32();
		__this->set_res_32(((float)il2cpp_codegen_multiply((float)L_329, (float)(-50.0f))));
		// if (transform.rotation.eulerAngles.z > 290 && transform.rotation.eulerAngles.z < 360)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_330;
		L_330 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_331;
		L_331 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_330, /*hidden argument*/NULL);
		V_5 = L_331;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_332;
		L_332 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_333 = L_332.get_z_4();
		if ((!(((float)L_333) > ((float)(290.0f)))))
		{
			goto IL_0c1d;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_334;
		L_334 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_335;
		L_335 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_334, /*hidden argument*/NULL);
		V_5 = L_335;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_336;
		L_336 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_337 = L_336.get_z_4();
		if ((!(((float)L_337) < ((float)(360.0f)))))
		{
			goto IL_0c1d;
		}
	}
	{
		// res = transform.rotation.eulerAngles.z + 74;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_338;
		L_338 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_339;
		L_339 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_338, /*hidden argument*/NULL);
		V_5 = L_339;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_340;
		L_340 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_341 = L_340.get_z_4();
		__this->set_res_32(((float)il2cpp_codegen_add((float)L_341, (float)(74.0f))));
		// rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_342;
		L_342 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_343;
		L_343 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_342, /*hidden argument*/NULL);
		V_12 = L_343;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .05f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_344;
		L_344 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_345;
		memset((&L_345), 0, sizeof(L_345));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_345), (0.0f), (0.0f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_346;
		L_346 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_344, L_345, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), L_346, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_347;
		L_347 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_348 = V_12;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_347, L_348, /*hidden argument*/NULL);
		// res = res * 2;
		float L_349 = __this->get_res_32();
		__this->set_res_32(((float)il2cpp_codegen_multiply((float)L_349, (float)(2.0f))));
		// rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_350 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_351;
		L_351 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_352 = __this->get_engineSpool_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_353;
		L_353 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_351, L_352, /*hidden argument*/NULL);
		float L_354 = __this->get_res_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_355;
		L_355 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_353, L_354, /*hidden argument*/NULL);
		float L_356;
		L_356 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_357;
		L_357 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_355, L_356, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_358;
		L_358 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_357, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_350, L_358, /*hidden argument*/NULL);
		// }
		goto IL_0d45;
	}

IL_0c1d:
	{
		// else if (transform.rotation.eulerAngles.z > 184 && transform.rotation.eulerAngles.z < 290)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_359;
		L_359 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_360;
		L_360 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_359, /*hidden argument*/NULL);
		V_5 = L_360;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361;
		L_361 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_362 = L_361.get_z_4();
		if ((!(((float)L_362) > ((float)(184.0f)))))
		{
			goto IL_0d12;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_363;
		L_363 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_364;
		L_364 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_363, /*hidden argument*/NULL);
		V_5 = L_364;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_365;
		L_365 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_366 = L_365.get_z_4();
		if ((!(((float)L_366) < ((float)(290.0f)))))
		{
			goto IL_0d12;
		}
	}
	{
		// res = transform.rotation.eulerAngles.z + 74;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_367;
		L_367 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_368;
		L_368 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_367, /*hidden argument*/NULL);
		V_5 = L_368;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_369;
		L_369 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_5), /*hidden argument*/NULL);
		float L_370 = L_369.get_z_4();
		__this->set_res_32(((float)il2cpp_codegen_add((float)L_370, (float)(74.0f))));
		// rot = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_371;
		L_371 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_372;
		L_372 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_371, /*hidden argument*/NULL);
		V_12 = L_372;
		// rot.eulerAngles = rot.eulerAngles - new Vector3(0, 0, .1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_373;
		L_373 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_374;
		memset((&L_374), 0, sizeof(L_374));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_374), (0.0f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_375;
		L_375 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_373, L_374, /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_12), L_375, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_376;
		L_376 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_377 = V_12;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_376, L_377, /*hidden argument*/NULL);
		// res = res * 20;
		float L_378 = __this->get_res_32();
		__this->set_res_32(((float)il2cpp_codegen_multiply((float)L_378, (float)(20.0f))));
		// rb.AddRelativeForce(Vector3.right * engineSpool * res * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_379 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_380;
		L_380 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_381 = __this->get_engineSpool_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_382;
		L_382 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_380, L_381, /*hidden argument*/NULL);
		float L_383 = __this->get_res_32();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_384;
		L_384 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_382, L_383, /*hidden argument*/NULL);
		float L_385;
		L_385 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_386;
		L_386 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_384, L_385, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_387;
		L_387 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_386, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_379, L_387, /*hidden argument*/NULL);
		// }
		goto IL_0d45;
	}

IL_0d12:
	{
		// rb.AddRelativeForce(Vector3.up * -444 * Time.deltaTime * 4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_388 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_389;
		L_389 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_390;
		L_390 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_389, (-444.0f), /*hidden argument*/NULL);
		float L_391;
		L_391 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_392;
		L_392 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_390, L_391, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_393;
		L_393 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_392, (4.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_394;
		L_394 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_393, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_388, L_394, /*hidden argument*/NULL);
	}

IL_0d45:
	{
		// rb.AddRelativeForce(Vector3.down * 1000 * Time.deltaTime * 10);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_395 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_396;
		L_396 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_397;
		L_397 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_396, (1000.0f), /*hidden argument*/NULL);
		float L_398;
		L_398 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_399;
		L_399 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_397, L_398, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_400;
		L_400 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_399, (10.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_401;
		L_401 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_400, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_395, L_401, /*hidden argument*/NULL);
	}

IL_0d78:
	{
		// StartCoroutine(GetSpeed());
		RuntimeObject* L_402;
		L_402 = mplane_controller_GetSpeed_m4892E4EE7F6CF70C9EF63F3C8E52D4713C0C487B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_403;
		L_403 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_402, /*hidden argument*/NULL);
		// if (Speed > 10) //faster so harder to move
		float L_404 = __this->get_Speed_39();
		if ((!(((float)L_404) > ((float)(10.0f)))))
		{
			goto IL_0d9e;
		}
	}
	{
		// rotateSpeed = 100;
		__this->set_rotateSpeed_13((100.0f));
		// }
		return;
	}

IL_0d9e:
	{
		// rotateSpeed = 188;
		__this->set_rotateSpeed_13((188.0f));
	}

IL_0da9:
	{
		// }
		return;
	}
}
// System.Void mplane_controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_Update_m79BCA08D06046E3F05A5026A5B2F3A2BFF32D3D0 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pdead==false)
		bool L_0 = __this->get_pdead_16();
		if (L_0)
		{
			goto IL_029e;
		}
	}
	{
		// moveVertSense = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_moveVertSense_5(L_1);
		// moveVertSense2 = Input.GetAxis("Vertical");
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_moveVertSense2_8(L_2);
		// moveHorSense = Input.GetAxis("Horizontal");
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_moveHorSense_6(L_3);
		// if (moveVertSense == 0 )
		float L_4 = __this->get_moveVertSense_5();
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		// bypass = false;
		__this->set_bypass_9((bool)0);
	}

IL_004f:
	{
		// if (moveHorSense == 0)
		float L_5 = __this->get_moveHorSense_6();
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// bypass2 = false;
		__this->set_bypass2_10((bool)0);
	}

IL_0063:
	{
		// controllerCheck();
		mplane_controller_controllerCheck_m0701A34C6F9DD28BCF3CC95482FCA8BD25133AD6(__this, /*hidden argument*/NULL);
		// if (moveVertSense != 0)
		float L_6 = __this->get_moveVertSense_5();
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0088;
		}
	}
	{
		// moveVertSense = moveVertSense * 2;
		float L_7 = __this->get_moveVertSense_5();
		__this->set_moveVertSense_5(((float)il2cpp_codegen_multiply((float)L_7, (float)(2.0f))));
	}

IL_0088:
	{
		// if (moveHorSense != 0)
		float L_8 = __this->get_moveHorSense_6();
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_00a7;
		}
	}
	{
		// moveHorSense = moveHorSense * 2;
		float L_9 = __this->get_moveHorSense_6();
		__this->set_moveHorSense_6(((float)il2cpp_codegen_multiply((float)L_9, (float)(2.0f))));
	}

IL_00a7:
	{
		// if (moveVertSense < 0)
		float L_10 = __this->get_moveVertSense_5();
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// if (!moveVertButt && controlerUsed==false)
		bool L_11 = __this->get_moveVertButt_7();
		if (L_11)
		{
			goto IL_0102;
		}
	}
	{
		bool L_12 = __this->get_controlerUsed_24();
		if (L_12)
		{
			goto IL_0102;
		}
	}
	{
		// moveVertSense = 0;
		__this->set_moveVertSense_5((0.0f));
		// }
		goto IL_0102;
	}

IL_00d1:
	{
		// else if (moveVertSense > 0)
		float L_13 = __this->get_moveVertSense_5();
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_0102;
		}
	}
	{
		// if (!moveVertButt && controlerUsed == false)
		bool L_14 = __this->get_moveVertButt_7();
		if (L_14)
		{
			goto IL_00fb;
		}
	}
	{
		bool L_15 = __this->get_controlerUsed_24();
		if (L_15)
		{
			goto IL_00fb;
		}
	}
	{
		// moveVertSense = 0;
		__this->set_moveVertSense_5((0.0f));
		// }
		goto IL_0102;
	}

IL_00fb:
	{
		// else if (controlerUsed == true)
		bool L_16 = __this->get_controlerUsed_24();
	}

IL_0102:
	{
		// if (moveHorSense < 0)
		float L_17 = __this->get_moveHorSense_6();
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_012c;
		}
	}
	{
		// if (!moveHortButt && controlerUsed == false)
		bool L_18 = __this->get_moveHortButt_12();
		if (L_18)
		{
			goto IL_0154;
		}
	}
	{
		bool L_19 = __this->get_controlerUsed_24();
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		// moveHorSense = 0;
		__this->set_moveHorSense_6((0.0f));
		// }
		goto IL_0154;
	}

IL_012c:
	{
		// else if (moveHorSense > 0)
		float L_20 = __this->get_moveHorSense_6();
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_0154;
		}
	}
	{
		// if (!moveHortButt && controlerUsed == false)
		bool L_21 = __this->get_moveHortButt_12();
		if (L_21)
		{
			goto IL_0154;
		}
	}
	{
		bool L_22 = __this->get_controlerUsed_24();
		if (L_22)
		{
			goto IL_0154;
		}
	}
	{
		// moveHorSense = 0;
		__this->set_moveHorSense_6((0.0f));
	}

IL_0154:
	{
		// if (bypass==false)
		bool L_23 = __this->get_bypass_9();
		if (L_23)
		{
			goto IL_023d;
		}
	}
	{
		// if (moveVertSense > 0)
		float L_24 = __this->get_moveVertSense_5();
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_01a0;
		}
	}
	{
		// transform.Rotate(0, 0, -rotateSpeed * (Time.deltaTime*(engineSpool/100)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_26 = __this->get_rotateSpeed_13();
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_28 = __this->get_engineSpool_11();
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_25, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_26)), (float)((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_28/(float)(100.0f))))))), /*hidden argument*/NULL);
		// }
		goto IL_023d;
	}

IL_01a0:
	{
		// else if (moveVertSense < 0)
		float L_29 = __this->get_moveVertSense_5();
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_023d;
		}
	}
	{
		// transform.Rotate(0, 0, rotateSpeed * (Time.deltaTime * (engineSpool / 100)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_31 = __this->get_rotateSpeed_13();
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_33 = __this->get_engineSpool_11();
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_30, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_31, (float)((float)il2cpp_codegen_multiply((float)L_32, (float)((float)((float)L_33/(float)(100.0f))))))), /*hidden argument*/NULL);
		// if (onground == true && Speed>17)
		bool L_34 = __this->get_onground_18();
		if (!L_34)
		{
			goto IL_0228;
		}
	}
	{
		float L_35 = __this->get_Speed_39();
		if ((!(((float)L_35) > ((float)(17.0f)))))
		{
			goto IL_0228;
		}
	}
	{
		// rb.AddRelativeForce(Vector3.up * 5444 * Time.deltaTime * 4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36 = __this->get_rb_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, (5444.0f), /*hidden argument*/NULL);
		float L_39;
		L_39 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_38, L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, (4.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		L_42 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_41, /*hidden argument*/NULL);
		Rigidbody2D_AddRelativeForce_m7B9A6CABC231F87DEB825DD7780CA2C1C77F569C(L_36, L_42, /*hidden argument*/NULL);
		// }
		goto IL_023d;
	}

IL_0228:
	{
		// else if (onground == true && Speed < 17)
		bool L_43 = __this->get_onground_18();
		if (!L_43)
		{
			goto IL_023d;
		}
	}
	{
		float L_44 = __this->get_Speed_39();
	}

IL_023d:
	{
		// if (bypass2==false)
		bool L_45 = __this->get_bypass2_10();
		if (L_45)
		{
			goto IL_029e;
		}
	}
	{
		// if (moveHorSense > 0)
		float L_46 = __this->get_moveHorSense_6();
		if ((!(((float)L_46) > ((float)(0.0f)))))
		{
			goto IL_0272;
		}
	}
	{
		// if (engineSpool < 99)
		float L_47 = __this->get_engineSpool_11();
		if ((!(((float)L_47) < ((float)(99.0f)))))
		{
			goto IL_029e;
		}
	}
	{
		// engineSpool = engineSpool + 0.1f;
		float L_48 = __this->get_engineSpool_11();
		__this->set_engineSpool_11(((float)il2cpp_codegen_add((float)L_48, (float)(0.100000001f))));
		// }
		return;
	}

IL_0272:
	{
		// else if (moveHorSense < 0)
		float L_49 = __this->get_moveHorSense_6();
		if ((!(((float)L_49) < ((float)(0.0f)))))
		{
			goto IL_029e;
		}
	}
	{
		// if (engineSpool > -19)
		float L_50 = __this->get_engineSpool_11();
		if ((!(((float)L_50) > ((float)(-19.0f)))))
		{
			goto IL_029e;
		}
	}
	{
		// engineSpool = engineSpool - 0.1f;
		float L_51 = __this->get_engineSpool_11();
		__this->set_engineSpool_11(((float)il2cpp_codegen_subtract((float)L_51, (float)(0.100000001f))));
	}

IL_029e:
	{
		// }
		return;
	}
}
// System.Boolean mplane_controller::get_IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool mplane_controller_get_IsGrounded_m112FE5A290C5CEDFE7C7CA6B33DC6121A30FFF75 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = __this->get_U3CIsGroundedU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void mplane_controller::set_IsGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_set_IsGrounded_mAA1929C84C2C7A6635596E3C0BA3F9D092740696 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGroundedU3Ek__BackingField_41(L_0);
		return;
	}
}
// System.Void mplane_controller::DetectGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller_DetectGround_mEA2CB48EE465BF4CCA87DBB341953BE4C2AA366B (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D hit = Physics2D.Raycast(groundRaycaster.position, -Vector2.up, raycastDistance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_groundRaycaster_42();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_raycastDistance_44();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (hit.collider)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7;
		L_7 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00a6;
		}
	}
	{
		// if (rb.velocity.y <= 0)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// rb.gravityScale = 0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = __this->get_rb_4();
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_12, (0.0f), /*hidden argument*/NULL);
		// Vector3 position = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// position.y = position.y - (feetLocationTransform.position.y - hit.point.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16 = L_15.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_feetLocationTransform_43();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		float L_21 = L_20.get_y_1();
		(&V_1)->set_y_3(((float)il2cpp_codegen_subtract((float)L_16, (float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)))));
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_1;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_23, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// IsGrounded = true;
		mplane_controller_set_IsGrounded_mAA1929C84C2C7A6635596E3C0BA3F9D092740696_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a6:
	{
		// rb.gravityScale = 1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24 = __this->get_rb_4();
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_24, (1.0f), /*hidden argument*/NULL);
		// IsGrounded = false;
		mplane_controller_set_IsGrounded_mAA1929C84C2C7A6635596E3C0BA3F9D092740696_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator mplane_controller::GetSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mplane_controller_GetSpeed_m4892E4EE7F6CF70C9EF63F3C8E52D4713C0C487B (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * L_0 = (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 *)il2cpp_codegen_object_new(U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4_il2cpp_TypeInfo_var);
		U3CGetSpeedU3Ed__55__ctor_mFBD5B020C45A66AC14B8014A2BBA1AE9E61A961F(L_0, 0, /*hidden argument*/NULL);
		U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void mplane_controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mplane_controller__ctor_m0A456063F4D7ADFF01288C400979DF10B72AC496 (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float rotateSpeed=188;
		__this->set_rotateSpeed_13((188.0f));
		// public bool onground = true;
		__this->set_onground_18((bool)1);
		// System.Random blarg = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		__this->set_blarg_20(L_0);
		// float[] speedArr=new float[10];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_speedArr_31(L_1);
		// public float UpdateDelay=1;
		__this->set_UpdateDelay_40((1.0f));
		// public float raycastDistance = .1f;
		__this->set_raycastDistance_44((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void pIntegrity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pIntegrity_Start_m8BFC42663A8D300C471313A25C70A90B663B6846 (pIntegrity_t3660C86E5EFEEDD5749FAF372CCF1EC8CFAC57AA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void pIntegrity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pIntegrity_Update_m814EC9430F7FC16A4B841FBFE02196217E331738 (pIntegrity_t3660C86E5EFEEDD5749FAF372CCF1EC8CFAC57AA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void pIntegrity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pIntegrity__ctor_mEDEEB7F8AED5214847344D2EE6CB32A182F25609 (pIntegrity_t3660C86E5EFEEDD5749FAF372CCF1EC8CFAC57AA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void realDeleteAfterPlainAniScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realDeleteAfterPlainAniScript_Start_mB24CBF5F7E25E6920C60676416F6FC93D2E7E3E8 (realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_4(L_0);
		// }
		return;
	}
}
// System.Void realDeleteAfterPlainAniScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realDeleteAfterPlainAniScript_Update_m7536EACC6E91ED47C4E73B751A6A9745AF0D5DAD (realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ani.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_ani_4();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void realDeleteAfterPlainAniScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realDeleteAfterPlainAniScript__ctor_mAB340C071D84D6B82AC4997A31B77E85C36D1B84 (realDeleteAfterPlainAniScript_t2B606ECBF439A9DB7DA306E9F322CF8E21D9F024 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void realGenericButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButton_Start_m37C005B8CAC3C52301B7AA61DD1F901EDC91962D (realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&realGenericButton_TaskOnClick_mEAC0C9E484EF63F4E871DF08023D380C4119B4A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yourButton = gameObject.GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1;
		L_1 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		__this->set_yourButton_4(L_1);
		// yourButton.onClick.AddListener(TaskOnClick);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_yourButton_4();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_3;
		L_3 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_2, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)realGenericButton_TaskOnClick_mEAC0C9E484EF63F4E871DF08023D380C4119B4A1_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_3, L_4, /*hidden argument*/NULL);
		// nextUsage = Time.time + delay; //it is on display
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_delay_7();
		__this->set_nextUsage_6(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// }
		return;
	}
}
// System.Void realGenericButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButton_Update_m3E2577BBCB3E2987655B36041265E29DD30A58BD (realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void realGenericButton::TaskOnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButton_TaskOnClick_mEAC0C9E484EF63F4E871DF08023D380C4119B4A1 (realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisrealGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE_m7A3B9E8A85DE942FCAFD7473557715F54712B96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F50040D9ACC6690560900784FF8027F628B41A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listner.GetComponent<realGenericButtonListner>().buttonScreeen = buttonVal;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_listner_8();
		realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * L_1;
		L_1 = GameObject_GetComponent_TisrealGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE_m7A3B9E8A85DE942FCAFD7473557715F54712B96E(L_0, /*hidden argument*/GameObject_GetComponent_TisrealGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE_m7A3B9E8A85DE942FCAFD7473557715F54712B96E_RuntimeMethod_var);
		int32_t L_2 = __this->get_buttonVal_5();
		L_1->set_buttonScreeen_4(L_2);
		// Debug.Log("You have clicked the button!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7F50040D9ACC6690560900784FF8027F628B41A2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void realGenericButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButton__ctor_mA324C829A87626382D58EB949CA2C06273887020 (realGenericButton_t6DC487642EA749AE8884A033845BABB27662939A * __this, const RuntimeMethod* method)
{
	{
		// float delay = 0.15f; //only half delay
		__this->set_delay_7((0.150000006f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void realGenericButtonListner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButtonListner_Start_m6FDD25F119E721076BA8ED6948ECC9D40C4D2014 (realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * __this, const RuntimeMethod* method)
{
	{
		// buttonScreeen = 0;
		__this->set_buttonScreeen_4(0);
		// }
		return;
	}
}
// System.Void realGenericButtonListner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButtonListner_Update_m8972031B0D85E309122C448D4ACD9C5A8983150E (realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void realGenericButtonListner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void realGenericButtonListner__ctor_m9984140BC312D577655CEF43FEAAC71EDD9F3F60 (realGenericButtonListner_t7869CB2F3671DB9EB40A5B127E106741ABA380DE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void wheelHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelHealth_Start_m0984AEB00368C1BF1E84C93A260A9779ECA54126 (wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316 * __this, const RuntimeMethod* method)
{
	{
		// nextUsage = Time.time + delay; //it is on display
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_delay_9();
		__this->set_nextUsage_10(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void wheelHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelHealth_Update_m28AC58DE01A87E092203EBD095C974E8F14A4FA2 (wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868229D86F307A2C5496E790C6B36DDDB1796BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CBC5C2033E2AE3C4C3A498084FDB81CEC9D83C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD74D04486A2657C56BC5A7F24DB828FC2EEB3116);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0BF3AC8BCEA21E01F5EE39C07E24030D99CF0B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time > nextUsage) //continue scrolling
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_nextUsage_10();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0136;
		}
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_3;
		L_3 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_2, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		bool L_4 = L_3->get_colSignal_34();
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		// if (wheelHP < 101)
		int32_t L_5 = __this->get_wheelHP_4();
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)101))))
		{
			goto IL_0051;
		}
	}
	{
		// wheelHP = wheelHP + 30;
		int32_t L_6 = __this->get_wheelHP_4();
		__this->set_wheelHP_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)30))));
		// if (wheelHP > 100)
		int32_t L_7 = __this->get_wheelHP_4();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0051;
		}
	}
	{
		// wheelHP = 100;
		__this->set_wheelHP_4(((int32_t)100));
	}

IL_0051:
	{
		// if (wheelHP>80)
		int32_t L_8 = __this->get_wheelHP_4();
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)80))))
		{
			goto IL_0068;
		}
	}
	{
		// curCol = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_curCol_11(L_9);
		// }
		goto IL_008a;
	}

IL_0068:
	{
		// else if (wheelHP>33)
		int32_t L_10 = __this->get_wheelHP_4();
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)33))))
		{
			goto IL_007f;
		}
	}
	{
		// curCol = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		__this->set_curCol_11(L_11);
		// }
		goto IL_008a;
	}

IL_007f:
	{
		// curCol = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_curCol_11(L_12);
	}

IL_008a:
	{
		// if (this.gameObject.name== "planeSkid_front")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral3EDB7B8CAADD61D685C3A93C8E5E1206546F3E92, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00d8;
		}
	}
	{
		// GameObject.Find("sld_tire_front").GetComponent<Slider>().value = wheelHP;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralD74D04486A2657C56BC5A7F24DB828FC2EEB3116, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_17;
		L_17 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_16, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		int32_t L_18 = __this->get_wheelHP_4();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_17, ((float)((float)L_18)));
		// GameObject.Find("Handle_front_tire").GetComponent<Image>().color=curCol;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE0BF3AC8BCEA21E01F5EE39C07E24030D99CF0B2, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20;
		L_20 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_19, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = __this->get_curCol_11();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// }
		goto IL_0124;
	}

IL_00d8:
	{
		// else if (this.gameObject.name== "planeSkid_back")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral84C4E16FDEB78EA7E8AD406744253132FB9146B2, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0124;
		}
	}
	{
		// GameObject.Find("sld_tire_back").GetComponent<Slider>().value = wheelHP;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC5CBC5C2033E2AE3C4C3A498084FDB81CEC9D83C, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_26;
		L_26 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_25, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		int32_t L_27 = __this->get_wheelHP_4();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_26, ((float)((float)L_27)));
		// GameObject.Find("Handle_back_tire").GetComponent<Image>().color = curCol;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral868229D86F307A2C5496E790C6B36DDDB1796BD4, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_29;
		L_29 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_28, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = __this->get_curCol_11();
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
	}

IL_0124:
	{
		// nextUsage = Time.time + delay; //it is on display
		float L_31;
		L_31 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_32 = __this->get_delay_9();
		__this->set_nextUsage_10(((float)il2cpp_codegen_add((float)L_31, (float)L_32)));
	}

IL_0136:
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_34;
		L_34 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_33, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		bool L_35 = L_34->get_colSignal_34();
		if (L_35)
		{
			goto IL_018b;
		}
	}
	{
		// if (wheelHP < 1)
		int32_t L_36 = __this->get_wheelHP_4();
		if ((((int32_t)L_36) >= ((int32_t)1)))
		{
			goto IL_018b;
		}
	}
	{
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_38;
		L_38 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_37, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_38->set_colSignal_34((bool)1);
		// GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_40;
		L_40 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_39, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		L_40->set_postmortem_35(2);
		// this.GetComponent<CapsuleCollider2D>().enabled = false;
		CapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39 * L_41;
		L_41 = Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider2D_tF11350A4C377237B7E78A224D978E9F57A872C39_m23C79AED18C2D71DD7D899C231F4C1712F6EB0F0_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_41, (bool)0, /*hidden argument*/NULL);
	}

IL_018b:
	{
		// }
		return;
	}
}
// System.Void wheelHealth::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelHealth_OnCollisionEnter2D_m24836558F54DC7A6B1E86E3DE9BA93DED9D1C81F (wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98CC9ECD766E8B33B5EB6119EEDE7EFED4F1ABAC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* V_1 = NULL;
	int32_t V_2 = 0;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float impulse = 0f;
		V_0 = (0.0f);
		// foreach (ContactPoint2D cp in c.contacts)
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___c0;
		ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* L_1;
		L_1 = Collision2D_get_contacts_m81A37C7FA34C8DE0B0C71F0C586F13BFACC1BFF5(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0027;
	}

IL_0011:
	{
		// foreach (ContactPoint2D cp in c.contacts)
		ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// impulse += cp.normalImpulse;
		float L_6 = V_0;
		float L_7;
		L_7 = ContactPoint2D_get_normalImpulse_mAE66735E3267B1BB71D4A260E2516A31D83F7D82((ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 *)(&V_3), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_6, (float)L_7));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0027:
	{
		// foreach (ContactPoint2D cp in c.contacts)
		int32_t L_9 = V_2;
		ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// if (impulse>50)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(50.0f)))))
		{
			goto IL_0118;
		}
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().engineSpool>55)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_13;
		L_13 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_12, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_14 = L_13->get_engineSpool_11();
		if ((!(((float)L_14) > ((float)(55.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		// if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > 18)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B98CE96A99A7565590C35BC03292E4004F16117, /*hidden argument*/NULL);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_16;
		L_16 = GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8(L_15, /*hidden argument*/GameObject_GetComponent_Tismplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2_m2A00A632D8E17329DCD2AF0E6F84A31055D571A8_RuntimeMethod_var);
		float L_17 = L_16->get_Speed_39();
		if ((!(((float)L_17) > ((float)(18.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		// Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
		String_t* L_18;
		L_18 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral98CC9ECD766E8B33B5EB6119EEDE7EFED4F1ABAC, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// lastDamage = (Convert.ToInt32(impulse) / 2);
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE(L_20, /*hidden argument*/NULL);
		__this->set_lastDamage_8(((int32_t)((int32_t)L_21/(int32_t)2)));
		// wheelHP = wheelHP - lastDamage;
		int32_t L_22 = __this->get_wheelHP_4();
		int32_t L_23 = __this->get_lastDamage_8();
		__this->set_wheelHP_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)));
		// }
		return;
	}

IL_00a9:
	{
		// Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
		String_t* L_24;
		L_24 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral98CC9ECD766E8B33B5EB6119EEDE7EFED4F1ABAC, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
		// lastDamage = (Convert.ToInt32(impulse) / 4);
		float L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE(L_26, /*hidden argument*/NULL);
		__this->set_lastDamage_8(((int32_t)((int32_t)L_27/(int32_t)4)));
		// wheelHP = wheelHP - lastDamage;
		int32_t L_28 = __this->get_wheelHP_4();
		int32_t L_29 = __this->get_lastDamage_8();
		__this->set_wheelHP_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)));
		// }
		return;
	}

IL_00e1:
	{
		// Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
		String_t* L_30;
		L_30 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral98CC9ECD766E8B33B5EB6119EEDE7EFED4F1ABAC, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// lastDamage = (Convert.ToInt32(impulse) / 4);
		float L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE(L_32, /*hidden argument*/NULL);
		__this->set_lastDamage_8(((int32_t)((int32_t)L_33/(int32_t)4)));
		// wheelHP = wheelHP - lastDamage;
		int32_t L_34 = __this->get_wheelHP_4();
		int32_t L_35 = __this->get_lastDamage_8();
		__this->set_wheelHP_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35)));
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void wheelHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelHealth__ctor_m6B006462D7C2FF48391C9D1C30A94B7E1BA5E216 (wheelHealth_t0A411D2A1C7B61501A395D68AF29B516293B7316 * __this, const RuntimeMethod* method)
{
	{
		// public int wheelHP = 100;
		__this->set_wheelHP_4(((int32_t)100));
		// float delay = 1.0f; //only half delay
		__this->set_delay_9((1.0f));
		// Color curCol = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_curCol_11(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void wogen1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wogen1_Start_m0EB1FE71AAC2DD48119ABFCBC63C7263F0DAFB42 (wogen1_t420F1173A8F2A5A9720B687848CAE322166F51F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral460A278B95F6FE6C474F72CD405204A1EAF8B67D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F613818B9E75C9DAF880518950A7F42921E3FA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7810AA46E8C2E73876600EC5E006FC63B66F2B9);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_2 = NULL;
	float V_3 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float curPos = 0;
		V_0 = (0.0f);
		// for (int i=0; i<999;i++)
		V_1 = 0;
		goto IL_00ad;
	}

IL_000d:
	{
		// System.Random blarg = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		// GameObject ExpDust = Instantiate(Resources.Load("ground\\airport")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralC7810AA46E8C2E73876600EC5E006FC63B66F2B9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_1, /*hidden argument*/NULL);
		// var renderer = ExpDust.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_2, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4;
		L_4 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		V_2 = L_4;
		// float width = renderer.bounds.size.x;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = V_2;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6;
		L_6 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		V_3 = L_8;
		// ExpDust.name = "ground"+i+"FFF"+ renderer.bounds.size.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_3;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11 = V_2;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_13;
		float* L_14 = (&V_5)->get_address_of_x_2();
		String_t* L_15;
		L_15 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral8F613818B9E75C9DAF880518950A7F42921E3FA9, L_10, _stringLiteral460A278B95F6FE6C474F72CD405204A1EAF8B67D, L_15, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_9, L_16, /*hidden argument*/NULL);
		// ExpDust.transform.position = new Vector3 (curPos+width,0,0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		float L_19 = V_0;
		float L_20 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_19, (float)L_20)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_21, /*hidden argument*/NULL);
		// curPos = ExpDust.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		V_0 = L_24;
		// for (int i=0; i<999;i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i=0; i<999;i++)
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)999))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void wogen1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wogen1_Update_mB2211D9A80C0B05F47CE43B7997D63DEF2B742DE (wogen1_t420F1173A8F2A5A9720B687848CAE322166F51F4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void wogen1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wogen1__ctor_mB707ECB7FF802904F97C6E109D9F153DD84E56B8 (wogen1_t420F1173A8F2A5A9720B687848CAE322166F51F4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void mplane_controller/<GetSpeed>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpeedU3Ed__55__ctor_mFBD5B020C45A66AC14B8014A2BBA1AE9E61A961F (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void mplane_controller/<GetSpeed>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpeedU3Ed__55_System_IDisposable_Dispose_m30274240D7099A991AA659C6785138F45429EEDE (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean mplane_controller/<GetSpeed>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetSpeedU3Ed__55_MoveNext_mB24BB090EB03E3C3F6094F9B9FAFDB5C40CB6F60 (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// YieldInstruction timedWait = new WaitForSeconds(UpdateDelay);
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_4 = V_1;
		float L_5 = L_4->get_UpdateDelay_40();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CtimedWaitU3E5__2_3(L_6);
		// Vector3 lastPosition = transform.position;
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_7 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		__this->set_U3ClastPositionU3E5__3_4(L_9);
		// float lastTimestamp = Time.time;
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3ClastTimestampU3E5__4_5(L_10);
		goto IL_00d1;
	}

IL_0050:
	{
		// yield return timedWait;
		YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * L_11 = __this->get_U3CtimedWaitU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var deltaPosition = (transform.position - lastPosition).magnitude;
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_12 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_U3ClastPositionU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17;
		L_17 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_2 = L_17;
		// var deltaTime = Time.time - lastTimestamp;
		float L_18;
		L_18 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_19 = __this->get_U3ClastTimestampU3E5__4_5();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_18, (float)L_19));
		// if (Mathf.Approximately(deltaPosition, 0f)) // Clean up "near-zero" displacement
		float L_20 = V_2;
		bool L_21;
		L_21 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_20, (0.0f), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// deltaPosition = 0f;
		V_2 = (0.0f);
	}

IL_00ac:
	{
		// Speed = deltaPosition / deltaTime;
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_22 = V_1;
		float L_23 = V_2;
		float L_24 = V_3;
		L_22->set_Speed_39(((float)((float)L_23/(float)L_24)));
		// lastPosition = transform.position;
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_25 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		__this->set_U3ClastPositionU3E5__3_4(L_27);
		// lastTimestamp = Time.time;
		float L_28;
		L_28 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3ClastTimestampU3E5__4_5(L_28);
	}

IL_00d1:
	{
		// while (enabled)
		mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * L_29 = V_1;
		bool L_30;
		L_30 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0050;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object mplane_controller/<GetSpeed>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSpeedU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79B59B4AB857153A943904A0CC497CD45DC533CF (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void mplane_controller/<GetSpeed>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSpeedU3Ed__55_System_Collections_IEnumerator_Reset_m8A36859AA26E7CB6868D2397ECB82D2CCF6465F8 (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetSpeedU3Ed__55_System_Collections_IEnumerator_Reset_m8A36859AA26E7CB6868D2397ECB82D2CCF6465F8_RuntimeMethod_var)));
	}
}
// System.Object mplane_controller/<GetSpeed>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetSpeedU3Ed__55_System_Collections_IEnumerator_get_Current_m40664CFD2F84B049C4E0B801DF9F2F13AEA3E248 (U3CGetSpeedU3Ed__55_t79319F6DD3256E755BFDF421EC14BC618D9C55A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))))));
		V_0 = ((float)((float)L_12));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mplane_controller_set_IsGrounded_mAA1929C84C2C7A6635596E3C0BA3F9D092740696_inline (mplane_controller_tEA6D7E70FAD4BB95449A2F921BBFC8A233005BD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGrounded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGroundedU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
