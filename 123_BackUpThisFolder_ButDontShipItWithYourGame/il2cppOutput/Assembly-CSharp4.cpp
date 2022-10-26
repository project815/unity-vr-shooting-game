﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E;
// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
struct ColorCorrectionRamp_tA2B3CE69EFA7EF079DBC832F370EB9872E92E2CF;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// UnityStandardAssets.ImageEffects.ContrastEnhance
struct ContrastEnhance_tCE322B86C85C79BB8EA662B8A525FFA67BABBAC1;
// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5;
// UnityStandardAssets.ImageEffects.CreaseShading
struct CreaseShading_t9970E9C94E6A666FC4131E6DCCD80BE876D19598;
// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8;
// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91;
// UnityStandardAssets.ImageEffects.EdgeDetection
struct EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityStandardAssets.ImageEffects.Fisheye
struct Fisheye_t10DE2F0851075D3E0C5ABACD90AF9B2E5E191293;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t9B33CF76423FA251AE3D017FE6BCBBFBB2629828;
// UnityStandardAssets.ImageEffects.Grayscale
struct Grayscale_t7190BEE321ECA3696898EF8B37530A9B00C97C2E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF;
// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_tED065EBD2AE1A29079D0C32DAEFA255194E7C7F9;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityStandardAssets.ImageEffects.MotionBlur
struct MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F;
// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69;
// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76;
// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t59296A143EEAAE54F963135CDDCEEF710CFD4EF8;
// UnityStandardAssets.ImageEffects.Quads
struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityStandardAssets.ImageEffects.ScreenOverlay
struct ScreenOverlay_t82957B93604683BC0C0A01C9A4324312AEAAEF09;
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8;
// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552;
// UnityStandardAssets.ImageEffects.SepiaTone
struct SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100;
// System.String
struct String_t;
// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49;
// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7;
// System.Type
struct Type_t;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE;
IL2CPP_EXTERN_C String_t* _stringLiteral0D67CBC8EADDE9318D3A047B0D24B1BDD1DF28F1;
IL2CPP_EXTERN_C String_t* _stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13;
IL2CPP_EXTERN_C String_t* _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
IL2CPP_EXTERN_C String_t* _stringLiteral123EC10A00B006ADA382F26173A1D784145BAC19;
IL2CPP_EXTERN_C String_t* _stringLiteral19BBFA9A3E2E76B948F305756AA909457B79A304;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0;
IL2CPP_EXTERN_C String_t* _stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C31C686E0C84134B4E5C55FE160ABE4C0D5031B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F;
IL2CPP_EXTERN_C String_t* _stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6;
IL2CPP_EXTERN_C String_t* _stringLiteral322836504097FF5183FA9B195361CABCA3C9F347;
IL2CPP_EXTERN_C String_t* _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495;
IL2CPP_EXTERN_C String_t* _stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2EF676FC8409A6796B815A352B654D2EEC508F;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B;
IL2CPP_EXTERN_C String_t* _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F;
IL2CPP_EXTERN_C String_t* _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45;
IL2CPP_EXTERN_C String_t* _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48;
IL2CPP_EXTERN_C String_t* _stringLiteral440990408400C81491678EBA99F85211D0BC7276;
IL2CPP_EXTERN_C String_t* _stringLiteral46BD273D624ECB1BB8ECE4038A8032857886D012;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC;
IL2CPP_EXTERN_C String_t* _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80;
IL2CPP_EXTERN_C String_t* _stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0;
IL2CPP_EXTERN_C String_t* _stringLiteral58DFC31EABA350BBD1DBE91259DCF0F7DC3D9423;
IL2CPP_EXTERN_C String_t* _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD1605C34550256549896A138E6C1D2CC7B7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral6238431605E3EDF93423004446032CC82A241F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501;
IL2CPP_EXTERN_C String_t* _stringLiteral6D48831C246FC7591DF3382C2DBB33BDB539E890;
IL2CPP_EXTERN_C String_t* _stringLiteral6E1D320598EEA2FA08C01CAA1B2972F77C21E2D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED00DC32D26D64245CD86F48BE5FFAF6E36B31E;
IL2CPP_EXTERN_C String_t* _stringLiteral7035EC413F7D45F09D40EE45F3FF4319284C994A;
IL2CPP_EXTERN_C String_t* _stringLiteral76A08F95C4B9697D75ECB44A5A5A968632FE0BA4;
IL2CPP_EXTERN_C String_t* _stringLiteral77ADA935540A7CDAEF6D0E543DE29DE18636B2E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral83172113C0A6DC6FE78BD4B38453008B249D3BED;
IL2CPP_EXTERN_C String_t* _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A;
IL2CPP_EXTERN_C String_t* _stringLiteral870202FA3513564EA438A5FCC61C8F0990ED0C67;
IL2CPP_EXTERN_C String_t* _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F;
IL2CPP_EXTERN_C String_t* _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C;
IL2CPP_EXTERN_C String_t* _stringLiteral9382A96CD5EE97182BD1B1CB518606C0CB0A20D4;
IL2CPP_EXTERN_C String_t* _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44;
IL2CPP_EXTERN_C String_t* _stringLiteral99C3CA9EFAAD8218587238941F53583F341D865A;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1F62A52DB47395099F958D62AC10240D379E13;
IL2CPP_EXTERN_C String_t* _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA794535644087F23261843E723B7698C24F90794;
IL2CPP_EXTERN_C String_t* _stringLiteralABCF6636EC28EDECA4B8E7E4875D20FC519E25B2;
IL2CPP_EXTERN_C String_t* _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5;
IL2CPP_EXTERN_C String_t* _stringLiteralAD8876816F840CDD275978547DCA00605F5521FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB18DCC1550A5F78FE4F78475365A692DC42A0897;
IL2CPP_EXTERN_C String_t* _stringLiteralB20379950A35CC3AB220BDFB77B9F886C09FD0F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F;
IL2CPP_EXTERN_C String_t* _stringLiteralB8D6FA095ADE922B0231B4B1167D1FDFACA27CD0;
IL2CPP_EXTERN_C String_t* _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78;
IL2CPP_EXTERN_C String_t* _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
IL2CPP_EXTERN_C String_t* _stringLiteralC4A7C91D5EB9CC7BE553909E2E68A7CB69992AC1;
IL2CPP_EXTERN_C String_t* _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralC85F8982AABA2A5C2CBC882416B02AAADF5B1FFF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA358E33682D63809BC819D06A5C119F65140337;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE6B4F4E5300752FE07EC1D72C61D3726534BB16;
IL2CPP_EXTERN_C String_t* _stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD2421074D015FA6102149AD0BDAE12D42B9C55E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE1642B1B0F9B52FA4091F00B386E5521EA0D4241;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA;
IL2CPP_EXTERN_C String_t* _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F;
IL2CPP_EXTERN_C String_t* _stringLiteralE408B78E67B3BB09A42AEBC700C360C8EFBE3186;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralE74AD1DA6C2E8379B2CA2C749227BCAF7339FF17;
IL2CPP_EXTERN_C String_t* _stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277;
IL2CPP_EXTERN_C String_t* _stringLiteralF36559115AD3ED5B4AACA2113D9CEBCC34A82296;
IL2CPP_EXTERN_C String_t* _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8  : public RuntimeObject
{
};

struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields
{
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_HardwareInput_2;
};

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_tED065EBD2AE1A29079D0C32DAEFA255194E7C7F9  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityStandardAssets.ImageEffects.Quads
struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C  : public RuntimeObject
{
};

struct Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields
{
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::meshes
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Quads::currentQuads
	int32_t ___currentQuads_1;
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

// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124  : public RuntimeObject
{
};

struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields
{
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;
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

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460  : public RuntimeObject
{
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_AlwaysUseVirtual_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_Axis_9;
};

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;
};

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_4;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_5;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_6;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ___adaptRenderTex_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderLum_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialLum_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderReduce_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialReduce_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderAdapt_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialAdapt_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderApply_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialApply_16;
};

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_5;
};

// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::monochrome
	bool ___monochrome_4;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::rgbFallback
	bool ___rgbFallback_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMin
	float ___grainIntensityMin_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMax
	float ___grainIntensityMax_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainSize
	float ___grainSize_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMin
	float ___scratchIntensityMin_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMax
	float ___scratchIntensityMax_10;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchFPS
	float ___scratchFPS_11;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchJitter
	float ___scratchJitter_12;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::grainTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___grainTexture_13;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___scratchTexture_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderRGB
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderRGB_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderYUV
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderYUV_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialRGB
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaterialRGB_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialYUV
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaterialYUV_18;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTimeLeft
	float ___scratchTimeLeft_19;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchX
	float ___scratchX_20;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchY
	float ___scratchY_21;
};

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
};

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t59296A143EEAAE54F963135CDDCEEF710CFD4EF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Radius
	float ___m_Radius_4;
	// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SampleCount
	int32_t ___m_SampleCount_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionIntensity
	float ___m_OcclusionIntensity_6;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Blur
	int32_t ___m_Blur_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Downsampling
	int32_t ___m_Downsampling_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_9;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_MinZ
	float ___m_MinZ_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SSAOShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_SSAOMaterial_12;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_RandomTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_RandomTexture_13;
	// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Supported
	bool ___m_Supported_14;
};

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* ___converted3DLut_9;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_10;
};

// UnityStandardAssets.ImageEffects.ColorCorrectionRamp
struct ColorCorrectionRamp_tA2B3CE69EFA7EF079DBC832F370EB9872E92E2CF  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.ColorCorrectionRamp::textureRamp
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureRamp_6;
};

// UnityStandardAssets.ImageEffects.ContrastEnhance
struct ContrastEnhance_tCE322B86C85C79BB8EA662B8A525FFA67BABBAC1  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::threshold
	float ___threshold_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___separableBlurMaterial_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___contrastCompositeMaterial_10;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::blurSpread
	float ___blurSpread_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___separableBlurShader_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___contrastCompositeShader_13;
};

// UnityStandardAssets.ImageEffects.CreaseShading
struct CreaseShading_t9970E9C94E6A666FC4131E6DCCD80BE876D19598  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::intensity
	float ___intensity_7;
	// System.Int32 UnityStandardAssets.ImageEffects.CreaseShading::softness
	int32_t ___softness_8;
	// System.Single UnityStandardAssets.ImageEffects.CreaseShading::spread
	float ___spread_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::blurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___blurShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::blurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blurMaterial_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::depthFetchShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___depthFetchShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::depthFetchMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___depthFetchMaterial_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___creaseApplyShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CreaseShading::creaseApplyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___creaseApplyMaterial_15;
};

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_8;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_9;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_10;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___focalTransform_11;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_12;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_13;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_14;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_15;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_16;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___dofHdrShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dofHdrMaterial_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___dx11BokehShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dx11bokehMaterial_21;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_23;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___dx11BokehTexture_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_25;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_26;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_27;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___cbDrawArgs_28;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___cbPoints_29;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_30;
};

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/Dof34QualitySetting UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::quality
	int32_t ___quality_9;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofResolution UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::resolution
	int32_t ___resolution_10;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::simpleTweakMode
	bool ___simpleTweakMode_11;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalPoint
	float ___focalPoint_12;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::smoothness
	float ___smoothness_13;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZDistance
	float ___focalZDistance_14;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZStartCurve
	float ___focalZStartCurve_15;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalZEndCurve
	float ___focalZEndCurve_16;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalStartCurve
	float ___focalStartCurve_17;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalEndCurve
	float ___focalEndCurve_18;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalDistance01
	float ___focalDistance01_19;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::objectFocus
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectFocus_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::focalSize
	float ___focalSize_21;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bluriness
	int32_t ___bluriness_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::maxBlurSpread
	float ___maxBlurSpread_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::foregroundBlurExtrude
	float ___foregroundBlurExtrude_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofBlurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___dofBlurShader_25;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofBlurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dofBlurMaterial_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___dofShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::dofMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dofMaterial_28;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::visualize
	bool ___visualize_29;
	// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/BokehDestination UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehDestination
	int32_t ___bokehDestination_30;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::widthOverHeight
	float ___widthOverHeight_31;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::oneOverBaseSize
	float ___oneOverBaseSize_32;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokeh
	bool ___bokeh_33;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSupport
	bool ___bokehSupport_34;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___bokehShader_35;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___bokehTexture_36;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehScale
	float ___bokehScale_37;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehIntensity
	float ___bokehIntensity_38;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehThresholdContrast
	float ___bokehThresholdContrast_39;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehThresholdLuminance
	float ___bokehThresholdLuminance_40;
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehDownsample
	int32_t ___bokehDownsample_41;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___bokehMaterial_42;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_43;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::foregroundTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___foregroundTexture_44;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::mediumRezWorkTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___mediumRezWorkTexture_45;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::finalDefocus
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___finalDefocus_46;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::lowRezWorkTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___lowRezWorkTexture_47;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSource
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___bokehSource_48;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::bokehSource2
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___bokehSource2_49;
};

struct DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields
{
	// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::SMOOTH_DOWNSAMPLE_PASS
	int32_t ___SMOOTH_DOWNSAMPLE_PASS_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BOKEH_EXTRA_BLUR
	float ___BOKEH_EXTRA_BLUR_8;
};

// UnityStandardAssets.ImageEffects.EdgeDetection
struct EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::mode
	int32_t ___mode_7;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityDepth
	float ___sensitivityDepth_8;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sensitivityNormals
	float ___sensitivityNormals_9;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::lumThreshold
	float ___lumThreshold_10;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgeExp
	float ___edgeExp_11;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::sampleDist
	float ___sampleDist_12;
	// System.Single UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnly
	float ___edgesOnly_13;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.EdgeDetection::edgesOnlyBgColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___edgesOnlyBgColor_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___edgeDetectShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.EdgeDetection::edgeDetectMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___edgeDetectMaterial_16;
	// UnityStandardAssets.ImageEffects.EdgeDetection/EdgeDetectMode UnityStandardAssets.ImageEffects.EdgeDetection::oldMode
	int32_t ___oldMode_17;
};

// UnityStandardAssets.ImageEffects.Fisheye
struct Fisheye_t10DE2F0851075D3E0C5ABACD90AF9B2E5E191293  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthX
	float ___strengthX_7;
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthY
	float ___strengthY_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Fisheye::fishEyeShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___fishEyeShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Fisheye::fisheyeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fisheyeMaterial_10;
};

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t9B33CF76423FA251AE3D017FE6BCBBFBB2629828  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_7;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_8;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_10;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_11;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___fogShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fogMaterial_14;
};

// UnityStandardAssets.ImageEffects.Grayscale
struct Grayscale_t7190BEE321ECA3696898EF8B37530A9B00C97C2E  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.Grayscale::textureRamp
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureRamp_6;
	// System.Single UnityStandardAssets.ImageEffects.Grayscale::rampOffset
	float ___rampOffset_7;
};

// UnityStandardAssets.ImageEffects.MotionBlur
struct MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_6;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_7;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___accumTexture_8;
};

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::generalIntensity
	float ___generalIntensity_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::blackIntensity
	float ___blackIntensity_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_10;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::midGrey
	float ___midGrey_11;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11Grain
	bool ___dx11Grain_12;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::softness
	float ___softness_13;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::monochrome
	bool ___monochrome_14;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::intensities
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___intensities_15;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::tiling
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tiling_16;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_17;
	// UnityEngine.FilterMode UnityStandardAssets.ImageEffects.NoiseAndGrain::filterMode
	int32_t ___filterMode_18;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___noiseTexture_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___noiseShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___noiseMaterial_21;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___dx11NoiseShader_22;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dx11NoiseMaterial_23;
};

struct NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_StaticFields
{
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_24;
};

// UnityStandardAssets.ImageEffects.ScreenOverlay
struct ScreenOverlay_t82957B93604683BC0C0A01C9A4324312AEAAEF09  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_8;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overlayShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overlayMaterial_11;
};

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_8;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_9;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_10;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_11;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___rand_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___aoShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___aoMaterial_14;
};

// UnityStandardAssets.ImageEffects.SepiaTone
struct SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
};

// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_7;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_8;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sunTransform_9;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_10;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sunColor_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sunThreshold_12;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_13;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_14;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_15;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___sunShaftsShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___sunShaftsMaterial_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___simpleClearShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___simpleClearMaterial_20;
};

// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_7;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_8;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_9;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_10;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___tiltShiftShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tiltShiftMaterial_13;
};

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_7;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___remapCurve_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___curveTex_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_13;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___tonemapper_15;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tonemapMaterial_17;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt_18;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_19;
};

// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_13;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___vignetteShader_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___separableBlurShader_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___chromAberrationShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_VignetteMaterial_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_SeparableBlurMaterial_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_ChromAberrationMaterial_20;
};

// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
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
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* m_Items[1];

	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6  : public RuntimeArray
{
	ALIGN_FIELD (8) AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* m_Items[1];

	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supports3DTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supports3DTextures_mA80B4F445CEEC84FFAA80B7F94C90EC270813CE3 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D__ctor_m0026373ADF87B100336F82579802E7819A5DB0F2 (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D_SetPixels_mECA010E0EE0375FA232A050AD7DB7C6F179CA561 (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture3D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D_Apply_m1043B9228683E9150D2A79EDBE2D3D828F299ED2 (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorCorrectionLookup_ValidDimensions_m41CA8EF5DD8281804F2E091A92495D56940CFBEF (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex2d0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_SetIdentityLut_m6A79565B09A07036C767AF1A16C274500AC130D3 (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024 (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialLum_m3E0BCDCD06A97473C3F509D6E47C5C937E0C5630 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialReduce_mFF50C7EA9BD50C89DB513F8EEFFE21137F8C47E5 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_CalculateAdaptation_m801A05FEDB49C0586E503F53EBCD36F7B755170D (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___curTexture0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialApply_mB7339208DD2EF717DA91766024071E1D8E670912 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialAdapt_mA286A06F5BF2CBCAE2B2EB8F2074D43C927FBD7E (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_CreateComputeResources_m44A3D7A9CA59140FB293D9FD3FF0B1E9B9231F19 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_ReleaseComputeResources_mE39DFC9B512EE74FCCC7D0A58828CDF2D446FB1F (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer__ctor_m10899F96063EF384E8F25E2D61242CCF5F327D08 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, int32_t ___count0, int32_t ___stride1, int32_t ___type2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, RuntimeArray* ___data0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthOfField_FocalDistance01_m9753A71BBBDFE2BB44294D4506A2D6BDEF77ED9D (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, float ___worldDist0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___fromTo0, bool ___fgDilate1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRandomWriteTarget_m3445C2A2B5C0ECE1E7051F69E212F169412844C2 (int32_t ___index0, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___uav1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ClearRandomWriteTargets_mFD91FD2F5D0507C71B95BF00AEE9CD865AEF554F (const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_CopyCount_mBD7F2AA4C73E84EE51F5A946ECC05B213FB1E385 (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___src0, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___dst1, int32_t ___dstOffsetBytes2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___pass0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline (float ___d0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads_Cleanup_m18CF6B317A33E5BFF0C5D139F3075321CE31A461 (const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthOfFieldDeprecated_FocalDistance01_mC2B55F876AFE563170E6F57211078C5A5D89C5A8 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, float ___worldDist0, const RuntimeMethod* method) ;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m80B6BF4C7B3249E986BEF7D8D8D2B0DE201067AB (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) ;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m985CDBEC2CF43F2E8907FA1FE19D3D127C170CB0 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, int32_t ___baseDivider0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_AllocateTextures_m26D14CBF056C12BA4CC153913DBDDBE9BFB29B0D (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, bool ___blurForeground0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, int32_t ___divider2, int32_t ___lowTexDivider3, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_Downsample_mECCC2FD41C3593F6C4881D392F9B0CE21FB56CCC (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_Blur_mA2B98FF3332C7AD3D25634AF426A6732768CE451 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_AddBokeh_m5C7284DF55D8065B3F01A41D8F699A0D79E33077 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___bokehInfo0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tempTex1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___finalTarget2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_BlurFg_m9EC1D58A51FA15F10BD6B6F201354D5F5942FD61 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_ReleaseTextures_m3F4F40F3CAEB5D02B1EB43C65457B811CCF61FA4 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_BlurHex_mA06B816018A052277D95895580456609D2FB4855 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___blurPass2, float ___spread3, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tmp4, const RuntimeMethod* method) ;
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* Quads_GetMeshes_mB329F322CBF3A8CEFE17BD982B669E48E2559625 (int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadIdentity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadIdentity_m86FB54921F8F0069E07163B6D35E4B1B6338C264 (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshNow_m421C1C4546C4EB772D727AAC58DEC9CCCBF81897 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::SetCameraFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection_SetCameraFlag_mFBFBA5CBA1DD869326CB998571155DEB1147FB7C (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetRow_m8A1D95E7A5F999126A57D1C5CE8CEB9AC8F6BD20 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___row1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderSettings_get_fogMode_m25F7D530744487CB11BD5C682A63805A526858EE (const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_fogDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogDensity_mACE336DB065800D763714CEF74A322FB83950389 (const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_fogStartDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogStartDistance_mADD30E9C3092FA1108C10F01E5FA1829EF0FCF14 (const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_fogEndDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogEndDistance_m0D29A1A5CCB2CDFB5DEBCE09DD5193532FC762CB (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_CustomGraphicsBlit_mB69D91CDC505AC2A40BB3775C9673995D40A434D (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMaterial2, int32_t ___passNr3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7 (int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB (int32_t ___unit0, float ___x1, float ___y2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Texture_get_texelSize_m05CA60DE53EF7CD5D2CBFA68B69B764E4D463359 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_Start_mAAC05E3ED1455E1CB4C5BCB5AB9414CEAF18EB8B (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_OnDisable_m521F62E819A026FE6946761CC76A7C7F7C8AD014 (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMaterial2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___noise3, int32_t ___passNr4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::SanitizeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches_SanitizeParameters_m8B9C3842DAD850EBB04F3EAE8D41D4349AC96D3D (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NoiseAndScratches_get_material_m45C5A28EBCBB71E6599FC49511E1AB3A9338D585 (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadProjectionMatrix_m4310EBD83BF1858124306A227C18FF52152718BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___mat0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_DestroyMaterial_m41A6707B9A5D617667823081040A20A121818F77 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_CreateMaterials_mC63630500AFFAE0FBBD968E3CC980CCEF882118F (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ScreenSpaceAmbientOcclusion_CreateMaterial_mF7A3FD447AF298C8C49954F744F28EFBDAA1C6F0 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_ClearWithSkybox_mA5C6A1899483E0EF88601E543CF0EDB84F186731 (bool ___clearDepth0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE (const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination2, float ___angle3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center4, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius5, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorCorrectionLookup_CheckResources_mE798BD5135D4A4AE1B418A55F8A4C7091B4989C3 (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// material = CheckShaderAndCreateMaterial (shader, material);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shader_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___material_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___material_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_8), (void*)L_3);
		// if (!isSupported || !SystemInfo.supports3DTextures)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		bool L_5;
		L_5 = SystemInfo_get_supports3DTextures_mA80B4F445CEEC84FFAA80B7F94C90EC270813CE3(NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_0035:
	{
		// return isSupported;
		bool L_6 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_6;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_OnDisable_mF964C0BF7C7181BF40C6B9A652AABD182BB58A2F (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate (material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___material_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// material = null;
		__this->___material_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_8), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_OnDestroy_m916EFAECBAE25947B02CEC323BD69FB406B5250A (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (converted3DLut)
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_0 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate (converted3DLut);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_2 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// converted3DLut = null;
		__this->___converted3DLut_9 = (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converted3DLut_9), (void*)(Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_SetIdentityLut_m6A79565B09A07036C767AF1A16C274500AC130D3 (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int dim = 16;
		V_0 = ((int32_t)16);
		// var newC = new Color[dim*dim*dim];
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2)));
		V_1 = L_3;
		// float oneOverDim = 1.0f / (1.0f * dim - 1.0f);
		int32_t L_4 = V_0;
		V_2 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((1.0f), ((float)L_4))), (1.0f)))));
		// for(int i = 0; i < dim; i++) {
		V_3 = 0;
		goto IL_0088;
	}

IL_0027:
	{
		// for(int j = 0; j < dim; j++) {
		V_4 = 0;
		goto IL_007f;
	}

IL_002c:
	{
		// for(int k = 0; k < dim; k++) {
		V_5 = 0;
		goto IL_0074;
	}

IL_0031:
	{
		// newC[i + (j*dim) + (k*dim*dim)] = new Color((i*1.0f)*oneOverDim, (j*1.0f)*oneOverDim, (k*1.0f)*oneOverDim, 1.0f);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = V_1;
		int32_t L_6 = V_3;
		int32_t L_7 = V_4;
		int32_t L_8 = V_0;
		int32_t L_9 = V_5;
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		int32_t L_12 = V_3;
		float L_13 = V_2;
		int32_t L_14 = V_4;
		float L_15 = V_2;
		int32_t L_16 = V_5;
		float L_17 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_18), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_12), (1.0f))), L_13)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_14), (1.0f))), L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_16), (1.0f))), L_17)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_9, L_10)), L_11))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_18);
		// for(int k = 0; k < dim; k++) {
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0074:
	{
		// for(int k = 0; k < dim; k++) {
		int32_t L_20 = V_5;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0031;
		}
	}
	{
		// for(int j = 0; j < dim; j++) {
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007f:
	{
		// for(int j = 0; j < dim; j++) {
		int32_t L_23 = V_4;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002c;
		}
	}
	{
		// for(int i = 0; i < dim; i++) {
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0088:
	{
		// for(int i = 0; i < dim; i++) {
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0027;
		}
	}
	{
		// if (converted3DLut)
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_28 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		// DestroyImmediate (converted3DLut);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_30 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_30, NULL);
	}

IL_00a4:
	{
		// converted3DLut = new Texture3D (dim, dim, dim, TextureFormat.ARGB32, false);
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		int32_t L_33 = V_0;
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_34 = (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)il2cpp_codegen_object_new(Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Texture3D__ctor_m0026373ADF87B100336F82579802E7819A5DB0F2(L_34, L_31, L_32, L_33, 5, (bool)0, NULL);
		__this->___converted3DLut_9 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converted3DLut_9), (void*)L_34);
		// converted3DLut.SetPixels (newC);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_35 = __this->___converted3DLut_9;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_36 = V_1;
		NullCheck(L_35);
		Texture3D_SetPixels_mECA010E0EE0375FA232A050AD7DB7C6F179CA561(L_35, L_36, NULL);
		// converted3DLut.Apply ();
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_37 = __this->___converted3DLut_9;
		NullCheck(L_37);
		Texture3D_Apply_m1043B9228683E9150D2A79EDBE2D3D828F299ED2(L_37, NULL);
		// basedOnTempTex = "";
		__this->___basedOnTempTex_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basedOnTempTex_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorCorrectionLookup_ValidDimensions_m41CA8EF5DD8281804F2E091A92495D56940CFBEF (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex2d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!tex2d) return false;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex2d0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!tex2d) return false;
		return (bool)0;
	}

IL_000a:
	{
		// int h = tex2d.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex2d0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		// if (h != Mathf.FloorToInt(Mathf.Sqrt(tex2d.width))) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___tex2d0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		float L_6;
		L_6 = sqrtf(((float)L_5));
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_6, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_0025;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_Convert_mF4235B7639E43DF5A2C309C167B81D77EE517111 (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___temp2DTex0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DFC31EABA350BBD1DBE91259DCF0F7DC3D9423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A1F62A52DB47395099F958D62AC10240D379E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1642B1B0F9B52FA4091F00B386E5521EA0D4241);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (temp2DTex) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___temp2DTex0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0100;
		}
	}
	{
		// int dim = temp2DTex.width * temp2DTex.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___temp2DTex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___temp2DTex0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, L_5));
		// dim = temp2DTex.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___temp2DTex0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		V_0 = L_7;
		// if (!ValidDimensions(temp2DTex)) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___temp2DTex0;
		bool L_9;
		L_9 = ColorCorrectionLookup_ValidDimensions_m41CA8EF5DD8281804F2E091A92495D56940CFBEF(__this, L_8, NULL);
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogWarning ("The given 2D texture " + temp2DTex.name + " cannot be used as a 3D LUT.");
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___temp2DTex0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral58DFC31EABA350BBD1DBE91259DCF0F7DC3D9423, L_11, _stringLiteralE1642B1B0F9B52FA4091F00B386E5521EA0D4241, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_12, NULL);
		// basedOnTempTex = "";
		__this->___basedOnTempTex_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basedOnTempTex_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// return;
		return;
	}

IL_004f:
	{
		// var c = temp2DTex.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___temp2DTex0;
		NullCheck(L_13);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_14;
		L_14 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_13, NULL);
		V_1 = L_14;
		// var newC = new Color[c.Length];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = V_1;
		NullCheck(L_15);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
		V_2 = L_16;
		// for(int i = 0; i < dim; i++) {
		V_3 = 0;
		goto IL_00b5;
	}

IL_0063:
	{
		// for(int j = 0; j < dim; j++) {
		V_4 = 0;
		goto IL_00ac;
	}

IL_0068:
	{
		// for(int k = 0; k < dim; k++) {
		V_5 = 0;
		goto IL_00a1;
	}

IL_006d:
	{
		// int j_ = dim-j-1;
		int32_t L_17 = V_0;
		int32_t L_18 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1));
		// newC[i + (j*dim) + (k*dim*dim)] = c[k*dim+i+j_*dim*dim];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_5;
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_26 = V_1;
		int32_t L_27 = V_5;
		int32_t L_28 = V_0;
		int32_t L_29 = V_3;
		int32_t L_30 = V_6;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		NullCheck(L_26);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, L_28)), L_29)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_30, L_31)), L_32))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, L_22)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_34);
		// for(int k = 0; k < dim; k++) {
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a1:
	{
		// for(int k = 0; k < dim; k++) {
		int32_t L_36 = V_5;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_006d;
		}
	}
	{
		// for(int j = 0; j < dim; j++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ac:
	{
		// for(int j = 0; j < dim; j++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0068;
		}
	}
	{
		// for(int i = 0; i < dim; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		// for(int i = 0; i < dim; i++) {
		int32_t L_42 = V_3;
		int32_t L_43 = V_0;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0063;
		}
	}
	{
		// if (converted3DLut)
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_44 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_44, NULL);
		if (!L_45)
		{
			goto IL_00d1;
		}
	}
	{
		// DestroyImmediate (converted3DLut);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_46 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_46, NULL);
	}

IL_00d1:
	{
		// converted3DLut = new Texture3D (dim, dim, dim, TextureFormat.ARGB32, false);
		int32_t L_47 = V_0;
		int32_t L_48 = V_0;
		int32_t L_49 = V_0;
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_50 = (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)il2cpp_codegen_object_new(Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Texture3D__ctor_m0026373ADF87B100336F82579802E7819A5DB0F2(L_50, L_47, L_48, L_49, 5, (bool)0, NULL);
		__this->___converted3DLut_9 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converted3DLut_9), (void*)L_50);
		// converted3DLut.SetPixels (newC);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_51 = __this->___converted3DLut_9;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_52 = V_2;
		NullCheck(L_51);
		Texture3D_SetPixels_mECA010E0EE0375FA232A050AD7DB7C6F179CA561(L_51, L_52, NULL);
		// converted3DLut.Apply ();
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_53 = __this->___converted3DLut_9;
		NullCheck(L_53);
		Texture3D_Apply_m1043B9228683E9150D2A79EDBE2D3D828F299ED2(L_53, NULL);
		// basedOnTempTex = path;
		String_t* L_54 = ___path1;
		__this->___basedOnTempTex_10 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basedOnTempTex_10), (void*)L_54);
		return;
	}

IL_0100:
	{
		// Debug.LogError ("Couldn't color correct with 3D LUT texture. Image Effect will be disabled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9A1F62A52DB47395099F958D62AC10240D379E13, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup_OnRenderImage_m0545AE128DF587EC53F9C802F13F7892922B7DAF (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19BBFA9A3E2E76B948F305756AA909457B79A304);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B7_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B7_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B7_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B6_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_3 = NULL;
	{
		// if (CheckResources () == false || !SystemInfo.supports3DTextures) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_get_supports3DTextures_mA80B4F445CEEC84FFAA80B7F94C90EC270813CE3(NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_000f:
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_2, L_3, NULL);
		// return;
		return;
	}

IL_0017:
	{
		// if (converted3DLut == null) {
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_4 = __this->___converted3DLut_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// SetIdentityLut ();
		ColorCorrectionLookup_SetIdentityLut_m6A79565B09A07036C767AF1A16C274500AC130D3(__this, NULL);
	}

IL_002b:
	{
		// int lutSize = converted3DLut.width;
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_6 = __this->___converted3DLut_9;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_0 = L_7;
		// converted3DLut.wrapMode = TextureWrapMode.Clamp;
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_8 = __this->___converted3DLut_9;
		NullCheck(L_8);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_8, 1, NULL);
		// material.SetFloat("_Scale", (lutSize - 1) / (1.0f*lutSize));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___material_8;
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_9, _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_10, 1)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_11))))), NULL);
		// material.SetFloat("_Offset", 1.0f / (2.0f * lutSize));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___material_8;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_12, _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, ((float)((1.0f)/((float)il2cpp_codegen_multiply((2.0f), ((float)L_13))))), NULL);
		// material.SetTexture("_ClutTex", converted3DLut);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___material_8;
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_15 = __this->___converted3DLut_9;
		NullCheck(L_14);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_14, _stringLiteral19BBFA9A3E2E76B948F305756AA909457B79A304, L_15, NULL);
		// Graphics.Blit (source, destination, material, QualitySettings.activeColorSpace == ColorSpace.Linear ? 1 : 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___material_8;
		int32_t L_19;
		L_19 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		G_B6_0 = L_18;
		G_B6_1 = L_17;
		G_B6_2 = L_16;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B7_0 = L_18;
			G_B7_1 = L_17;
			G_B7_2 = L_16;
			goto IL_00a7;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00a8:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B8_3, G_B8_2, G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionLookup__ctor_mB7DB4D90090C593309EE6822E9D14F51A89423B8 (ColorCorrectionLookup_tE3E5AA3044B44B3025A8BF35014D82ED76ABEF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string basedOnTempTex = "";
		__this->___basedOnTempTex_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basedOnTempTex_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionRamp::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionRamp_OnRenderImage_m489A2D7B3567FA0E26B4E315BA1F95E1B92C6093 (ColorCorrectionRamp_tA2B3CE69EFA7EF079DBC832F370EB9872E92E2CF* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetTexture ("_RampTex", textureRamp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___textureRamp_6;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0, L_1, NULL);
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionRamp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionRamp__ctor_mF3F11103A22E62E20914697B24B975E1DBBD00B2 (ColorCorrectionRamp_tA2B3CE69EFA7EF079DBC832F370EB9872E92E2CF* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.ContrastEnhance::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContrastEnhance_CheckResources_m8CBC6E6E65DA28E6A5EA2B6D235583C54C6DE5D8 (ContrastEnhance_tCE322B86C85C79BB8EA662B8A525FFA67BABBAC1* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// contrastCompositeMaterial = CheckShaderAndCreateMaterial (contrastCompositeShader, contrastCompositeMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___contrastCompositeShader_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___contrastCompositeMaterial_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___contrastCompositeMaterial_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contrastCompositeMaterial_10), (void*)L_3);
		// separableBlurMaterial = CheckShaderAndCreateMaterial (separableBlurShader, separableBlurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___separableBlurShader_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___separableBlurMaterial_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_4, L_5, NULL);
		__this->___separableBlurMaterial_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___separableBlurMaterial_9), (void*)L_6);
		// if (!isSupported)
		bool L_7 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_0046:
	{
		// return isSupported;
		bool L_8 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_8;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastEnhance_OnRenderImage_mC9521D66DF962B0DBA263DA937E3F8C37AFF00DD (ContrastEnhance_tCE322B86C85C79BB8EA662B8A525FFA67BABBAC1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D67CBC8EADDE9318D3A047B0D24B1BDD1DF28F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA794535644087F23261843E723B7698C24F90794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_0 = L_6;
		// RenderTexture color2 = RenderTexture.GetTemporary (rtW/2, rtH/2, 0);
		int32_t L_7 = L_4;
		int32_t L_8 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9;
		L_9 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_7/2)), ((int32_t)(L_8/2)), 0, NULL);
		V_1 = L_9;
		// Graphics.Blit (source, color2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_10, L_11, NULL);
		// RenderTexture color4a = RenderTexture.GetTemporary (rtW/4, rtH/4, 0);
		int32_t L_12 = L_7;
		int32_t L_13 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14;
		L_14 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_12/4)), ((int32_t)(L_13/4)), 0, NULL);
		V_2 = L_14;
		// Graphics.Blit (color2, color4a);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_2;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_15, L_16, NULL);
		// RenderTexture.ReleaseTemporary (color2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_17, NULL);
		// separableBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, (blurSpread * 1.0f) / color4a.height, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___separableBlurMaterial_9;
		float L_19 = __this->___blurSpread_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_22), (0.0f), ((float)(((float)il2cpp_codegen_multiply(L_19, (1.0f)))/((float)L_21))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_18, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_22, NULL);
		// RenderTexture color4b = RenderTexture.GetTemporary (rtW/4, rtH/4, 0);
		int32_t L_23 = L_12;
		int32_t L_24 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_23/4)), ((int32_t)(L_24/4)), 0, NULL);
		V_3 = L_25;
		// Graphics.Blit (color4a, color4b, separableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___separableBlurMaterial_9;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_26, L_27, L_28, NULL);
		// RenderTexture.ReleaseTemporary (color4a);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_29, NULL);
		// separableBlurMaterial.SetVector ("offsets", new Vector4 ((blurSpread * 1.0f) / color4a.width, 0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___separableBlurMaterial_9;
		float L_31 = __this->___blurSpread_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_32);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_34), ((float)(((float)il2cpp_codegen_multiply(L_31, (1.0f)))/((float)L_33))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_30, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_34, NULL);
		// color4a = RenderTexture.GetTemporary (rtW/4, rtH/4, 0);
		int32_t L_35 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36;
		L_36 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_23/4)), ((int32_t)(L_35/4)), 0, NULL);
		V_2 = L_36;
		// Graphics.Blit (color4b, color4a, separableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___separableBlurMaterial_9;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_37, L_38, L_39, NULL);
		// RenderTexture.ReleaseTemporary (color4b);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_3;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_40, NULL);
		// contrastCompositeMaterial.SetTexture ("_MainTexBlurred", color4a);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___contrastCompositeMaterial_10;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_2;
		NullCheck(L_41);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_41, _stringLiteralA794535644087F23261843E723B7698C24F90794, L_42, NULL);
		// contrastCompositeMaterial.SetFloat ("intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___contrastCompositeMaterial_10;
		float L_44 = __this->___intensity_7;
		NullCheck(L_43);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_43, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, L_44, NULL);
		// contrastCompositeMaterial.SetFloat ("threshhold", threshold);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = __this->___contrastCompositeMaterial_10;
		float L_46 = __this->___threshold_8;
		NullCheck(L_45);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_45, _stringLiteral0D67CBC8EADDE9318D3A047B0D24B1BDD1DF28F1, L_46, NULL);
		// Graphics.Blit (source, destination, contrastCompositeMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___contrastCompositeMaterial_10;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_47, L_48, L_49, NULL);
		// RenderTexture.ReleaseTemporary (color4a);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_50, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastEnhance__ctor_mA046704E2483DBB3080A4FE34D27FD03D774F02B (ContrastEnhance_tCE322B86C85C79BB8EA662B8A525FFA67BABBAC1* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.5f;
		__this->___intensity_7 = (0.5f);
		// public float blurSpread = 1.0f;
		__this->___blurSpread_11 = (1.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialLum_m3E0BCDCD06A97473C3F509D6E47C5C937E0C5630 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialLum == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialLum = new Material(shaderLum);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderLum_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialLum_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialLum_10), (void*)L_3);
		// m_materialLum.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialLum_10;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialLum;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialLum_10;
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialReduce_mFF50C7EA9BD50C89DB513F8EEFFE21137F8C47E5 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialReduce == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialReduce = new Material(shaderReduce);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderReduce_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialReduce_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialReduce_12), (void*)L_3);
		// m_materialReduce.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialReduce_12;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialReduce;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialReduce_12;
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialAdapt_mA286A06F5BF2CBCAE2B2EB8F2074D43C927FBD7E (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialAdapt == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialAdapt = new Material(shaderAdapt);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderAdapt_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialAdapt_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialAdapt_14), (void*)L_3);
		// m_materialAdapt.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialAdapt_14;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialAdapt;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialAdapt_14;
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretch_get_materialApply_mB7339208DD2EF717DA91766024071E1D8E670912 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialApply == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialApply = new Material(shaderApply);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderApply_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialApply_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialApply_16), (void*)L_3);
		// m_materialApply.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialApply_16;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialApply;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialApply_16;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_Start_mD99DCAF9FF50BC7C76F32AB250EA6414767CF365 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shaderAdapt.isSupported || !shaderApply.isSupported || !shaderLum.isSupported || !shaderReduce.isSupported) {
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shaderAdapt_13;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_1, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shaderApply_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_3, NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___shaderLum_9;
		NullCheck(L_5);
		bool L_6;
		L_6 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___shaderReduce_11;
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}

IL_0043:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnEnable_m3D4DF80A85246544A3A585D787E9F864F529379A (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// if ( !adaptRenderTex[i] ) {
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___adaptRenderTex_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// adaptRenderTex[i] = new RenderTexture(1, 1, 0);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_5 = __this->___adaptRenderTex_7;
		int32_t L_6 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_7, 1, 1, 0, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_7);
		// adaptRenderTex[i].hideFlags = HideFlags.HideAndDontSave;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_8 = __this->___adaptRenderTex_7;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_11, ((int32_t)61), NULL);
	}

IL_0032:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0036:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnDisable_mFF56DEE2F8871A1C5FDEDF1F39B09806835594B7 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// DestroyImmediate( adaptRenderTex[i] );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___adaptRenderTex_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
		// adaptRenderTex[i] = null;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_4 = __this->___adaptRenderTex_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// for( int i = 0; i < 2; ++i )
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// if ( m_materialLum )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// DestroyImmediate( m_materialLum );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
	}

IL_003a:
	{
		// if ( m_materialReduce )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// DestroyImmediate( m_materialReduce );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_13, NULL);
	}

IL_0052:
	{
		// if ( m_materialAdapt )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// DestroyImmediate( m_materialAdapt );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_16, NULL);
	}

IL_006a:
	{
		// if ( m_materialApply )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		// DestroyImmediate( m_materialApply );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_19, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnRenderImage_mCBFF98D8D7AF36A66CA40088F65D667C00CBC411 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	{
		// RenderTexture rtTempSrc = RenderTexture.GetTemporary(source.width/TEMP_RATIO, source.height/TEMP_RATIO);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(((int32_t)(L_1/1)), ((int32_t)(L_3/1)), NULL);
		V_0 = L_4;
		// Graphics.Blit (source, rtTempSrc, materialLum);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = ContrastStretch_get_materialLum_m3E0BCDCD06A97473C3F509D6E47C5C937E0C5630(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_5, L_6, L_7, NULL);
		goto IL_0060;
	}

IL_0025:
	{
		// int destW = rtTempSrc.width / REDUCE_RATIO;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		V_1 = ((int32_t)(L_9/2));
		// if ( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		// if ( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		V_1 = 1;
	}

IL_0034:
	{
		// int destH = rtTempSrc.height / REDUCE_RATIO;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_2 = ((int32_t)(L_12/2));
		// if ( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		// if ( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		V_2 = 1;
	}

IL_0043:
	{
		// RenderTexture rtTempDst = RenderTexture.GetTemporary(destW,destH);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16;
		L_16 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_14, L_15, NULL);
		V_3 = L_16;
		// Graphics.Blit (rtTempSrc, rtTempDst, materialReduce);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = ContrastStretch_get_materialReduce_mFF50C7EA9BD50C89DB513F8EEFFE21137F8C47E5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_17, L_18, L_19, NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_20, NULL);
		// rtTempSrc = rtTempDst;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_3;
		V_0 = L_21;
	}

IL_0060:
	{
		// while( rtTempSrc.width > FINAL_SIZE || rtTempSrc.height > FINAL_SIZE )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		// CalculateAdaptation( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_0;
		ContrastStretch_CalculateAdaptation_m801A05FEDB49C0586E503F53EBCD36F7B755170D(__this, L_26, NULL);
		// materialApply.SetTexture("_AdaptTex", adaptRenderTex[curAdaptIndex] );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = ContrastStretch_get_materialApply_mB7339208DD2EF717DA91766024071E1D8E670912(__this, NULL);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_28 = __this->___adaptRenderTex_7;
		int32_t L_29 = __this->___curAdaptIndex_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_27, _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C, L_31, NULL);
		// Graphics.Blit (source, destination, materialApply);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = ContrastStretch_get_materialApply_mB7339208DD2EF717DA91766024071E1D8E670912(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_32, L_33, L_34, NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_35, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_CalculateAdaptation_m801A05FEDB49C0586E503F53EBCD36F7B755170D (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___curTexture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int prevAdaptIndex = curAdaptIndex;
		int32_t L_0 = __this->___curAdaptIndex_8;
		V_0 = L_0;
		// curAdaptIndex = (curAdaptIndex+1) % 2;
		int32_t L_1 = __this->___curAdaptIndex_8;
		__this->___curAdaptIndex_8 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 1))%2));
		// float adaptLerp = 1.0f - Mathf.Pow( 1.0f - adaptationSpeed, 30.0f * Time.deltaTime );
		float L_2 = __this->___adaptationSpeed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4;
		L_4 = powf(((float)il2cpp_codegen_subtract((1.0f), L_2)), ((float)il2cpp_codegen_multiply((30.0f), L_3)));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_4));
		// adaptLerp = Mathf.Clamp( adaptLerp, kMinAdaptLerp, 1 );
		float L_5 = V_1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.00999999978f), (1.0f), NULL);
		V_1 = L_6;
		// materialAdapt.SetTexture("_CurTex", curTexture );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = ContrastStretch_get_materialAdapt_mA286A06F5BF2CBCAE2B2EB8F2074D43C927FBD7E(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___curTexture0;
		NullCheck(L_7);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_7, _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB, L_8, NULL);
		// materialAdapt.SetVector("_AdaptParams", new Vector4(
		//                                             adaptLerp,
		//                                             limitMinimum,
		//                                             limitMaximum,
		//                                             0.0f
		//                                             ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = ContrastStretch_get_materialAdapt_mA286A06F5BF2CBCAE2B2EB8F2074D43C927FBD7E(__this, NULL);
		float L_10 = V_1;
		float L_11 = __this->___limitMinimum_5;
		float L_12 = __this->___limitMaximum_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_10, L_11, L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_9, _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44, L_13, NULL);
		// Graphics.SetRenderTarget(adaptRenderTex[curAdaptIndex]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_14 = __this->___adaptRenderTex_7;
		int32_t L_15 = __this->___curAdaptIndex_8;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_17, NULL);
		// GL.Clear(false, true, Color.black);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)0, (bool)1, L_18, NULL);
		// Graphics.Blit (
		//     adaptRenderTex[prevAdaptIndex],
		//     adaptRenderTex[curAdaptIndex],
		//     materialAdapt);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_19 = __this->___adaptRenderTex_7;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_23 = __this->___adaptRenderTex_7;
		int32_t L_24 = __this->___curAdaptIndex_8;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = ContrastStretch_get_materialAdapt_mA286A06F5BF2CBCAE2B2EB8F2074D43C927FBD7E(__this, NULL);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_22, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch__ctor_mDDD983556852FAFF344F2033C8AEAF43DEB21B55 (ContrastStretch_tEE945D4A0CC6C2C5706038F8304C2996399086E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float adaptationSpeed = 0.02f;
		__this->___adaptationSpeed_4 = (0.0199999996f);
		// public float limitMinimum = 0.2f;
		__this->___limitMinimum_5 = (0.200000003f);
		// public float limitMaximum = 0.6f;
		__this->___limitMaximum_6 = (0.600000024f);
		// private RenderTexture[] adaptRenderTex = new RenderTexture[2];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___adaptRenderTex_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptRenderTex_7), (void*)L_0);
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
// System.Boolean UnityStandardAssets.ImageEffects.CreaseShading::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CreaseShading_CheckResources_m11195082724590FFA17545626F44D62DE9E5BAFE (CreaseShading_t9970E9C94E6A666FC4131E6DCCD80BE876D19598* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// blurMaterial = CheckShaderAndCreateMaterial (blurShader, blurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___blurShader_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___blurMaterial_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___blurMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blurMaterial_11), (void*)L_3);
		// depthFetchMaterial = CheckShaderAndCreateMaterial (depthFetchShader, depthFetchMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___depthFetchShader_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___depthFetchMaterial_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_4, L_5, NULL);
		__this->___depthFetchMaterial_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depthFetchMaterial_13), (void*)L_6);
		// creaseApplyMaterial = CheckShaderAndCreateMaterial (creaseApplyShader, creaseApplyMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___creaseApplyShader_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___creaseApplyMaterial_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_7, L_8, NULL);
		__this->___creaseApplyMaterial_15 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___creaseApplyMaterial_15), (void*)L_9);
		// if (!isSupported)
		bool L_10 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_10)
		{
			goto IL_005e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_005e:
	{
		// return isSupported;
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_11;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CreaseShading::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreaseShading_OnRenderImage_m7ABCB39ABC2AEDDBE2BC38258B1CC7DF3C603003 (CreaseShading_t9970E9C94E6A666FC4131E6DCCD80BE876D19598* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral440990408400C81491678EBA99F85211D0BC7276);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74AD1DA6C2E8379B2CA2C749227BCAF7339FF17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		// float widthOverHeight = (1.0f * rtW) / (1.0f * rtH);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_7)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_8)))));
		// float oneOverBaseSize = 1.0f / 512.0f;
		V_3 = (0.001953125f);
		// RenderTexture hrTex = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_9, L_10, 0, NULL);
		V_4 = L_11;
		// RenderTexture lrTex1 = RenderTexture.GetTemporary (rtW/2, rtH/2, 0);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14;
		L_14 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_12/2)), ((int32_t)(L_13/2)), 0, NULL);
		V_5 = L_14;
		// Graphics.Blit (source,hrTex, depthFetchMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___depthFetchMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_15, L_16, L_17, NULL);
		// Graphics.Blit (hrTex, lrTex1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = V_5;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_18, L_19, NULL);
		// for(int i = 0; i < softness; i++)
		V_6 = 0;
		goto IL_011d;
	}

IL_006d:
	{
		// RenderTexture lrTex2 = RenderTexture.GetTemporary (rtW/2, rtH/2, 0);
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22;
		L_22 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_20/2)), ((int32_t)(L_21/2)), 0, NULL);
		V_7 = L_22;
		// blurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___blurMaterial_11;
		float L_24 = __this->___spread_9;
		float L_25 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_26), (0.0f), ((float)il2cpp_codegen_multiply(L_24, L_25)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_23, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_26, NULL);
		// Graphics.Blit (lrTex1, lrTex2, blurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___blurMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_27, L_28, L_29, NULL);
		// RenderTexture.ReleaseTemporary (lrTex1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_30, NULL);
		// lrTex1 = lrTex2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_7;
		V_5 = L_31;
		// lrTex2 = RenderTexture.GetTemporary (rtW/2, rtH/2, 0);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34;
		L_34 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_32/2)), ((int32_t)(L_33/2)), 0, NULL);
		V_7 = L_34;
		// blurMaterial.SetVector ("offsets", new Vector4 (spread * oneOverBaseSize / widthOverHeight,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___blurMaterial_11;
		float L_36 = __this->___spread_9;
		float L_37 = V_3;
		float L_38 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_39), ((float)(((float)il2cpp_codegen_multiply(L_36, L_37))/L_38)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_35, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_39, NULL);
		// Graphics.Blit (lrTex1, lrTex2, blurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->___blurMaterial_11;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_40, L_41, L_42, NULL);
		// RenderTexture.ReleaseTemporary (lrTex1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_43, NULL);
		// lrTex1 = lrTex2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_7;
		V_5 = L_44;
		// for(int i = 0; i < softness; i++)
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_011d:
	{
		// for(int i = 0; i < softness; i++)
		int32_t L_46 = V_6;
		int32_t L_47 = __this->___softness_8;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_006d;
		}
	}
	{
		// creaseApplyMaterial.SetTexture ("_HrDepthTex", hrTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = __this->___creaseApplyMaterial_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_4;
		NullCheck(L_48);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_48, _stringLiteral440990408400C81491678EBA99F85211D0BC7276, L_49, NULL);
		// creaseApplyMaterial.SetTexture ("_LrDepthTex", lrTex1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___creaseApplyMaterial_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_5;
		NullCheck(L_50);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_50, _stringLiteralE74AD1DA6C2E8379B2CA2C749227BCAF7339FF17, L_51, NULL);
		// creaseApplyMaterial.SetFloat ("intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___creaseApplyMaterial_15;
		float L_53 = __this->___intensity_7;
		NullCheck(L_52);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_52, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, L_53, NULL);
		// Graphics.Blit (source,destination, creaseApplyMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___creaseApplyMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_54, L_55, L_56, NULL);
		// RenderTexture.ReleaseTemporary (hrTex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_57, NULL);
		// RenderTexture.ReleaseTemporary (lrTex1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_58, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.CreaseShading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreaseShading__ctor_mB81EC56595A322BFD46F7B6ABB77B11834AEBD95 (CreaseShading_t9970E9C94E6A666FC4131E6DCCD80BE876D19598* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.5f;
		__this->___intensity_7 = (0.5f);
		// public int softness = 1;
		__this->___softness_8 = 1;
		// public float spread = 1.0f;
		__this->___spread_9 = (1.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthOfField_CheckResources_m5B73E318E80ADCBFA181C196B658C8F2EF3EB87D (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true); // only requires depth, not HDR
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// dofHdrMaterial = CheckShaderAndCreateMaterial (dofHdrShader, dofHdrMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___dofHdrShader_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___dofHdrMaterial_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___dofHdrMaterial_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofHdrMaterial_19), (void*)L_3);
		// if (supportDX11 && blurType == BlurType.DX11) {
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___supportDX11_5;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_5 = __this->___blurType_14;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		// dx11bokehMaterial = CheckShaderAndCreateMaterial(dx11BokehShader, dx11bokehMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = __this->___dx11BokehShader_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___dx11bokehMaterial_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_6, L_7, NULL);
		__this->___dx11bokehMaterial_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dx11bokehMaterial_21), (void*)L_8);
		// CreateComputeResources ();
		DepthOfField_CreateComputeResources_m44A3D7A9CA59140FB293D9FD3FF0B1E9B9231F19(__this, NULL);
	}

IL_004f:
	{
		// if (!isSupported)
		bool L_9 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_005d:
	{
		// return isSupported;
		bool L_10 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_OnEnable_mF22CEEE7130A0FD5B717C4FE268CB4708A67A416 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_1, NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_1, ((int32_t)((int32_t)L_2|1)), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_OnDisable_m6A4C40367E5041B08FDFFCB9AF9DF0EC4707C71A (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleaseComputeResources ();
		DepthOfField_ReleaseComputeResources_mE39DFC9B512EE74FCCC7D0A58828CDF2D446FB1F(__this, NULL);
		// if (dofHdrMaterial) DestroyImmediate(dofHdrMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (dofHdrMaterial) DestroyImmediate(dofHdrMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_001e:
	{
		// dofHdrMaterial = null;
		__this->___dofHdrMaterial_19 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofHdrMaterial_19), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// if (dx11bokehMaterial) DestroyImmediate(dx11bokehMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___dx11bokehMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// if (dx11bokehMaterial) DestroyImmediate(dx11bokehMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___dx11bokehMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_003d:
	{
		// dx11bokehMaterial = null;
		__this->___dx11bokehMaterial_21 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dx11bokehMaterial_21), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_ReleaseComputeResources_mE39DFC9B512EE74FCCC7D0A58828CDF2D446FB1F (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	{
		// if (cbDrawArgs != null) cbDrawArgs.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = __this->___cbDrawArgs_28;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (cbDrawArgs != null) cbDrawArgs.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = __this->___cbDrawArgs_28;
		NullCheck(L_1);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_1, NULL);
	}

IL_0013:
	{
		// cbDrawArgs = null;
		__this->___cbDrawArgs_28 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbDrawArgs_28), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
		// if (cbPoints != null) cbPoints.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_2 = __this->___cbPoints_29;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// if (cbPoints != null) cbPoints.Release();
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_3 = __this->___cbPoints_29;
		NullCheck(L_3);
		ComputeBuffer_Release_mF1F157C929A0A5B2FDCD703A286EE09723450B72(L_3, NULL);
	}

IL_002d:
	{
		// cbPoints = null;
		__this->___cbPoints_29 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbPoints_29), (void*)(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_CreateComputeResources_m44A3D7A9CA59140FB293D9FD3FF0B1E9B9231F19 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		// if (cbDrawArgs == null)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = __this->___cbDrawArgs_28;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		// cbDrawArgs = new ComputeBuffer (1, 16, ComputeBufferType.IndirectArguments);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ComputeBuffer__ctor_m10899F96063EF384E8F25E2D61242CCF5F327D08(L_1, 1, ((int32_t)16), ((int32_t)256), NULL);
		__this->___cbDrawArgs_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbDrawArgs_28), (void*)L_1);
		// var args= new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_2;
		// args[0] = 0; args[1] = 1; args[2] = 0; args[3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// args[0] = 0; args[1] = 1; args[2] = 0; args[3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		// args[0] = 0; args[1] = 1; args[2] = 0; args[3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		// args[0] = 0; args[1] = 1; args[2] = 0; args[3] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)0);
		// cbDrawArgs.SetData (args);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_7 = __this->___cbDrawArgs_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		NullCheck(L_7);
		ComputeBuffer_SetData_m9F845E6B347CE028FA9A987D740FC642D828013A(L_7, (RuntimeArray*)L_8, NULL);
	}

IL_003e:
	{
		// if (cbPoints == null)
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_9 = __this->___cbPoints_29;
		if (L_9)
		{
			goto IL_0059;
		}
	}
	{
		// cbPoints = new ComputeBuffer (90000, 12+16, ComputeBufferType.Append);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_10 = (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*)il2cpp_codegen_object_new(ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ComputeBuffer__ctor_m10899F96063EF384E8F25E2D61242CCF5F327D08(L_10, ((int32_t)90000), ((int32_t)28), 2, NULL);
		__this->___cbPoints_29 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbPoints_29), (void*)L_10);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthOfField_FocalDistance01_m9753A71BBBDFE2BB44294D4506A2D6BDEF77ED9D (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, float ___worldDist0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetComponent<Camera>().WorldToViewportPoint((worldDist-GetComponent<Camera>().nearClipPlane) * GetComponent<Camera>().transform.forward + GetComponent<Camera>().transform.position).z / (GetComponent<Camera>().farClipPlane-GetComponent<Camera>().nearClipPlane);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		float L_1 = ___worldDist0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract(L_1, L_3)), L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_10, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_0, L_11, NULL);
		float L_13 = L_12.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17;
		L_17 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_16, NULL);
		return ((float)(L_13/((float)il2cpp_codegen_subtract(L_15, L_17))));
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___fromTo0, bool ___fgDilate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	float V_2 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	{
		// dofHdrMaterial.SetTexture("_FgOverlap", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___dofHdrMaterial_19;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// if (nearBlur && fgDilate) {
		bool L_1 = __this->___nearBlur_16;
		bool L_2 = ___fgDilate1;
		if (!((int32_t)((int32_t)L_1&(int32_t)L_2)))
		{
			goto IL_010e;
		}
	}
	{
		// int rtW = fromTo.width/2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___fromTo0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		// int rtH = fromTo.height/2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___fromTo0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_0 = ((int32_t)(L_6/2));
		// RenderTexture temp2 = RenderTexture.GetTemporary (rtW, rtH, 0, fromTo.format);
		int32_t L_7 = ((int32_t)(L_4/2));
		int32_t L_8 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___fromTo0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_9, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_7, L_8, 0, L_10, NULL);
		V_1 = L_11;
		// Graphics.Blit (fromTo, temp2, dofHdrMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___fromTo0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_12, L_13, L_14, 4, NULL);
		// float fgAdjustment = internalBlurWidth * foregroundOverlap;
		float L_15 = __this->___internalBlurWidth_30;
		float L_16 = __this->___foregroundOverlap_17;
		V_2 = ((float)il2cpp_codegen_multiply(L_15, L_16));
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, fgAdjustment , 0.0f, fgAdjustment));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___dofHdrMaterial_19;
		float L_18 = V_2;
		float L_19 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_20), (0.0f), L_18, (0.0f), L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_17, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_20, NULL);
		// RenderTexture temp1 = RenderTexture.GetTemporary (rtW, rtH, 0, fromTo.format);
		int32_t L_21 = L_7;
		int32_t L_22 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___fromTo0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_23, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_21, L_22, 0, L_24, NULL);
		V_3 = L_25;
		// Graphics.Blit (temp2, temp1, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_26, L_27, L_28, 2, NULL);
		// RenderTexture.ReleaseTemporary(temp2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_29, NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (fgAdjustment, 0.0f, 0.0f, fgAdjustment));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___dofHdrMaterial_19;
		float L_31 = V_2;
		float L_32 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_33), L_31, (0.0f), (0.0f), L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_30, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_33, NULL);
		// temp2 = RenderTexture.GetTemporary (rtW, rtH, 0, fromTo.format);
		int32_t L_34 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___fromTo0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_35, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37;
		L_37 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_21, L_34, 0, L_36, NULL);
		V_1 = L_37;
		// Graphics.Blit (temp1, temp2, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_38, L_39, L_40, 2, NULL);
		// RenderTexture.ReleaseTemporary(temp1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_3;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_41, NULL);
		// dofHdrMaterial.SetTexture("_FgOverlap", temp2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->___dofHdrMaterial_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_1;
		NullCheck(L_42);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_42, _stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501, L_43, NULL);
		// fromTo.MarkRestoreExpected(); // only touching alpha channel, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___fromTo0;
		NullCheck(L_44);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_44, NULL);
		// Graphics.Blit (fromTo, fromTo, dofHdrMaterial,  13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = ___fromTo0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = ___fromTo0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_45, L_46, L_47, ((int32_t)13), NULL);
		// RenderTexture.ReleaseTemporary(temp2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_48, NULL);
		return;
	}

IL_010e:
	{
		// fromTo.MarkRestoreExpected(); // only touching alpha channel, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___fromTo0;
		NullCheck(L_49);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_49, NULL);
		// Graphics.Blit (fromTo, fromTo, dofHdrMaterial,  0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = ___fromTo0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = ___fromTo0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_50, L_51, L_52, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField_OnRenderImage_mAA557E588FE92346DF0FEC7043A9BEABC78857F0 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123EC10A00B006ADA382F26173A1D784145BAC19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E1D320598EEA2FA08C01CAA1B2972F77C21E2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76A08F95C4B9697D75ECB44A5A5A968632FE0BA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83172113C0A6DC6FE78BD4B38453008B249D3BED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral870202FA3513564EA438A5FCC61C8F0990ED0C67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4A7C91D5EB9CC7BE553909E2E68A7CB69992AC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE408B78E67B3BB09A42AEBC700C360C8EFBE3186);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	float V_4 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	int32_t V_7 = 0;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B8_0 = NULL;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B9_1 = NULL;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B16_0 = NULL;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* G_B17_1 = NULL;
	String_t* G_B21_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B21_1 = NULL;
	String_t* G_B20_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B22_2 = NULL;
	int32_t G_B37_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B41_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B41_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B41_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B40_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B40_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B40_2 = NULL;
	int32_t G_B42_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B42_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B42_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B42_3 = NULL;
	{
		// if (!CheckResources ()) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (aperture < 0.0f) aperture = 0.0f;
		float L_3 = __this->___aperture_10;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// if (aperture < 0.0f) aperture = 0.0f;
		__this->___aperture_10 = (0.0f);
	}

IL_0028:
	{
		// if (maxBlurSize < 0.1f) maxBlurSize = 0.1f;
		float L_4 = __this->___maxBlurSize_12;
		if ((!(((float)L_4) < ((float)(0.100000001f)))))
		{
			goto IL_0040;
		}
	}
	{
		// if (maxBlurSize < 0.1f) maxBlurSize = 0.1f;
		__this->___maxBlurSize_12 = (0.100000001f);
	}

IL_0040:
	{
		// focalSize = Mathf.Clamp(focalSize, 0.0f, 2.0f);
		float L_5 = __this->___focalSize_9;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.0f), (2.0f), NULL);
		__this->___focalSize_9 = L_6;
		// internalBlurWidth = Mathf.Max(maxBlurSize, 0.0f);
		float L_7 = __this->___maxBlurSize_12;
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_7, (0.0f), NULL);
		__this->___internalBlurWidth_30 = L_8;
		// focalDistance01 = (focalTransform) ? (GetComponent<Camera>().WorldToViewportPoint (focalTransform.position)).z / (GetComponent<Camera>().farClipPlane) : FocalDistance01 (focalLength);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___focalTransform_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		G_B7_0 = __this;
		if (L_10)
		{
			G_B8_0 = __this;
			goto IL_008d;
		}
	}
	{
		float L_11 = __this->___focalLength_8;
		float L_12;
		L_12 = DepthOfField_FocalDistance01_m9753A71BBBDFE2BB44294D4506A2D6BDEF77ED9D(__this, L_11, NULL);
		G_B9_0 = L_12;
		G_B9_1 = G_B7_0;
		goto IL_00b4;
	}

IL_008d:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___focalTransform_11;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_13, L_15, NULL);
		float L_17 = L_16.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_18);
		float L_19;
		L_19 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_18, NULL);
		G_B9_0 = ((float)(L_17/L_19));
		G_B9_1 = G_B8_0;
	}

IL_00b4:
	{
		NullCheck(G_B9_1);
		G_B9_1->___focalDistance01_27 = G_B9_0;
		// dofHdrMaterial.SetVector ("_CurveParams", new Vector4 (1.0f, focalSize, aperture/10.0f, focalDistance01));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___dofHdrMaterial_19;
		float L_21 = __this->___focalSize_9;
		float L_22 = __this->___aperture_10;
		float L_23 = __this->___focalDistance01_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_24), (1.0f), L_21, ((float)(L_22/(10.0f))), L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_20, _stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC, L_24, NULL);
		// RenderTexture rtLow = null;
		V_0 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// RenderTexture rtLow2 = null;
		V_1 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// RenderTexture rtSuperLow1 = null;
		V_2 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// RenderTexture rtSuperLow2 = null;
		V_3 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// float fgBlurDist = internalBlurWidth * foregroundOverlap;
		float L_25 = __this->___internalBlurWidth_30;
		float L_26 = __this->___foregroundOverlap_17;
		V_4 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// if (visualizeFocus)
		bool L_27 = __this->___visualizeFocus_7;
		if (!L_27)
		{
			goto IL_0126;
		}
	}
	{
		// WriteCoc (source, true);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = ___source0;
		DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1(__this, L_28, (bool)1, NULL);
		// Graphics.Blit (source, destination, dofHdrMaterial, 16);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_29, L_30, L_31, ((int32_t)16), NULL);
		goto IL_0a63;
	}

IL_0126:
	{
		// else if ((blurType == BlurType.DX11) && dx11bokehMaterial)
		int32_t L_32 = __this->___blurType_14;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_08d9;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___dx11bokehMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		if (!L_34)
		{
			goto IL_08d9;
		}
	}
	{
		// if (highResolution) {
		bool L_35 = __this->___highResolution_13;
		if (!L_35)
		{
			goto IL_04d8;
		}
	}
	{
		// internalBlurWidth = internalBlurWidth < 0.1f ? 0.1f : internalBlurWidth;
		float L_36 = __this->___internalBlurWidth_30;
		G_B15_0 = __this;
		if ((((float)L_36) < ((float)(0.100000001f))))
		{
			G_B16_0 = __this;
			goto IL_0163;
		}
	}
	{
		float L_37 = __this->___internalBlurWidth_30;
		G_B17_0 = L_37;
		G_B17_1 = G_B15_0;
		goto IL_0168;
	}

IL_0163:
	{
		G_B17_0 = (0.100000001f);
		G_B17_1 = G_B16_0;
	}

IL_0168:
	{
		NullCheck(G_B17_1);
		G_B17_1->___internalBlurWidth_30 = G_B17_0;
		// fgBlurDist = internalBlurWidth * foregroundOverlap;
		float L_38 = __this->___internalBlurWidth_30;
		float L_39 = __this->___foregroundOverlap_17;
		V_4 = ((float)il2cpp_codegen_multiply(L_38, L_39));
		// rtLow = RenderTexture.GetTemporary (source.width, source.height, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = ___source0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_40);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = ___source0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___source0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_44, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46;
		L_46 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_41, L_43, 0, L_45, NULL);
		V_0 = L_46;
		// var dest2= RenderTexture.GetTemporary (source.width, source.height, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___source0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_49);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = ___source0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_51, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53;
		L_53 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_48, L_50, 0, L_52, NULL);
		V_5 = L_53;
		// WriteCoc (source, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = ___source0;
		DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1(__this, L_54, (bool)0, NULL);
		// rtSuperLow1 = RenderTexture.GetTemporary(source.width>>1, source.height>>1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___source0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = ___source0;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_57);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = ___source0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_59, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61;
		L_61 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_56>>1)), ((int32_t)(L_58>>1)), 0, L_60, NULL);
		V_2 = L_61;
		// rtSuperLow2 = RenderTexture.GetTemporary(source.width>>1, source.height>>1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = ___source0;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_62);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = ___source0;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_64);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = ___source0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_66, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68;
		L_68 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_63>>1)), ((int32_t)(L_65>>1)), 0, L_67, NULL);
		V_3 = L_68;
		// Graphics.Blit(source, rtSuperLow1, dofHdrMaterial, 15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_69 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_69, L_70, L_71, ((int32_t)15), NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, 1.5f , 0.0f, 1.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___dofHdrMaterial_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_73), (0.0f), (1.5f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_72, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_73, NULL);
		// Graphics.Blit (rtSuperLow1, rtSuperLow2, dofHdrMaterial, 19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_76 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_74, L_75, L_76, ((int32_t)19), NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (1.5f, 0.0f, 0.0f, 1.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___dofHdrMaterial_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_78), (1.5f), (0.0f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_77);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_77, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_78, NULL);
		// Graphics.Blit (rtSuperLow2, rtSuperLow1, dofHdrMaterial, 19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_81 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_79, L_80, L_81, ((int32_t)19), NULL);
		// if (nearBlur)
		bool L_82 = __this->___nearBlur_16;
		if (!L_82)
		{
			goto IL_0286;
		}
	}
	{
		// Graphics.Blit (source, rtSuperLow2, dofHdrMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_83, L_84, L_85, 4, NULL);
	}

IL_0286:
	{
		// dx11bokehMaterial.SetTexture ("_BlurredColor", rtSuperLow1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86 = __this->___dx11bokehMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87 = V_2;
		NullCheck(L_86);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_86, _stringLiteral123EC10A00B006ADA382F26173A1D784145BAC19, L_87, NULL);
		// dx11bokehMaterial.SetFloat ("_SpawnHeuristic", dx11SpawnHeuristic);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88 = __this->___dx11bokehMaterial_21;
		float L_89 = __this->___dx11SpawnHeuristic_23;
		NullCheck(L_88);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_88, _stringLiteral6E1D320598EEA2FA08C01CAA1B2972F77C21E2D6, L_89, NULL);
		// dx11bokehMaterial.SetVector ("_BokehParams", new Vector4(dx11BokehScale, dx11BokehIntensity, Mathf.Clamp(dx11BokehThreshold, 0.005f, 4.0f), internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90 = __this->___dx11bokehMaterial_21;
		float L_91 = __this->___dx11BokehScale_25;
		float L_92 = __this->___dx11BokehIntensity_26;
		float L_93 = __this->___dx11BokehThreshold_22;
		float L_94;
		L_94 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_93, (0.00499999989f), (4.0f), NULL);
		float L_95 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_96), L_91, L_92, L_94, L_95, /*hidden argument*/NULL);
		NullCheck(L_90);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_90, _stringLiteral83172113C0A6DC6FE78BD4B38453008B249D3BED, L_96, NULL);
		// dx11bokehMaterial.SetTexture ("_FgCocMask", nearBlur ? rtSuperLow2 : null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = __this->___dx11bokehMaterial_21;
		bool L_98 = __this->___nearBlur_16;
		G_B20_0 = _stringLiteralE408B78E67B3BB09A42AEBC700C360C8EFBE3186;
		G_B20_1 = L_97;
		if (L_98)
		{
			G_B21_0 = _stringLiteralE408B78E67B3BB09A42AEBC700C360C8EFBE3186;
			G_B21_1 = L_97;
			goto IL_02ff;
		}
	}
	{
		G_B22_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)(NULL));
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_0300;
	}

IL_02ff:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_3;
		G_B22_0 = L_99;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_0300:
	{
		NullCheck(G_B22_2);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(G_B22_2, G_B22_1, G_B22_0, NULL);
		// Graphics.SetRandomWriteTarget (1, cbPoints);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_100 = __this->___cbPoints_29;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRandomWriteTarget_m3445C2A2B5C0ECE1E7051F69E212F169412844C2(1, L_100, NULL);
		// Graphics.Blit (source, rtLow, dx11bokehMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = __this->___dx11bokehMaterial_21;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_101, L_102, L_103, 0, NULL);
		// Graphics.ClearRandomWriteTargets ();
		Graphics_ClearRandomWriteTargets_mFD91FD2F5D0507C71B95BF00AEE9CD865AEF554F(NULL);
		// if (nearBlur) {
		bool L_104 = __this->___nearBlur_16;
		if (!L_104)
		{
			goto IL_039c;
		}
	}
	{
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, fgBlurDist , 0.0f, fgBlurDist));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_105 = __this->___dofHdrMaterial_19;
		float L_106 = V_4;
		float L_107 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_108), (0.0f), L_106, (0.0f), L_107, /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_105, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_108, NULL);
		// Graphics.Blit (rtSuperLow2, rtSuperLow1, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_109 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_109, L_110, L_111, 2, NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (fgBlurDist, 0.0f, 0.0f, fgBlurDist));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_112 = __this->___dofHdrMaterial_19;
		float L_113 = V_4;
		float L_114 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_115), L_113, (0.0f), (0.0f), L_114, /*hidden argument*/NULL);
		NullCheck(L_112);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_112, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_115, NULL);
		// Graphics.Blit (rtSuperLow1, rtSuperLow2, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_116 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_117 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_116, L_117, L_118, 2, NULL);
		// Graphics.Blit (rtSuperLow2, rtLow, dofHdrMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_119 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_120 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_121 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_119, L_120, L_121, 3, NULL);
	}

IL_039c:
	{
		// Graphics.Blit (rtLow, dest2, dofHdrMaterial, 20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_122 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_123 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_122, L_123, L_124, ((int32_t)20), NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (internalBlurWidth, 0.0f , 0.0f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = __this->___dofHdrMaterial_19;
		float L_126 = __this->___internalBlurWidth_30;
		float L_127 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_128), L_126, (0.0f), (0.0f), L_127, /*hidden argument*/NULL);
		NullCheck(L_125);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_125, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_128, NULL);
		// Graphics.Blit (rtLow, source, dofHdrMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_129 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_130 = ___source0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_129, L_130, L_131, 5, NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, internalBlurWidth, 0.0f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132 = __this->___dofHdrMaterial_19;
		float L_133 = __this->___internalBlurWidth_30;
		float L_134 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_135), (0.0f), L_133, (0.0f), L_134, /*hidden argument*/NULL);
		NullCheck(L_132);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_132, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_135, NULL);
		// Graphics.Blit (source, dest2, dofHdrMaterial, 21);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_136 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_137 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_136, L_137, L_138, ((int32_t)21), NULL);
		// Graphics.SetRenderTarget (dest2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = V_5;
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_139, NULL);
		// ComputeBuffer.CopyCount (cbPoints, cbDrawArgs, 0);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_140 = __this->___cbPoints_29;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_141 = __this->___cbDrawArgs_28;
		ComputeBuffer_CopyCount_mBD7F2AA4C73E84EE51F5A946ECC05B213FB1E385(L_140, L_141, 0, NULL);
		// dx11bokehMaterial.SetBuffer ("pointBuffer", cbPoints);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_142 = __this->___dx11bokehMaterial_21;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_143 = __this->___cbPoints_29;
		NullCheck(L_142);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_142, _stringLiteral870202FA3513564EA438A5FCC61C8F0990ED0C67, L_143, NULL);
		// dx11bokehMaterial.SetTexture ("_MainTex", dx11BokehTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_144 = __this->___dx11bokehMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_145 = __this->___dx11BokehTexture_24;
		NullCheck(L_144);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_144, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_145, NULL);
		// dx11bokehMaterial.SetVector ("_Screen", new Vector3(1.0f/(1.0f*source.width), 1.0f/(1.0f*source.height), internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146 = __this->___dx11bokehMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_147 = ___source0;
		NullCheck(L_147);
		int32_t L_148;
		L_148 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_147);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_149 = ___source0;
		NullCheck(L_149);
		int32_t L_150;
		L_150 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_149);
		float L_151 = __this->___internalBlurWidth_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		memset((&L_152), 0, sizeof(L_152));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_152), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_148))))), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_150))))), L_151, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_153;
		L_153 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_152, NULL);
		NullCheck(L_146);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_146, _stringLiteralC4A7C91D5EB9CC7BE553909E2E68A7CB69992AC1, L_153, NULL);
		// dx11bokehMaterial.SetPass (2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_154 = __this->___dx11bokehMaterial_21;
		NullCheck(L_154);
		bool L_155;
		L_155 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_154, 2, NULL);
		// Graphics.Blit (dest2, destination);    // hackaround for DX11 high resolution flipfun (OPTIMIZEME)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_156 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_157 = ___destination1;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_156, L_157, NULL);
		// RenderTexture.ReleaseTemporary(dest2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_158 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_158, NULL);
		// RenderTexture.ReleaseTemporary(rtSuperLow1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_159 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_159, NULL);
		// RenderTexture.ReleaseTemporary(rtSuperLow2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_160 = V_3;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_160, NULL);
		goto IL_0a63;
	}

IL_04d8:
	{
		// rtLow = RenderTexture.GetTemporary (source.width>>1, source.height>>1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_161 = ___source0;
		NullCheck(L_161);
		int32_t L_162;
		L_162 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_161);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_163 = ___source0;
		NullCheck(L_163);
		int32_t L_164;
		L_164 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_163);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_165 = ___source0;
		NullCheck(L_165);
		int32_t L_166;
		L_166 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_165, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_167;
		L_167 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_162>>1)), ((int32_t)(L_164>>1)), 0, L_166, NULL);
		V_0 = L_167;
		// rtLow2 = RenderTexture.GetTemporary (source.width>>1, source.height>>1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_168 = ___source0;
		NullCheck(L_168);
		int32_t L_169;
		L_169 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_168);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_170 = ___source0;
		NullCheck(L_170);
		int32_t L_171;
		L_171 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_170);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_172 = ___source0;
		NullCheck(L_172);
		int32_t L_173;
		L_173 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_172, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_174;
		L_174 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_169>>1)), ((int32_t)(L_171>>1)), 0, L_173, NULL);
		V_1 = L_174;
		// fgBlurDist = internalBlurWidth * foregroundOverlap;
		float L_175 = __this->___internalBlurWidth_30;
		float L_176 = __this->___foregroundOverlap_17;
		V_4 = ((float)il2cpp_codegen_multiply(L_175, L_176));
		// WriteCoc (source, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_177 = ___source0;
		DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1(__this, L_177, (bool)0, NULL);
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_178 = ___source0;
		NullCheck(L_178);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_178, 1, NULL);
		// Graphics.Blit (source, rtLow, dofHdrMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_179 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_180 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_179, L_180, L_181, 6, NULL);
		// rtSuperLow1 = RenderTexture.GetTemporary(rtLow.width>>1, rtLow.height>>1, 0, rtLow.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_182 = V_0;
		NullCheck(L_182);
		int32_t L_183;
		L_183 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_182);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_184 = V_0;
		NullCheck(L_184);
		int32_t L_185;
		L_185 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_184);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_186 = V_0;
		NullCheck(L_186);
		int32_t L_187;
		L_187 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_186, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_188;
		L_188 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_183>>1)), ((int32_t)(L_185>>1)), 0, L_187, NULL);
		V_2 = L_188;
		// rtSuperLow2 = RenderTexture.GetTemporary(rtLow.width>>1, rtLow.height>>1, 0, rtLow.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_189 = V_0;
		NullCheck(L_189);
		int32_t L_190;
		L_190 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_189);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_191 = V_0;
		NullCheck(L_191);
		int32_t L_192;
		L_192 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_191);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_193 = V_0;
		NullCheck(L_193);
		int32_t L_194;
		L_194 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_193, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_195;
		L_195 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_190>>1)), ((int32_t)(L_192>>1)), 0, L_194, NULL);
		V_3 = L_195;
		// Graphics.Blit(rtLow, rtSuperLow1, dofHdrMaterial, 15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_196 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_197 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_198 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_196, L_197, L_198, ((int32_t)15), NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, 1.5f , 0.0f, 1.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_199 = __this->___dofHdrMaterial_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_200;
		memset((&L_200), 0, sizeof(L_200));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_200), (0.0f), (1.5f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_199);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_199, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_200, NULL);
		// Graphics.Blit (rtSuperLow1, rtSuperLow2, dofHdrMaterial, 19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_201 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_202 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_203 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_201, L_202, L_203, ((int32_t)19), NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (1.5f, 0.0f, 0.0f, 1.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_204 = __this->___dofHdrMaterial_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_205;
		memset((&L_205), 0, sizeof(L_205));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_205), (1.5f), (0.0f), (0.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_204);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_204, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_205, NULL);
		// Graphics.Blit (rtSuperLow2, rtSuperLow1, dofHdrMaterial, 19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_206 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_207 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_208 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_206, L_207, L_208, ((int32_t)19), NULL);
		// RenderTexture rtLow3 = null;
		V_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// if (nearBlur) {
		bool L_209 = __this->___nearBlur_16;
		if (!L_209)
		{
			goto IL_062f;
		}
	}
	{
		// rtLow3 = RenderTexture.GetTemporary (source.width>>1, source.height>>1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_210 = ___source0;
		NullCheck(L_210);
		int32_t L_211;
		L_211 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_210);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_212 = ___source0;
		NullCheck(L_212);
		int32_t L_213;
		L_213 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_212);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_214 = ___source0;
		NullCheck(L_214);
		int32_t L_215;
		L_215 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_214, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_216;
		L_216 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_211>>1)), ((int32_t)(L_213>>1)), 0, L_215, NULL);
		V_6 = L_216;
		// Graphics.Blit (source, rtLow3, dofHdrMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_217 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_218 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_219 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_217, L_218, L_219, 4, NULL);
	}

IL_062f:
	{
		// dx11bokehMaterial.SetTexture ("_BlurredColor", rtSuperLow1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_220 = __this->___dx11bokehMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_221 = V_2;
		NullCheck(L_220);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_220, _stringLiteral123EC10A00B006ADA382F26173A1D784145BAC19, L_221, NULL);
		// dx11bokehMaterial.SetFloat ("_SpawnHeuristic", dx11SpawnHeuristic);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_222 = __this->___dx11bokehMaterial_21;
		float L_223 = __this->___dx11SpawnHeuristic_23;
		NullCheck(L_222);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_222, _stringLiteral6E1D320598EEA2FA08C01CAA1B2972F77C21E2D6, L_223, NULL);
		// dx11bokehMaterial.SetVector ("_BokehParams", new Vector4(dx11BokehScale, dx11BokehIntensity, Mathf.Clamp(dx11BokehThreshold, 0.005f, 4.0f), internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_224 = __this->___dx11bokehMaterial_21;
		float L_225 = __this->___dx11BokehScale_25;
		float L_226 = __this->___dx11BokehIntensity_26;
		float L_227 = __this->___dx11BokehThreshold_22;
		float L_228;
		L_228 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_227, (0.00499999989f), (4.0f), NULL);
		float L_229 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_230;
		memset((&L_230), 0, sizeof(L_230));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_230), L_225, L_226, L_228, L_229, /*hidden argument*/NULL);
		NullCheck(L_224);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_224, _stringLiteral83172113C0A6DC6FE78BD4B38453008B249D3BED, L_230, NULL);
		// dx11bokehMaterial.SetTexture ("_FgCocMask", rtLow3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_231 = __this->___dx11bokehMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_232 = V_6;
		NullCheck(L_231);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_231, _stringLiteralE408B78E67B3BB09A42AEBC700C360C8EFBE3186, L_232, NULL);
		// Graphics.SetRandomWriteTarget (1, cbPoints);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_233 = __this->___cbPoints_29;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRandomWriteTarget_m3445C2A2B5C0ECE1E7051F69E212F169412844C2(1, L_233, NULL);
		// Graphics.Blit (rtLow, rtLow2, dx11bokehMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_234 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_235 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_236 = __this->___dx11bokehMaterial_21;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_234, L_235, L_236, 0, NULL);
		// Graphics.ClearRandomWriteTargets ();
		Graphics_ClearRandomWriteTargets_mFD91FD2F5D0507C71B95BF00AEE9CD865AEF554F(NULL);
		// RenderTexture.ReleaseTemporary(rtSuperLow1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_237 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_237, NULL);
		// RenderTexture.ReleaseTemporary(rtSuperLow2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_238 = V_3;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_238, NULL);
		// if (nearBlur) {
		bool L_239 = __this->___nearBlur_16;
		if (!L_239)
		{
			goto IL_074a;
		}
	}
	{
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, fgBlurDist , 0.0f, fgBlurDist));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_240 = __this->___dofHdrMaterial_19;
		float L_241 = V_4;
		float L_242 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_243;
		memset((&L_243), 0, sizeof(L_243));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_243), (0.0f), L_241, (0.0f), L_242, /*hidden argument*/NULL);
		NullCheck(L_240);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_240, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_243, NULL);
		// Graphics.Blit (rtLow3, rtLow, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_244 = V_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_245 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_246 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_244, L_245, L_246, 2, NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (fgBlurDist, 0.0f, 0.0f, fgBlurDist));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_247 = __this->___dofHdrMaterial_19;
		float L_248 = V_4;
		float L_249 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_250;
		memset((&L_250), 0, sizeof(L_250));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_250), L_248, (0.0f), (0.0f), L_249, /*hidden argument*/NULL);
		NullCheck(L_247);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_247, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_250, NULL);
		// Graphics.Blit (rtLow, rtLow3, dofHdrMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_251 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_252 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_253 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_251, L_252, L_253, 2, NULL);
		// Graphics.Blit (rtLow3, rtLow2, dofHdrMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_254 = V_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_255 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_256 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_254, L_255, L_256, 3, NULL);
	}

IL_074a:
	{
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (internalBlurWidth, 0.0f , 0.0f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_257 = __this->___dofHdrMaterial_19;
		float L_258 = __this->___internalBlurWidth_30;
		float L_259 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_260;
		memset((&L_260), 0, sizeof(L_260));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_260), L_258, (0.0f), (0.0f), L_259, /*hidden argument*/NULL);
		NullCheck(L_257);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_257, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_260, NULL);
		// Graphics.Blit (rtLow2, rtLow, dofHdrMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_261 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_262 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_263 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_261, L_262, L_263, 5, NULL);
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, internalBlurWidth, 0.0f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_264 = __this->___dofHdrMaterial_19;
		float L_265 = __this->___internalBlurWidth_30;
		float L_266 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_267;
		memset((&L_267), 0, sizeof(L_267));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_267), (0.0f), L_265, (0.0f), L_266, /*hidden argument*/NULL);
		NullCheck(L_264);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_264, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_267, NULL);
		// Graphics.Blit (rtLow, rtLow2, dofHdrMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_268 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_269 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_270 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_268, L_269, L_270, 5, NULL);
		// Graphics.SetRenderTarget (rtLow2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_271 = V_1;
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_271, NULL);
		// ComputeBuffer.CopyCount (cbPoints, cbDrawArgs, 0);
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_272 = __this->___cbPoints_29;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_273 = __this->___cbDrawArgs_28;
		ComputeBuffer_CopyCount_mBD7F2AA4C73E84EE51F5A946ECC05B213FB1E385(L_272, L_273, 0, NULL);
		// dx11bokehMaterial.SetBuffer ("pointBuffer", cbPoints);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_274 = __this->___dx11bokehMaterial_21;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_275 = __this->___cbPoints_29;
		NullCheck(L_274);
		Material_SetBuffer_mBE41E02CB7CE8817306B9F292A3EC786E1C84ED5(L_274, _stringLiteral870202FA3513564EA438A5FCC61C8F0990ED0C67, L_275, NULL);
		// dx11bokehMaterial.SetTexture ("_MainTex", dx11BokehTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_276 = __this->___dx11bokehMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_277 = __this->___dx11BokehTexture_24;
		NullCheck(L_276);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_276, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_277, NULL);
		// dx11bokehMaterial.SetVector ("_Screen", new Vector3(1.0f/(1.0f*rtLow2.width), 1.0f/(1.0f*rtLow2.height), internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_278 = __this->___dx11bokehMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_279 = V_1;
		NullCheck(L_279);
		int32_t L_280;
		L_280 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_279);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_281 = V_1;
		NullCheck(L_281);
		int32_t L_282;
		L_282 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_281);
		float L_283 = __this->___internalBlurWidth_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284;
		memset((&L_284), 0, sizeof(L_284));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_284), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_280))))), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_282))))), L_283, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_285;
		L_285 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_284, NULL);
		NullCheck(L_278);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_278, _stringLiteralC4A7C91D5EB9CC7BE553909E2E68A7CB69992AC1, L_285, NULL);
		// dx11bokehMaterial.SetPass (1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_286 = __this->___dx11bokehMaterial_21;
		NullCheck(L_286);
		bool L_287;
		L_287 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_286, 1, NULL);
		// dofHdrMaterial.SetTexture ("_LowRez", rtLow2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_288 = __this->___dofHdrMaterial_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_289 = V_1;
		NullCheck(L_288);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_288, _stringLiteral76A08F95C4B9697D75ECB44A5A5A968632FE0BA4, L_289, NULL);
		// dofHdrMaterial.SetTexture ("_FgOverlap", rtLow3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_290 = __this->___dofHdrMaterial_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_291 = V_6;
		NullCheck(L_290);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_290, _stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501, L_291, NULL);
		// dofHdrMaterial.SetVector ("_Offsets",  ((1.0f*source.width)/(1.0f*rtLow2.width)) * internalBlurWidth * Vector4.one);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_292 = __this->___dofHdrMaterial_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_293 = ___source0;
		NullCheck(L_293);
		int32_t L_294;
		L_294 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_293);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_295 = V_1;
		NullCheck(L_295);
		int32_t L_296;
		L_296 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_295);
		float L_297 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_298;
		L_298 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_299;
		L_299 = Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_294)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_296))))), L_297)), L_298, NULL);
		NullCheck(L_292);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_292, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_299, NULL);
		// Graphics.Blit (source, destination, dofHdrMaterial, 9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_300 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_301 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_302 = __this->___dofHdrMaterial_19;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_300, L_301, L_302, ((int32_t)9), NULL);
		// if (rtLow3) RenderTexture.ReleaseTemporary(rtLow3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_303 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_304;
		L_304 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_303, NULL);
		if (!L_304)
		{
			goto IL_0a63;
		}
	}
	{
		// if (rtLow3) RenderTexture.ReleaseTemporary(rtLow3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_305 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_305, NULL);
		goto IL_0a63;
	}

IL_08d9:
	{
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_306 = ___source0;
		NullCheck(L_306);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_306, 1, NULL);
		// if (highResolution) internalBlurWidth *= 2.0f;
		bool L_307 = __this->___highResolution_13;
		if (!L_307)
		{
			goto IL_08fa;
		}
	}
	{
		// if (highResolution) internalBlurWidth *= 2.0f;
		float L_308 = __this->___internalBlurWidth_30;
		__this->___internalBlurWidth_30 = ((float)il2cpp_codegen_multiply(L_308, (2.0f)));
	}

IL_08fa:
	{
		// WriteCoc (source, true);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_309 = ___source0;
		DepthOfField_WriteCoc_mE94B9C8FD075063F31E2B906B329CB7C4BB6F8B1(__this, L_309, (bool)1, NULL);
		// rtLow = RenderTexture.GetTemporary (source.width >> 1, source.height >> 1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_310 = ___source0;
		NullCheck(L_310);
		int32_t L_311;
		L_311 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_310);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_312 = ___source0;
		NullCheck(L_312);
		int32_t L_313;
		L_313 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_312);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_314 = ___source0;
		NullCheck(L_314);
		int32_t L_315;
		L_315 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_314, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_316;
		L_316 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_311>>1)), ((int32_t)(L_313>>1)), 0, L_315, NULL);
		V_0 = L_316;
		// rtLow2 = RenderTexture.GetTemporary (source.width >> 1, source.height >> 1, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_317 = ___source0;
		NullCheck(L_317);
		int32_t L_318;
		L_318 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_317);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_319 = ___source0;
		NullCheck(L_319);
		int32_t L_320;
		L_320 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_319);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_321 = ___source0;
		NullCheck(L_321);
		int32_t L_322;
		L_322 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_321, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_323;
		L_323 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_318>>1)), ((int32_t)(L_320>>1)), 0, L_322, NULL);
		V_1 = L_323;
		// int blurPass = (blurSampleCount == BlurSampleCount.High || blurSampleCount == BlurSampleCount.Medium) ? 17 : 11;
		int32_t L_324 = __this->___blurSampleCount_15;
		if ((((int32_t)L_324) == ((int32_t)2)))
		{
			goto IL_0952;
		}
	}
	{
		int32_t L_325 = __this->___blurSampleCount_15;
		if ((((int32_t)L_325) == ((int32_t)1)))
		{
			goto IL_0952;
		}
	}
	{
		G_B37_0 = ((int32_t)11);
		goto IL_0954;
	}

IL_0952:
	{
		G_B37_0 = ((int32_t)17);
	}

IL_0954:
	{
		V_7 = G_B37_0;
		// if (highResolution) {
		bool L_326 = __this->___highResolution_13;
		if (!L_326)
		{
			goto IL_099d;
		}
	}
	{
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, internalBlurWidth, 0.025f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_327 = __this->___dofHdrMaterial_19;
		float L_328 = __this->___internalBlurWidth_30;
		float L_329 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_330;
		memset((&L_330), 0, sizeof(L_330));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_330), (0.0f), L_328, (0.0250000004f), L_329, /*hidden argument*/NULL);
		NullCheck(L_327);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_327, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_330, NULL);
		// Graphics.Blit (source, destination, dofHdrMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_331 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_332 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_333 = __this->___dofHdrMaterial_19;
		int32_t L_334 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_331, L_332, L_333, L_334, NULL);
		goto IL_0a63;
	}

IL_099d:
	{
		// dofHdrMaterial.SetVector ("_Offsets", new Vector4 (0.0f, internalBlurWidth, 0.1f, internalBlurWidth));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_335 = __this->___dofHdrMaterial_19;
		float L_336 = __this->___internalBlurWidth_30;
		float L_337 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_338;
		memset((&L_338), 0, sizeof(L_338));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_338), (0.0f), L_336, (0.100000001f), L_337, /*hidden argument*/NULL);
		NullCheck(L_335);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_335, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_338, NULL);
		// Graphics.Blit (source, rtLow, dofHdrMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_339 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_340 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_341 = __this->___dofHdrMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_339, L_340, L_341, 6, NULL);
		// Graphics.Blit (rtLow, rtLow2, dofHdrMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_342 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_343 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_344 = __this->___dofHdrMaterial_19;
		int32_t L_345 = V_7;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_342, L_343, L_344, L_345, NULL);
		// dofHdrMaterial.SetTexture("_LowRez", rtLow2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_346 = __this->___dofHdrMaterial_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_347 = V_1;
		NullCheck(L_346);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_346, _stringLiteral76A08F95C4B9697D75ECB44A5A5A968632FE0BA4, L_347, NULL);
		// dofHdrMaterial.SetTexture("_FgOverlap", null);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_348 = __this->___dofHdrMaterial_19;
		NullCheck(L_348);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_348, _stringLiteral64990EDD2C87DB9746BEC2C8EA26EC5FAE2F1501, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// dofHdrMaterial.SetVector ("_Offsets",  Vector4.one * ((1.0f*source.width)/(1.0f*rtLow2.width)) * internalBlurWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_349 = __this->___dofHdrMaterial_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_350;
		L_350 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_351 = ___source0;
		NullCheck(L_351);
		int32_t L_352;
		L_352 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_351);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_353 = V_1;
		NullCheck(L_353);
		int32_t L_354;
		L_354 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_353);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_355;
		L_355 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_350, ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_352)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_354))))), NULL);
		float L_356 = __this->___internalBlurWidth_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_357;
		L_357 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_355, L_356, NULL);
		NullCheck(L_349);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_349, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_357, NULL);
		// Graphics.Blit (source, destination, dofHdrMaterial, blurSampleCount == BlurSampleCount.High ? 18 : 12);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_358 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_359 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_360 = __this->___dofHdrMaterial_19;
		int32_t L_361 = __this->___blurSampleCount_15;
		G_B40_0 = L_360;
		G_B40_1 = L_359;
		G_B40_2 = L_358;
		if ((((int32_t)L_361) == ((int32_t)2)))
		{
			G_B41_0 = L_360;
			G_B41_1 = L_359;
			G_B41_2 = L_358;
			goto IL_0a5c;
		}
	}
	{
		G_B42_0 = ((int32_t)12);
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		G_B42_3 = G_B40_2;
		goto IL_0a5e;
	}

IL_0a5c:
	{
		G_B42_0 = ((int32_t)18);
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		G_B42_3 = G_B41_2;
	}

IL_0a5e:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B42_3, G_B42_2, G_B42_1, G_B42_0, NULL);
	}

IL_0a63:
	{
		// if (rtLow) RenderTexture.ReleaseTemporary(rtLow);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_362 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_363;
		L_363 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_362, NULL);
		if (!L_363)
		{
			goto IL_0a71;
		}
	}
	{
		// if (rtLow) RenderTexture.ReleaseTemporary(rtLow);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_364 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_364, NULL);
	}

IL_0a71:
	{
		// if (rtLow2) RenderTexture.ReleaseTemporary(rtLow2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_365 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_366;
		L_366 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_365, NULL);
		if (!L_366)
		{
			goto IL_0a7f;
		}
	}
	{
		// if (rtLow2) RenderTexture.ReleaseTemporary(rtLow2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_367 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_367, NULL);
	}

IL_0a7f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfField__ctor_m2A265D1437B0AAA1065A785E8428E162552F0393 (DepthOfField_t9C22B68F2034886DE4303FB435BF1C14745E53F8* __this, const RuntimeMethod* method) 
{
	{
		// public float focalLength = 10.0f;
		__this->___focalLength_8 = (10.0f);
		// public float focalSize = 0.05f;
		__this->___focalSize_9 = (0.0500000007f);
		// public float aperture = 11.5f;
		__this->___aperture_10 = (11.5f);
		// public float maxBlurSize = 2.0f;
		__this->___maxBlurSize_12 = (2.0f);
		// public BlurSampleCount blurSampleCount = BlurSampleCount.High;
		__this->___blurSampleCount_15 = 2;
		// public float foregroundOverlap = 1.0f;
		__this->___foregroundOverlap_17 = (1.0f);
		// public float dx11BokehThreshold = 0.5f;
		__this->___dx11BokehThreshold_22 = (0.5f);
		// public float dx11SpawnHeuristic = 0.0875f;
		__this->___dx11SpawnHeuristic_23 = (0.0874999985f);
		// public float dx11BokehScale = 1.2f;
		__this->___dx11BokehScale_25 = (1.20000005f);
		// public float dx11BokehIntensity = 2.5f;
		__this->___dx11BokehIntensity_26 = (2.5f);
		// private float focalDistance01 = 10.0f;
		__this->___focalDistance01_27 = (10.0f);
		// private float internalBlurWidth = 1.0f;
		__this->___internalBlurWidth_30 = (1.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_CreateMaterials_m3DFE5FBA8B2F6DF52BC208205A3945454479890B (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dofBlurMaterial = CheckShaderAndCreateMaterial (dofBlurShader, dofBlurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___dofBlurShader_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___dofBlurMaterial_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_0, L_1, NULL);
		__this->___dofBlurMaterial_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofBlurMaterial_26), (void*)L_2);
		// dofMaterial = CheckShaderAndCreateMaterial (dofShader,dofMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___dofShader_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___dofMaterial_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_3, L_4, NULL);
		__this->___dofMaterial_28 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofMaterial_28), (void*)L_5);
		// bokehSupport = bokehShader.isSupported;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = __this->___bokehShader_35;
		NullCheck(L_6);
		bool L_7;
		L_7 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_6, NULL);
		__this->___bokehSupport_34 = L_7;
		// if (bokeh && bokehSupport && bokehShader)
		bool L_8 = __this->___bokeh_33;
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		bool L_9 = __this->___bokehSupport_34;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = __this->___bokehShader_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		// bokehMaterial = CheckShaderAndCreateMaterial (bokehShader, bokehMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_12 = __this->___bokehShader_35;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___bokehMaterial_42;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_12, L_13, NULL);
		__this->___bokehMaterial_42 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehMaterial_42), (void*)L_14);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthOfFieldDeprecated_CheckResources_mE8F5F2654CF5F3668BDCAC07E5022170055BD07F (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// dofBlurMaterial = CheckShaderAndCreateMaterial (dofBlurShader, dofBlurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___dofBlurShader_25;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___dofBlurMaterial_26;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___dofBlurMaterial_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofBlurMaterial_26), (void*)L_3);
		// dofMaterial = CheckShaderAndCreateMaterial (dofShader,dofMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___dofShader_27;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___dofMaterial_28;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_4, L_5, NULL);
		__this->___dofMaterial_28 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dofMaterial_28), (void*)L_6);
		// bokehSupport = bokehShader.isSupported;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___bokehShader_35;
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		__this->___bokehSupport_34 = L_8;
		// if (bokeh && bokehSupport && bokehShader)
		bool L_9 = __this->___bokeh_33;
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		bool L_10 = __this->___bokehSupport_34;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11 = __this->___bokehShader_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		// bokehMaterial = CheckShaderAndCreateMaterial (bokehShader, bokehMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = __this->___bokehShader_35;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___bokehMaterial_42;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_13, L_14, NULL);
		__this->___bokehMaterial_42 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehMaterial_42), (void*)L_15);
	}

IL_007e:
	{
		// if (!isSupported)
		bool L_16 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_16)
		{
			goto IL_008c;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_008c:
	{
		// return isSupported;
		bool L_17 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_17;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_OnDisable_m3E3D5ACFF1FDC10FD900F54C5D9CBF2BEE920D4E (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	{
		// Quads.Cleanup ();
		Quads_Cleanup_m18CF6B317A33E5BFF0C5D139F3075321CE31A461(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_OnEnable_m86B858F3493ADC8E9F49BCFD33E54AF51D103561 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->____camera_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_43), (void*)L_0);
		// _camera.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->____camera_43;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_2, NULL);
		NullCheck(L_2);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_2, ((int32_t)((int32_t)L_3|1)), NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthOfFieldDeprecated_FocalDistance01_mC2B55F876AFE563170E6F57211078C5A5D89C5A8 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, float ___worldDist0, const RuntimeMethod* method) 
{
	{
		// return _camera.WorldToViewportPoint((worldDist-_camera.nearClipPlane) * _camera.transform.forward + _camera.transform.position).z / (_camera.farClipPlane-_camera.nearClipPlane);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_43;
		float L_1 = ___worldDist0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->____camera_43;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____camera_43;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract(L_1, L_3)), L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->____camera_43;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_10, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_0, L_11, NULL);
		float L_13 = L_12.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->____camera_43;
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->____camera_43;
		NullCheck(L_16);
		float L_17;
		L_17 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_16, NULL);
		return ((float)(L_13/((float)il2cpp_codegen_subtract(L_15, L_17))));
	}
}
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m80B6BF4C7B3249E986BEF7D8D8D2B0DE201067AB (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int divider = 1;
		V_0 = 1;
		// if (resolution == DofResolution.Medium)
		int32_t L_0 = __this->___resolution_10;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}
	{
		// divider = 2;
		V_0 = 2;
		goto IL_001a;
	}

IL_000f:
	{
		// else if (resolution == DofResolution.Low)
		int32_t L_1 = __this->___resolution_10;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// divider = 2;
		V_0 = 2;
	}

IL_001a:
	{
		// return divider;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m985CDBEC2CF43F2E8907FA1FE19D3D127C170CB0 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, int32_t ___baseDivider0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int lowTexDivider = baseDivider;
		int32_t L_0 = ___baseDivider0;
		V_0 = L_0;
		// if (resolution == DofResolution.High)
		int32_t L_1 = __this->___resolution_10;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// lowTexDivider *= 2;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
	}

IL_000f:
	{
		// if (resolution == DofResolution.Low)
		int32_t L_3 = __this->___resolution_10;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_001c;
		}
	}
	{
		// lowTexDivider *= 2;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 2));
	}

IL_001c:
	{
		// return lowTexDivider;
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_OnRenderImage_m65BD2421A8466090B3329A2E3D9DD982A436282C (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D48831C246FC7591DF3382C2DBB33BDB539E890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED00DC32D26D64245CD86F48BE5FFAF6E36B31E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7035EC413F7D45F09D40EE45F3FF4319284C994A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C3CA9EFAAD8218587238941F53583F341D865A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8D6FA095ADE922B0231B4B1167D1FDFACA27CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2421074D015FA6102149AD0BDAE12D42B9C55E2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B6_0 = NULL;
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B7_1 = NULL;
	float G_B10_0 = 0.0f;
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B13_0 = NULL;
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B12_0 = NULL;
	float G_B14_0 = 0.0f;
	DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* G_B14_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B24_0 = 0;
	String_t* G_B27_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B27_1 = NULL;
	String_t* G_B26_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B26_1 = NULL;
	float G_B28_0 = 0.0f;
	String_t* G_B28_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B28_2 = NULL;
	float G_B30_0 = 0.0f;
	String_t* G_B30_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B30_2 = NULL;
	float G_B29_0 = 0.0f;
	String_t* G_B29_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B29_2 = NULL;
	float G_B31_0 = 0.0f;
	float G_B31_1 = 0.0f;
	String_t* G_B31_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_3 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B40_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B39_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B41_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B41_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B43_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B43_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B43_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B42_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B42_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B42_2 = NULL;
	int32_t G_B44_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B44_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B44_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B44_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B51_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B51_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B51_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B50_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B50_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B50_2 = NULL;
	int32_t G_B52_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B52_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B52_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B52_3 = NULL;
	{
		// if (CheckResources()==false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (smoothness < 0.1f)
		float L_3 = __this->___smoothness_13;
		if ((!(((float)L_3) < ((float)(0.100000001f)))))
		{
			goto IL_0028;
		}
	}
	{
		// smoothness = 0.1f;
		__this->___smoothness_13 = (0.100000001f);
	}

IL_0028:
	{
		// bokeh = bokeh && bokehSupport;
		bool L_4 = __this->___bokeh_33;
		G_B5_0 = __this;
		if (!L_4)
		{
			G_B6_0 = __this;
			goto IL_0039;
		}
	}
	{
		bool L_5 = __this->___bokehSupport_34;
		G_B7_0 = ((int32_t)(L_5));
		G_B7_1 = G_B5_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_003a:
	{
		NullCheck(G_B7_1);
		G_B7_1->___bokeh_33 = (bool)G_B7_0;
		// float bokehBlurAmplifier = bokeh ? BOKEH_EXTRA_BLUR : 1.0f;
		bool L_6 = __this->___bokeh_33;
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		G_B10_0 = (1.0f);
		goto IL_0053;
	}

IL_004e:
	{
		il2cpp_codegen_runtime_class_init_inline(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		float L_7 = ((DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields*)il2cpp_codegen_static_fields_for(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var))->___BOKEH_EXTRA_BLUR_8;
		G_B10_0 = L_7;
	}

IL_0053:
	{
		V_0 = G_B10_0;
		// bool  blurForeground = quality > Dof34QualitySetting.OnlyBackground;
		int32_t L_8 = __this->___quality_9;
		V_1 = (bool)((((int32_t)L_8) > ((int32_t)1))? 1 : 0);
		// float focal01Size = focalSize / (_camera.farClipPlane - _camera.nearClipPlane);;
		float L_9 = __this->___focalSize_21;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->____camera_43;
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_10, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->____camera_43;
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_12, NULL);
		V_2 = ((float)(L_9/((float)il2cpp_codegen_subtract(L_11, L_13))));
		// if (simpleTweakMode) {
		bool L_14 = __this->___simpleTweakMode_11;
		if (!L_14)
		{
			goto IL_0114;
		}
	}
	{
		// focalDistance01 = objectFocus ? (_camera.WorldToViewportPoint (objectFocus.position)).z / (_camera.farClipPlane) : FocalDistance01 (focalPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___objectFocus_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		G_B12_0 = __this;
		if (L_16)
		{
			G_B13_0 = __this;
			goto IL_00a4;
		}
	}
	{
		float L_17 = __this->___focalPoint_12;
		float L_18;
		L_18 = DepthOfFieldDeprecated_FocalDistance01_mC2B55F876AFE563170E6F57211078C5A5D89C5A8(__this, L_17, NULL);
		G_B14_0 = L_18;
		G_B14_1 = G_B12_0;
		goto IL_00cb;
	}

IL_00a4:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->____camera_43;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___objectFocus_20;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_19, L_21, NULL);
		float L_23 = L_22.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->____camera_43;
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_24, NULL);
		G_B14_0 = ((float)(L_23/L_25));
		G_B14_1 = G_B13_0;
	}

IL_00cb:
	{
		NullCheck(G_B14_1);
		G_B14_1->___focalDistance01_19 = G_B14_0;
		// focalStartCurve = focalDistance01 * smoothness;
		float L_26 = __this->___focalDistance01_19;
		float L_27 = __this->___smoothness_13;
		__this->___focalStartCurve_17 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		// focalEndCurve = focalStartCurve;
		float L_28 = __this->___focalStartCurve_17;
		__this->___focalEndCurve_18 = L_28;
		// blurForeground = blurForeground && (focalPoint > (_camera.nearClipPlane + Mathf.Epsilon));
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_010d;
		}
	}
	{
		float L_30 = __this->___focalPoint_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->____camera_43;
		NullCheck(L_31);
		float L_32;
		L_32 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_31, NULL);
		float L_33 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		G_B17_0 = ((((float)L_30) > ((float)((float)il2cpp_codegen_add(L_32, L_33))))? 1 : 0);
		goto IL_010e;
	}

IL_010d:
	{
		G_B17_0 = 0;
	}

IL_010e:
	{
		V_1 = (bool)G_B17_0;
		goto IL_01ac;
	}

IL_0114:
	{
		// if (objectFocus) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___objectFocus_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_34, NULL);
		if (!L_35)
		{
			goto IL_0162;
		}
	}
	{
		// var vpPoint= _camera.WorldToViewportPoint (objectFocus.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = __this->____camera_43;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___objectFocus_20;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_36, L_38, NULL);
		V_5 = L_39;
		// vpPoint.z = (vpPoint.z) / (_camera.farClipPlane);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_5;
		float L_41 = L_40.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = __this->____camera_43;
		NullCheck(L_42);
		float L_43;
		L_43 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_42, NULL);
		(&V_5)->___z_4 = ((float)(L_41/L_43));
		// focalDistance01 = vpPoint.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		float L_45 = L_44.___z_4;
		__this->___focalDistance01_19 = L_45;
		goto IL_0174;
	}

IL_0162:
	{
		// focalDistance01 = FocalDistance01 (focalZDistance);
		float L_46 = __this->___focalZDistance_14;
		float L_47;
		L_47 = DepthOfFieldDeprecated_FocalDistance01_mC2B55F876AFE563170E6F57211078C5A5D89C5A8(__this, L_46, NULL);
		__this->___focalDistance01_19 = L_47;
	}

IL_0174:
	{
		// focalStartCurve = focalZStartCurve;
		float L_48 = __this->___focalZStartCurve_15;
		__this->___focalStartCurve_17 = L_48;
		// focalEndCurve = focalZEndCurve;
		float L_49 = __this->___focalZEndCurve_16;
		__this->___focalEndCurve_18 = L_49;
		// blurForeground = blurForeground && (focalPoint > (_camera.nearClipPlane + Mathf.Epsilon));
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_01aa;
		}
	}
	{
		float L_51 = __this->___focalPoint_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_52 = __this->____camera_43;
		NullCheck(L_52);
		float L_53;
		L_53 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_52, NULL);
		float L_54 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		G_B24_0 = ((((float)L_51) > ((float)((float)il2cpp_codegen_add(L_53, L_54))))? 1 : 0);
		goto IL_01ab;
	}

IL_01aa:
	{
		G_B24_0 = 0;
	}

IL_01ab:
	{
		V_1 = (bool)G_B24_0;
	}

IL_01ac:
	{
		// widthOverHeight = (1.0f * source.width) / (1.0f * source.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___source0;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = ___source0;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_57);
		__this->___widthOverHeight_31 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_56)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_58)))));
		// oneOverBaseSize = 1.0f / 512.0f;
		__this->___oneOverBaseSize_32 = (0.001953125f);
		// dofMaterial.SetFloat ("_ForegroundBlurExtrude", foregroundBlurExtrude);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = __this->___dofMaterial_28;
		float L_60 = __this->___foregroundBlurExtrude_24;
		NullCheck(L_59);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_59, _stringLiteral6D48831C246FC7591DF3382C2DBB33BDB539E890, L_60, NULL);
		// dofMaterial.SetVector ("_CurveParams", new Vector4 (simpleTweakMode ? 1.0f / focalStartCurve : focalStartCurve, simpleTweakMode ? 1.0f / focalEndCurve : focalEndCurve, focal01Size * 0.5f, focalDistance01));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___dofMaterial_28;
		bool L_62 = __this->___simpleTweakMode_11;
		G_B26_0 = _stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC;
		G_B26_1 = L_61;
		if (L_62)
		{
			G_B27_0 = _stringLiteral1CBFAEC37CB6AC0F9329DFF538BEFB069622A4FC;
			G_B27_1 = L_61;
			goto IL_0209;
		}
	}
	{
		float L_63 = __this->___focalStartCurve_17;
		G_B28_0 = L_63;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_0215;
	}

IL_0209:
	{
		float L_64 = __this->___focalStartCurve_17;
		G_B28_0 = ((float)((1.0f)/L_64));
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_0215:
	{
		bool L_65 = __this->___simpleTweakMode_11;
		G_B29_0 = G_B28_0;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		if (L_65)
		{
			G_B30_0 = G_B28_0;
			G_B30_1 = G_B28_1;
			G_B30_2 = G_B28_2;
			goto IL_0225;
		}
	}
	{
		float L_66 = __this->___focalEndCurve_18;
		G_B31_0 = L_66;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		G_B31_3 = G_B29_2;
		goto IL_0231;
	}

IL_0225:
	{
		float L_67 = __this->___focalEndCurve_18;
		G_B31_0 = ((float)((1.0f)/L_67));
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
		G_B31_3 = G_B30_2;
	}

IL_0231:
	{
		float L_68 = V_2;
		float L_69 = __this->___focalDistance01_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_70), G_B31_1, G_B31_0, ((float)il2cpp_codegen_multiply(L_68, (0.5f))), L_69, /*hidden argument*/NULL);
		NullCheck(G_B31_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B31_3, G_B31_2, L_70, NULL);
		// dofMaterial.SetVector ("_InvRenderTargetSize", new Vector4 (1.0f / (1.0f * source.width), 1.0f / (1.0f * source.height),0.0f,0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___dofMaterial_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_72 = ___source0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_72);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = ___source0;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_74);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_76), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_73))))), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_75))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_71);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_71, _stringLiteralD2421074D015FA6102149AD0BDAE12D42B9C55E2, L_76, NULL);
		// int divider =  GetDividerBasedOnQuality ();
		int32_t L_77;
		L_77 = DepthOfFieldDeprecated_GetDividerBasedOnQuality_m80B6BF4C7B3249E986BEF7D8D8D2B0DE201067AB(__this, NULL);
		V_3 = L_77;
		// int lowTexDivider = GetLowResolutionDividerBasedOnQuality (divider);
		int32_t L_78 = V_3;
		int32_t L_79;
		L_79 = DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m985CDBEC2CF43F2E8907FA1FE19D3D127C170CB0(__this, L_78, NULL);
		V_4 = L_79;
		// AllocateTextures (blurForeground, source, divider, lowTexDivider);
		bool L_80 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = ___source0;
		int32_t L_82 = V_3;
		int32_t L_83 = V_4;
		DepthOfFieldDeprecated_AllocateTextures_m26D14CBF056C12BA4CC153913DBDDBE9BFB29B0D(__this, L_80, L_81, L_82, L_83, NULL);
		// Graphics.Blit (source, source, dofMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_85 = ___source0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_84, L_85, L_86, 3, NULL);
		// Downsample (source, mediumRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_88 = __this->___mediumRezWorkTexture_45;
		DepthOfFieldDeprecated_Downsample_mECCC2FD41C3593F6C4881D392F9B0CE21FB56CCC(__this, L_87, L_88, NULL);
		// Blur (mediumRezWorkTexture, mediumRezWorkTexture, DofBlurriness.Low, 4, maxBlurSpread);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_89 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = __this->___mediumRezWorkTexture_45;
		float L_91 = __this->___maxBlurSpread_23;
		DepthOfFieldDeprecated_Blur_mA2B98FF3332C7AD3D25634AF426A6732768CE451(__this, L_89, L_90, 1, 4, L_91, NULL);
		// if ((bokeh) && ((BokehDestination.Foreground & bokehDestination) != 0))
		bool L_92 = __this->___bokeh_33;
		if (!L_92)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_93 = __this->___bokehDestination_30;
		if (!((int32_t)(2&(int32_t)L_93)))
		{
			goto IL_036a;
		}
	}
	{
		// dofMaterial.SetVector ("_Threshhold", new Vector4(bokehThresholdContrast, bokehThresholdLuminance, 0.95f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = __this->___dofMaterial_28;
		float L_95 = __this->___bokehThresholdContrast_39;
		float L_96 = __this->___bokehThresholdLuminance_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_97), L_95, L_96, (0.949999988f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_94);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_94, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_97, NULL);
		// Graphics.Blit (mediumRezWorkTexture, bokehSource2, dofMaterial, 11);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = __this->___bokehSource2_49;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_98, L_99, L_100, ((int32_t)11), NULL);
		// Graphics.Blit (mediumRezWorkTexture, lowRezWorkTexture);//, dofMaterial, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = __this->___lowRezWorkTexture_47;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_101, L_102, NULL);
		// Blur (lowRezWorkTexture, lowRezWorkTexture, bluriness, 0, maxBlurSpread * bokehBlurAmplifier);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_103 = __this->___lowRezWorkTexture_47;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_104 = __this->___lowRezWorkTexture_47;
		int32_t L_105 = __this->___bluriness_22;
		float L_106 = __this->___maxBlurSpread_23;
		float L_107 = V_0;
		DepthOfFieldDeprecated_Blur_mA2B98FF3332C7AD3D25634AF426A6732768CE451(__this, L_103, L_104, L_105, 0, ((float)il2cpp_codegen_multiply(L_106, L_107)), NULL);
		goto IL_039b;
	}

IL_036a:
	{
		// Downsample (mediumRezWorkTexture, lowRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_108 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_109 = __this->___lowRezWorkTexture_47;
		DepthOfFieldDeprecated_Downsample_mECCC2FD41C3593F6C4881D392F9B0CE21FB56CCC(__this, L_108, L_109, NULL);
		// Blur (lowRezWorkTexture, lowRezWorkTexture, bluriness, 0, maxBlurSpread);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = __this->___lowRezWorkTexture_47;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = __this->___lowRezWorkTexture_47;
		int32_t L_112 = __this->___bluriness_22;
		float L_113 = __this->___maxBlurSpread_23;
		DepthOfFieldDeprecated_Blur_mA2B98FF3332C7AD3D25634AF426A6732768CE451(__this, L_110, L_111, L_112, 0, L_113, NULL);
	}

IL_039b:
	{
		// dofBlurMaterial.SetTexture ("_TapLow", lowRezWorkTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114 = __this->___dofBlurMaterial_26;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_115 = __this->___lowRezWorkTexture_47;
		NullCheck(L_114);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_114, _stringLiteral7035EC413F7D45F09D40EE45F3FF4319284C994A, L_115, NULL);
		// dofBlurMaterial.SetTexture ("_TapMedium", mediumRezWorkTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_116 = __this->___dofBlurMaterial_26;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_117 = __this->___mediumRezWorkTexture_45;
		NullCheck(L_116);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_116, _stringLiteralB8D6FA095ADE922B0231B4B1167D1FDFACA27CD0, L_117, NULL);
		// Graphics.Blit (null, finalDefocus, dofBlurMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_118 = __this->___finalDefocus_46;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_119 = __this->___dofBlurMaterial_26;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_118, L_119, 3, NULL);
		// if ((bokeh) && ((BokehDestination.Foreground & bokehDestination) != 0))
		bool L_120 = __this->___bokeh_33;
		if (!L_120)
		{
			goto IL_0404;
		}
	}
	{
		int32_t L_121 = __this->___bokehDestination_30;
		if (!((int32_t)(2&(int32_t)L_121)))
		{
			goto IL_0404;
		}
	}
	{
		// AddBokeh (bokehSource2, bokehSource, finalDefocus);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_122 = __this->___bokehSource2_49;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_123 = __this->___bokehSource_48;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_124 = __this->___finalDefocus_46;
		DepthOfFieldDeprecated_AddBokeh_m5C7284DF55D8065B3F01A41D8F699A0D79E33077(__this, L_122, L_123, L_124, NULL);
	}

IL_0404:
	{
		// dofMaterial.SetTexture ("_TapLowBackground", finalDefocus);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = __this->___dofMaterial_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_126 = __this->___finalDefocus_46;
		NullCheck(L_125);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_125, _stringLiteral6ED00DC32D26D64245CD86F48BE5FFAF6E36B31E, L_126, NULL);
		// dofMaterial.SetTexture ("_TapMedium", mediumRezWorkTexture); // needed for debugging/visualization
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127 = __this->___dofMaterial_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = __this->___mediumRezWorkTexture_45;
		NullCheck(L_127);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_127, _stringLiteralB8D6FA095ADE922B0231B4B1167D1FDFACA27CD0, L_128, NULL);
		// Graphics.Blit (source, blurForeground ? foregroundTexture : destination, dofMaterial, visualize ? 2 : 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_129 = ___source0;
		bool L_130 = V_1;
		G_B39_0 = L_129;
		if (L_130)
		{
			G_B40_0 = L_129;
			goto IL_0437;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = ___destination1;
		G_B41_0 = L_131;
		G_B41_1 = G_B39_0;
		goto IL_043d;
	}

IL_0437:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = __this->___foregroundTexture_44;
		G_B41_0 = L_132;
		G_B41_1 = G_B40_0;
	}

IL_043d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___dofMaterial_28;
		bool L_134 = __this->___visualize_29;
		G_B42_0 = L_133;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		if (L_134)
		{
			G_B43_0 = L_133;
			G_B43_1 = G_B41_0;
			G_B43_2 = G_B41_1;
			goto IL_044e;
		}
	}
	{
		G_B44_0 = 0;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		G_B44_3 = G_B42_2;
		goto IL_044f;
	}

IL_044e:
	{
		G_B44_0 = 2;
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
		G_B44_3 = G_B43_2;
	}

IL_044f:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B44_3, G_B44_2, G_B44_1, G_B44_0, NULL);
		// if (blurForeground) {
		bool L_135 = V_1;
		if (!L_135)
		{
			goto IL_05ab;
		}
	}
	{
		// Graphics.Blit (foregroundTexture, source, dofMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_136 = __this->___foregroundTexture_44;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_137 = ___source0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_136, L_137, L_138, 5, NULL);
		// Downsample (source, mediumRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_140 = __this->___mediumRezWorkTexture_45;
		DepthOfFieldDeprecated_Downsample_mECCC2FD41C3593F6C4881D392F9B0CE21FB56CCC(__this, L_139, L_140, NULL);
		// BlurFg (mediumRezWorkTexture, mediumRezWorkTexture, DofBlurriness.Low, 2, maxBlurSpread);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_141 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_142 = __this->___mediumRezWorkTexture_45;
		float L_143 = __this->___maxBlurSpread_23;
		DepthOfFieldDeprecated_BlurFg_m9EC1D58A51FA15F10BD6B6F201354D5F5942FD61(__this, L_141, L_142, 1, 2, L_143, NULL);
		// if ((bokeh) && ((BokehDestination.Foreground & bokehDestination) != 0))
		bool L_144 = __this->___bokeh_33;
		if (!L_144)
		{
			goto IL_0527;
		}
	}
	{
		int32_t L_145 = __this->___bokehDestination_30;
		if (!((int32_t)(2&(int32_t)L_145)))
		{
			goto IL_0527;
		}
	}
	{
		// dofMaterial.SetVector ("_Threshhold", new Vector4(bokehThresholdContrast * 0.5f, bokehThresholdLuminance, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146 = __this->___dofMaterial_28;
		float L_147 = __this->___bokehThresholdContrast_39;
		float L_148 = __this->___bokehThresholdLuminance_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_149), ((float)il2cpp_codegen_multiply(L_147, (0.5f))), L_148, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_146);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_146, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_149, NULL);
		// Graphics.Blit (mediumRezWorkTexture, bokehSource2, dofMaterial, 11);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_150 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_151 = __this->___bokehSource2_49;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_152 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_150, L_151, L_152, ((int32_t)11), NULL);
		// Graphics.Blit (mediumRezWorkTexture, lowRezWorkTexture);//, dofMaterial, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_153 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_154 = __this->___lowRezWorkTexture_47;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_153, L_154, NULL);
		// BlurFg (lowRezWorkTexture, lowRezWorkTexture, bluriness, 1, maxBlurSpread * bokehBlurAmplifier);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_155 = __this->___lowRezWorkTexture_47;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_156 = __this->___lowRezWorkTexture_47;
		int32_t L_157 = __this->___bluriness_22;
		float L_158 = __this->___maxBlurSpread_23;
		float L_159 = V_0;
		DepthOfFieldDeprecated_BlurFg_m9EC1D58A51FA15F10BD6B6F201354D5F5942FD61(__this, L_155, L_156, L_157, 1, ((float)il2cpp_codegen_multiply(L_158, L_159)), NULL);
		goto IL_0546;
	}

IL_0527:
	{
		// BlurFg (mediumRezWorkTexture, lowRezWorkTexture, bluriness, 1, maxBlurSpread);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_160 = __this->___mediumRezWorkTexture_45;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_161 = __this->___lowRezWorkTexture_47;
		int32_t L_162 = __this->___bluriness_22;
		float L_163 = __this->___maxBlurSpread_23;
		DepthOfFieldDeprecated_BlurFg_m9EC1D58A51FA15F10BD6B6F201354D5F5942FD61(__this, L_160, L_161, L_162, 1, L_163, NULL);
	}

IL_0546:
	{
		// Graphics.Blit (lowRezWorkTexture, finalDefocus);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_164 = __this->___lowRezWorkTexture_47;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_165 = __this->___finalDefocus_46;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_164, L_165, NULL);
		// dofMaterial.SetTexture ("_TapLowForeground", finalDefocus);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166 = __this->___dofMaterial_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_167 = __this->___finalDefocus_46;
		NullCheck(L_166);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_166, _stringLiteral99C3CA9EFAAD8218587238941F53583F341D865A, L_167, NULL);
		// Graphics.Blit (source, destination, dofMaterial, visualize ? 1 : 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_168 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_169 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170 = __this->___dofMaterial_28;
		bool L_171 = __this->___visualize_29;
		G_B50_0 = L_170;
		G_B50_1 = L_169;
		G_B50_2 = L_168;
		if (L_171)
		{
			G_B51_0 = L_170;
			G_B51_1 = L_169;
			G_B51_2 = L_168;
			goto IL_0580;
		}
	}
	{
		G_B52_0 = 4;
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		G_B52_3 = G_B50_2;
		goto IL_0581;
	}

IL_0580:
	{
		G_B52_0 = 1;
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
		G_B52_3 = G_B51_2;
	}

IL_0581:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B52_3, G_B52_2, G_B52_1, G_B52_0, NULL);
		// if ((bokeh) && ((BokehDestination.Foreground & bokehDestination) != 0))
		bool L_172 = __this->___bokeh_33;
		if (!L_172)
		{
			goto IL_05ab;
		}
	}
	{
		int32_t L_173 = __this->___bokehDestination_30;
		if (!((int32_t)(2&(int32_t)L_173)))
		{
			goto IL_05ab;
		}
	}
	{
		// AddBokeh (bokehSource2, bokehSource, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_174 = __this->___bokehSource2_49;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_175 = __this->___bokehSource_48;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_176 = ___destination1;
		DepthOfFieldDeprecated_AddBokeh_m5C7284DF55D8065B3F01A41D8F699A0D79E33077(__this, L_174, L_175, L_176, NULL);
	}

IL_05ab:
	{
		// ReleaseTextures ();
		DepthOfFieldDeprecated_ReleaseTextures_m3F4F40F3CAEB5D02B1EB43C65457B811CCF61FA4(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_Blur_mA2B98FF3332C7AD3D25634AF426A6732768CE451 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// RenderTexture tmp = RenderTexture.GetTemporary (to.width, to.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___to1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___to1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_0 = L_4;
		// if ((int)iterations > 1) {
		int32_t L_5 = ___iterations2;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_00ae;
		}
	}
	{
		// BlurHex (from, to, blurPass, spread, tmp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___to1;
		int32_t L_8 = ___blurPass3;
		float L_9 = ___spread4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_0;
		DepthOfFieldDeprecated_BlurHex_mA06B816018A052277D95895580456609D2FB4855(__this, L_6, L_7, L_8, L_9, L_10, NULL);
		// if ((int)iterations > 2) {
		int32_t L_11 = ___iterations2;
		if ((((int32_t)L_11) <= ((int32_t)2)))
		{
			goto IL_012d;
		}
	}
	{
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___dofBlurMaterial_26;
		float L_13 = ___spread4;
		float L_14 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), (0.0f), ((float)il2cpp_codegen_multiply(L_13, L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_12, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_15, NULL);
		// Graphics.Blit (to, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___to1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___dofBlurMaterial_26;
		int32_t L_19 = ___blurPass3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_16, L_17, L_18, L_19, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___dofBlurMaterial_26;
		float L_21 = ___spread4;
		float L_22 = __this->___widthOverHeight_31;
		float L_23 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_24), ((float)il2cpp_codegen_multiply(((float)(L_21/L_22)), L_23)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_20, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_24, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___dofBlurMaterial_26;
		int32_t L_28 = ___blurPass3;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_25, L_26, L_27, L_28, NULL);
		goto IL_012d;
	}

IL_00ae:
	{
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___dofBlurMaterial_26;
		float L_30 = ___spread4;
		float L_31 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_32), (0.0f), ((float)il2cpp_codegen_multiply(L_30, L_31)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_29, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_32, NULL);
		// Graphics.Blit (from, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = __this->___dofBlurMaterial_26;
		int32_t L_36 = ___blurPass3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_33, L_34, L_35, L_36, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___dofBlurMaterial_26;
		float L_38 = ___spread4;
		float L_39 = __this->___widthOverHeight_31;
		float L_40 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_41), ((float)il2cpp_codegen_multiply(((float)(L_38/L_39)), L_40)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_37, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_41, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___dofBlurMaterial_26;
		int32_t L_45 = ___blurPass3;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_42, L_43, L_44, L_45, NULL);
	}

IL_012d:
	{
		// RenderTexture.ReleaseTemporary (tmp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_46, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_BlurFg_m9EC1D58A51FA15F10BD6B6F201354D5F5942FD61 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9382A96CD5EE97182BD1B1CB518606C0CB0A20D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// dofBlurMaterial.SetTexture ("_TapHigh", from);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___dofBlurMaterial_26;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___from0;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteral9382A96CD5EE97182BD1B1CB518606C0CB0A20D4, L_1, NULL);
		// RenderTexture tmp = RenderTexture.GetTemporary (to.width, to.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___to1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___to1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_3, L_5, NULL);
		V_0 = L_6;
		// if ((int)iterations > 1) {
		int32_t L_7 = ___iterations2;
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_00bf;
		}
	}
	{
		// BlurHex (from, to, blurPass, spread, tmp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___to1;
		int32_t L_10 = ___blurPass3;
		float L_11 = ___spread4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = V_0;
		DepthOfFieldDeprecated_BlurHex_mA06B816018A052277D95895580456609D2FB4855(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		// if ((int)iterations > 2) {
		int32_t L_13 = ___iterations2;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_013e;
		}
	}
	{
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___dofBlurMaterial_26;
		float L_15 = ___spread4;
		float L_16 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_17), (0.0f), ((float)il2cpp_codegen_multiply(L_15, L_16)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_14, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_17, NULL);
		// Graphics.Blit (to, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___to1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___dofBlurMaterial_26;
		int32_t L_21 = ___blurPass3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_18, L_19, L_20, L_21, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___dofBlurMaterial_26;
		float L_23 = ___spread4;
		float L_24 = __this->___widthOverHeight_31;
		float L_25 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_26), ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_22, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_26, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___dofBlurMaterial_26;
		int32_t L_30 = ___blurPass3;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_27, L_28, L_29, L_30, NULL);
		goto IL_013e;
	}

IL_00bf:
	{
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___dofBlurMaterial_26;
		float L_32 = ___spread4;
		float L_33 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_34), (0.0f), ((float)il2cpp_codegen_multiply(L_32, L_33)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_31, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_34, NULL);
		// Graphics.Blit (from, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___dofBlurMaterial_26;
		int32_t L_38 = ___blurPass3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_35, L_36, L_37, L_38, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___dofBlurMaterial_26;
		float L_40 = ___spread4;
		float L_41 = __this->___widthOverHeight_31;
		float L_42 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_43), ((float)il2cpp_codegen_multiply(((float)(L_40/L_41)), L_42)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_43, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___dofBlurMaterial_26;
		int32_t L_47 = ___blurPass3;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_44, L_45, L_46, L_47, NULL);
	}

IL_013e:
	{
		// RenderTexture.ReleaseTemporary (tmp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_48, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_BlurHex_mA06B816018A052277D95895580456609D2FB4855 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, int32_t ___blurPass2, float ___spread3, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tmp4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (0.0f, spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___dofBlurMaterial_26;
		float L_1 = ___spread3;
		float L_2 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_3), (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_3, NULL);
		// Graphics.Blit (from, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___tmp4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___dofBlurMaterial_26;
		int32_t L_7 = ___blurPass2;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_4, L_5, L_6, L_7, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___dofBlurMaterial_26;
		float L_9 = ___spread3;
		float L_10 = __this->___widthOverHeight_31;
		float L_11 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(((float)(L_9/L_10)), L_11)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_8, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_12, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___tmp4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___dofBlurMaterial_26;
		int32_t L_16 = ___blurPass2;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_13, L_14, L_15, L_16, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___dofBlurMaterial_26;
		float L_18 = ___spread3;
		float L_19 = __this->___widthOverHeight_31;
		float L_20 = __this->___oneOverBaseSize_32;
		float L_21 = ___spread3;
		float L_22 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_23), ((float)il2cpp_codegen_multiply(((float)(L_18/L_19)), L_20)), ((float)il2cpp_codegen_multiply(L_21, L_22)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_17, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_23, NULL);
		// Graphics.Blit (to, tmp, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___to1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = ___tmp4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___dofBlurMaterial_26;
		int32_t L_27 = ___blurPass2;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_24, L_25, L_26, L_27, NULL);
		// dofBlurMaterial.SetVector ("offsets", new Vector4 (spread / widthOverHeight * oneOverBaseSize,  -spread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___dofBlurMaterial_26;
		float L_29 = ___spread3;
		float L_30 = __this->___widthOverHeight_31;
		float L_31 = __this->___oneOverBaseSize_32;
		float L_32 = ___spread3;
		float L_33 = __this->___oneOverBaseSize_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_34), ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)), ((float)il2cpp_codegen_multiply(((-L_32)), L_33)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_28, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_34, NULL);
		// Graphics.Blit (tmp, to, dofBlurMaterial, blurPass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___tmp4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___dofBlurMaterial_26;
		int32_t L_38 = ___blurPass2;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_35, L_36, L_37, L_38, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_Downsample_mECCC2FD41C3593F6C4881D392F9B0CE21FB56CCC (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___from0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2421074D015FA6102149AD0BDAE12D42B9C55E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dofMaterial.SetVector ("_InvRenderTargetSize", new Vector4 (1.0f / (1.0f * to.width), 1.0f / (1.0f * to.height), 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___dofMaterial_28;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___to1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___to1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_5), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_2))))), ((float)((1.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_4))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, _stringLiteralD2421074D015FA6102149AD0BDAE12D42B9C55E2, L_5, NULL);
		// Graphics.Blit (from, to, dofMaterial, SMOOTH_DOWNSAMPLE_PASS);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___from0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___to1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields*)il2cpp_codegen_static_fields_for(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var))->___SMOOTH_DOWNSAMPLE_PASS_7;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_AddBokeh_m5C7284DF55D8065B3F01A41D8F699A0D79E33077 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___bokehInfo0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___tempTex1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___finalTarget2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46BD273D624ECB1BB8ECE4038A8032857886D012);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* V_2 = NULL;
	int32_t V_3 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_4 = NULL;
	{
		// if (bokehMaterial) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___bokehMaterial_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0157;
		}
	}
	{
		// var meshes = Quads.GetMeshes (tempTex.width, tempTex.height);    // quads: exchanging more triangles with less overdraw
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___tempTex1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___tempTex1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_6;
		L_6 = Quads_GetMeshes_mB329F322CBF3A8CEFE17BD982B669E48E2559625(L_3, L_5, NULL);
		// RenderTexture.active = tempTex;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___tempTex1;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_7, NULL);
		// GL.Clear (false, true, new Color (0.0f, 0.0f, 0.0f, 0.0f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)0, (bool)1, L_8, NULL);
		// GL.PushMatrix ();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadIdentity ();
		GL_LoadIdentity_m86FB54921F8F0069E07163B6D35E4B1B6338C264(NULL);
		// bokehInfo.filterMode = FilterMode.Point;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___bokehInfo0;
		NullCheck(L_9);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_9, 0, NULL);
		// float arW = (bokehInfo.width * 1.0f) / (bokehInfo.height * 1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___bokehInfo0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___bokehInfo0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)L_11), (1.0f)))/((float)il2cpp_codegen_multiply(((float)L_13), (1.0f)))));
		// float sc = 2.0f / (1.0f * bokehInfo.width);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___bokehInfo0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		V_1 = ((float)((2.0f)/((float)il2cpp_codegen_multiply((1.0f), ((float)L_15)))));
		// sc += bokehScale * maxBlurSpread * BOKEH_EXTRA_BLUR * oneOverBaseSize;
		float L_16 = V_1;
		float L_17 = __this->___bokehScale_37;
		float L_18 = __this->___maxBlurSpread_23;
		il2cpp_codegen_runtime_class_init_inline(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		float L_19 = ((DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields*)il2cpp_codegen_static_fields_for(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var))->___BOKEH_EXTRA_BLUR_8;
		float L_20 = __this->___oneOverBaseSize_32;
		V_1 = ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_18)), L_19)), L_20))));
		// bokehMaterial.SetTexture ("_Source", bokehInfo);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___bokehMaterial_42;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = ___bokehInfo0;
		NullCheck(L_21);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_21, _stringLiteralD982DD4496EE1EAEEDD5B4DA7B2EB057EEC66E1D, L_22, NULL);
		// bokehMaterial.SetTexture ("_MainTex", bokehTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->___bokehMaterial_42;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___bokehTexture_36;
		NullCheck(L_23);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_23, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_24, NULL);
		// bokehMaterial.SetVector ("_ArScale",new Vector4 (sc, sc * arW, 0.5f, 0.5f * arW));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___bokehMaterial_42;
		float L_26 = V_1;
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_30), L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), (0.5f), ((float)il2cpp_codegen_multiply((0.5f), L_29)), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_25, _stringLiteral46BD273D624ECB1BB8ECE4038A8032857886D012, L_30, NULL);
		// bokehMaterial.SetFloat ("_Intensity", bokehIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___bokehMaterial_42;
		float L_32 = __this->___bokehIntensity_38;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_32, NULL);
		// bokehMaterial.SetPass (0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___bokehMaterial_42;
		NullCheck(L_33);
		bool L_34;
		L_34 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_33, 0, NULL);
		// foreach(Mesh m in meshes)
		V_2 = L_6;
		V_3 = 0;
		goto IL_0137;
	}

IL_0119:
	{
		// foreach(Mesh m in meshes)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_35 = V_2;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = L_38;
		// if (m) Graphics.DrawMeshNow (m, Matrix4x4.identity);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_39 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_39, NULL);
		if (!L_40)
		{
			goto IL_0133;
		}
	}
	{
		// if (m) Graphics.DrawMeshNow (m, Matrix4x4.identity);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = V_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42;
		L_42 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawMeshNow_m421C1C4546C4EB772D727AAC58DEC9CCCBF81897(L_41, L_42, NULL);
	}

IL_0133:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0137:
	{
		// foreach(Mesh m in meshes)
		int32_t L_44 = V_3;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_45 = V_2;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0119;
		}
	}
	{
		// GL.PopMatrix ();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// Graphics.Blit (tempTex, finalTarget, dofMaterial, 8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = ___tempTex1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___finalTarget2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = __this->___dofMaterial_28;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_46, L_47, L_48, 8, NULL);
		// bokehInfo.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = ___bokehInfo0;
		NullCheck(L_49);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_49, 1, NULL);
	}

IL_0157:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_ReleaseTextures_m3F4F40F3CAEB5D02B1EB43C65457B811CCF61FA4 (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (foregroundTexture) RenderTexture.ReleaseTemporary (foregroundTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___foregroundTexture_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (foregroundTexture) RenderTexture.ReleaseTemporary (foregroundTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___foregroundTexture_44;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_2, NULL);
	}

IL_0018:
	{
		// if (finalDefocus) RenderTexture.ReleaseTemporary (finalDefocus);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___finalDefocus_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// if (finalDefocus) RenderTexture.ReleaseTemporary (finalDefocus);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___finalDefocus_46;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_5, NULL);
	}

IL_0030:
	{
		// if (mediumRezWorkTexture) RenderTexture.ReleaseTemporary (mediumRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___mediumRezWorkTexture_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (mediumRezWorkTexture) RenderTexture.ReleaseTemporary (mediumRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___mediumRezWorkTexture_45;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_8, NULL);
	}

IL_0048:
	{
		// if (lowRezWorkTexture) RenderTexture.ReleaseTemporary (lowRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___lowRezWorkTexture_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		// if (lowRezWorkTexture) RenderTexture.ReleaseTemporary (lowRezWorkTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->___lowRezWorkTexture_47;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_11, NULL);
	}

IL_0060:
	{
		// if (bokehSource) RenderTexture.ReleaseTemporary (bokehSource);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->___bokehSource_48;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		// if (bokehSource) RenderTexture.ReleaseTemporary (bokehSource);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___bokehSource_48;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_14, NULL);
	}

IL_0078:
	{
		// if (bokehSource2) RenderTexture.ReleaseTemporary (bokehSource2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___bokehSource2_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		// if (bokehSource2) RenderTexture.ReleaseTemporary (bokehSource2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->___bokehSource2_49;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_17, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated_AllocateTextures_m26D14CBF056C12BA4CC153913DBDDBE9BFB29B0D (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, bool ___blurForeground0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, int32_t ___divider2, int32_t ___lowTexDivider3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foregroundTexture = null;
		__this->___foregroundTexture_44 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___foregroundTexture_44), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// if (blurForeground)
		bool L_0 = ___blurForeground0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// foregroundTexture = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_2, L_4, 0, NULL);
		__this->___foregroundTexture_44 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___foregroundTexture_44), (void*)L_5);
	}

IL_0022:
	{
		// mediumRezWorkTexture = RenderTexture.GetTemporary (source.width / divider, source.height / divider, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___source1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		int32_t L_8 = ___divider2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___source1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		int32_t L_11 = ___divider2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12;
		L_12 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_7/L_8)), ((int32_t)(L_10/L_11)), 0, NULL);
		__this->___mediumRezWorkTexture_45 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mediumRezWorkTexture_45), (void*)L_12);
		// finalDefocus = RenderTexture.GetTemporary (source.width / divider, source.height / divider, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___source1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		int32_t L_15 = ___divider2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___source1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		int32_t L_18 = ___divider2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19;
		L_19 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_14/L_15)), ((int32_t)(L_17/L_18)), 0, NULL);
		__this->___finalDefocus_46 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___finalDefocus_46), (void*)L_19);
		// lowRezWorkTexture  = RenderTexture.GetTemporary (source.width / lowTexDivider, source.height / lowTexDivider, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		int32_t L_22 = ___lowTexDivider3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___source1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		int32_t L_25 = ___lowTexDivider3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26;
		L_26 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_21/L_22)), ((int32_t)(L_24/L_25)), 0, NULL);
		__this->___lowRezWorkTexture_47 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lowRezWorkTexture_47), (void*)L_26);
		// bokehSource = null;
		__this->___bokehSource_48 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehSource_48), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// bokehSource2 = null;
		__this->___bokehSource2_49 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehSource2_49), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// if (bokeh) {
		bool L_27 = __this->___bokeh_33;
		if (!L_27)
		{
			goto IL_012e;
		}
	}
	{
		// bokehSource  = RenderTexture.GetTemporary (source.width / (lowTexDivider * bokehDownsample), source.height / (lowTexDivider * bokehDownsample), 0, RenderTextureFormat.ARGBHalf);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = ___source1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		int32_t L_30 = ___lowTexDivider3;
		int32_t L_31 = __this->___bokehDownsample_41;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___source1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_32);
		int32_t L_34 = ___lowTexDivider3;
		int32_t L_35 = __this->___bokehDownsample_41;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36;
		L_36 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_29/((int32_t)il2cpp_codegen_multiply(L_30, L_31)))), ((int32_t)(L_33/((int32_t)il2cpp_codegen_multiply(L_34, L_35)))), 0, 2, NULL);
		__this->___bokehSource_48 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehSource_48), (void*)L_36);
		// bokehSource2  = RenderTexture.GetTemporary (source.width / (lowTexDivider * bokehDownsample), source.height / (lowTexDivider * bokehDownsample), 0,  RenderTextureFormat.ARGBHalf);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = ___source1;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		int32_t L_39 = ___lowTexDivider3;
		int32_t L_40 = __this->___bokehDownsample_41;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = ___source1;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		int32_t L_43 = ___lowTexDivider3;
		int32_t L_44 = __this->___bokehDownsample_41;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45;
		L_45 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_38/((int32_t)il2cpp_codegen_multiply(L_39, L_40)))), ((int32_t)(L_42/((int32_t)il2cpp_codegen_multiply(L_43, L_44)))), 0, 2, NULL);
		__this->___bokehSource2_49 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehSource2_49), (void*)L_45);
		// bokehSource.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = __this->___bokehSource_48;
		NullCheck(L_46);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_46, 1, NULL);
		// bokehSource2.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = __this->___bokehSource2_49;
		NullCheck(L_47);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_47, 1, NULL);
		// RenderTexture.active = bokehSource2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = __this->___bokehSource2_49;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_48, NULL);
		// GL.Clear (false, true, new Color(0.0f, 0.0f, 0.0f, 0.0f));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		memset((&L_49), 0, sizeof(L_49));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_49), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)0, (bool)1, L_49, NULL);
	}

IL_012e:
	{
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = ___source1;
		NullCheck(L_50);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_50, 1, NULL);
		// finalDefocus.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = __this->___finalDefocus_46;
		NullCheck(L_51);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_51, 1, NULL);
		// mediumRezWorkTexture.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = __this->___mediumRezWorkTexture_45;
		NullCheck(L_52);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_52, 1, NULL);
		// lowRezWorkTexture.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = __this->___lowRezWorkTexture_47;
		NullCheck(L_53);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_53, 1, NULL);
		// if (foregroundTexture)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = __this->___foregroundTexture_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_54, NULL);
		if (!L_55)
		{
			goto IL_0172;
		}
	}
	{
		// foregroundTexture.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = __this->___foregroundTexture_44;
		NullCheck(L_56);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_56, 1, NULL);
	}

IL_0172:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated__ctor_m6B6B37E85FB0EA2831AE0CA05FD781FAEE5DA0BF (DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91* __this, const RuntimeMethod* method) 
{
	{
		// public Dof34QualitySetting quality = Dof34QualitySetting.OnlyBackground;
		__this->___quality_9 = 1;
		// public DofResolution resolution  = DofResolution.Low;
		__this->___resolution_10 = 4;
		// public bool  simpleTweakMode = true;
		__this->___simpleTweakMode_11 = (bool)1;
		// public float focalPoint = 1.0f;
		__this->___focalPoint_12 = (1.0f);
		// public float smoothness = 0.5f;
		__this->___smoothness_13 = (0.5f);
		// public float focalZStartCurve = 1.0f;
		__this->___focalZStartCurve_15 = (1.0f);
		// public float focalZEndCurve = 1.0f;
		__this->___focalZEndCurve_16 = (1.0f);
		// private float focalStartCurve = 2.0f;
		__this->___focalStartCurve_17 = (2.0f);
		// private float focalEndCurve = 2.0f;
		__this->___focalEndCurve_18 = (2.0f);
		// private float focalDistance01 = 0.1f;
		__this->___focalDistance01_19 = (0.100000001f);
		// public DofBlurriness bluriness = DofBlurriness.High;
		__this->___bluriness_22 = 2;
		// public float maxBlurSpread = 1.75f;
		__this->___maxBlurSpread_23 = (1.75f);
		// public float foregroundBlurExtrude = 1.15f;
		__this->___foregroundBlurExtrude_24 = (1.14999998f);
		// public BokehDestination bokehDestination = BokehDestination.Background;
		__this->___bokehDestination_30 = 1;
		// private float widthOverHeight = 1.25f;
		__this->___widthOverHeight_31 = (1.25f);
		// private float oneOverBaseSize = 1.0f / 512.0f;
		__this->___oneOverBaseSize_32 = (0.001953125f);
		// public bool  bokehSupport = true;
		__this->___bokehSupport_34 = (bool)1;
		// public float bokehScale = 2.4f;
		__this->___bokehScale_37 = (2.4000001f);
		// public float bokehIntensity = 0.15f;
		__this->___bokehIntensity_38 = (0.150000006f);
		// public float bokehThresholdContrast = 0.1f;
		__this->___bokehThresholdContrast_39 = (0.100000001f);
		// public float bokehThresholdLuminance = 0.55f;
		__this->___bokehThresholdLuminance_40 = (0.550000012f);
		// public int bokehDownsample = 1;
		__this->___bokehDownsample_41 = 1;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOfFieldDeprecated__cctor_m3FA1672494E284D85C238AE853FDAC4C596326B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private int SMOOTH_DOWNSAMPLE_PASS = 6;
		((DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields*)il2cpp_codegen_static_fields_for(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var))->___SMOOTH_DOWNSAMPLE_PASS_7 = 6;
		// static private float BOKEH_EXTRA_BLUR = 2.0f;
		((DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_StaticFields*)il2cpp_codegen_static_fields_for(DepthOfFieldDeprecated_t305127AFB2A45AB7F27FC9CE87474BF31A5B5F91_il2cpp_TypeInfo_var))->___BOKEH_EXTRA_BLUR_8 = (2.0f);
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
// System.Boolean UnityStandardAssets.ImageEffects.EdgeDetection::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EdgeDetection_CheckResources_m844678E40D8131D435B81A85884316C437AA33C3 (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// edgeDetectMaterial = CheckShaderAndCreateMaterial (edgeDetectShader,edgeDetectMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___edgeDetectShader_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___edgeDetectMaterial_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___edgeDetectMaterial_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___edgeDetectMaterial_16), (void*)L_3);
		// if (mode != oldMode)
		int32_t L_4 = __this->___mode_7;
		int32_t L_5 = __this->___oldMode_17;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// SetCameraFlag ();
		EdgeDetection_SetCameraFlag_mFBFBA5CBA1DD869326CB998571155DEB1147FB7C(__this, NULL);
	}

IL_0034:
	{
		// oldMode = mode;
		int32_t L_6 = __this->___mode_7;
		__this->___oldMode_17 = L_6;
		// if (!isSupported)
		bool L_7 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_004e:
	{
		// return isSupported;
		bool L_8 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_8;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection_Start_mB5C5CBF5FB91B71A0E44915A297D76B8A936F5D8 (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) 
{
	{
		// oldMode    = mode;
		int32_t L_0 = __this->___mode_7;
		__this->___oldMode_17 = L_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::SetCameraFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection_SetCameraFlag_mFBFBA5CBA1DD869326CB998571155DEB1147FB7C (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode == EdgeDetectMode.SobelDepth || mode == EdgeDetectMode.SobelDepthThin)
		int32_t L_0 = __this->___mode_7;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___mode_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0026;
		}
	}

IL_0012:
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_3, NULL);
		NullCheck(L_3);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_3, ((int32_t)((int32_t)L_4|1)), NULL);
		return;
	}

IL_0026:
	{
		// else if (mode == EdgeDetectMode.TriangleDepthNormals || mode == EdgeDetectMode.RobertsCrossDepthNormals)
		int32_t L_5 = __this->___mode_7;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_6 = __this->___mode_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}

IL_0037:
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.DepthNormals;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_8, NULL);
		NullCheck(L_8);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_8, ((int32_t)((int32_t)L_9|2)), NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection_OnEnable_mA5DAB7483904036D88EB9EB54693AF7212C2AB3E (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) 
{
	{
		// SetCameraFlag();
		EdgeDetection_SetCameraFlag_mFBFBA5CBA1DD869326CB998571155DEB1147FB7C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection_OnRenderImage_m38E961698AF5A6CD1FB1F3646B6E4EBB78260DD1 (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C31C686E0C84134B4E5C55FE160ABE4C0D5031B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB18DCC1550A5F78FE4F78475365A692DC42A0897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB20379950A35CC3AB220BDFB77B9F886C09FD0F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE6B4F4E5300752FE07EC1D72C61D3726534BB16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF36559115AD3ED5B4AACA2113D9CEBCC34A82296);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CheckResources () == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// Vector2 sensitivity = new Vector2 (sensitivityDepth, sensitivityNormals);
		float L_3 = __this->___sensitivityDepth_8;
		float L_4 = __this->___sensitivityNormals_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_3, L_4, NULL);
		// edgeDetectMaterial.SetVector ("_Sensitivity", new Vector4 (sensitivity.x, sensitivity.y, 1.0f, sensitivity.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___edgeDetectMaterial_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), L_7, L_9, (1.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_5, _stringLiteral2C31C686E0C84134B4E5C55FE160ABE4C0D5031B, L_12, NULL);
		// edgeDetectMaterial.SetFloat ("_BgFade", edgesOnly);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___edgeDetectMaterial_16;
		float L_14 = __this->___edgesOnly_13;
		NullCheck(L_13);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_13, _stringLiteralF36559115AD3ED5B4AACA2113D9CEBCC34A82296, L_14, NULL);
		// edgeDetectMaterial.SetFloat ("_SampleDistance", sampleDist);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___edgeDetectMaterial_16;
		float L_16 = __this->___sampleDist_12;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteralB18DCC1550A5F78FE4F78475365A692DC42A0897, L_16, NULL);
		// edgeDetectMaterial.SetVector ("_BgColor", edgesOnlyBgColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___edgeDetectMaterial_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___edgesOnlyBgColor_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19;
		L_19 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_18, NULL);
		NullCheck(L_17);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_17, _stringLiteralB20379950A35CC3AB220BDFB77B9F886C09FD0F2, L_19, NULL);
		// edgeDetectMaterial.SetFloat ("_Exponent", edgeExp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___edgeDetectMaterial_16;
		float L_21 = __this->___edgeExp_11;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralCE6B4F4E5300752FE07EC1D72C61D3726534BB16, L_21, NULL);
		// edgeDetectMaterial.SetFloat ("_Threshold", lumThreshold);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___edgeDetectMaterial_16;
		float L_23 = __this->___lumThreshold_10;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0, L_23, NULL);
		// Graphics.Blit (source, destination, edgeDetectMaterial, (int) mode);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___edgeDetectMaterial_16;
		int32_t L_27 = __this->___mode_7;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_24, L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.EdgeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgeDetection__ctor_m0D04687855A216627755DA1FFA8688A69A46FDE8 (EdgeDetection_tEC78979D5571A0800EEF48053C711BD3526DE354* __this, const RuntimeMethod* method) 
{
	{
		// public EdgeDetectMode mode = EdgeDetectMode.SobelDepthThin;
		__this->___mode_7 = 3;
		// public float sensitivityDepth = 1.0f;
		__this->___sensitivityDepth_8 = (1.0f);
		// public float sensitivityNormals = 1.0f;
		__this->___sensitivityNormals_9 = (1.0f);
		// public float lumThreshold = 0.2f;
		__this->___lumThreshold_10 = (0.200000003f);
		// public float edgeExp = 1.0f;
		__this->___edgeExp_11 = (1.0f);
		// public float sampleDist = 1.0f;
		__this->___sampleDist_12 = (1.0f);
		// public Color edgesOnlyBgColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___edgesOnlyBgColor_14 = L_0;
		// private EdgeDetectMode oldMode = EdgeDetectMode.SobelDepthThin;
		__this->___oldMode_17 = 3;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Fisheye::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fisheye_CheckResources_m6FFFA5A2454821C9C998FFEFE2FB212D2BC4D9D8 (Fisheye_t10DE2F0851075D3E0C5ABACD90AF9B2E5E191293* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// fisheyeMaterial = CheckShaderAndCreateMaterial(fishEyeShader,fisheyeMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___fishEyeShader_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___fisheyeMaterial_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___fisheyeMaterial_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fisheyeMaterial_10), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Fisheye::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fisheye_OnRenderImage_m28DBEA9F277263BF7E11C4A3DF06B713E505254B (Fisheye_t10DE2F0851075D3E0C5ABACD90AF9B2E5E191293* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// float oneOverBaseSize = 80.0f / 512.0f; // to keep values more like in the old version of fisheye
		V_0 = (0.15625f);
		// float ar = (source.width * 1.0f) / (source.height * 1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = ((float)(((float)il2cpp_codegen_multiply(((float)L_4), (1.0f)))/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))));
		// fisheyeMaterial.SetVector ("intensity", new Vector4 (strengthX * ar * oneOverBaseSize, strengthY * oneOverBaseSize, strengthX * ar * oneOverBaseSize, strengthY * oneOverBaseSize));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___fisheyeMaterial_10;
		float L_8 = __this->___strengthX_7;
		float L_9 = V_1;
		float L_10 = V_0;
		float L_11 = __this->___strengthY_8;
		float L_12 = V_0;
		float L_13 = __this->___strengthX_7;
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16 = __this->___strengthY_8;
		float L_17 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_18), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10)), ((float)il2cpp_codegen_multiply(L_11, L_12)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), ((float)il2cpp_codegen_multiply(L_16, L_17)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_7, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, L_18, NULL);
		// Graphics.Blit (source, destination, fisheyeMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___fisheyeMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_19, L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Fisheye::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fisheye__ctor_m8A4F67E1FC937F5867702B596171FCEB427BF3E5 (Fisheye_t10DE2F0851075D3E0C5ABACD90AF9B2E5E191293* __this, const RuntimeMethod* method) 
{
	{
		// public float strengthX = 0.05f;
		__this->___strengthX_7 = (0.0500000007f);
		// public float strengthY = 0.05f;
		__this->___strengthY_8 = (0.0500000007f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlobalFog_CheckResources_m9F40B749F22806F92122CF5CECE86612E6FA2E53 (GlobalFog_t9B33CF76423FA251AE3D017FE6BCBBFBB2629828* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// fogMaterial = CheckShaderAndCreateMaterial (fogShader, fogMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___fogShader_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___fogMaterial_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___fogMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fogMaterial_14), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_OnRenderImage_mE19FBCBCFB6223066FA043162F3DB09DCE56CF5B (GlobalFog_t9B33CF76423FA251AE3D017FE6BCBBFBB2629828* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	int32_t V_25 = 0;
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B13_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B15_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B16_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B18_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B17_0 = NULL;
	float G_B19_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B19_1 = NULL;
	float G_B21_0 = 0.0f;
	String_t* G_B21_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B21_2 = NULL;
	float G_B20_0 = 0.0f;
	String_t* G_B20_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_2 = NULL;
	int32_t G_B22_0 = 0;
	float G_B22_1 = 0.0f;
	String_t* G_B22_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B22_3 = NULL;
	{
		// if (CheckResources()==false || (!distanceFog && !heightFog))
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___distanceFog_7;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		bool L_2 = __this->___heightFog_9;
		if (L_2)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_3, L_4, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// Camera cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		// Transform camtr = cam.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		V_0 = L_7;
		// float camNear = cam.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = L_6;
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_8, NULL);
		V_1 = L_9;
		// float camFar = cam.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = L_8;
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_10, NULL);
		V_2 = L_11;
		// float camFov = cam.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = L_10;
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_12, NULL);
		V_3 = L_13;
		// float camAspect = cam.aspect;
		NullCheck(L_12);
		float L_14;
		L_14 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_12, NULL);
		V_4 = L_14;
		// Matrix4x4 frustumCorners = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		V_5 = L_15;
		// float fovWHalf = camFov * 0.5f;
		float L_16 = V_3;
		V_6 = ((float)il2cpp_codegen_multiply(L_16, (0.5f)));
		// Vector3 toRight = camtr.right * camNear * Mathf.Tan (fovWHalf * Mathf.Deg2Rad) * camAspect;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21 = V_6;
		float L_22;
		L_22 = tanf(((float)il2cpp_codegen_multiply(L_21, (0.0174532924f))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
		float L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		V_7 = L_25;
		// Vector3 toTop = camtr.up * camNear * Mathf.Tan (fovWHalf * Mathf.Deg2Rad);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_26, NULL);
		float L_28 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		float L_30 = V_6;
		float L_31;
		L_31 = tanf(((float)il2cpp_codegen_multiply(L_30, (0.0174532924f))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_31, NULL);
		V_8 = L_32;
		// Vector3 topLeft = (camtr.forward * camNear - toRight + toTop);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_33, NULL);
		float L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_39, NULL);
		V_9 = L_40;
		// float camScale = topLeft.magnitude * camFar/camNear;
		float L_41;
		L_41 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_9), NULL);
		float L_42 = V_2;
		float L_43 = V_1;
		V_10 = ((float)(((float)il2cpp_codegen_multiply(L_41, L_42))/L_43));
		// topLeft.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_9), NULL);
		// topLeft *= camScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_9;
		float L_45 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_45, NULL);
		V_9 = L_46;
		// Vector3 topRight = (camtr.forward * camNear + toRight + toTop);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = V_0;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_47, NULL);
		float L_49 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_53, NULL);
		V_11 = L_54;
		// topRight.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_11), NULL);
		// topRight *= camScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_11;
		float L_56 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, L_56, NULL);
		V_11 = L_57;
		// Vector3 bottomRight = (camtr.forward * camNear + toRight - toTop);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = V_0;
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_58, NULL);
		float L_60 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_59, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_64, NULL);
		V_12 = L_65;
		// bottomRight.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_12), NULL);
		// bottomRight *= camScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_12;
		float L_67 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_67, NULL);
		V_12 = L_68;
		// Vector3 bottomLeft = (camtr.forward * camNear - toRight - toTop);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = V_0;
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_69, NULL);
		float L_71 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_72, L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_74, L_75, NULL);
		V_13 = L_76;
		// bottomLeft.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_13), NULL);
		// bottomLeft *= camScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_13;
		float L_78 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, L_78, NULL);
		V_13 = L_79;
		// frustumCorners.SetRow (0, topLeft);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
		L_81 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_80, NULL);
		Matrix4x4_SetRow_m8A1D95E7A5F999126A57D1C5CE8CEB9AC8F6BD20((&V_5), 0, L_81, NULL);
		// frustumCorners.SetRow (1, topRight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83;
		L_83 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_82, NULL);
		Matrix4x4_SetRow_m8A1D95E7A5F999126A57D1C5CE8CEB9AC8F6BD20((&V_5), 1, L_83, NULL);
		// frustumCorners.SetRow (2, bottomRight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85;
		L_85 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_84, NULL);
		Matrix4x4_SetRow_m8A1D95E7A5F999126A57D1C5CE8CEB9AC8F6BD20((&V_5), 2, L_85, NULL);
		// frustumCorners.SetRow (3, bottomLeft);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_87;
		L_87 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_86, NULL);
		Matrix4x4_SetRow_m8A1D95E7A5F999126A57D1C5CE8CEB9AC8F6BD20((&V_5), 3, L_87, NULL);
		// var camPos= camtr.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = V_0;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		V_14 = L_89;
		// float FdotC = camPos.y-height;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_14;
		float L_91 = L_90.___y_3;
		float L_92 = __this->___height_10;
		V_15 = ((float)il2cpp_codegen_subtract(L_91, L_92));
		// float paramK = (FdotC <= 0.0f ? 1.0f : 0.0f);
		float L_93 = V_15;
		if ((((float)L_93) <= ((float)(0.0f))))
		{
			goto IL_01c9;
		}
	}
	{
		G_B7_0 = (0.0f);
		goto IL_01ce;
	}

IL_01c9:
	{
		G_B7_0 = (1.0f);
	}

IL_01ce:
	{
		V_16 = G_B7_0;
		// fogMaterial.SetMatrix ("_FrustumCornersWS", frustumCorners);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = __this->___fogMaterial_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_95 = V_5;
		NullCheck(L_94);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_94, _stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F, L_95, NULL);
		// fogMaterial.SetVector ("_CameraWS", camPos);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = __this->___fogMaterial_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
		L_98 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_97, NULL);
		NullCheck(L_96);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_96, _stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6, L_98, NULL);
		// fogMaterial.SetVector ("_HeightParams", new Vector4 (height, FdotC, paramK, heightDensity*0.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99 = __this->___fogMaterial_14;
		float L_100 = __this->___height_10;
		float L_101 = V_15;
		float L_102 = V_16;
		float L_103 = __this->___heightDensity_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_104), L_100, L_101, L_102, ((float)il2cpp_codegen_multiply(L_103, (0.5f))), /*hidden argument*/NULL);
		NullCheck(L_99);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_99, _stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30, L_104, NULL);
		// fogMaterial.SetVector ("_DistanceParams", new Vector4 (-Mathf.Max(startDistance,0.0f), 0, 0, 0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_105 = __this->___fogMaterial_14;
		float L_106 = __this->___startDistance_12;
		float L_107;
		L_107 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_106, (0.0f), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_108), ((-L_107)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_105, _stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C, L_108, NULL);
		// var sceneMode= RenderSettings.fogMode;
		int32_t L_109;
		L_109 = RenderSettings_get_fogMode_m25F7D530744487CB11BD5C682A63805A526858EE(NULL);
		V_17 = L_109;
		// var sceneDensity= RenderSettings.fogDensity;
		float L_110;
		L_110 = RenderSettings_get_fogDensity_mACE336DB065800D763714CEF74A322FB83950389(NULL);
		V_18 = L_110;
		// var sceneStart= RenderSettings.fogStartDistance;
		float L_111;
		L_111 = RenderSettings_get_fogStartDistance_mADD30E9C3092FA1108C10F01E5FA1829EF0FCF14(NULL);
		V_19 = L_111;
		// var sceneEnd= RenderSettings.fogEndDistance;
		float L_112;
		L_112 = RenderSettings_get_fogEndDistance_m0D29A1A5CCB2CDFB5DEBCE09DD5193532FC762CB(NULL);
		V_20 = L_112;
		// bool  linear = (sceneMode == FogMode.Linear);
		int32_t L_113 = V_17;
		V_22 = (bool)((((int32_t)L_113) == ((int32_t)1))? 1 : 0);
		// float diff = linear ? sceneEnd - sceneStart : 0.0f;
		bool L_114 = V_22;
		if (L_114)
		{
			goto IL_0287;
		}
	}
	{
		G_B10_0 = (0.0f);
		goto IL_028c;
	}

IL_0287:
	{
		float L_115 = V_20;
		float L_116 = V_19;
		G_B10_0 = ((float)il2cpp_codegen_subtract(L_115, L_116));
	}

IL_028c:
	{
		V_23 = G_B10_0;
		// float invDiff = Mathf.Abs(diff) > 0.0001f ? 1.0f / diff : 0.0f;
		float L_117 = V_23;
		float L_118;
		L_118 = fabsf(L_117);
		if ((((float)L_118) > ((float)(9.99999975E-05f))))
		{
			goto IL_02a3;
		}
	}
	{
		G_B13_0 = (0.0f);
		goto IL_02ab;
	}

IL_02a3:
	{
		float L_119 = V_23;
		G_B13_0 = ((float)((1.0f)/L_119));
	}

IL_02ab:
	{
		V_24 = G_B13_0;
		// sceneParams.x = sceneDensity * 1.2011224087f; // density / sqrt(ln(2)), used by Exp2 fog mode
		float L_120 = V_18;
		(&V_21)->___x_1 = ((float)il2cpp_codegen_multiply(L_120, (1.2011224f)));
		// sceneParams.y = sceneDensity * 1.4426950408f; // density / ln(2), used by Exp fog mode
		float L_121 = V_18;
		(&V_21)->___y_2 = ((float)il2cpp_codegen_multiply(L_121, (1.44269502f)));
		// sceneParams.z = linear ? -invDiff : 0.0f;
		bool L_122 = V_22;
		G_B14_0 = (&V_21);
		if (L_122)
		{
			G_B15_0 = (&V_21);
			goto IL_02d8;
		}
	}
	{
		G_B16_0 = (0.0f);
		G_B16_1 = G_B14_0;
		goto IL_02db;
	}

IL_02d8:
	{
		float L_123 = V_24;
		G_B16_0 = ((-L_123));
		G_B16_1 = G_B15_0;
	}

IL_02db:
	{
		G_B16_1->___z_3 = G_B16_0;
		// sceneParams.w = linear ? sceneEnd * invDiff : 0.0f;
		bool L_124 = V_22;
		G_B17_0 = (&V_21);
		if (L_124)
		{
			G_B18_0 = (&V_21);
			goto IL_02ed;
		}
	}
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B17_0;
		goto IL_02f2;
	}

IL_02ed:
	{
		float L_125 = V_20;
		float L_126 = V_24;
		G_B19_0 = ((float)il2cpp_codegen_multiply(L_125, L_126));
		G_B19_1 = G_B18_0;
	}

IL_02f2:
	{
		G_B19_1->___w_4 = G_B19_0;
		// fogMaterial.SetVector ("_SceneFogParams", sceneParams);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127 = __this->___fogMaterial_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_128 = V_21;
		NullCheck(L_127);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_127, _stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3, L_128, NULL);
		// fogMaterial.SetVector ("_SceneFogMode", new Vector4((int)sceneMode, useRadialDistance ? 1 : 0, 0, 0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___fogMaterial_14;
		int32_t L_130 = V_17;
		bool L_131 = __this->___useRadialDistance_8;
		G_B20_0 = ((float)L_130);
		G_B20_1 = _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
		G_B20_2 = L_129;
		if (L_131)
		{
			G_B21_0 = ((float)L_130);
			G_B21_1 = _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
			G_B21_2 = L_129;
			goto IL_0322;
		}
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_0323;
	}

IL_0322:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_0323:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_132), G_B22_1, ((float)G_B22_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B22_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B22_3, G_B22_2, L_132, NULL);
		// int pass = 0;
		V_25 = 0;
		// if (distanceFog && heightFog)
		bool L_133 = __this->___distanceFog_7;
		if (!L_133)
		{
			goto IL_0350;
		}
	}
	{
		bool L_134 = __this->___heightFog_9;
		if (!L_134)
		{
			goto IL_0350;
		}
	}
	{
		// pass = 0; // distance + height
		V_25 = 0;
		goto IL_0360;
	}

IL_0350:
	{
		// else if (distanceFog)
		bool L_135 = __this->___distanceFog_7;
		if (!L_135)
		{
			goto IL_035d;
		}
	}
	{
		// pass = 1; // distance only
		V_25 = 1;
		goto IL_0360;
	}

IL_035d:
	{
		// pass = 2; // height only
		V_25 = 2;
	}

IL_0360:
	{
		// CustomGraphicsBlit (source, destination, fogMaterial, pass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_136 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_137 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138 = __this->___fogMaterial_14;
		int32_t L_139 = V_25;
		GlobalFog_CustomGraphicsBlit_mB69D91CDC505AC2A40BB3775C9673995D40A434D(L_136, L_137, L_138, L_139, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_CustomGraphicsBlit_mB69D91CDC505AC2A40BB3775C9673995D40A434D (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMaterial2, int32_t ___passNr3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest1;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// fxMaterial.SetTexture ("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___fxMaterial2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, NULL);
		// GL.PushMatrix ();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho ();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// fxMaterial.SetPass (passNr);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___fxMaterial2;
		int32_t L_4 = ___passNr3;
		NullCheck(L_3);
		bool L_5;
		L_5 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_3, L_4, NULL);
		// GL.Begin (GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// GL.MultiTexCoord2 (0, 0.0f, 0.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, (0.0f), (0.0f), NULL);
		// GL.Vertex3 (0.0f, 0.0f, 3.0f); // BL
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978((0.0f), (0.0f), (3.0f), NULL);
		// GL.MultiTexCoord2 (0, 1.0f, 0.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, (1.0f), (0.0f), NULL);
		// GL.Vertex3 (1.0f, 0.0f, 2.0f); // BR
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978((1.0f), (0.0f), (2.0f), NULL);
		// GL.MultiTexCoord2 (0, 1.0f, 1.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, (1.0f), (1.0f), NULL);
		// GL.Vertex3 (1.0f, 1.0f, 1.0f); // TR
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978((1.0f), (1.0f), (1.0f), NULL);
		// GL.MultiTexCoord2 (0, 0.0f, 1.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, (0.0f), (1.0f), NULL);
		// GL.Vertex3 (0.0f, 1.0f, 0.0f); // TL
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978((0.0f), (1.0f), (0.0f), NULL);
		// GL.End ();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// GL.PopMatrix ();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog__ctor_m1C6432E5A10611049D2CFE56B4B8FE03D0560B7F (GlobalFog_t9B33CF76423FA251AE3D017FE6BCBBFBB2629828* __this, const RuntimeMethod* method) 
{
	{
		// public bool  distanceFog = true;
		__this->___distanceFog_7 = (bool)1;
		// public bool  heightFog = true;
		__this->___heightFog_9 = (bool)1;
		// public float height = 1.0f;
		__this->___height_10 = (1.0f);
		// public float heightDensity = 2.0f;
		__this->___heightDensity_11 = (2.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Grayscale::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grayscale_OnRenderImage_mFD132F2F2E0CA27ED9CCD86C1FF19D1F6C3CB4C0 (Grayscale_t7190BEE321ECA3696898EF8B37530A9B00C97C2E* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetTexture("_RampTex", textureRamp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___textureRamp_6;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0, L_1, NULL);
		// material.SetFloat("_RampOffset", rampOffset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		float L_3 = __this->___rampOffset_7;
		NullCheck(L_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_2, _stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A, L_3, NULL);
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Grayscale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grayscale__ctor_m01B85C45849A4473DEC2FA28A3DBB920D46F22DC (Grayscale_t7190BEE321ECA3696898EF8B37530A9B00C97C2E* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_Start_mAAC05E3ED1455E1CB4C5BCB5AB9414CEAF18EB8B (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects)
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shader || !shader.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shader_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shader_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024 (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_Material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shader_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_Material_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Material_5), (void*)L_3);
		// m_Material.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_Material_5;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_Material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_Material_5;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_OnDisable_m521F62E819A026FE6946761CC76A7C7F7C8AD014 (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(m_Material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination2, float ___angle3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center4, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool invertY = source.texelSize.y < 0.0f;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Texture_get_texelSize_m05CA60DE53EF7CD5D2CBFA68B69B764E4D463359(L_0, NULL);
		float L_2 = L_1.___y_1;
		// if (invertY)
		if (!((((float)L_2) < ((float)(0.0f)))? 1 : 0))
		{
			goto IL_002c;
		}
	}
	{
		// center.y = 1.0f - center.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___center4;
		float L_4 = L_3.___y_1;
		(&___center4)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_4));
		// angle = -angle;
		float L_5 = ___angle3;
		___angle3 = ((-L_5));
	}

IL_002c:
	{
		// Matrix4x4 rotationMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0, 0, angle), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_7 = ___angle3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_6, L_8, L_9, NULL);
		V_0 = L_10;
		// material.SetMatrix("_RotationMatrix", rotationMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___material0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		NullCheck(L_11);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_11, _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2, L_12, NULL);
		// material.SetVector("_CenterRadius", new Vector4(center.x, center.y, radius.x, radius.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___material0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___center4;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___center4;
		float L_17 = L_16.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___radius5;
		float L_19 = L_18.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___radius5;
		float L_21 = L_20.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_22), L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_13, _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F, L_22, NULL);
		// material.SetFloat("_Angle", angle*Mathf.Deg2Rad);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___material0;
		float L_24 = ___angle3;
		NullCheck(L_23);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_23, _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286, ((float)il2cpp_codegen_multiply(L_24, (0.0174532924f))), NULL);
		// Graphics.Blit(source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = ___source1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = ___destination2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_Blit_m8EA90C6A40EF19EE94B174AD10ABBFE01735FB6D (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_BlitWithMaterial_m52DEE89A5B2726D9F0E3B88DD2D9681747BE0417 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects__ctor_mA575B9A385AEA923FDB67680C6BBEF06D50A8649 (ImageEffects_tED065EBD2AE1A29079D0C32DAEFA255194E7C7F9* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_Start_mE939F398C1D7025D5F95CAA5BB7B51ACBBEAB0CB (MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F* __this, const RuntimeMethod* method) 
{
	{
		// if (!SystemInfo.supportsRenderTextures)
		bool L_0;
		L_0 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// base.Start();
		ImageEffectBase_Start_mAAC05E3ED1455E1CB4C5BCB5AB9414CEAF18EB8B(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_OnDisable_m524F34F73889C816D7CC89E09B165FD13E403B4E (MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		ImageEffectBase_OnDisable_m521F62E819A026FE6946761CC76A7C7F7C8AD014(__this, NULL);
		// DestroyImmediate(accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_OnRenderImage_m7591D001CA3CFC52F5BBAA2C23E4B46C79BA04A6 (MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// if (accumTexture == null || accumTexture.width != source.width || accumTexture.height != source.height)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___accumTexture_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___accumTexture_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0070;
		}
	}

IL_0034:
	{
		// DestroyImmediate(accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
		// accumTexture = new RenderTexture(source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___source0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_15, L_12, L_14, 0, NULL);
		__this->___accumTexture_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accumTexture_8), (void*)L_15);
		// accumTexture.hideFlags = HideFlags.HideAndDontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___accumTexture_8;
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, ((int32_t)61), NULL);
		// Graphics.Blit( source, accumTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_17, L_18, NULL);
	}

IL_0070:
	{
		// if (extraBlur)
		bool L_19 = __this->___extraBlur_7;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// RenderTexture blurbuffer = RenderTexture.GetTemporary(source.width/4, source.height/4, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = ___source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24;
		L_24 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_21/4)), ((int32_t)(L_23/4)), 0, NULL);
		V_0 = L_24;
		// accumTexture.MarkRestoreExpected();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = __this->___accumTexture_8;
		NullCheck(L_25);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_25, NULL);
		// Graphics.Blit(accumTexture, blurbuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = __this->___accumTexture_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_26, L_27, NULL);
		// Graphics.Blit(blurbuffer,accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = __this->___accumTexture_8;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_28, L_29, NULL);
		// RenderTexture.ReleaseTemporary(blurbuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_30, NULL);
	}

IL_00b8:
	{
		// blurAmount = Mathf.Clamp( blurAmount, 0.0f, 0.92f );
		float L_31 = __this->___blurAmount_6;
		float L_32;
		L_32 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_31, (0.0f), (0.920000017f), NULL);
		__this->___blurAmount_6 = L_32;
		// material.SetTexture("_MainTex", accumTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = __this->___accumTexture_8;
		NullCheck(L_33);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_33, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_34, NULL);
		// material.SetFloat("_AccumOrig", 1.0F-blurAmount);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		float L_36 = __this->___blurAmount_6;
		NullCheck(L_35);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_35, _stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C, ((float)il2cpp_codegen_subtract((1.0f), L_36)), NULL);
		// accumTexture.MarkRestoreExpected();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = __this->___accumTexture_8;
		NullCheck(L_37);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_37, NULL);
		// Graphics.Blit (source, accumTexture, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = __this->___accumTexture_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40;
		L_40 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_38, L_39, L_40, NULL);
		// Graphics.Blit (accumTexture, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = __this->___accumTexture_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = ___destination1;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_41, L_42, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.MotionBlur::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur__ctor_m99420C3172B7C4F8AF1BCD99E2B57AA26FAF564F (MotionBlur_tC546191ECB264D7B525514DFF1CB1F02C70E173F* __this, const RuntimeMethod* method) 
{
	{
		// public float blurAmount = 0.8f;
		__this->___blurAmount_6 = (0.800000012f);
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NoiseAndGrain_CheckResources_mB08923E967617EB5023BC61CF41C28F2D453F1D8 (NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// noiseMaterial = CheckShaderAndCreateMaterial (noiseShader, noiseMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___noiseShader_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___noiseMaterial_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___noiseMaterial_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___noiseMaterial_21), (void*)L_3);
		// if (dx11Grain && supportDX11)
		bool L_4 = __this->___dx11Grain_12;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___supportDX11_5;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// dx11NoiseMaterial = CheckShaderAndCreateMaterial (dx11NoiseShader, dx11NoiseMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = __this->___dx11NoiseShader_22;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___dx11NoiseMaterial_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_6, L_7, NULL);
		__this->___dx11NoiseMaterial_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dx11NoiseMaterial_23), (void*)L_8);
	}

IL_0048:
	{
		// if (!isSupported)
		bool L_9 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_9)
		{
			goto IL_0056;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_0056:
	{
		// return isSupported;
		bool L_10 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_10;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndGrain_OnRenderImage_m92D9F85A52979B12AB52AD9074CB23E86EC71C3D (NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2EF676FC8409A6796B815A352B654D2EEC508F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD1605C34550256549896A138E6C1D2CC7B7DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77ADA935540A7CDAEF6D0E543DE29DE18636B2E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABCF6636EC28EDECA4B8E7E4875D20FC519E25B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC85F8982AABA2A5C2CBC882416B02AAADF5B1FFF);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	String_t* G_B9_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B10_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B13_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B13_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B13_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B13_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B12_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B12_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B12_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B12_3 = NULL;
	int32_t G_B14_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B14_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B14_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B14_3 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B14_4 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B17_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B17_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B17_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B16_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B16_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B16_3 = NULL;
	int32_t G_B18_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B18_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_3 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_4 = NULL;
	String_t* G_B23_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B23_1 = NULL;
	String_t* G_B22_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B22_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	String_t* G_B24_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_2 = NULL;
	String_t* G_B26_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B26_1 = NULL;
	String_t* G_B25_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B25_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	String_t* G_B27_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B27_2 = NULL;
	{
		// if (CheckResources()==false || (null==noiseTexture))
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___noiseTexture_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}

IL_0016:
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_3, L_4, NULL);
		// if (null==noiseTexture) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___noiseTexture_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_5, NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.LogWarning("Noise & Grain effect failing as noise texture is not assigned. please assign.", transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral5AD1605C34550256549896A138E6C1D2CC7B7DE4, L_7, NULL);
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// softness = Mathf.Clamp(softness, 0.0f, 0.99f);
		float L_8 = __this->___softness_13;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (0.0f), (0.99000001f), NULL);
		__this->___softness_13 = L_9;
		// if (dx11Grain && supportDX11)
		bool L_10 = __this->___dx11Grain_12;
		if (!L_10)
		{
			goto IL_01da;
		}
	}
	{
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___supportDX11_5;
		if (!L_11)
		{
			goto IL_01da;
		}
	}
	{
		// dx11NoiseMaterial.SetFloat("_DX11NoiseTime", Time.frameCount);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___dx11NoiseMaterial_23;
		int32_t L_13;
		L_13 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		NullCheck(L_12);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_12, _stringLiteralABCF6636EC28EDECA4B8E7E4875D20FC519E25B2, ((float)L_13), NULL);
		// dx11NoiseMaterial.SetTexture ("_NoiseTex", noiseTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___dx11NoiseMaterial_23;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = __this->___noiseTexture_19;
		NullCheck(L_14);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_14, _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156, L_15, NULL);
		// dx11NoiseMaterial.SetVector ("_NoisePerChannel", monochrome ? Vector3.one : intensities);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___dx11NoiseMaterial_23;
		bool L_17 = __this->___monochrome_14;
		G_B8_0 = _stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F;
		G_B8_1 = L_16;
		if (L_17)
		{
			G_B9_0 = _stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F;
			G_B9_1 = L_16;
			goto IL_00b4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___intensities_15;
		G_B10_0 = L_18;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00b9;
	}

IL_00b4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00b9:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		L_20 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(G_B10_0, NULL);
		NullCheck(G_B10_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B10_2, G_B10_1, L_20, NULL);
		// dx11NoiseMaterial.SetVector ("_MidGrey", new Vector3(midGrey, 1.0f/(1.0f-midGrey), -1.0f/midGrey));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___dx11NoiseMaterial_23;
		float L_22 = __this->___midGrey_11;
		float L_23 = __this->___midGrey_11;
		float L_24 = __this->___midGrey_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_22, ((float)((1.0f)/((float)il2cpp_codegen_subtract((1.0f), L_23)))), ((float)((-1.0f)/L_24)), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_25, NULL);
		NullCheck(L_21);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_21, _stringLiteralC85F8982AABA2A5C2CBC882416B02AAADF5B1FFF, L_26, NULL);
		// dx11NoiseMaterial.SetVector ("_NoiseAmount", new Vector3(generalIntensity, blackIntensity, whiteIntensity) * intensityMultiplier);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___dx11NoiseMaterial_23;
		float L_28 = __this->___generalIntensity_8;
		float L_29 = __this->___blackIntensity_9;
		float L_30 = __this->___whiteIntensity_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_28, L_29, L_30, /*hidden argument*/NULL);
		float L_32 = __this->___intensityMultiplier_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34;
		L_34 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_33, NULL);
		NullCheck(L_27);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_27, _stringLiteral3B2EF676FC8409A6796B815A352B654D2EEC508F, L_34, NULL);
		// if (softness > Mathf.Epsilon)
		float L_35 = __this->___softness_13;
		float L_36 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_01ba;
		}
	}
	{
		// RenderTexture rt = RenderTexture.GetTemporary((int) (source.width * (1.0f-softness)), (int) (source.height * (1.0f-softness)));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = ___source0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		float L_39 = __this->___softness_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = ___source0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_40);
		float L_42 = __this->___softness_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43;
		L_43 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_38), ((float)il2cpp_codegen_subtract((1.0f), L_39))))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_41), ((float)il2cpp_codegen_subtract((1.0f), L_42))))), NULL);
		V_0 = L_43;
		// DrawNoiseQuadGrid (source, rt, dx11NoiseMaterial, noiseTexture, monochrome ? 3 : 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___dx11NoiseMaterial_23;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = __this->___noiseTexture_19;
		bool L_48 = __this->___monochrome_14;
		G_B12_0 = L_47;
		G_B12_1 = L_46;
		G_B12_2 = L_45;
		G_B12_3 = L_44;
		if (L_48)
		{
			G_B13_0 = L_47;
			G_B13_1 = L_46;
			G_B13_2 = L_45;
			G_B13_3 = L_44;
			goto IL_018e;
		}
	}
	{
		G_B14_0 = 2;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_018f;
	}

IL_018e:
	{
		G_B14_0 = 3;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_018f:
	{
		il2cpp_codegen_runtime_class_init_inline(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6(G_B14_4, G_B14_3, G_B14_2, G_B14_1, G_B14_0, NULL);
		// dx11NoiseMaterial.SetTexture("_NoiseTex", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___dx11NoiseMaterial_23;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_0;
		NullCheck(L_49);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_49, _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156, L_50, NULL);
		// Graphics.Blit(source, destination, dx11NoiseMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___dx11NoiseMaterial_23;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_51, L_52, L_53, 4, NULL);
		// RenderTexture.ReleaseTemporary(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_54, NULL);
		return;
	}

IL_01ba:
	{
		// DrawNoiseQuadGrid (source, destination, dx11NoiseMaterial, noiseTexture, (monochrome ? 1 : 0));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___dx11NoiseMaterial_23;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = __this->___noiseTexture_19;
		bool L_59 = __this->___monochrome_14;
		G_B16_0 = L_58;
		G_B16_1 = L_57;
		G_B16_2 = L_56;
		G_B16_3 = L_55;
		if (L_59)
		{
			G_B17_0 = L_58;
			G_B17_1 = L_57;
			G_B17_2 = L_56;
			G_B17_3 = L_55;
			goto IL_01d3;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		goto IL_01d4;
	}

IL_01d3:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}

IL_01d4:
	{
		il2cpp_codegen_runtime_class_init_inline(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6(G_B18_4, G_B18_3, G_B18_2, G_B18_1, G_B18_0, NULL);
		return;
	}

IL_01da:
	{
		// if (noiseTexture) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = __this->___noiseTexture_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_60, NULL);
		if (!L_61)
		{
			goto IL_0204;
		}
	}
	{
		// noiseTexture.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = __this->___noiseTexture_19;
		NullCheck(L_62);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_62, 0, NULL);
		// noiseTexture.filterMode = filterMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_63 = __this->___noiseTexture_19;
		int32_t L_64 = __this->___filterMode_18;
		NullCheck(L_63);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_63, L_64, NULL);
	}

IL_0204:
	{
		// noiseMaterial.SetTexture ("_NoiseTex", noiseTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___noiseMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_66 = __this->___noiseTexture_19;
		NullCheck(L_65);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_65, _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156, L_66, NULL);
		// noiseMaterial.SetVector ("_NoisePerChannel", monochrome ? Vector3.one : intensities);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___noiseMaterial_21;
		bool L_68 = __this->___monochrome_14;
		G_B22_0 = _stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F;
		G_B22_1 = L_67;
		if (L_68)
		{
			G_B23_0 = _stringLiteralB81CA1FBB11A9AFA4C716F7CFB099A5AC8E1FD0F;
			G_B23_1 = L_67;
			goto IL_0235;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = __this->___intensities_15;
		G_B24_0 = L_69;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_023a;
	}

IL_0235:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		G_B24_0 = L_70;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_023a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71;
		L_71 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(G_B24_0, NULL);
		NullCheck(G_B24_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B24_2, G_B24_1, L_71, NULL);
		// noiseMaterial.SetVector ("_NoiseTilingPerChannel", monochrome ? Vector3.one * monochromeTiling : tiling);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___noiseMaterial_21;
		bool L_73 = __this->___monochrome_14;
		G_B25_0 = _stringLiteral77ADA935540A7CDAEF6D0E543DE29DE18636B2E8;
		G_B25_1 = L_72;
		if (L_73)
		{
			G_B26_0 = _stringLiteral77ADA935540A7CDAEF6D0E543DE29DE18636B2E8;
			G_B26_1 = L_72;
			goto IL_025f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = __this->___tiling_16;
		G_B27_0 = L_74;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_026f;
	}

IL_025f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_76 = __this->___monochromeTiling_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_75, L_76, NULL);
		G_B27_0 = L_77;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_026f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_78;
		L_78 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(G_B27_0, NULL);
		NullCheck(G_B27_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B27_2, G_B27_1, L_78, NULL);
		// noiseMaterial.SetVector ("_MidGrey", new Vector3(midGrey, 1.0f/(1.0f-midGrey), -1.0f/midGrey));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79 = __this->___noiseMaterial_21;
		float L_80 = __this->___midGrey_11;
		float L_81 = __this->___midGrey_11;
		float L_82 = __this->___midGrey_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), L_80, ((float)((1.0f)/((float)il2cpp_codegen_subtract((1.0f), L_81)))), ((float)((-1.0f)/L_82)), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_84;
		L_84 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_83, NULL);
		NullCheck(L_79);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_79, _stringLiteralC85F8982AABA2A5C2CBC882416B02AAADF5B1FFF, L_84, NULL);
		// noiseMaterial.SetVector ("_NoiseAmount", new Vector3(generalIntensity, blackIntensity, whiteIntensity) * intensityMultiplier);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___noiseMaterial_21;
		float L_86 = __this->___generalIntensity_8;
		float L_87 = __this->___blackIntensity_9;
		float L_88 = __this->___whiteIntensity_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_89), L_86, L_87, L_88, /*hidden argument*/NULL);
		float L_90 = __this->___intensityMultiplier_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_89, L_90, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		L_92 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_91, NULL);
		NullCheck(L_85);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_85, _stringLiteral3B2EF676FC8409A6796B815A352B654D2EEC508F, L_92, NULL);
		// if (softness > Mathf.Epsilon)
		float L_93 = __this->___softness_13;
		float L_94 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_93) > ((float)L_94))))
		{
			goto IL_0365;
		}
	}
	{
		// RenderTexture rt2 = RenderTexture.GetTemporary((int) (source.width * (1.0f-softness)), (int) (source.height * (1.0f-softness)));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = ___source0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_95);
		float L_97 = __this->___softness_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = ___source0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_98);
		float L_100 = __this->___softness_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101;
		L_101 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_96), ((float)il2cpp_codegen_subtract((1.0f), L_97))))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_99), ((float)il2cpp_codegen_subtract((1.0f), L_100))))), NULL);
		V_1 = L_101;
		// DrawNoiseQuadGrid (source, rt2, noiseMaterial, noiseTexture, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_103 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_104 = __this->___noiseMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_105 = __this->___noiseTexture_19;
		il2cpp_codegen_runtime_class_init_inline(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6(L_102, L_103, L_104, L_105, 2, NULL);
		// noiseMaterial.SetTexture("_NoiseTex", rt2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106 = __this->___noiseMaterial_21;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_107 = V_1;
		NullCheck(L_106);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_106, _stringLiteral8895E9A4949FFFF38DA777A992C2A4E83B524156, L_107, NULL);
		// Graphics.Blit(source, destination, noiseMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_108 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_109 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_110 = __this->___noiseMaterial_21;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_108, L_109, L_110, 1, NULL);
		// RenderTexture.ReleaseTemporary(rt2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_111, NULL);
		return;
	}

IL_0365:
	{
		// DrawNoiseQuadGrid (source, destination, noiseMaterial, noiseTexture, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_112 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_113 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114 = __this->___noiseMaterial_21;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_115 = __this->___noiseTexture_19;
		il2cpp_codegen_runtime_class_init_inline(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6(L_112, L_113, L_114, L_115, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndGrain_DrawNoiseQuadGrid_mB378C3977FE3F97AF4168FE05DEB395F8A0491D6 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMaterial2, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___noise3, int32_t ___passNr4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest1;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// float noiseSize = (noise.width * 1.0f);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___noise3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_2), (1.0f)));
		// float subDs = (1.0f * source.width) / TILE_AMOUNT;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		float L_5 = ((NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_StaticFields*)il2cpp_codegen_static_fields_for(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var))->___TILE_AMOUNT_24;
		V_1 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_4)))/L_5));
		// fxMaterial.SetTexture ("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___fxMaterial2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___source0;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_7, NULL);
		// GL.PushMatrix ();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho ();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// float aspectCorrection = (1.0f * source.width) / (1.0f * source.height);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		V_2 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_9)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_11)))));
		// float stepSizeX = 1.0f / subDs;
		float L_12 = V_1;
		V_3 = ((float)((1.0f)/L_12));
		// float stepSizeY = stepSizeX * aspectCorrection;
		float L_13 = V_3;
		float L_14 = V_2;
		V_4 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// float texTile = noiseSize / (noise.width * 1.0f);
		float L_15 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___noise3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		V_5 = ((float)(L_15/((float)il2cpp_codegen_multiply(((float)L_17), (1.0f)))));
		// fxMaterial.SetPass (passNr);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___fxMaterial2;
		int32_t L_19 = ___passNr4;
		NullCheck(L_18);
		bool L_20;
		L_20 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_18, L_19, NULL);
		// GL.Begin (GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// for (float x1 = 0.0f; x1 < 1.0f; x1 += stepSizeX)
		V_6 = (0.0f);
		goto IL_01bf;
	}

IL_0093:
	{
		// for (float y1 = 0.0f; y1 < 1.0f; y1 += stepSizeY)
		V_7 = (0.0f);
		goto IL_01ad;
	}

IL_009f:
	{
		// float tcXStart = Random.Range (0.0f, 1.0f);
		float L_21;
		L_21 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		V_8 = L_21;
		// float tcYStart = Random.Range (0.0f, 1.0f);
		float L_22;
		L_22 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		V_9 = L_22;
		// tcXStart = Mathf.Floor(tcXStart*noiseSize) / noiseSize;
		float L_23 = V_8;
		float L_24 = V_0;
		float L_25;
		L_25 = floorf(((float)il2cpp_codegen_multiply(L_23, L_24)));
		float L_26 = V_0;
		V_8 = ((float)(L_25/L_26));
		// tcYStart = Mathf.Floor(tcYStart*noiseSize) / noiseSize;
		float L_27 = V_9;
		float L_28 = V_0;
		float L_29;
		L_29 = floorf(((float)il2cpp_codegen_multiply(L_27, L_28)));
		float L_30 = V_0;
		V_9 = ((float)(L_29/L_30));
		// float texTileMod = 1.0f / noiseSize;
		float L_31 = V_0;
		V_10 = ((float)((1.0f)/L_31));
		// GL.MultiTexCoord2 (0, tcXStart, tcYStart);
		float L_32 = V_8;
		float L_33 = V_9;
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_32, L_33, NULL);
		// GL.MultiTexCoord2 (1, 0.0f, 0.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, (0.0f), (0.0f), NULL);
		// GL.Vertex3 (x1, y1, 0.1f);
		float L_34 = V_6;
		float L_35 = V_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_35, (0.100000001f), NULL);
		// GL.MultiTexCoord2 (0, tcXStart + texTile * texTileMod, tcYStart);
		float L_36 = V_8;
		float L_37 = V_5;
		float L_38 = V_10;
		float L_39 = V_9;
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, ((float)il2cpp_codegen_add(L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)))), L_39, NULL);
		// GL.MultiTexCoord2 (1, 1.0f, 0.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, (1.0f), (0.0f), NULL);
		// GL.Vertex3 (x1 + stepSizeX, y1, 0.1f);
		float L_40 = V_6;
		float L_41 = V_3;
		float L_42 = V_7;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_add(L_40, L_41)), L_42, (0.100000001f), NULL);
		// GL.MultiTexCoord2 (0, tcXStart + texTile * texTileMod, tcYStart + texTile * texTileMod);
		float L_43 = V_8;
		float L_44 = V_5;
		float L_45 = V_10;
		float L_46 = V_9;
		float L_47 = V_5;
		float L_48 = V_10;
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, ((float)il2cpp_codegen_add(L_43, ((float)il2cpp_codegen_multiply(L_44, L_45)))), ((float)il2cpp_codegen_add(L_46, ((float)il2cpp_codegen_multiply(L_47, L_48)))), NULL);
		// GL.MultiTexCoord2 (1, 1.0f, 1.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, (1.0f), (1.0f), NULL);
		// GL.Vertex3 (x1 + stepSizeX, y1 + stepSizeY, 0.1f);
		float L_49 = V_6;
		float L_50 = V_3;
		float L_51 = V_7;
		float L_52 = V_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(((float)il2cpp_codegen_add(L_49, L_50)), ((float)il2cpp_codegen_add(L_51, L_52)), (0.100000001f), NULL);
		// GL.MultiTexCoord2 (0, tcXStart, tcYStart + texTile * texTileMod);
		float L_53 = V_8;
		float L_54 = V_9;
		float L_55 = V_5;
		float L_56 = V_10;
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(0, L_53, ((float)il2cpp_codegen_add(L_54, ((float)il2cpp_codegen_multiply(L_55, L_56)))), NULL);
		// GL.MultiTexCoord2 (1, 0.0f, 1.0f);
		GL_MultiTexCoord2_m0F08BBA31AD1B9A1C608B2241E9B0FDE1E74EEFB(1, (0.0f), (1.0f), NULL);
		// GL.Vertex3 (x1, y1 + stepSizeY, 0.1f);
		float L_57 = V_6;
		float L_58 = V_7;
		float L_59 = V_4;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_57, ((float)il2cpp_codegen_add(L_58, L_59)), (0.100000001f), NULL);
		// for (float y1 = 0.0f; y1 < 1.0f; y1 += stepSizeY)
		float L_60 = V_7;
		float L_61 = V_4;
		V_7 = ((float)il2cpp_codegen_add(L_60, L_61));
	}

IL_01ad:
	{
		// for (float y1 = 0.0f; y1 < 1.0f; y1 += stepSizeY)
		float L_62 = V_7;
		if ((((float)L_62) < ((float)(1.0f))))
		{
			goto IL_009f;
		}
	}
	{
		// for (float x1 = 0.0f; x1 < 1.0f; x1 += stepSizeX)
		float L_63 = V_6;
		float L_64 = V_3;
		V_6 = ((float)il2cpp_codegen_add(L_63, L_64));
	}

IL_01bf:
	{
		// for (float x1 = 0.0f; x1 < 1.0f; x1 += stepSizeX)
		float L_65 = V_6;
		if ((((float)L_65) < ((float)(1.0f))))
		{
			goto IL_0093;
		}
	}
	{
		// GL.End ();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// GL.PopMatrix ();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndGrain__ctor_mFDE0C9E284B4E9B63B3DD335020EA3B4723BED70 (NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69* __this, const RuntimeMethod* method) 
{
	{
		// public float intensityMultiplier = 0.25f;
		__this->___intensityMultiplier_7 = (0.25f);
		// public float generalIntensity = 0.5f;
		__this->___generalIntensity_8 = (0.5f);
		// public float blackIntensity = 1.0f;
		__this->___blackIntensity_9 = (1.0f);
		// public float whiteIntensity = 1.0f;
		__this->___whiteIntensity_10 = (1.0f);
		// public float midGrey = 0.2f;
		__this->___midGrey_11 = (0.200000003f);
		// public Vector3 intensities = new Vector3(1.0f, 1.0f, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___intensities_15 = L_0;
		// public Vector3 tiling = new Vector3(64.0f, 64.0f, 64.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (64.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->___tiling_16 = L_1;
		// public float monochromeTiling = 64.0f;
		__this->___monochromeTiling_17 = (64.0f);
		// public FilterMode filterMode = FilterMode.Bilinear;
		__this->___filterMode_18 = 1;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndGrain__cctor_mB399C524E753D4475ACA9091FC4B23506BC5DE8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float TILE_AMOUNT = 64.0f;
		((NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_StaticFields*)il2cpp_codegen_static_fields_for(NoiseAndGrain_t53694202A500D4A06CE0B7B8F58727F3D9717C69_il2cpp_TypeInfo_var))->___TILE_AMOUNT_24 = (64.0f);
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
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches_Start_mEBF2EF7B65C924EA3C9AFC1DDE2817A3766D0D48 (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if ( shaderRGB == null || shaderYUV == null )
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shaderRGB_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shaderYUV_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}

IL_002b:
	{
		// Debug.Log( "Noise shaders are not set up! Disabling noise effect." );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_003d:
	{
		// if ( !shaderRGB.isSupported ) // disable effect if RGB shader is not supported
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___shaderRGB_15;
		NullCheck(L_5);
		bool L_6;
		L_6 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_5, NULL);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0052:
	{
		// else if ( !shaderYUV.isSupported ) // fallback to RGB if YUV is not supported
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___shaderYUV_16;
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		// rgbFallback = true;
		__this->___rgbFallback_5 = (bool)1;
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NoiseAndScratches_get_material_m45C5A28EBCBB71E6599FC49511E1AB3A9338D585 (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_MaterialRGB == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_MaterialRGB = new Material( shaderRGB );
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderRGB_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_MaterialRGB_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaterialRGB_17), (void*)L_3);
		// m_MaterialRGB.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_MaterialRGB_17;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// if ( m_MaterialYUV == null && !rgbFallback ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		bool L_7 = __this->___rgbFallback_5;
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		// m_MaterialYUV = new Material( shaderYUV );
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = __this->___shaderYUV_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		__this->___m_MaterialYUV_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaterialYUV_18), (void*)L_9);
		// m_MaterialYUV.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___m_MaterialYUV_18;
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)61), NULL);
	}

IL_0060:
	{
		// return (!rgbFallback && !monochrome) ? m_MaterialYUV : m_MaterialRGB;
		bool L_11 = __this->___rgbFallback_5;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = __this->___monochrome_4;
		if (!L_12)
		{
			goto IL_0077;
		}
	}

IL_0070:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___m_MaterialRGB_17;
		return L_13;
	}

IL_0077:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___m_MaterialYUV_18;
		return L_14;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches_OnDisable_m545D985962BE453BB260CE23FE2C0AA899115975 (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_MaterialRGB )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate( m_MaterialRGB );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// if ( m_MaterialYUV )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// DestroyImmediate( m_MaterialYUV );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::SanitizeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches_SanitizeParameters_m8B9C3842DAD850EBB04F3EAE8D41D4349AC96D3D (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) 
{
	{
		// grainIntensityMin = Mathf.Clamp( grainIntensityMin, 0.0f, 5.0f );
		float L_0 = __this->___grainIntensityMin_6;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (5.0f), NULL);
		__this->___grainIntensityMin_6 = L_1;
		// grainIntensityMax = Mathf.Clamp( grainIntensityMax, 0.0f, 5.0f );
		float L_2 = __this->___grainIntensityMax_7;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (5.0f), NULL);
		__this->___grainIntensityMax_7 = L_3;
		// scratchIntensityMin = Mathf.Clamp( scratchIntensityMin, 0.0f, 5.0f );
		float L_4 = __this->___scratchIntensityMin_9;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (5.0f), NULL);
		__this->___scratchIntensityMin_9 = L_5;
		// scratchIntensityMax = Mathf.Clamp( scratchIntensityMax, 0.0f, 5.0f );
		float L_6 = __this->___scratchIntensityMax_10;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (5.0f), NULL);
		__this->___scratchIntensityMax_10 = L_7;
		// scratchFPS = Mathf.Clamp( scratchFPS, 1, 30 );
		float L_8 = __this->___scratchFPS_11;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (1.0f), (30.0f), NULL);
		__this->___scratchFPS_11 = L_9;
		// scratchJitter = Mathf.Clamp( scratchJitter, 0.0f, 1.0f );
		float L_10 = __this->___scratchJitter_12;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), (1.0f), NULL);
		__this->___scratchJitter_12 = L_11;
		// grainSize = Mathf.Clamp( grainSize, 0.1f, 50.0f );
		float L_12 = __this->___grainSize_8;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (0.100000001f), (50.0f), NULL);
		__this->___grainSize_8 = L_13;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches_OnRenderImage_m8CA535280A5FF3E201006E0F2D1CDD6F7E5FD426 (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD8876816F840CDD275978547DCA00605F5521FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA358E33682D63809BC819D06A5C119F65140337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// SanitizeParameters();
		NoiseAndScratches_SanitizeParameters_m8B9C3842DAD850EBB04F3EAE8D41D4349AC96D3D(__this, NULL);
		// if ( scratchTimeLeft <= 0.0f )
		float L_0 = __this->___scratchTimeLeft_19;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// scratchTimeLeft = Random.value * 2 / scratchFPS; // we have sanitized it earlier, won't be zero
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_2 = __this->___scratchFPS_11;
		__this->___scratchTimeLeft_19 = ((float)(((float)il2cpp_codegen_multiply(L_1, (2.0f)))/L_2));
		// scratchX = Random.value;
		float L_3;
		L_3 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___scratchX_20 = L_3;
		// scratchY = Random.value;
		float L_4;
		L_4 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___scratchY_21 = L_4;
	}

IL_0041:
	{
		// scratchTimeLeft -= Time.deltaTime;
		float L_5 = __this->___scratchTimeLeft_19;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___scratchTimeLeft_19 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// Material mat = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = NoiseAndScratches_get_material_m45C5A28EBCBB71E6599FC49511E1AB3A9338D585(__this, NULL);
		V_0 = L_7;
		// mat.SetTexture("_GrainTex", grainTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = __this->___grainTexture_13;
		NullCheck(L_8);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_8, _stringLiteralAD8876816F840CDD275978547DCA00605F5521FA, L_9, NULL);
		// mat.SetTexture("_ScratchTex", scratchTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = __this->___scratchTexture_14;
		NullCheck(L_10);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_10, _stringLiteralCA358E33682D63809BC819D06A5C119F65140337, L_11, NULL);
		// float grainScale = 1.0f / grainSize; // we have sanitized it earlier, won't be zero
		float L_12 = __this->___grainSize_8;
		V_1 = ((float)((1.0f)/L_12));
		// mat.SetVector("_GrainOffsetScale", new Vector4(
		//                                        Random.value,
		//                                        Random.value,
		//                                        (float)Screen.width / (float)grainTexture.width * grainScale,
		//                                        (float)Screen.height / (float)grainTexture.height * grainScale
		//                                        ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_0;
		float L_14;
		L_14 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_15;
		L_15 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		int32_t L_16;
		L_16 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = __this->___grainTexture_13;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		float L_19 = V_1;
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = __this->___grainTexture_13;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		float L_23 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_24), L_14, L_15, ((float)il2cpp_codegen_multiply(((float)(((float)L_16)/((float)L_18))), L_19)), ((float)il2cpp_codegen_multiply(((float)(((float)L_20)/((float)L_22))), L_23)), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_13, _stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526, L_24, NULL);
		// mat.SetVector("_ScratchOffsetScale", new Vector4(
		//                                          scratchX + Random.value*scratchJitter,
		//                                          scratchY + Random.value*scratchJitter,
		//                                          (float)Screen.width / (float) scratchTexture.width,
		//                                          (float)Screen.height / (float) scratchTexture.height
		//                                          ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		float L_26 = __this->___scratchX_20;
		float L_27;
		L_27 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_28 = __this->___scratchJitter_12;
		float L_29 = __this->___scratchY_21;
		float L_30;
		L_30 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_31 = __this->___scratchJitter_12;
		int32_t L_32;
		L_32 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___scratchTexture_14;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		int32_t L_35;
		L_35 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_36 = __this->___scratchTexture_14;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_38), ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)))), ((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_multiply(L_30, L_31)))), ((float)(((float)L_32)/((float)L_34))), ((float)(((float)L_35)/((float)L_37))), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_25, _stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9, L_38, NULL);
		// mat.SetVector("_Intensity", new Vector4(
		//                                 Random.Range(grainIntensityMin, grainIntensityMax),
		//                                 Random.Range(scratchIntensityMin, scratchIntensityMax),
		//                                 0, 0 ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_0;
		float L_40 = __this->___grainIntensityMin_6;
		float L_41 = __this->___grainIntensityMax_7;
		float L_42;
		L_42 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_40, L_41, NULL);
		float L_43 = __this->___scratchIntensityMin_9;
		float L_44 = __this->___scratchIntensityMax_10;
		float L_45;
		L_45 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_43, L_44, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_46), L_42, L_45, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_46, NULL);
		// Graphics.Blit (source, destination, mat);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_47, L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.NoiseAndScratches::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseAndScratches__ctor_m8A6D067A18DF0EA3F2B27919AF6AD21DB55093EB (NoiseAndScratches_tA1AF152FF0F6AA55B7CC3EC2D516BFDC42BC9517* __this, const RuntimeMethod* method) 
{
	{
		// public bool monochrome = true;
		__this->___monochrome_4 = (bool)1;
		// public float grainIntensityMin = 0.1f;
		__this->___grainIntensityMin_6 = (0.100000001f);
		// public float grainIntensityMax = 0.2f;
		__this->___grainIntensityMax_7 = (0.200000003f);
		// public float grainSize = 2.0f;
		__this->___grainSize_8 = (2.0f);
		// public float scratchIntensityMin = 0.05f;
		__this->___scratchIntensityMin_9 = (0.0500000007f);
		// public float scratchIntensityMax = 0.25f;
		__this->___scratchIntensityMax_10 = (0.25f);
		// public float scratchFPS = 10.0f;
		__this->___scratchFPS_11 = (10.0f);
		// public float scratchJitter = 0.01f;
		__this->___scratchJitter_12 = (0.00999999978f);
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = ___s0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___m2Create1;
		NullCheck(L_8);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_8, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18 = ___s0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_25 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_26, L_25, NULL);
		___m2Create1 = L_26;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___m2Create1;
		NullCheck(L_27);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_27, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___m2Create1;
		return L_30;
	}

IL_00aa:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CreateMaterial_mC9860A23866B8230D964BC09EDF7FD2878BA0D6C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m2Create1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___m2Create1;
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___m2Create1;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_13, NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = ___s0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_16, L_15, NULL);
		___m2Create1 = L_16;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___m2Create1;
		NullCheck(L_17);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_17, ((int32_t)52), NULL);
		// if (m2Create)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___m2Create1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		// return m2Create;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___m2Create1;
		return L_20;
	}

IL_0063:
	{
		// else return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_m8BC44BA7499D510F0A9887FECDC2C475C3EC159A (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m059D1547A9DFFFF9D18D2B702D9C1A98871B3689 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m01EFEABDDEECF8931BDE27F6D76536FD52C2E273 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// return isSupported;
		bool L_2 = __this->___isSupported_6;
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_m256D1B7C8E17442D85DCCD08D6D157080A89B79C (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B2_0 = NULL;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->___isSupported_6 = (bool)1;
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(2, NULL);
		__this->___supportHDRTextures_4 = L_0;
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_m4A029D2F8FB9343E65E6F1C6F1C79DA41911F13A(NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->___supportDX11_5 = (bool)G_B3_0;
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.supportsRenderTextures)
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		bool L_4;
		L_4 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}

IL_0038:
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_5 = ___needDepth0;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		bool L_6;
		L_6 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(1, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0053:
	{
		// if (needDepth)
		bool L_7 = ___needDepth0;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_9, NULL);
		NullCheck(L_9);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_9, ((int32_t)((int32_t)L_10|1)), NULL);
	}

IL_0069:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method) 
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___needDepth0;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___needHdr1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->___supportHDRTextures_4;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_mCAEFE6A80827A8B34E73B44DA8304C0CAD8330E5 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// return supportDX11;
		bool L_0 = __this->___supportDX11_5;
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_m2915D7EE44889306449307C06FE3F9770FAAF012 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___s0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// if (!s.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_m3328CFF3B6C73682EAC7141F15716F34940D86AD (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// isSupported = false;
		__this->___isSupported_6 = (bool)0;
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) 
{
	{
		// protected bool  supportHDRTextures = true;
		__this->___supportHDRTextures_4 = (bool)1;
		// protected bool  isSupported = true;
		__this->___isSupported_6 = (bool)1;
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
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_OnRenderImage_mA18DD006648EA3B0DFF3B2F398CF092CF4F80AFD (PostEffectsHelper_t59296A143EEAAE54F963135CDDCEEF710CFD4EF8* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRenderImage in Helper called ...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m53C287FE762F776C762CDCC54CC78FA7F722AB73 (float ___dist0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraForProjectionMatrix4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest2;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// material.SetTexture("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source1;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadIdentity();
		GL_LoadIdentity_m86FB54921F8F0069E07163B6D35E4B1B6338C264(NULL);
		// GL.LoadProjectionMatrix(cameraForProjectionMatrix.projectionMatrix);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___cameraForProjectionMatrix4;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_3, NULL);
		GL_LoadProjectionMatrix_m4310EBD83BF1858124306A227C18FF52152718BD(L_4, NULL);
		// float fovYHalfRad = cameraForProjectionMatrix.fieldOfView * 0.5f * Mathf.Deg2Rad;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___cameraForProjectionMatrix4;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (0.5f))), (0.0174532924f)));
		// float cotangent = Mathf.Cos(fovYHalfRad) / Mathf.Sin(fovYHalfRad);
		float L_7 = V_1;
		float L_8;
		L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10;
		L_10 = sinf(L_9);
		V_2 = ((float)(L_8/L_10));
		// float asp = cameraForProjectionMatrix.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = ___cameraForProjectionMatrix4;
		NullCheck(L_11);
		float L_12;
		L_12 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_11, NULL);
		// float x1 = asp/-cotangent;
		float L_13 = L_12;
		float L_14 = V_2;
		V_3 = ((float)(L_13/((-L_14))));
		// float x2 = asp/cotangent;
		float L_15 = V_2;
		V_4 = ((float)(L_13/L_15));
		// float y1 = 1.0f/-cotangent;
		float L_16 = V_2;
		V_5 = ((float)((1.0f)/((-L_16))));
		// float y2 = 1.0f/cotangent;
		float L_17 = V_2;
		V_6 = ((float)((1.0f)/L_17));
		// float sc = 1.0f; // magic constant (for now)
		V_7 = (1.0f);
		// x1 *= dist * sc;
		float L_18 = V_3;
		float L_19 = ___dist0;
		float L_20 = V_7;
		V_3 = ((float)il2cpp_codegen_multiply(L_18, ((float)il2cpp_codegen_multiply(L_19, L_20))));
		// x2 *= dist * sc;
		float L_21 = V_4;
		float L_22 = ___dist0;
		float L_23 = V_7;
		V_4 = ((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// y1 *= dist * sc;
		float L_24 = V_5;
		float L_25 = ___dist0;
		float L_26 = V_7;
		V_5 = ((float)il2cpp_codegen_multiply(L_24, ((float)il2cpp_codegen_multiply(L_25, L_26))));
		// y2 *= dist * sc;
		float L_27 = V_6;
		float L_28 = ___dist0;
		float L_29 = V_7;
		V_6 = ((float)il2cpp_codegen_multiply(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29))));
		// float z1 = -dist;
		float L_30 = ___dist0;
		V_8 = ((-L_30));
		// for (int i = 0; i < material.passCount; i++)
		V_9 = 0;
		goto IL_0139;
	}

IL_00a4:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = ___material3;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		bool L_33;
		L_33 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_31, L_32, NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// if (invertY)
		bool L_34 = V_0;
		if (!L_34)
		{
			goto IL_00c6;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_10 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_11 = (0.0f);
		goto IL_00d4;
	}

IL_00c6:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_10 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_11 = (1.0f);
	}

IL_00d4:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_35 = V_10;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_35, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_36 = V_3;
		float L_37 = V_5;
		float L_38 = V_8;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_36, L_37, L_38, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_39 = V_10;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_40 = V_4;
		float L_41 = V_5;
		float L_42 = V_8;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_40, L_41, L_42, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_43 = V_11;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_43, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_44 = V_4;
		float L_45 = V_6;
		float L_46 = V_8;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_44, L_45, L_46, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_47 = V_11;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_47, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_48 = V_3;
		float L_49 = V_6;
		float L_50 = V_8;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_48, L_49, L_50, NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0139:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_52 = V_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = ___material3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_53, NULL);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00a4;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawBorder_m24A63C8C77ED434DB28D78DADEA1E9F9D125CD9F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_1, L_2, NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_6), (1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_17, (0.100000001f), NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_20, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_19), (1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_22, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_23, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_24, L_25, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_26, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_27, L_28, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_29, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_21, L_30, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((0.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_32), (1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_33, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_35, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_36, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_37, L_38, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_39, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_40, L_41, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_42, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_34, L_43, (0.100000001f), NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_multiply(((float)L_45), (1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_46, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_48, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_49, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_50, L_51, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_52, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_53, L_54, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_55, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_47, L_56, (0.100000001f), NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelQuad_m1FE6DC9DAF0604EFF00C05FDB06B424AE1856C12 (float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source4, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest5, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___dest5;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_0, NULL);
		// material.SetTexture("_MainTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source4;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mB505DD9B224528266FCADC716A16343838105A09(NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mE86AB2DBBC5C2BA67E7B743A2352E61C372CEADC(NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_1 = 0;
		goto IL_00b9;
	}

IL_0028:
	{
		// material.SetPass(i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material6;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_3, L_4, NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_m17A70A7A3C161D8A127C11BDC5FC393392AB70C7(7, NULL);
		// if (invertY)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_2 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_3 = (0.0f);
		goto IL_0054;
	}

IL_0048:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_2 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_3 = (1.0f);
	}

IL_0054:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_2;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_7, NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = ___x10;
		float L_9 = ___y12;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_8, L_9, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_2;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_10, NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = ___x21;
		float L_12 = ___y12;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_11, L_12, (0.100000001f), NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_3;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((1.0f), L_13, NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = ___x21;
		float L_15 = ___y23;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_14, L_15, (0.100000001f), NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_3;
		GL_TexCoord2_mBD9A9E6D397F8669FAE40DA950AB1FD7D674D1FB((0.0f), L_16, NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = ___x10;
		float L_18 = ___y23;
		GL_Vertex3_mEA9925548F447556F7899E69604B787EE57F6978(L_17, L_18, (0.100000001f), NULL);
		// GL.End();
		GL_End_m6CE9D562B738075125F901B1D5254520EC30AB36(NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00b9:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_20 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___material6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_mCE0D33302104D1168B6382136039E979E8C02855(NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper__ctor_m416594A86C0F56174E3FA23BBDADD32D6E8E2F30 (PostEffectsHelper_t59296A143EEAAE54F963135CDDCEEF710CFD4EF8* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* V_0 = NULL;
	int32_t V_1 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_2 = NULL;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// foreach (Mesh m in meshes)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_0013:
	{
		// foreach (Mesh m in meshes)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (null == m)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_6, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// foreach (Mesh m in meshes)
		int32_t L_9 = V_1;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads_Cleanup_m18CF6B317A33E5BFF0C5D139F3075321CE31A461 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate (meshes[i]);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_6 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_9, NULL);
		// meshes[i] = null;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_14 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0), (void*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* Quads_GetMeshes_mB329F322CBF3A8CEFE17BD982B669E48E2559625 (int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes () && (currentQuads == (totalWidth * totalHeight))) {
		bool L_0;
		L_0 = Quads_HasMeshes_m41D66F9A795040CCB2219E1412C88C1C59729A04(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___currentQuads_1;
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_4 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		return L_4;
	}

IL_0017:
	{
		// int maxQuads = 65000 / 6;
		V_0 = ((int32_t)10833);
		// int totalQuads = totalWidth * totalHeight;
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// currentQuads = totalQuads;
		int32_t L_7 = V_1;
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___currentQuads_1 = L_7;
		// int meshCount = Mathf.CeilToInt ((1.0f * totalQuads) / (1.0f * maxQuads));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_8)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_9))))), NULL);
		// meshes = new Mesh [meshCount];
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_11 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)SZArrayNew(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0), (void*)L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalQuads; i += maxQuads)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int quads = Mathf.FloorToInt (Mathf.Clamp ((totalQuads-i), 0, maxQuads));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 0, L_14, NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_15), NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh (quads, i, totalWidth, totalHeight);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_17 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___totalWidth0;
		int32_t L_22 = ___totalHeight1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_29 = ((Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_StaticFields*)il2cpp_codegen_static_fields_for(Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C_il2cpp_TypeInfo_var))->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Quads_GetMesh_m3001DD2FCD94103FE9D38091C4BF006CCA25F44E (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// var mesh = new Mesh ();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, ((int32_t)52), NULL);
		// var verts = new Vector3[triCount * 4];
		int32_t L_2 = ___triCount0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, 4)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 4];
		int32_t L_4 = ___triCount0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 4)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 4];
		int32_t L_6 = ___triCount0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 4)));
		V_3 = L_7;
		// var tris = new int[triCount * 6];
		int32_t L_8 = ___triCount0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 6)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_01ac;
	}

IL_003b:
	{
		// int i4 = i * 4;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_10, 4));
		// int i6 = i * 6;
		int32_t L_11 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_multiply(L_11, 6));
		// int vertexWithOffset = triOffset + i;
		int32_t L_12 = ___triOffset1;
		int32_t L_13 = V_5;
		// float x = Mathf.Floor (vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_15 = ___totalWidth2;
		float L_16;
		L_16 = floorf(((float)((int32_t)(L_14%L_15))));
		int32_t L_17 = ___totalWidth2;
		V_8 = ((float)(L_16/((float)L_17)));
		// float y = Mathf.Floor (vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_18 = ___totalWidth2;
		float L_19;
		L_19 = floorf(((float)((int32_t)(L_14/L_18))));
		int32_t L_20 = ___totalHeight3;
		V_9 = ((float)(L_19/((float)L_20)));
		// Vector3 position = new Vector3 (x * 2 - 1, y * 2 - 1, 1.0f);
		float L_21 = V_8;
		float L_22 = V_9;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_22, (2.0f))), (1.0f))), (1.0f), NULL);
		// verts[i4 + 0] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_1;
		int32_t L_24 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_10;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// verts[i4 + 1] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_1;
		int32_t L_27 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_10;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		// verts[i4 + 2] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = V_1;
		int32_t L_30 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_10;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// verts[i4 + 3] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_1;
		int32_t L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_10;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
		// uvs[i4 + 0] = new Vector2 (0.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = V_2;
		int32_t L_36 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_37), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_37);
		// uvs[i4 + 1] = new Vector2 (1.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_38 = V_2;
		int32_t L_39 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_40);
		// uvs[i4 + 2] = new Vector2 (0.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_2;
		int32_t L_42 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_43), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_43);
		// uvs[i4 + 3] = new Vector2 (1.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = V_2;
		int32_t L_45 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_46), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_46);
		// uvs2[i4 + 0] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_3;
		int32_t L_48 = V_6;
		float L_49 = V_8;
		float L_50 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_51);
		// uvs2[i4 + 1] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_52 = V_3;
		int32_t L_53 = V_6;
		float L_54 = V_8;
		float L_55 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_56);
		// uvs2[i4 + 2] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = V_3;
		int32_t L_58 = V_6;
		float L_59 = V_8;
		float L_60 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_61);
		// uvs2[i4 + 3] = new Vector2 (x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_62 = V_3;
		int32_t L_63 = V_6;
		float L_64 = V_8;
		float L_65 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_66);
		// tris[i6 + 0] = i4 + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_4;
		int32_t L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		// tris[i6 + 1] = i4 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_4;
		int32_t L_71 = V_7;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_72, 1)));
		// tris[i6 + 2] = i4 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_75, 2)));
		// tris[i6 + 3] = i4 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_4;
		int32_t L_77 = V_7;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 3))), (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1)));
		// tris[i6 + 4] = i4 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_4;
		int32_t L_80 = V_7;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 4))), (int32_t)((int32_t)il2cpp_codegen_add(L_81, 2)));
		// tris[i6 + 5] = i4 + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_4;
		int32_t L_83 = V_7;
		int32_t L_84 = V_6;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_83, 5))), (int32_t)((int32_t)il2cpp_codegen_add(L_84, 3)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01ac:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_86 = V_5;
		int32_t L_87 = ___triCount0;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_88 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_89 = V_1;
		NullCheck(L_88);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_88, L_89, NULL);
		// mesh.triangles = tris;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = V_4;
		NullCheck(L_90);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_90, L_91, NULL);
		// mesh.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_92 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_93 = V_2;
		NullCheck(L_92);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_92, L_93, NULL);
		// mesh.uv2 = uvs2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_94 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_95 = V_3;
		NullCheck(L_94);
		Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_94, L_95, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = V_0;
		return L_96;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads__ctor_m16AD4881C27EBAFF0BEB90D19BFDD7BEA88F0B1D (Quads_tE98082D335C0BFD295060C5EAC07382CCC97F50C* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityStandardAssets.ImageEffects.ScreenOverlay::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScreenOverlay_CheckResources_m6A890799CFBE98D63CCCF134A0CA69A3F3CB88D6 (ScreenOverlay_t82957B93604683BC0C0A01C9A4324312AEAAEF09* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// overlayMaterial = CheckShaderAndCreateMaterial (overlayShader, overlayMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___overlayShader_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___overlayMaterial_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___overlayMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overlayMaterial_11), (void*)L_3);
		// if    (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenOverlay_OnRenderImage_mA6F3FFBE94BD2C17D1516E81B93B16015E3B9F41 (ScreenOverlay_t82957B93604683BC0C0A01C9A4324312AEAAEF09* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36C08270F0656B15564B93B095160EB52C35960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// Vector4 UV_Transform = new  Vector4(1, 0, 0, 1);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_0), (1.0f), (0.0f), (0.0f), (1.0f), NULL);
		// overlayMaterial.SetVector("_UV_Transform", UV_Transform);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___overlayMaterial_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_0;
		NullCheck(L_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_3, _stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA, L_4, NULL);
		// overlayMaterial.SetFloat ("_Intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___overlayMaterial_11;
		float L_6 = __this->___intensity_8;
		NullCheck(L_5);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_5, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_6, NULL);
		// overlayMaterial.SetTexture ("_Overlay", texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___overlayMaterial_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___texture_9;
		NullCheck(L_7);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_7, _stringLiteralC36C08270F0656B15564B93B095160EB52C35960, L_8, NULL);
		// Graphics.Blit (source, destination, overlayMaterial, (int) blendMode);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___overlayMaterial_11;
		int32_t L_12 = __this->___blendMode_7;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenOverlay__ctor_mDC65CB472F36EE51C7A7F52999B3AC09054E55F9 (ScreenOverlay_t82957B93604683BC0C0A01C9A4324312AEAAEF09* __this, const RuntimeMethod* method) 
{
	{
		// public OverlayBlendMode blendMode = OverlayBlendMode.Overlay;
		__this->___blendMode_7 = 3;
		// public float intensity = 1.0f;
		__this->___intensity_8 = (1.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScreenSpaceAmbientObscurance_CheckResources_mFF7D1009C46F8CCF18C7869614FAA0E00A99226E (ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// aoMaterial = CheckShaderAndCreateMaterial (aoShader, aoMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___aoShader_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___aoMaterial_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___aoMaterial_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aoMaterial_14), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance_OnDisable_mF578FB1D02B1EEE113D3A0341D455B969C71DE38 (ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aoMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate (aoMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// aoMaterial = null;
		__this->___aoMaterial_14 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aoMaterial_14), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance_OnRenderImage_m230B77750177C0D038530D29B7CD5217CD778A84 (ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// if (CheckResources () == false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// Matrix4x4 P = GetComponent<Camera>().projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_3, NULL);
		V_0 = L_4;
		// var invP= P.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_0), NULL);
		V_1 = L_5;
		// Vector4 projInfo = new Vector4
		//     ((-2.0f / (Screen.width * P[0])),
		//      (-2.0f / (Screen.height * P[5])),
		//      ((1.0f - P[2]) / P[0]),
		//      ((1.0f + P[6]) / P[5]));
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_7;
		L_7 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 0, NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_9;
		L_9 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 5, NULL);
		float L_10;
		L_10 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 2, NULL);
		float L_11;
		L_11 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 0, NULL);
		float L_12;
		L_12 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 6, NULL);
		float L_13;
		L_13 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), 5, NULL);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_2), ((float)((-2.0f)/((float)il2cpp_codegen_multiply(((float)L_6), L_7)))), ((float)((-2.0f)/((float)il2cpp_codegen_multiply(((float)L_8), L_9)))), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_10))/L_11)), ((float)(((float)il2cpp_codegen_add((1.0f), L_12))/L_13)), NULL);
		// aoMaterial.SetVector ("_ProjInfo", projInfo); // used for unprojection
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___aoMaterial_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		NullCheck(L_14);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_14, _stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13, L_15, NULL);
		// aoMaterial.SetMatrix ("_ProjectionInv", invP); // only used for reference
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___aoMaterial_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = V_1;
		NullCheck(L_16);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_16, _stringLiteralBB6CBCD648C07EAC90B08C00428BA435EC0272BF, L_17, NULL);
		// aoMaterial.SetTexture ("_Rand", rand); // not needed for DX11 :)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->___aoMaterial_14;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___rand_12;
		NullCheck(L_18);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_18, _stringLiteral0EAAFAB53E130FE2ADD20070CDBD4848DC8582A9, L_19, NULL);
		// aoMaterial.SetFloat ("_Radius", radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___aoMaterial_14;
		float L_21 = __this->___radius_8;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralE5A1D96CE41BD597A30172C890508C2BB5810152, L_21, NULL);
		// aoMaterial.SetFloat ("_Radius2", radius*radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___aoMaterial_14;
		float L_23 = __this->___radius_8;
		float L_24 = __this->___radius_8;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteralAD6E56B90F7BBA5EEECD7831E48459043EBFCBB5, ((float)il2cpp_codegen_multiply(L_23, L_24)), NULL);
		// aoMaterial.SetFloat ("_Intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___aoMaterial_14;
		float L_26 = __this->___intensity_7;
		NullCheck(L_25);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_25, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_26, NULL);
		// aoMaterial.SetFloat ("_BlurFilterDistance", blurFilterDistance);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___aoMaterial_14;
		float L_28 = __this->___blurFilterDistance_10;
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteralEC50E207386AABAE6EA569D05001E516E9CCA2E6, L_28, NULL);
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___source0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_29);
		V_3 = L_30;
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___source0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_4 = L_32;
		// RenderTexture tmpRt  = RenderTexture.GetTemporary (rtW>>downsample, rtH>>downsample);
		int32_t L_33 = V_3;
		int32_t L_34 = __this->___downsample_11;
		int32_t L_35 = V_4;
		int32_t L_36 = __this->___downsample_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37;
		L_37 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(((int32_t)(L_33>>((int32_t)(L_34&((int32_t)31))))), ((int32_t)(L_35>>((int32_t)(L_36&((int32_t)31))))), NULL);
		V_5 = L_37;
		// Graphics.Blit (source, tmpRt, aoMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_38, L_39, L_40, 0, NULL);
		// if (downsample > 0) {
		int32_t L_41 = __this->___downsample_11;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		// tmpRt2 = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44;
		L_44 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_42, L_43, NULL);
		V_6 = L_44;
		// Graphics.Blit(tmpRt, tmpRt2, aoMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_45, L_46, L_47, 4, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_48, NULL);
		// tmpRt = tmpRt2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_6;
		V_5 = L_49;
	}

IL_0184:
	{
		// for (int i = 0; i < blurIterations; i++) {
		V_7 = 0;
		goto IL_021c;
	}

IL_018c:
	{
		// aoMaterial.SetVector("_Axis", new Vector2(1.0f,0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___aoMaterial_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_52;
		L_52 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_51, NULL);
		NullCheck(L_50);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_50, _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48, L_52, NULL);
		// tmpRt2 = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_53 = V_3;
		int32_t L_54 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55;
		L_55 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_53, L_54, NULL);
		V_6 = L_55;
		// Graphics.Blit (tmpRt, tmpRt2, aoMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_56, L_57, L_58, 1, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_59, NULL);
		// aoMaterial.SetVector("_Axis", new Vector2(0.0f,1.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___aoMaterial_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62;
		L_62 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_61, NULL);
		NullCheck(L_60);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_60, _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48, L_62, NULL);
		// tmpRt = RenderTexture.GetTemporary (rtW, rtH);
		int32_t L_63 = V_3;
		int32_t L_64 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65;
		L_65 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_63, L_64, NULL);
		V_5 = L_65;
		// Graphics.Blit (tmpRt2, tmpRt, aoMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = V_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = __this->___aoMaterial_14;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_66, L_67, L_68, 1, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_69 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_69, NULL);
		// for (int i = 0; i < blurIterations; i++) {
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_021c:
	{
		// for (int i = 0; i < blurIterations; i++) {
		int32_t L_71 = V_7;
		int32_t L_72 = __this->___blurIterations_9;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_018c;
		}
	}
	{
		// aoMaterial.SetTexture ("_AOTex", tmpRt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___aoMaterial_14;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74 = V_5;
		NullCheck(L_73);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_73, _stringLiteral58C07946CE4124292F0094E3A090F13945F38CC0, L_74, NULL);
		// Graphics.Blit (source, destination, aoMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___aoMaterial_14;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_75, L_76, L_77, 2, NULL);
		// RenderTexture.ReleaseTemporary (tmpRt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_78, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientObscurance__ctor_m044ADAA04CE20850C56457877E9CE0C0F620414A (ScreenSpaceAmbientObscurance_t430670CAE56E2C1231DA7FF71F8E1C6CBE3DE4A8* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.5f;
		__this->___intensity_7 = (0.5f);
		// public float radius = 0.2f;
		__this->___radius_8 = (0.200000003f);
		// public int blurIterations = 1;
		__this->___blurIterations_9 = 1;
		// public float blurFilterDistance = 1.25f;
		__this->___blurFilterDistance_10 = (1.25f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ScreenSpaceAmbientOcclusion_CreateMaterial_mF7A3FD447AF298C8C49954F744F28EFBDAA1C6F0 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!shader)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___shader0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_000a:
	{
		// Material m = new Material (shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = ___shader0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		// m.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		// return m;
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_DestroyMaterial_m41A6707B9A5D617667823081040A20A121818F77 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// DestroyImmediate (mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// mat = null;
		___mat0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_OnDisable_mB3286E83ECA87FD2140D19B3CCAEFC5C2CE46B63 (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) 
{
	{
		// DestroyMaterial (m_SSAOMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		ScreenSpaceAmbientOcclusion_DestroyMaterial_m41A6707B9A5D617667823081040A20A121818F77(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_Start_m7C1617597789A3A15FD5ED8855606D8A2D4ED123 (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(1, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}

IL_000f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// CreateMaterials ();
		ScreenSpaceAmbientOcclusion_CreateMaterials_mC63630500AFFAE0FBBD968E3CC980CCEF882118F(__this, NULL);
		// if (!m_SSAOMaterial || m_SSAOMaterial.passCount != 5)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_SSAOMaterial_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_004e;
		}
	}

IL_003f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_004e:
	{
		// m_Supported = true;
		__this->___m_Supported_14 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_OnEnable_m193984EB3410877D65EAB44BA45194270A8EA804 (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.DepthNormals;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_1, NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_1, ((int32_t)((int32_t)L_2|2)), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_CreateMaterials_mC63630500AFFAE0FBBD968E3CC980CCEF882118F (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_SSAOMaterial && m_SSAOShader.isSupported)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___m_SSAOShader_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_2, NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// m_SSAOMaterial = CreateMaterial (m_SSAOShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___m_SSAOShader_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = ScreenSpaceAmbientOcclusion_CreateMaterial_mF7A3FD447AF298C8C49954F744F28EFBDAA1C6F0(L_4, NULL);
		__this->___m_SSAOMaterial_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSAOMaterial_12), (void*)L_5);
		// m_SSAOMaterial.SetTexture ("_RandomTexture", m_RandomTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___m_SSAOMaterial_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_RandomTexture_13;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80, L_7, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion_OnRenderImage_m24F6A58D4D44A6A3BBB477A9BB13CDAF91B71505 (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6238431605E3EDF93423004446032CC82A241F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	{
		// if (!m_Supported || !m_SSAOShader.isSupported) {
		bool L_0 = __this->___m_Supported_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___m_SSAOShader_11;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001d:
	{
		// CreateMaterials ();
		ScreenSpaceAmbientOcclusion_CreateMaterials_mC63630500AFFAE0FBBD968E3CC980CCEF882118F(__this, NULL);
		// m_Downsampling = Mathf.Clamp (m_Downsampling, 1, 6);
		int32_t L_3 = __this->___m_Downsampling_8;
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 1, 6, NULL);
		__this->___m_Downsampling_8 = L_4;
		// m_Radius = Mathf.Clamp (m_Radius, 0.05f, 1.0f);
		float L_5 = __this->___m_Radius_4;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.0500000007f), (1.0f), NULL);
		__this->___m_Radius_4 = L_6;
		// m_MinZ = Mathf.Clamp (m_MinZ, 0.00001f, 0.5f);
		float L_7 = __this->___m_MinZ_10;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_7, (9.99999975E-06f), (0.5f), NULL);
		__this->___m_MinZ_10 = L_8;
		// m_OcclusionIntensity = Mathf.Clamp (m_OcclusionIntensity, 0.5f, 4.0f);
		float L_9 = __this->___m_OcclusionIntensity_6;
		float L_10;
		L_10 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, (0.5f), (4.0f), NULL);
		__this->___m_OcclusionIntensity_6 = L_10;
		// m_OcclusionAttenuation = Mathf.Clamp (m_OcclusionAttenuation, 0.2f, 2.0f);
		float L_11 = __this->___m_OcclusionAttenuation_9;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_11, (0.200000003f), (2.0f), NULL);
		__this->___m_OcclusionAttenuation_9 = L_12;
		// m_Blur = Mathf.Clamp (m_Blur, 0, 4);
		int32_t L_13 = __this->___m_Blur_7;
		int32_t L_14;
		L_14 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_13, 0, 4, NULL);
		__this->___m_Blur_7 = L_14;
		// RenderTexture rtAO = RenderTexture.GetTemporary (source.width / m_Downsampling, source.height / m_Downsampling, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		int32_t L_17 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		int32_t L_20 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21;
		L_21 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_16/L_17)), ((int32_t)(L_19/L_20)), 0, NULL);
		V_0 = L_21;
		// float fovY = GetComponent<Camera>().fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_22);
		float L_23;
		L_23 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_22, NULL);
		// float far = GetComponent<Camera>().farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_24, NULL);
		V_1 = L_25;
		// float y = Mathf.Tan (fovY * Mathf.Deg2Rad * 0.5f) * far;
		float L_26;
		L_26 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, (0.0174532924f))), (0.5f))));
		float L_27 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		// float x = y * GetComponent<Camera>().aspect;
		float L_28 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
		L_29 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_29, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// m_SSAOMaterial.SetVector ("_FarCorner", new Vector3(x,y,far));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_SSAOMaterial_12;
		float L_32 = V_3;
		float L_33 = V_2;
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_32, L_33, L_34, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_35, NULL);
		NullCheck(L_31);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_31, _stringLiteral6238431605E3EDF93423004446032CC82A241F2C, L_36, NULL);
		// if (m_RandomTexture) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___m_RandomTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_37, NULL);
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		// noiseWidth = m_RandomTexture.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___m_RandomTexture_13;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_39);
		V_4 = L_40;
		// noiseHeight = m_RandomTexture.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = __this->___m_RandomTexture_13;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		V_5 = L_42;
		goto IL_015b;
	}

IL_0155:
	{
		// noiseWidth = 1; noiseHeight = 1;
		V_4 = 1;
		// noiseWidth = 1; noiseHeight = 1;
		V_5 = 1;
	}

IL_015b:
	{
		// m_SSAOMaterial.SetVector ("_NoiseScale", new Vector3 ((float)rtAO.width / noiseWidth, (float)rtAO.height / noiseHeight, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_44);
		int32_t L_46 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)(((float)L_45)/((float)L_46))), ((float)(((float)L_48)/((float)L_49))), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51;
		L_51 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_50, NULL);
		NullCheck(L_43);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_43, _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A, L_51, NULL);
		// m_SSAOMaterial.SetVector ("_Params", new Vector4(
		//                                          m_Radius,
		//                                          m_MinZ,
		//                                          1.0f / m_OcclusionAttenuation,
		//                                          m_OcclusionIntensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___m_SSAOMaterial_12;
		float L_53 = __this->___m_Radius_4;
		float L_54 = __this->___m_MinZ_10;
		float L_55 = __this->___m_OcclusionAttenuation_9;
		float L_56 = __this->___m_OcclusionIntensity_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_57), L_53, L_54, ((float)((1.0f)/L_55)), L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_52, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_57, NULL);
		// bool doBlur = m_Blur > 0;
		int32_t L_58 = __this->___m_Blur_7;
		// Graphics.Blit (doBlur ? null : source, rtAO, m_SSAOMaterial, (int)m_SampleCount);
		int32_t L_59 = ((((int32_t)L_58) > ((int32_t)0))? 1 : 0);
		G_B7_0 = L_59;
		if (L_59)
		{
			G_B8_0 = L_59;
			goto IL_01d2;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = ___source0;
		G_B9_0 = L_60;
		G_B9_1 = G_B7_0;
		goto IL_01d3;
	}

IL_01d2:
	{
		G_B9_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_01d3:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___m_SSAOMaterial_12;
		int32_t L_63 = __this->___m_SampleCount_5;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B9_0, L_61, L_62, L_63, NULL);
		// if (doBlur)
		if (!G_B9_1)
		{
			goto IL_02c9;
		}
	}
	{
		// RenderTexture rtBlurX = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = ___source0;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_64);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = ___source0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_66);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68;
		L_68 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_65, L_67, 0, NULL);
		V_6 = L_68;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//                           new Vector4 ((float)m_Blur / source.width, 0,0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___m_SSAOMaterial_12;
		int32_t L_70 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = ___source0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_71);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_73), ((float)(((float)L_70)/((float)L_72))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_69, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_73, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = V_0;
		NullCheck(L_74);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_74, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_75, NULL);
		// Graphics.Blit (null, rtBlurX, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_76, L_77, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtAO); // original rtAO not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_78, NULL);
		// RenderTexture rtBlurY = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = ___source0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_79);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = ___source0;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_81);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83;
		L_83 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_80, L_82, 0, NULL);
		V_7 = L_83;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//                           new Vector4 (0, (float)m_Blur/source.height, 0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = __this->___m_SSAOMaterial_12;
		int32_t L_85 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = ___source0;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_86);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_88), (0.0f), ((float)(((float)L_85)/((float)L_87))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_84, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_88, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtBlurX);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_6;
		NullCheck(L_89);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_89, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_90, NULL);
		// Graphics.Blit (source, rtBlurY, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_92 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_93 = __this->___m_SSAOMaterial_12;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_91, L_92, L_93, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtBlurX); // blurX RT not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_94, NULL);
		// rtAO = rtBlurY; // AO is the blurred one now
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = V_7;
		V_0 = L_95;
	}

IL_02c9:
	{
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_0;
		NullCheck(L_96);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_96, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_97, NULL);
		// Graphics.Blit (source, destination, m_SSAOMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_98, L_99, L_100, 4, NULL);
		// RenderTexture.ReleaseTemporary (rtAO);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_101, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceAmbientOcclusion__ctor_m615337A0FBED24E5C41E17418A2615FF8EF14991 (ScreenSpaceAmbientOcclusion_t3EADF992C72A2185BF4F73A39AEFF9C67D0B9552* __this, const RuntimeMethod* method) 
{
	{
		// public float m_Radius = 0.4f;
		__this->___m_Radius_4 = (0.400000006f);
		// public SSAOSamples m_SampleCount = SSAOSamples.Medium;
		__this->___m_SampleCount_5 = 1;
		// public float m_OcclusionIntensity = 1.5f;
		__this->___m_OcclusionIntensity_6 = (1.5f);
		// public int m_Blur = 2;
		__this->___m_Blur_7 = 2;
		// public int m_Downsampling = 2;
		__this->___m_Downsampling_8 = 2;
		// public float m_OcclusionAttenuation = 1.0f;
		__this->___m_OcclusionAttenuation_9 = (1.0f);
		// public float m_MinZ = 0.01f;
		__this->___m_MinZ_10 = (0.00999999978f);
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
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaTone_OnRenderImage_m31BF87C02794E9A05C1677F4F520E535761EB5C1 (SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaTone__ctor_m34F40550EC1F27CA8A3DB7DC35AFAF4813EBB157 (SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SunShafts_CheckResources_m9C75528877A6260288B58129276616124B900555 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (useDepthTexture);
		bool L_0 = __this->___useDepthTexture_16;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, L_0, NULL);
		// sunShaftsMaterial = CheckShaderAndCreateMaterial (sunShaftsShader, sunShaftsMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___sunShaftsShader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___sunShaftsMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_2, L_3, NULL);
		__this->___sunShaftsMaterial_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sunShaftsMaterial_18), (void*)L_4);
		// simpleClearMaterial = CheckShaderAndCreateMaterial (simpleClearShader, simpleClearMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___simpleClearShader_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___simpleClearMaterial_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_5, L_6, NULL);
		__this->___simpleClearMaterial_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simpleClearMaterial_20), (void*)L_7);
		// if (!isSupported)
		bool L_8 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_004b:
	{
		// return isSupported;
		bool L_9 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts_OnRenderImage_m09CB5311D8F7CC6064215683AFA18D8E2DA94BF3 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t G_B15_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B25_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B25_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B25_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B24_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B26_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B26_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B26_3 = NULL;
	{
		// if (CheckResources()==false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (useDepthTexture)
		bool L_3 = __this->___useDepthTexture_16;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_5, NULL);
		NullCheck(L_5);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_5, ((int32_t)((int32_t)L_6|1)), NULL);
	}

IL_002b:
	{
		// int divider = 4;
		V_0 = 4;
		// if (resolution == SunShaftsResolution.Normal)
		int32_t L_7 = __this->___resolution_7;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// divider = 2;
		V_0 = 2;
		goto IL_0045;
	}

IL_003a:
	{
		// else if (resolution == SunShaftsResolution.High)
		int32_t L_8 = __this->___resolution_7;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// divider = 1;
		V_0 = 1;
	}

IL_0045:
	{
		// Vector3 v = Vector3.one * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (0.5f), NULL);
		V_1 = L_10;
		// if (sunTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___sunTransform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// v = GetComponent<Camera>().WorldToViewportPoint (sunTransform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___sunTransform_9;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_13, L_15, NULL);
		V_1 = L_16;
		goto IL_0091;
	}

IL_007b:
	{
		// v = new Vector3(0.5f, 0.5f, 0.0f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.5f), (0.5f), (0.0f), NULL);
	}

IL_0091:
	{
		// int rtW = source.width / divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		int32_t L_19 = V_0;
		V_2 = ((int32_t)(L_18/L_19));
		// int rtH = source.height / divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		int32_t L_22 = V_0;
		V_3 = ((int32_t)(L_21/L_22));
		// RenderTexture lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_23, L_24, 0, NULL);
		V_5 = L_25;
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (1.0f, 1.0f, 0.0f, 0.0f) * sunShaftBlurRadius );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___sunShaftsMaterial_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_27), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_28 = __this->___sunShaftBlurRadius_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29;
		L_29 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_27, L_28, NULL);
		NullCheck(L_26);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_26, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_29, NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___sunShaftsMaterial_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = L_33.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___z_4;
		float L_37 = __this->___maxRadius_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_38), L_32, L_34, L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_30, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_38, NULL);
		// sunShaftsMaterial.SetVector ("_SunThreshold", sunThreshold);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___sunShaftsMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = __this->___sunThreshold_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41;
		L_41 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_40, NULL);
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA, L_41, NULL);
		// if (!useDepthTexture) {
		bool L_42 = __this->___useDepthTexture_16;
		if (L_42)
		{
			goto IL_0198;
		}
	}
	{
		// var format= GetComponent<Camera>().allowHDR ? RenderTextureFormat.DefaultHDR: RenderTextureFormat.Default;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43;
		L_43 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_43);
		bool L_44;
		L_44 = Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67(L_43, NULL);
		if (L_44)
		{
			goto IL_0141;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0143;
	}

IL_0141:
	{
		G_B15_0 = ((int32_t)9);
	}

IL_0143:
	{
		V_7 = G_B15_0;
		// RenderTexture tmpBuffer = RenderTexture.GetTemporary (source.width, source.height, 0, format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = ___source0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50;
		L_50 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_46, L_48, 0, L_49, NULL);
		V_8 = L_50;
		// RenderTexture.active = tmpBuffer;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_8;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_51, NULL);
		// GL.ClearWithSkybox (false, GetComponent<Camera>());
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_52;
		L_52 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		GL_ClearWithSkybox_mA5C6A1899483E0EF88601E543CF0EDB84F186731((bool)0, L_52, NULL);
		// sunShaftsMaterial.SetTexture ("_Skybox", tmpBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___sunShaftsMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = V_8;
		NullCheck(L_53);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_53, _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE, L_54, NULL);
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_55, L_56, L_57, 3, NULL);
		// RenderTexture.ReleaseTemporary (tmpBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_8;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_58, NULL);
		goto IL_01a7;
	}

IL_0198:
	{
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_59, L_60, L_61, 2, NULL);
	}

IL_01a7:
	{
		// DrawBorder (lrDepthBuffer, simpleClearMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63 = __this->___simpleClearMaterial_20;
		PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53(__this, L_62, L_63, NULL);
		// radialBlurIterations = Mathf.Clamp (radialBlurIterations, 1, 4);
		int32_t L_64 = __this->___radialBlurIterations_10;
		int32_t L_65;
		L_65 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_64, 1, 4, NULL);
		__this->___radialBlurIterations_10 = L_65;
		// float ofs = sunShaftBlurRadius * (1.0f / 768.0f);
		float L_66 = __this->___sunShaftBlurRadius_13;
		V_6 = ((float)il2cpp_codegen_multiply(L_66, (0.00130208337f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___sunShaftsMaterial_18;
		float L_68 = V_6;
		float L_69 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_70), L_68, L_69, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_67, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_70, NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___sunShaftsMaterial_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_1;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_1;
		float L_75 = L_74.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_1;
		float L_77 = L_76.___z_4;
		float L_78 = __this->___maxRadius_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_79), L_73, L_75, L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_71);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_71, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_79, NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		V_9 = 0;
		goto IL_0304;
	}

IL_022e:
	{
		// lrColorB = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_80 = V_2;
		int32_t L_81 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82;
		L_82 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_80, L_81, 0, NULL);
		V_4 = L_82;
		// Graphics.Blit (lrDepthBuffer, lrColorB, sunShaftsMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_83, L_84, L_85, 1, NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_86, NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 1.0f) * 6.0f)) / 768.0f;
		float L_87 = __this->___sunShaftBlurRadius_13;
		int32_t L_88 = V_9;
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_87, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_88), (2.0f))), (1.0f))), (6.0f)))))/(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89 = __this->___sunShaftsMaterial_18;
		float L_90 = V_6;
		float L_91 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_92), L_90, L_91, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_89);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_89, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_92, NULL);
		// lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_93 = V_2;
		int32_t L_94 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95;
		L_95 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_93, L_94, 0, NULL);
		V_5 = L_95;
		// Graphics.Blit (lrColorB, lrDepthBuffer, sunShaftsMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_96 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98 = __this->___sunShaftsMaterial_18;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_96, L_97, L_98, 1, NULL);
		// RenderTexture.ReleaseTemporary (lrColorB);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_99, NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 2.0f) * 6.0f)) / 768.0f;
		float L_100 = __this->___sunShaftBlurRadius_13;
		int32_t L_101 = V_9;
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_100, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_101), (2.0f))), (2.0f))), (6.0f)))))/(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102 = __this->___sunShaftsMaterial_18;
		float L_103 = V_6;
		float L_104 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_105), L_103, L_104, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_102);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_102, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_105, NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_106 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0304:
	{
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_107 = V_9;
		int32_t L_108 = __this->___radialBlurIterations_10;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_022e;
		}
	}
	{
		// if (v.z >= 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_1;
		float L_110 = L_109.___z_4;
		if ((!(((float)L_110) >= ((float)(0.0f)))))
		{
			goto IL_036c;
		}
	}
	{
		// sunShaftsMaterial.SetVector ("_SunColor", new Vector4 (sunColor.r, sunColor.g, sunColor.b, sunColor.a) * sunShaftIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111 = __this->___sunShaftsMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_112 = (&__this->___sunColor_11);
		float L_113 = L_112->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_114 = (&__this->___sunColor_11);
		float L_115 = L_114->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_116 = (&__this->___sunColor_11);
		float L_117 = L_116->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_118 = (&__this->___sunColor_11);
		float L_119 = L_118->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_120), L_113, L_115, L_117, L_119, /*hidden argument*/NULL);
		float L_121 = __this->___sunShaftIntensity_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_122;
		L_122 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_120, L_121, NULL);
		NullCheck(L_111);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_111, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_122, NULL);
		goto IL_0381;
	}

IL_036c:
	{
		// sunShaftsMaterial.SetVector ("_SunColor", Vector4.zero); // no backprojection !
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123 = __this->___sunShaftsMaterial_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_124;
		L_124 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		NullCheck(L_123);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_123, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_124, NULL);
	}

IL_0381:
	{
		// sunShaftsMaterial.SetTexture ("_ColorBuffer", lrDepthBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = __this->___sunShaftsMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_126 = V_5;
		NullCheck(L_125);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_125, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_126, NULL);
		// Graphics.Blit (source, destination, sunShaftsMaterial, (screenBlendMode == ShaftsScreenBlendMode.Screen) ? 0 : 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___sunShaftsMaterial_18;
		int32_t L_130 = __this->___screenBlendMode_8;
		G_B24_0 = L_129;
		G_B24_1 = L_128;
		G_B24_2 = L_127;
		if (!L_130)
		{
			G_B25_0 = L_129;
			G_B25_1 = L_128;
			G_B25_2 = L_127;
			goto IL_03a6;
		}
	}
	{
		G_B26_0 = 4;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_03a7;
	}

IL_03a6:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_03a7:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B26_3, G_B26_2, G_B26_1, G_B26_0, NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_131, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts__ctor_m17D8FCF6A1EEDA1A07F46BA3FD3D2579203C1C67 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, const RuntimeMethod* method) 
{
	{
		// public SunShaftsResolution resolution = SunShaftsResolution.Normal;
		__this->___resolution_7 = 1;
		// public int radialBlurIterations = 2;
		__this->___radialBlurIterations_10 = 2;
		// public Color sunColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___sunColor_11 = L_0;
		// public Color sunThreshold = new Color(0.87f,0.74f,0.65f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.870000005f), (0.74000001f), (0.649999976f), /*hidden argument*/NULL);
		__this->___sunThreshold_12 = L_1;
		// public float sunShaftBlurRadius = 2.5f;
		__this->___sunShaftBlurRadius_13 = (2.5f);
		// public float sunShaftIntensity = 1.15f;
		__this->___sunShaftIntensity_14 = (1.14999998f);
		// public float maxRadius = 0.75f;
		__this->___maxRadius_15 = (0.75f);
		// public bool  useDepthTexture = true;
		__this->___useDepthTexture_16 = (bool)1;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TiltShift_CheckResources_mFF9ED6FAA29732CD2F698BCF10C44D6454024026 (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// tiltShiftMaterial = CheckShaderAndCreateMaterial (tiltShiftShader, tiltShiftMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___tiltShiftShader_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tiltShiftMaterial_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___tiltShiftMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiltShiftMaterial_13), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltShift_OnRenderImage_m23A47A2B2AF059156929865A0FE5FA39EC7D8BD5 (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	String_t* G_B5_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B10_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B10_3 = NULL;
	{
		// if (CheckResources() == false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// tiltShiftMaterial.SetFloat("_BlurSize", maxBlurSize < 0.0f ? 0.0f : maxBlurSize);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___tiltShiftMaterial_13;
		float L_4 = __this->___maxBlurSize_10;
		G_B3_0 = _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
		G_B3_1 = L_3;
		if ((((float)L_4) < ((float)(0.0f))))
		{
			G_B4_0 = _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
			G_B4_1 = L_3;
			goto IL_0030;
		}
	}
	{
		float L_5 = __this->___maxBlurSize_10;
		G_B5_0 = L_5;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0035;
	}

IL_0030:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0035:
	{
		NullCheck(G_B5_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B5_2, G_B5_1, G_B5_0, NULL);
		// tiltShiftMaterial.SetFloat("_BlurArea", blurArea);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___tiltShiftMaterial_13;
		float L_7 = __this->___blurArea_9;
		NullCheck(L_6);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_6, _stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78, L_7, NULL);
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___source0;
		NullCheck(L_8);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, 1, NULL);
		// RenderTexture rt = destination;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___destination1;
		V_0 = L_9;
		// if (downsample > 0f) {
		int32_t L_10 = __this->___downsample_11;
		if ((!(((float)((float)L_10)) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// rt = RenderTexture.GetTemporary (source.width>>downsample, source.height>>downsample, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		int32_t L_13 = __this->___downsample_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		int32_t L_16 = __this->___downsample_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_17, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19;
		L_19 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_12>>((int32_t)(L_13&((int32_t)31))))), ((int32_t)(L_15>>((int32_t)(L_16&((int32_t)31))))), 0, L_18, NULL);
		V_0 = L_19;
		// rt.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_0;
		NullCheck(L_20);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_20, 1, NULL);
	}

IL_009b:
	{
		// int basePassNr = (int) quality; basePassNr *= 2;
		int32_t L_21 = __this->___quality_8;
		V_1 = L_21;
		// int basePassNr = (int) quality; basePassNr *= 2;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_22, 2));
		// Graphics.Blit (source, rt, tiltShiftMaterial, mode == TiltShiftMode.TiltShiftMode ? basePassNr : basePassNr + 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___tiltShiftMaterial_13;
		int32_t L_26 = __this->___mode_7;
		G_B8_0 = L_25;
		G_B8_1 = L_24;
		G_B8_2 = L_23;
		if (!L_26)
		{
			G_B9_0 = L_25;
			G_B9_1 = L_24;
			G_B9_2 = L_23;
			goto IL_00bb;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B10_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_00bc;
	}

IL_00bb:
	{
		int32_t L_28 = V_1;
		G_B10_0 = L_28;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B10_3, G_B10_2, G_B10_1, G_B10_0, NULL);
		// if (downsample > 0) {
		int32_t L_29 = __this->___downsample_11;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00e9;
		}
	}
	{
		// tiltShiftMaterial.SetTexture ("_Blurred", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___tiltShiftMaterial_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_0;
		NullCheck(L_30);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_30, _stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9, L_31, NULL);
		// Graphics.Blit (source, destination, tiltShiftMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___tiltShiftMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_32, L_33, L_34, 6, NULL);
	}

IL_00e9:
	{
		// if (rt != destination)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_00f8;
		}
	}
	{
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_38, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltShift__ctor_m309B85AE3B13B1CE309EE2E6D36571E4CD2EBB0B (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, const RuntimeMethod* method) 
{
	{
		// public TiltShiftQuality quality = TiltShiftQuality.Normal;
		__this->___quality_8 = 1;
		// public float blurArea = 1.0f;
		__this->___blurArea_9 = (1.0f);
		// public float maxBlurSize = 5.0f;
		__this->___maxBlurSize_10 = (5.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CheckResources_mC1C0CAB02BD19684E08232CD57248E018FD07C8E (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSupport(false, true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664(__this, (bool)0, (bool)1, NULL);
		// tonemapMaterial = CheckShaderAndCreateMaterial(tonemapper, tonemapMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___tonemapper_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tonemapMaterial_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___tonemapMaterial_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)L_3);
		// if (!curveTex && type == TonemapperType.UserCurve)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_6 = __this->___type_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// curveTex = new Texture2D(256, 1, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_7, ((int32_t)256), 1, 5, (bool)0, (bool)1, NULL);
		__this->___curveTex_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)L_7);
		// curveTex.filterMode = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		NullCheck(L_8);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, 1, NULL);
		// curveTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___curveTex_10;
		NullCheck(L_9);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_9, 1, NULL);
		// curveTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)52), NULL);
	}

IL_0070:
	{
		// if (!isSupported)
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_11)
		{
			goto IL_007e;
		}
	}
	{
		// ReportAutoDisable();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_007e:
	{
		// return isSupported;
		bool L_12 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_12;
	}
}
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float range = 1.0f;
		V_0 = (1.0f);
		// if (remapCurve.keys.Length < 1)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___remapCurve_9;
		NullCheck(L_0);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_0, NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		// remapCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(2, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (2.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___remapCurve_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remapCurve_9), (void*)L_7);
	}

IL_0053:
	{
		// if (remapCurve != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___remapCurve_9;
		if (!L_8)
		{
			goto IL_00e6;
		}
	}
	{
		// if (remapCurve.length > 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___remapCurve_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// range = remapCurve[remapCurve.length - 1].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___remapCurve_9;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___remapCurve_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_12, NULL);
		NullCheck(L_11);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_14;
		L_14 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_1), NULL);
		V_0 = L_15;
	}

IL_008d:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		V_2 = (0.0f);
		goto IL_00d3;
	}

IL_0095:
	{
		// float c = remapCurve.Evaluate(i*1.0f*range);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = __this->___remapCurve_9;
		float L_17 = V_2;
		float L_18 = V_0;
		NullCheck(L_16);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (1.0f))), L_18)), NULL);
		V_3 = L_19;
		// curveTex.SetPixel((int) Mathf.Floor(i*255.0f), 0, new Color(c, c, c));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___curveTex_10;
		float L_21 = V_2;
		float L_22;
		L_22 = floorf(((float)il2cpp_codegen_multiply(L_21, (255.0f))));
		float L_23 = V_3;
		float L_24 = V_3;
		float L_25 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_20, il2cpp_codegen_cast_double_to_int<int32_t>(L_22), 0, L_26, NULL);
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_27, (0.00392156886f)));
	}

IL_00d3:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_28 = V_2;
		if ((((float)L_28) <= ((float)(1.0f))))
		{
			goto IL_0095;
		}
	}
	{
		// curveTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->___curveTex_10;
		NullCheck(L_29);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_29, NULL);
	}

IL_00e6:
	{
		// return 1.0f/range;
		float L_30 = V_0;
		return ((float)((1.0f)/L_30));
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnDisable_m4E9ADFC3365B18E2A3ACF5F5B87BBE50FF08DF14 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// rt = null;
		__this->___rt_18 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_001f:
	{
		// if (tonemapMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// DestroyImmediate(tonemapMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		// tonemapMaterial = null;
		__this->___tonemapMaterial_17 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
	}

IL_003e:
	{
		// if (curveTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// DestroyImmediate(curveTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
		// curveTex = null;
		__this->___curveTex_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// rtFormat = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.RGHalf) ? RenderTextureFormat.RGHalf : RenderTextureFormat.ARGBHalf;
		bool L_2;
		L_2 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(((int32_t)13), NULL);
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_001e;
	}

IL_001c:
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B4_0;
	}

IL_001e:
	{
		NullCheck(G_B5_1);
		G_B5_1->___rtFormat_19 = G_B5_0;
		// rt = new RenderTexture(1, 1, 0, rtFormat);
		int32_t L_3 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_4, 1, 1, 0, L_3, NULL);
		__this->___rt_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)L_4);
		// rt.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___rt_18;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)52), NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnRenderImage_m3DDE8CADC9E8BEB73403CF71C46CC83F1E32C960 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B29_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B30_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B32_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_3 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B35_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B34_0 = NULL;
	float G_B36_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B36_1 = NULL;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit(source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// exposureAdjustment = exposureAdjustment < 0.001f ? 0.001f : exposureAdjustment;
		float L_3 = __this->___exposureAdjustment_11;
		G_B3_0 = __this;
		if ((((float)L_3) < ((float)(0.00100000005f))))
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		float L_4 = __this->___exposureAdjustment_11;
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B5_0 = (0.00100000005f);
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		G_B5_1->___exposureAdjustment_11 = G_B5_0;
		// if (type == TonemapperType.UserCurve)
		int32_t L_5 = __this->___type_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// float rangeScale = UpdateCurve();
		float L_6;
		L_6 = Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156(__this, NULL);
		V_6 = L_6;
		// tonemapMaterial.SetFloat("_RangeScale", rangeScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___tonemapMaterial_17;
		float L_8 = V_6;
		NullCheck(L_7);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_7, _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D, L_8, NULL);
		// tonemapMaterial.SetTexture("_Curve", curveTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tonemapMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F, L_10, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_11, L_12, L_13, 4, NULL);
		// return;
		return;
	}

IL_0078:
	{
		// if (type == TonemapperType.SimpleReinhard)
		int32_t L_14 = __this->___type_7;
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___tonemapMaterial_17;
		float L_16 = __this->___exposureAdjustment_11;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_16, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_17, L_18, L_19, 6, NULL);
		// return;
		return;
	}

IL_00a5:
	{
		// if (type == TonemapperType.Hable)
		int32_t L_20 = __this->___type_7;
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00d3;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___tonemapMaterial_17;
		float L_22 = __this->___exposureAdjustment_11;
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_22, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_23, L_24, L_25, 5, NULL);
		// return;
		return;
	}

IL_00d3:
	{
		// if (type == TonemapperType.Photographic)
		int32_t L_26 = __this->___type_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0101;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___tonemapMaterial_17;
		float L_28 = __this->___exposureAdjustment_11;
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_28, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_29, L_30, L_31, 8, NULL);
		// return;
		return;
	}

IL_0101:
	{
		// if (type == TonemapperType.OptimizedHejiDawson)
		int32_t L_32 = __this->___type_7;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0135;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", 0.5f*exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___tonemapMaterial_17;
		float L_34 = __this->___exposureAdjustment_11;
		NullCheck(L_33);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_33, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, ((float)il2cpp_codegen_multiply((0.5f), L_34)), NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_35, L_36, L_37, 7, NULL);
		// return;
		return;
	}

IL_0135:
	{
		// bool freshlyBrewedInternalRt = CreateInternalRenderTexture(); // this retrieves rtFormat, so should happen before rt allocations
		bool L_38;
		L_38 = Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34(__this, NULL);
		V_0 = L_38;
		// RenderTexture rtSquared = RenderTexture.GetTemporary((int) adaptiveTextureSize, (int) adaptiveTextureSize, 0, rtFormat);
		int32_t L_39 = __this->___adaptiveTextureSize_8;
		int32_t L_40 = __this->___adaptiveTextureSize_8;
		int32_t L_41 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_39, L_40, 0, L_41, NULL);
		V_1 = L_42;
		// Graphics.Blit(source, rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_43, L_44, NULL);
		// int downsample = (int) Mathf.Log(rtSquared.width*1.0f, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		float L_47;
		L_47 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)il2cpp_codegen_multiply(((float)L_46), (1.0f))), (2.0f), NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_47);
		// int div = 2;
		V_3 = 2;
		// var rts = new RenderTexture[downsample];
		int32_t L_48 = V_2;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_49 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_48);
		V_4 = L_49;
		// for (int i = 0; i < downsample; i++)
		V_7 = 0;
		goto IL_01af;
	}

IL_0184:
	{
		// rts[i] = RenderTexture.GetTemporary(rtSquared.width/div, rtSquared.width/div, 0, rtFormat);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_50 = V_4;
		int32_t L_51 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_52);
		int32_t L_54 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		int32_t L_57 = V_3;
		int32_t L_58 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59;
		L_59 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_53/L_54)), ((int32_t)(L_56/L_57)), 0, L_58, NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_59);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_59);
		// div *= 2;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_60, 2));
		// for (int i = 0; i < downsample; i++)
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01af:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_62 = V_7;
		int32_t L_63 = V_2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0184;
		}
	}
	{
		// var lumRt = rts[downsample - 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_64 = V_4;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_5 = L_67;
		// Graphics.Blit(rtSquared, rts[0], tonemapMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68 = V_1;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_68, L_71, L_72, 1, NULL);
		// if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_73 = __this->___type_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)6))))
		{
			goto IL_020c;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_8 = 0;
		goto IL_0203;
	}

IL_01db:
	{
		// Graphics.Blit(rts[i], rts[i + 1], tonemapMaterial, 9);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_74 = V_4;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_78 = V_4;
		int32_t L_79 = V_8;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_77, L_81, L_82, ((int32_t)9), NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_83 = V_4;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_5 = L_86;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0203:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_89, 1)))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_0241;
	}

IL_020c:
	{
		// else if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_90 = __this->___type_7;
		if ((!(((uint32_t)L_90) == ((uint32_t)5))))
		{
			goto IL_0241;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_9 = 0;
		goto IL_023a;
	}

IL_021a:
	{
		// Graphics.Blit(rts[i], rts[i + 1]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_91 = V_4;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_95 = V_4;
		int32_t L_96 = V_9;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_94, L_98, NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_99 = V_4;
		int32_t L_100 = V_9;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_5 = L_102;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_103 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_023a:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_104 = V_9;
		int32_t L_105 = V_2;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_105, 1)))))
		{
			goto IL_021a;
		}
	}

IL_0241:
	{
		// adaptionSpeed = adaptionSpeed < 0.001f ? 0.001f : adaptionSpeed;
		float L_106 = __this->___adaptionSpeed_14;
		G_B28_0 = __this;
		if ((((float)L_106) < ((float)(0.00100000005f))))
		{
			G_B29_0 = __this;
			goto IL_0257;
		}
	}
	{
		float L_107 = __this->___adaptionSpeed_14;
		G_B30_0 = L_107;
		G_B30_1 = G_B28_0;
		goto IL_025c;
	}

IL_0257:
	{
		G_B30_0 = (0.00100000005f);
		G_B30_1 = G_B29_0;
	}

IL_025c:
	{
		NullCheck(G_B30_1);
		G_B30_1->___adaptionSpeed_14 = G_B30_0;
		// tonemapMaterial.SetFloat("_AdaptionSpeed", adaptionSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108 = __this->___tonemapMaterial_17;
		float L_109 = __this->___adaptionSpeed_14;
		NullCheck(L_108);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_108, _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4, L_109, NULL);
		// rt.MarkRestoreExpected(); // keeping luminance values between frames, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = __this->___rt_18;
		NullCheck(L_110);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_110, NULL);
		// Graphics.Blit (lumRt, rt, tonemapMaterial, freshlyBrewedInternalRt ? 3 : 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_112 = __this->___rt_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = __this->___tonemapMaterial_17;
		bool L_114 = V_0;
		G_B31_0 = L_113;
		G_B31_1 = L_112;
		G_B31_2 = L_111;
		if (L_114)
		{
			G_B32_0 = L_113;
			G_B32_1 = L_112;
			G_B32_2 = L_111;
			goto IL_0296;
		}
	}
	{
		G_B33_0 = 2;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_0297;
	}

IL_0296:
	{
		G_B33_0 = 3;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_0297:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B33_3, G_B33_2, G_B33_1, G_B33_0, NULL);
		// middleGrey = middleGrey < 0.001f ? 0.001f : middleGrey;
		float L_115 = __this->___middleGrey_12;
		G_B34_0 = __this;
		if ((((float)L_115) < ((float)(0.00100000005f))))
		{
			G_B35_0 = __this;
			goto IL_02b2;
		}
	}
	{
		float L_116 = __this->___middleGrey_12;
		G_B36_0 = L_116;
		G_B36_1 = G_B34_0;
		goto IL_02b7;
	}

IL_02b2:
	{
		G_B36_0 = (0.00100000005f);
		G_B36_1 = G_B35_0;
	}

IL_02b7:
	{
		NullCheck(G_B36_1);
		G_B36_1->___middleGrey_12 = G_B36_0;
		// tonemapMaterial.SetVector("_HdrParams", new Vector4(middleGrey, middleGrey, middleGrey, white*white));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117 = __this->___tonemapMaterial_17;
		float L_118 = __this->___middleGrey_12;
		float L_119 = __this->___middleGrey_12;
		float L_120 = __this->___middleGrey_12;
		float L_121 = __this->___white_13;
		float L_122 = __this->___white_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_123), L_118, L_119, L_120, ((float)il2cpp_codegen_multiply(L_121, L_122)), /*hidden argument*/NULL);
		NullCheck(L_117);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_117, _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E, L_123, NULL);
		// tonemapMaterial.SetTexture("_SmallTex", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124 = __this->___tonemapMaterial_17;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_125 = __this->___rt_18;
		NullCheck(L_124);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_124, _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7, L_125, NULL);
		// if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_126 = __this->___type_7;
		if ((!(((uint32_t)L_126) == ((uint32_t)5))))
		{
			goto IL_031f;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_127, L_128, L_129, 0, NULL);
		goto IL_034a;
	}

IL_031f:
	{
		// else if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_130 = __this->___type_7;
		if ((!(((uint32_t)L_130) == ((uint32_t)6))))
		{
			goto IL_0339;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_131, L_132, L_133, ((int32_t)10), NULL);
		goto IL_034a;
	}

IL_0339:
	{
		// Debug.LogError("No valid adaptive tonemapper type found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F, NULL);
		// Graphics.Blit(source, destination); // at least we get the TransformToLDR effect
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_134 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_134, L_135, NULL);
	}

IL_034a:
	{
		// for (int i = 0; i < downsample; i++)
		V_10 = 0;
		goto IL_035f;
	}

IL_034f:
	{
		// RenderTexture.ReleaseTemporary(rts[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_136 = V_4;
		int32_t L_137 = V_10;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_139, NULL);
		// for (int i = 0; i < downsample; i++)
		int32_t L_140 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_035f:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_141 = V_10;
		int32_t L_142 = V_2;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_034f;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_143 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_143, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping__ctor_mEF2579982D0293C0899810E4BCB8FF6B8862E84F (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	{
		// public TonemapperType type = TonemapperType.Photographic;
		__this->___type_7 = 3;
		// public AdaptiveTexSize adaptiveTextureSize = AdaptiveTexSize.Square256;
		__this->___adaptiveTextureSize_8 = ((int32_t)256);
		// public float exposureAdjustment = 1.5f;
		__this->___exposureAdjustment_11 = (1.5f);
		// public float middleGrey = 0.4f;
		__this->___middleGrey_12 = (0.400000006f);
		// public float white = 2.0f;
		__this->___white_13 = (2.0f);
		// public float adaptionSpeed = 1.5f;
		__this->___adaptionSpeed_14 = (1.5f);
		// public bool validRenderTextureFormat = true;
		__this->___validRenderTextureFormat_16 = (bool)1;
		// private RenderTextureFormat rtFormat = RenderTextureFormat.ARGBHalf;
		__this->___rtFormat_19 = 2;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// if (null == meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_7 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_8 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles_Cleanup_m51E44CD73E253FDFBB58CC18030D0D03676B2194 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate(meshes[i]);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_6 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_9, NULL);
		// meshes[i] = null;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_14 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0), (void*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* Triangles_GetMeshes_m3DCF64012831DC4D525D97E07F13846F119F00F8 (int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes() && (currentTris == (totalWidth * totalHeight)))
		bool L_0;
		L_0 = Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___currentTris_1;
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_4 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		return L_4;
	}

IL_0017:
	{
		// int maxTris = 65000 / 3;
		V_0 = ((int32_t)21666);
		// int totalTris = totalWidth * totalHeight;
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// currentTris = totalTris;
		int32_t L_7 = V_1;
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___currentTris_1 = L_7;
		// int meshCount = Mathf.CeilToInt((1.0f * totalTris) / (1.0f * maxTris));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_8)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_9))))), NULL);
		// meshes = new Mesh[meshCount];
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_11 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)SZArrayNew(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0), (void*)L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalTris; i += maxTris)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int tris = Mathf.FloorToInt(Mathf.Clamp((totalTris - i), 0, maxTris));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 0, L_14, NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_15), NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh(tris, i, totalWidth, totalHeight);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_17 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___totalWidth0;
		int32_t L_22 = ___totalHeight1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_29 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, ((int32_t)52), NULL);
		// var verts = new Vector3[triCount * 3];
		int32_t L_2 = ___triCount0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, 3)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 3];
		int32_t L_4 = ___triCount0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 3)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 3];
		int32_t L_6 = ___triCount0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 3)));
		V_3 = L_7;
		// var tris = new int[triCount * 3];
		int32_t L_8 = ___triCount0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 3)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_014d;
	}

IL_003b:
	{
		// int i3 = i * 3;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_10, 3));
		// int vertexWithOffset = triOffset + i;
		int32_t L_11 = ___triOffset1;
		int32_t L_12 = V_5;
		// float x = Mathf.Floor(vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_14 = ___totalWidth2;
		float L_15;
		L_15 = floorf(((float)((int32_t)(L_13%L_14))));
		int32_t L_16 = ___totalWidth2;
		V_7 = ((float)(L_15/((float)L_16)));
		// float y = Mathf.Floor(vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_17 = ___totalWidth2;
		float L_18;
		L_18 = floorf(((float)((int32_t)(L_13/L_17))));
		int32_t L_19 = ___totalHeight3;
		V_8 = ((float)(L_18/((float)L_19)));
		// Vector3 position = new Vector3(x * 2 - 1, y * 2 - 1, 1.0f);
		float L_20 = V_7;
		float L_21 = V_8;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f))), (1.0f), NULL);
		// verts[i3 + 0] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_1;
		int32_t L_23 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_9;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// verts[i3 + 1] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_1;
		int32_t L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_9;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// verts[i3 + 2] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_1;
		int32_t L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_9;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// uvs[i3 + 0] = new Vector2(0.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_31 = V_2;
		int32_t L_32 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		// uvs[i3 + 1] = new Vector2(1.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = V_2;
		int32_t L_35 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_36);
		// uvs[i3 + 2] = new Vector2(0.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = V_2;
		int32_t L_38 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_39);
		// uvs2[i3 + 0] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_3;
		int32_t L_41 = V_6;
		float L_42 = V_7;
		float L_43 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		// uvs2[i3 + 1] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_3;
		int32_t L_46 = V_6;
		float L_47 = V_7;
		float L_48 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_49);
		// uvs2[i3 + 2] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_3;
		int32_t L_51 = V_6;
		float L_52 = V_7;
		float L_53 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_51, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_54);
		// tris[i3 + 0] = i3 + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_4;
		int32_t L_56 = V_6;
		int32_t L_57 = V_6;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (int32_t)L_57);
		// tris[i3 + 1] = i3 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_4;
		int32_t L_59 = V_6;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_59, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1)));
		// tris[i3 + 2] = i3 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_4;
		int32_t L_62 = V_6;
		int32_t L_63 = V_6;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_63, 2)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_014d:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_65 = V_5;
		int32_t L_66 = ___triCount0;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_67 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_1;
		NullCheck(L_67);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_67, L_68, NULL);
		// mesh.triangles = tris;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_4;
		NullCheck(L_69);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_69, L_70, NULL);
		// mesh.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_71 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_72 = V_2;
		NullCheck(L_71);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_71, L_72, NULL);
		// mesh.uv2 = uvs2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_73 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_74 = V_3;
		NullCheck(L_73);
		Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_73, L_74, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_75 = V_0;
		return L_75;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles__ctor_mB64F02B9481FC7C583FF49508F4AF36506137851 (Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Twirl_OnRenderImage_m29976F163DF515C836C6925BD2770B8B6AE9C925 (Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Twirl__ctor_m77736ED53F9B5740B06DA39C508641158E6D4B03 (Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 radius = new Vector2(0.3F,0.3F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2 center = new Vector2 (0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VignetteAndChromaticAberration_CheckResources_m6F1DD9FE91586FC0B7C56E490DAC8E68E82AE9EC (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// m_VignetteMaterial = CheckShaderAndCreateMaterial (vignetteShader, m_VignetteMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___vignetteShader_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_VignetteMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___m_VignetteMaterial_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VignetteMaterial_18), (void*)L_3);
		// m_SeparableBlurMaterial = CheckShaderAndCreateMaterial (separableBlurShader, m_SeparableBlurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___separableBlurShader_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_SeparableBlurMaterial_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_4, L_5, NULL);
		__this->___m_SeparableBlurMaterial_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SeparableBlurMaterial_19), (void*)L_6);
		// m_ChromAberrationMaterial = CheckShaderAndCreateMaterial (chromAberrationShader, m_ChromAberrationMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___chromAberrationShader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_ChromAberrationMaterial_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_7, L_8, NULL);
		__this->___m_ChromAberrationMaterial_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ChromAberrationMaterial_20), (void*)L_9);
		// if (!isSupported)
		bool L_10 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_10)
		{
			goto IL_005e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_005e:
	{
		// return isSupported;
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_11;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration_OnRenderImage_m5C3262455A520C611E1C5818DA3AEBF7C5611DC6 (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral322836504097FF5183FA9B195361CABCA3C9F347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B19_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B19_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B19_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B20_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B20_3 = NULL;
	{
		// if ( CheckResources () == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		// bool  doPrepass = (Mathf.Abs(blur)>0.0f || Mathf.Abs(intensity)>0.0f);
		float L_7 = __this->___blur_11;
		float L_8;
		L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_9 = __this->___intensity_8;
		float L_10;
		L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		// float widthOverHeight = (1.0f * rtW) / (1.0f * rtH);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_11)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_12)))));
		// RenderTexture color = null;
		V_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// RenderTexture color2A = null;
		V_5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// if (doPrepass)
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01c5;
		}
	}
	{
		// color = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_16, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_14, L_15, 0, L_17, NULL);
		V_4 = L_18;
		// if (Mathf.Abs (blur)>0.0f)
		float L_19 = __this->___blur_11;
		float L_20;
		L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___source0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_23, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_21/2)), ((int32_t)(L_22/2)), 0, L_24, NULL);
		V_5 = L_25;
		// Graphics.Blit (source, color2A, m_ChromAberrationMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___m_ChromAberrationMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_26, L_27, L_28, 0, NULL);
		// for(int i = 0; i < 2; i++)
		V_6 = 0;
		goto IL_0170;
	}

IL_00b4:
	{
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (0.0f, blurSpread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___m_SeparableBlurMaterial_19;
		float L_30 = __this->___blurSpread_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_31), (0.0f), ((float)il2cpp_codegen_multiply(L_30, (0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_29, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_31, NULL);
		// RenderTexture color2B = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = ___source0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_34, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36;
		L_36 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_32/2)), ((int32_t)(L_33/2)), 0, L_35, NULL);
		V_7 = L_36;
		// Graphics.Blit (color2A, color2B, m_SeparableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___m_SeparableBlurMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_37, L_38, L_39, NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_40, NULL);
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (blurSpread * oneOverBaseSize / widthOverHeight, 0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___m_SeparableBlurMaterial_19;
		float L_42 = __this->___blurSpread_12;
		float L_43 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_44), ((float)(((float)il2cpp_codegen_multiply(L_42, (0.001953125f)))/L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_41, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_44, NULL);
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_47, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49;
		L_49 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_45/2)), ((int32_t)(L_46/2)), 0, L_48, NULL);
		V_5 = L_49;
		// Graphics.Blit (color2B, color2A, m_SeparableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___m_SeparableBlurMaterial_19;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_50, L_51, L_52, NULL);
		// RenderTexture.ReleaseTemporary (color2B);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_7;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_53, NULL);
		// for(int i = 0; i < 2; i++)
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0170:
	{
		// for(int i = 0; i < 2; i++)
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00b4;
		}
	}

IL_0178:
	{
		// m_VignetteMaterial.SetFloat ("_Intensity", intensity);        // intensity for vignette
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___m_VignetteMaterial_18;
		float L_57 = __this->___intensity_8;
		NullCheck(L_56);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_56, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_57, NULL);
		// m_VignetteMaterial.SetFloat ("_Blur", blur);                    // blur intensity
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = __this->___m_VignetteMaterial_18;
		float L_59 = __this->___blur_11;
		NullCheck(L_58);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_58, _stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5, L_59, NULL);
		// m_VignetteMaterial.SetTexture ("_VignetteTex", color2A);    // blurred texture
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___m_VignetteMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_5;
		NullCheck(L_60);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_60, _stringLiteral322836504097FF5183FA9B195361CABCA3C9F347, L_61, NULL);
		// Graphics.Blit (source, color, m_VignetteMaterial, 0);            // prepass blit: darken & blur corners
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64 = __this->___m_VignetteMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_62, L_63, L_64, 0, NULL);
	}

IL_01c5:
	{
		// m_ChromAberrationMaterial.SetFloat ("_ChromaticAberration", chromaticAberration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___m_ChromAberrationMaterial_20;
		float L_66 = __this->___chromaticAberration_9;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C, L_66, NULL);
		// m_ChromAberrationMaterial.SetFloat ("_AxialAberration", axialAberration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___m_ChromAberrationMaterial_20;
		float L_68 = __this->___axialAberration_10;
		NullCheck(L_67);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_67, _stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A, L_68, NULL);
		// m_ChromAberrationMaterial.SetVector ("_BlurDistance", new Vector2 (-blurDistance, blurDistance));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___m_ChromAberrationMaterial_20;
		float L_70 = __this->___blurDistance_14;
		float L_71 = __this->___blurDistance_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		L_73 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_72, NULL);
		NullCheck(L_69);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_69, _stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64, L_73, NULL);
		// m_ChromAberrationMaterial.SetFloat ("_Luminance", 1.0f/Mathf.Max(Mathf.Epsilon, luminanceDependency));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___m_ChromAberrationMaterial_20;
		float L_75 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_76 = __this->___luminanceDependency_13;
		float L_77;
		L_77 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_75, L_76, NULL);
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B, ((float)((1.0f)/L_77)), NULL);
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_024b;
		}
	}
	{
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = V_4;
		NullCheck(L_79);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_79, 1, NULL);
		goto IL_0252;
	}

IL_024b:
	{
		// else source.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = ___source0;
		NullCheck(L_80);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_80, 1, NULL);
	}

IL_0252:
	{
		// Graphics.Blit (doPrepass ? color : source, destination, m_ChromAberrationMaterial, mode == AberrationMode.Advanced ? 2 : 1);
		bool L_81 = V_2;
		if (L_81)
		{
			goto IL_0258;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = ___source0;
		G_B17_0 = L_82;
		goto IL_025a;
	}

IL_0258:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = V_4;
		G_B17_0 = L_83;
	}

IL_025a:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___m_ChromAberrationMaterial_20;
		int32_t L_86 = __this->___mode_7;
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((((int32_t)L_86) == ((int32_t)1)))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_026d;
		}
	}
	{
		G_B20_0 = 1;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_026e;
	}

IL_026d:
	{
		G_B20_0 = 2;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_026e:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		// RenderTexture.ReleaseTemporary (color);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_87, NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_88 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_88, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration__ctor_m3DA6B990E322E0336C4040A1F6A40016E930A20A (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.375f;                    // intensity == 0 disables pre pass (optimization)
		__this->___intensity_8 = (0.375f);
		// public float chromaticAberration = 0.2f;
		__this->___chromaticAberration_9 = (0.200000003f);
		// public float axialAberration = 0.5f;
		__this->___axialAberration_10 = (0.5f);
		// public float blurSpread = 0.75f;
		__this->___blurSpread_12 = (0.75f);
		// public float luminanceDependency = 0.25f;
		__this->___luminanceDependency_13 = (0.25f);
		// public float blurDistance = 2.5f;
		__this->___blurDistance_14 = (2.5f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex_OnRenderImage_m9E5533007C6B15733582D6DBE20CE932EE9C2CFD (Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex__ctor_m1E336A10B273F31D568CC82C1C5CEBB927402DD6 (Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 radius = new Vector2(0.4F,0.4F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2 center = new Vector2(0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_mA0CB06BE093AC878BF534BBD84243381FD3B77DC (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->___axisName_4;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_3, L_2, NULL);
		__this->___m_Axis_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = __this->___m_Axis_9;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_4, NULL);
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0(L_5, NULL);
		__this->___m_Axis_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		V_0 = ((AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___axisName_4;
		String_t* L_9 = __this->___axisName_4;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, __this, NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->___m_PairedWith_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PairedWith_8), (void*)L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_m8AA98C419101C6E74916DCC6D374FAA16E2447E6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	{
		// m_Axis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		NullCheck(L_0);
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_mEAFB55F3168F0EB8686D4DD6806F1D6E7CEA587F (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_0 = __this->___m_PairedWith_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_Axis_9;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_3, NULL);
		float L_5 = __this->___axisValue_5;
		float L_6 = __this->___responseSpeed_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8;
		L_8 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mC153F4DEF33CD567AAC5F34655C9800A937D5921 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_Axis_9;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_1, NULL);
		float L_3 = __this->___responseSpeed_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5;
		L_5 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_m9AF8E700094EE8527AB82CEBDB0A44DA0C95AF5C (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->___axisName_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisName_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float axisValue = 1; // The axis that the value has
		__this->___axisValue_5 = (1.0f);
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->___responseSpeed_6 = (3.0f);
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->___returnToCentreSpeed_7 = (3.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_m21C7296FBD3571A6B202081ACD849E1F7D1BE1BE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_m2D3541EE8B5D405AED991208F80E878C6ED20476 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m929AE70FC12438D4C1A1CE08ED2F50486A349DF3 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_mD39C82A2278A40FF24C07F4ACA2CE50F7D781C07 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_m64A43BE9D146431594B57B87BB2F06C513BC7DAE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_m9BE3FEF95560F79235800816EC2550D1BFA15D21 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_m2222E2C4831F0A1CC88D1632E831845549903F29 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m5D30325215B941B3A4F4DDBB1579D011CA20B6E1 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m33746463243A0E08FFB62BBA37D748B8AD555B12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* L_0 = (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C*)il2cpp_codegen_object_new(MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4(L_0, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1), (void*)L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* L_1 = (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100*)il2cpp_codegen_object_new(StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB(L_1, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2), (void*)L_1);
		// activeInput = s_HardwareInput;
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m0EF5871383993606792E15D981EB3F8E80B7D21E (int32_t ___activeInputMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_3 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_mC20C99C73743856EE697EEBA83EA2208CE336A81 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2;
		L_2 = VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3;
		L_3 = VirtualFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_mD402C26AEAD64708BE60A84F3B16BE4C186AE920 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m9B8928DC7CBC33DA6CC7350B42208BE838030577 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m6C03EE4715D687BD60050AE4B18956D9D6B6D970 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C (String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CrossPlatformInputManager_get_mousePosition_m325A1685C29391023DB1F369D4857424E0EC8510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9 (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70 (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C(L_0, L_1, NULL);
		// }
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mEBE9F18357FD0B69593E8AB20379A5A5926AD589 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m59B8215B9A49709B9D299317ECB152C316625559_inline (float ___d0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a1;
		float L_1 = L_0.___x_1;
		float L_2 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a1;
		float L_4 = L_3.___y_2;
		float L_5 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a1;
		float L_7 = L_6.___z_3;
		float L_8 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a1;
		float L_10 = L_9.___w_4;
		float L_11 = ___d0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
