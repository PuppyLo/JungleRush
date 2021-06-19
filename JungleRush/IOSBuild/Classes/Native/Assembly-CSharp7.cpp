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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t3FAA4B66C9DD0C4ADBCB3580309DA7AD69869656;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2;
// System.Func`2<UnityEngine.GameObject,UnityEngine.Texture2D>
struct Func_2_t9A793B8D8B220BA4C20FD5F06E5876D5AFE91767;
// System.Func`2<dotmob.Scripts.Items.Item,System.Boolean>
struct Func_2_t16BBF17ED2924F2640A8B6F37EEB61CF442ECB32;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<dotmob.Scripts.Blocks.Square,System.Boolean>
struct Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8;
// System.Func`2<dotmob.Scripts.Blocks.Square,UnityEngine.GameObject>
struct Func_2_t74FC3EC9AE3C8FEF705EF0EFF243620BCEE67BAA;
// System.Func`2<dotmob.Scripts.Blocks.Square,System.Int32>
struct Func_2_t364BB9E36A0247E00B44808246A293DB984AE2C0;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<dotmob.Scripts.Blocks.Square>
struct IEnumerable_1_t3F9B6AD3E6DA0E252EEEB087E6371A3AF2F786E7;
// System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents>
struct List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3;
// System.Collections.Generic.List`1<dotmob.Scripts.Level.FieldBoard>
struct List_1_t6A9E4047DAAA6E143DA380A58A7B59B9E06EBBCE;
// System.Collections.Generic.List`1<dotmob.Scripts.Items.GameBlocker>
struct List_1_tBD268DF68BE64C3323734691DDF41470B5BC1261;
// System.Collections.Generic.List`1<dotmob.Scripts.GUI.GemProduct>
struct List_1_t6199D346BB65DAE7FE5E06ED848EDAC431723204;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t7A2862D2AAD57E866E19CD89DB43D0E938C3BE7E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>
struct List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE3C1BF0FFDB53459E19513739DF65417A1EA98BE;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// dotmob.Scripts.AdsEvents.AdEvents[]
struct AdEventsU5BU5D_t9D34A7F424838037F4DD810FD6632E9158A05206;
// dotmob.Scripts.GUI.Boost.BoostIcon[]
struct BoostIconU5BU5D_tEF703EDA538BD4561780645E8C35A688A0FF9CF1;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// dotmob.Scripts.Blocks.Square[]
struct SquareU5BU5D_t4D5015C6330E349548BC51E8758675521260C033;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// dotmob.Scripts.AdsEvents.AdEvents
struct AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// dotmob.Scripts.AdsEvents.AdManagerScriptable
struct AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D;
// GoogleMobileAds.Api.AdSize
struct AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E;
// dotmob.Scripts.AdsEvents.AdsManager
struct AdsManager_tA0205B508D779282862DE73768A41DCBC076B463;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// dotmob.Scripts.GUI.Boost.BoostIcon
struct BoostIcon_tD387C8F3B65E3D4A0EA0EF6DC4D82D6E0F1BA0A0;
// dotmob.Scripts.System.Combiner.CombineManager
struct CombineManager_t44461D52261763C6CC4A7F02B15E4D72421A4F94;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// dotmob.Scripts.System.DebugSettings
struct DebugSettings_tDA1CB2008DE4A49C0888089510DF67DB1A06D84A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// dotmob.Scripts.Level.FieldBoard
struct FieldBoard_tC45A5D688F734CA6D34FB4E88C02EB2FB8CD1AD3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_tE7881EFC62251CF9DB847E1AD5BB35637ADAE1DA;
// IColorableComponent
struct IColorableComponent_tF7730E5087D34E9ABCC7CA38C786E0F75B97BA18;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tE00668524FE92327099CC3D63D14A78BA3D4A394;
// GoogleMobileAds.Common.IRewardBasedVideoAdClient
struct IRewardBasedVideoAdClient_tA1A9D196C3F81FE1F016F061E88375F40AAF6B3B;
// dotmob.Scripts.Core.InitScript
struct InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// dotmob.Scripts.Items.Item
struct Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52;
// dotmob.Scripts.Level.ItemForEditor
struct ItemForEditor_tE6BE64699CBAB74BB072F1AC5911501D62376D33;
// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3;
// DentedPixel.LeanPool
struct LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416;
// dotmob.Scripts.Level.LevelData
struct LevelData_t29577FCD36F0B38921885E0F859231DC011DCA49;
// dotmob.Scripts.Core.LevelManager
struct LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C;
// dotmob.Scripts.GUI.LifeShop
struct LifeShop_t3C23D63E598F62E8595AF116582F7BE3458FE8B6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// dotmob.Scripts.System.Orientation.OrientationGameCameraHandle
struct OrientationGameCameraHandle_tF587279914E152DCEA547AC65E5B25EE382CFBD6;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
// GoogleMobileAds.Api.Reward
struct Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC;
// GoogleMobileAds.Api.RewardBasedVideoAd
struct RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// dotmob.Scripts.Blocks.Square
struct Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E;
// System.String
struct String_t;
// dotmob.Scripts.Blocks.SubSquare
struct SubSquare_tF78A859DE9F44B0136A4D8D5322E237DDE1A7C6C;
// dotmob.Scripts.Effects.TeleportDirector
struct TeleportDirector_t3DF3C339960287F5C3591EFF9F467E3AA75CE5D0;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// dotmob.Scripts.Blocks.ThrivingBlock
struct ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB;
// dotmob.Scripts.Core.LevelManager/GameStateEvents
struct GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1;
// dotmob.Scripts.Blocks.Square/<>c
struct U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t0D515968F468DFFFB3FA075B4DD1D7918B29C4AE;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t40A4DF52281954BCCBFDFDE8798FDA3A0F7F97A6;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t1BFDE24F1F5E00EDD2FA99B731630C8C9B3C5D30;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_1
struct U3CU3Ec__DisplayClass69_1_tFD82F2D09D3CEBCC4CDAE63504854B99317116E2;
// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2
struct U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938;
// dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28
struct U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC;
// dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5
struct U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7;

IL2CPP_EXTERN_C RuntimeClass* AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_tD063AA6BD86518E9E6AE91B99A50BDB47B1F48D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32;
IL2CPP_EXTERN_C String_t* _stringLiteral52E7CF01D22BBF27A953B993F4F0C85E75B2182F;
IL2CPP_EXTERN_C String_t* _stringLiteral66CD390C1DF5D5A2179696D221AEEDA7931976F5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D251CAA5442FC19B4B92F40EC601BD44B4FF638;
IL2CPP_EXTERN_C String_t* _stringLiteral791008188E7D477683B8CE2AF398979C27B5D5C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E71BD52EBD1C1F83FA15892E06D87CA236B5C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralA890CBFA3BB681CFB8E158C428E66E16A13F6FC5;
IL2CPP_EXTERN_C String_t* _stringLiteralAD119D6F00A699068A3E67CEC4C28369B6643637;
IL2CPP_EXTERN_C String_t* _stringLiteralC05A617065ED2AF85E03C7D13C1E99DE7BF98648;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CF69D391181E619DD40FF4A9E7623149D7E5E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE294E3DD7BBA01E0CAC66B18E937A83ED15F23E8;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleRewardBasedVideoClosed_m311CE96BC8E41F1637C588A68F5C1552EB05BF8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleRewardBasedVideoFailedToLoad_mFE1FAB1AF93404B12D6F5E35EF28A434803ACDDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleRewardBasedVideoLoaded_m0C7E8725294E5A9DD1FFB75616EFF62219B1B4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdsManager_HandleRewardBasedVideoRewarded_m20513F3E5EB61E7D729A29E0B344F50AEF46611A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6CFAF7B3DDA751339CA604EA4A37F27DA4B8ABB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53608265CF0C40A5596666498B2BBF1D4362EF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mECF1FA98EBFBA63A8AB2FD28AA266CA907AD2E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mA73F777F555ED5E91915DD5F2C66ECDDDA9AF06A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF4FDBC3F8489FBDF03288F72EE373A12E434CAA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433_m26AFEF5414DBB108387E24513685BF2C891E4CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckNullItemU3Ed__28_System_Collections_IEnumerator_Reset_m6F1CA18BCB0A455325E8221195D6EB0CED192EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_2_U3CGetGroupsSquareU3Eb__6_m51B2A2625240D9F3E4F9401EC88E8AAA787C8FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CblockCreatedCDU3Ed__5_System_Collections_IEnumerator_Reset_mB1D8B36961869DA51D5D0C9A78AEE2D506F742DF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents>
struct List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AdEventsU5BU5D_t9D34A7F424838037F4DD810FD6632E9158A05206* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;
};

struct List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_StaticFields
{
	// T[] System.Collections.Generic.List`1::_emptyArray
	AdEventsU5BU5D_t9D34A7F424838037F4DD810FD6632E9158A05206* ____emptyArray_5;
};

// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>
struct List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SquareU5BU5D_t4D5015C6330E349548BC51E8758675521260C033* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;
};

struct List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56_StaticFields
{
	// T[] System.Collections.Generic.List`1::_emptyArray
	SquareU5BU5D_t4D5015C6330E349548BC51E8758675521260C033* ____emptyArray_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLeavingApplication
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLeavingApplication_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_t3FAA4B66C9DD0C4ADBCB3580309DA7AD69869656 * ___OnPaidEvent_6;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___Empty_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLeavingApplication
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLeavingApplication_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_t3FAA4B66C9DD0C4ADBCB3580309DA7AD69869656 * ___OnPaidEvent_6;
};

// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3  : public RuntimeObject
{
};

// DentedPixel.LeanPool
struct LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416  : public RuntimeObject
{
	// UnityEngine.GameObject[] DentedPixel.LeanPool::array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___array_0;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> DentedPixel.LeanPool::oldestItems
	Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * ___oldestItems_1;
	// System.Int32 DentedPixel.LeanPool::retrieveIndex
	int32_t ___retrieveIndex_2;
};

// GoogleMobileAds.Api.RewardBasedVideoAd
struct RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardBasedVideoAdClient GoogleMobileAds.Api.RewardBasedVideoAd::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdStarted
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdStarted_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdRewarded
	EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 * ___OnAdRewarded_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdLeavingApplication
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdLeavingApplication_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdCompleted
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___OnAdCompleted_9;
};

struct RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_StaticFields
{
	// GoogleMobileAds.Api.RewardBasedVideoAd GoogleMobileAds.Api.RewardBasedVideoAd::instance
	RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * ___instance_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// dotmob.Scripts.Blocks.Square/<>c
struct U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814  : public RuntimeObject
{
};

struct U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_StaticFields
{
	// dotmob.Scripts.Blocks.Square/<>c dotmob.Scripts.Blocks.Square/<>c::<>9
	U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * ___U3CU3E9_0;
	// System.Func`2<dotmob.Scripts.Items.Item,System.Boolean> dotmob.Scripts.Blocks.Square/<>c::<>9__31_0
	Func_2_t16BBF17ED2924F2640A8B6F37EEB61CF442ECB32 * ___U3CU3E9__31_0_1;
	// System.Func`2<dotmob.Scripts.Blocks.Square,System.Int32> dotmob.Scripts.Blocks.Square/<>c::<>9__47_1
	Func_2_t364BB9E36A0247E00B44808246A293DB984AE2C0 * ___U3CU3E9__47_1_2;
	// System.Func`2<dotmob.Scripts.Blocks.Square,System.Boolean> dotmob.Scripts.Blocks.Square/<>c::<>9__48_0
	Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 * ___U3CU3E9__48_0_3;
	// System.Func`2<dotmob.Scripts.Blocks.Square,System.Int32> dotmob.Scripts.Blocks.Square/<>c::<>9__50_1
	Func_2_t364BB9E36A0247E00B44808246A293DB984AE2C0 * ___U3CU3E9__50_1_4;
	// System.Func`2<dotmob.Scripts.Blocks.Square,UnityEngine.GameObject> dotmob.Scripts.Blocks.Square/<>c::<>9__79_0
	Func_2_t74FC3EC9AE3C8FEF705EF0EFF243620BCEE67BAA * ___U3CU3E9__79_0_5;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.Texture2D> dotmob.Scripts.Blocks.Square/<>c::<>9__82_0
	Func_2_t9A793B8D8B220BA4C20FD5F06E5876D5AFE91767 * ___U3CU3E9__82_0_6;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.Texture2D> dotmob.Scripts.Blocks.Square/<>c::<>9__82_1
	Func_2_t9A793B8D8B220BA4C20FD5F06E5876D5AFE91767 * ___U3CU3E9__82_1_7;
};

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t40A4DF52281954BCCBFDFDE8798FDA3A0F7F97A6  : public RuntimeObject
{
	// System.Int32 dotmob.Scripts.Blocks.Square/<>c__DisplayClass48_0::color
	int32_t ___color_0;
};

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t1BFDE24F1F5E00EDD2FA99B731630C8C9B3C5D30  : public RuntimeObject
{
	// System.Int32 dotmob.Scripts.Blocks.Square/<>c__DisplayClass49_0::color
	int32_t ___color_0;
};

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC  : public RuntimeObject
{
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<>4__this
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square> dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::group
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___group_1;
};

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_1
struct U3CU3Ec__DisplayClass69_1_tFD82F2D09D3CEBCC4CDAE63504854B99317116E2  : public RuntimeObject
{
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_1::sq
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___sq_0;
};

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2
struct U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938  : public RuntimeObject
{
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2::i
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i_0;
};

// dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28
struct U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC  : public RuntimeObject
{
	// System.Int32 dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::<>4__this
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___U3CU3E4__this_2;
};

// dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5
struct U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7  : public RuntimeObject
{
	// System.Int32 dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
};

// System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.AdsEvents.AdEvents>
struct Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * ___current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;
};

// System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.Blocks.Square>
struct Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___MaxValue_32;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_StaticFields
{
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;
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
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974  ___identityQuaternion_4;
};

// GoogleMobileAds.Api.Reward
struct Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
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
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___s_Right_7;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___negativeInfinityVector_14;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792__padding[36];
	};
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::24380256335663D1730AF34E4F1603578B208A2C9A247C7FB8C532D6AECD9CBE
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___24380256335663D1730AF34E4F1603578B208A2C9A247C7FB8C532D6AECD9CBE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::4D14BE98CA7F22D9F436819C74E56DEA15C0C15E252C06D48F04D9247D7862AA
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___4D14BE98CA7F22D9F436819C74E56DEA15C0C15E252C06D48F04D9247D7862AA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::86DC3035F2C208077D54F13FBFAE38968B936FA5DC97124B34FC6880569A2C88
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___86DC3035F2C208077D54F13FBFAE38968B936FA5DC97124B34FC6880569A2C88_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::8AC46B01BC2C53151E850B7294DB3F1B143DE3DBB0D492513F17FD9EB9C6CA4C
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___8AC46B01BC2C53151E850B7294DB3F1B143DE3DBB0D492513F17FD9EB9C6CA4C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::9DD401EB4F76F2748F3B790EE89A9918A1DA709681823C69268CC76E01CB8281
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___9DD401EB4F76F2748F3B790EE89A9918A1DA709681823C69268CC76E01CB8281_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::A5FF4752CA898B0154C4DF5FC8DC1FDD9ABA153B6C18AEBB23C73EDA593ADA9E
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___A5FF4752CA898B0154C4DF5FC8DC1FDD9ABA153B6C18AEBB23C73EDA593ADA9E_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::B789241CB50439F3E15C8BCBC6BD2C9A1BE8531D548FDFE02599126268E8BD61
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___B789241CB50439F3E15C8BCBC6BD2C9A1BE8531D548FDFE02599126268E8BD61_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BD82CF0A7C46D191A0B0154E8DB8FE77157045EA63BF37D5B92FC221EECB3DAC
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___BD82CF0A7C46D191A0B0154E8DB8FE77157045EA63BF37D5B92FC221EECB3DAC_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::EBC9FD0146BEDF2F10AC1878BE9C9536E6F423FAC2C0A2CBB1767A7108166483
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792  ___EBC9FD0146BEDF2F10AC1878BE9C9536E6F423FAC2C0A2CBB1767A7108166483_8;
};

// GoogleMobileAds.Api.AdPosition
struct AdPosition_tEE94EBFB41406A479317E250F5F4AAE750311164 
{
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;
};

// dotmob.Scripts.AdsEvents.AdType
struct AdType_t4C4838BF0A1420ABF439E6F029F3C6D82A6F9071 
{
	// System.Int32 dotmob.Scripts.AdsEvents.AdType::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
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
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;
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
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
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
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	int32_t ___method_is_virtual_10;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// dotmob.Scripts.Core.GameState
struct GameState_tD063AA6BD86518E9E6AE91B99A50BDB47B1F48D2 
{
	// System.Int32 dotmob.Scripts.Core.GameState::value__
	int32_t ___value___2;
};

// GoogleMobileAds.Api.Gender
struct Gender_tF4B6F4A8729DB58CA970305EFF37E99DC4378317 
{
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___2;
};

// dotmob.Scripts.Items.ItemsTypes
struct ItemsTypes_t0C084C44AB3CC15F1999941BE223A8E6A7A72F92 
{
	// System.Int32 dotmob.Scripts.Items.ItemsTypes::value__
	int32_t ___value___2;
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

// GoogleMobileAds.Api.Orientation
struct Orientation_t57C7972DDBF18E7DB221C55995DFD611C612AD06 
{
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;
};

// dotmob.Scripts.Core.RewardsType
struct RewardsType_tC8DA25DD79B51BB98E6C14F06FD5345D8F6F67F2 
{
	// System.Int32 dotmob.Scripts.Core.RewardsType::value__
	int32_t ___value___2;
};

// dotmob.Scripts.Blocks.SquareTypes
struct SquareTypes_t0F1045CFA0BC1DC1A729870D4D93F2F7E4EA3182 
{
	// System.Int32 dotmob.Scripts.Blocks.SquareTypes::value__
	int32_t ___value___2;
};

// GoogleMobileAds.Api.AdSize/Type
struct Type_tA7FB8D25F713B73607F61A81DAF441CC7CB5A385 
{
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;
};

// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct Nullable_1_t7FC9CFBC3C58BE954F244EC825DF5AD481DE74D6 
{
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;
};

// dotmob.Scripts.AdsEvents.AdEvents
struct AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F  : public RuntimeObject
{
	// dotmob.Scripts.Core.GameState dotmob.Scripts.AdsEvents.AdEvents::gameEvent
	int32_t ___gameEvent_0;
	// dotmob.Scripts.AdsEvents.AdType dotmob.Scripts.AdsEvents.AdEvents::adType
	int32_t ___adType_1;
	// System.Int32 dotmob.Scripts.AdsEvents.AdEvents::everyLevel
	int32_t ___everyLevel_2;
	// System.Int32 dotmob.Scripts.AdsEvents.AdEvents::calls
	int32_t ___calls_3;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;
};

struct AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
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
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_11;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// dotmob.Scripts.Blocks.Square/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t0D515968F468DFFFB3FA075B4DD1D7918B29C4AE  : public RuntimeObject
{
	// dotmob.Scripts.Blocks.SquareTypes dotmob.Scripts.Blocks.Square/<>c__DisplayClass37_0::_type
	int32_t ____type_0;
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2  : public MulticastDelegate_t
{
};

// System.Func`2<dotmob.Scripts.Blocks.Square,System.Boolean>
struct Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8  : public MulticastDelegate_t
{
};

// dotmob.Scripts.AdsEvents.AdManagerScriptable
struct AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents> dotmob.Scripts.AdsEvents.AdManagerScriptable::adsEvents
	List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * ___adsEvents_4;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobBannerAndroid
	String_t* ___admobBannerAndroid_5;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobBannerIOS
	String_t* ___admobBannerIOS_6;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobUIDAndroid
	String_t* ___admobUIDAndroid_7;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobUIDIOS
	String_t* ___admobUIDIOS_8;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobRewardedUIDAndroid
	String_t* ___admobRewardedUIDAndroid_9;
	// System.String dotmob.Scripts.AdsEvents.AdManagerScriptable::admobRewardedUIDIOS
	String_t* ___admobRewardedUIDIOS_10;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t7FC9CFBC3C58BE954F244EC825DF5AD481DE74D6  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 * ___U3CExtrasU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t7A2862D2AAD57E866E19CD89DB43D0E938C3BE7E * ___U3CMediationExtrasU3Ek__BackingField_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<TestDevices>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD * ___U3CTestDevicesU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::<Birthday>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC  ___U3CBirthdayU3Ek__BackingField_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::<Gender>k__BackingField
	Nullable_1_t7FC9CFBC3C58BE954F244EC825DF5AD481DE74D6  ___U3CGenderU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::<ChildDirectedTreatmentTag>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01  ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83 * ___U3CExtrasU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t7A2862D2AAD57E866E19CD89DB43D0E938C3BE7E * ___U3CMediationExtrasU3Ek__BackingField_6;
};

// dotmob.Scripts.Core.LevelManager/GameStateEvents
struct GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1  : public MulticastDelegate_t
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
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E * ___m_SpriteChangeEvent_4;
};

// dotmob.Scripts.AdsEvents.AdsManager
struct AdsManager_tA0205B508D779282862DE73768A41DCBC076B463  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents> dotmob.Scripts.AdsEvents.AdsManager::adsEvents
	List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * ___adsEvents_5;
	// System.Boolean dotmob.Scripts.AdsEvents.AdsManager::enableUnityAds
	bool ___enableUnityAds_6;
	// System.Boolean dotmob.Scripts.AdsEvents.AdsManager::enableGoogleMobileAds
	bool ___enableGoogleMobileAds_7;
	// System.Boolean dotmob.Scripts.AdsEvents.AdsManager::enableChartboostAds
	bool ___enableChartboostAds_8;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::rewardedVideoZone
	String_t* ___rewardedVideoZone_9;
	// GoogleMobileAds.Api.InterstitialAd dotmob.Scripts.AdsEvents.AdsManager::interstitial
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * ___interstitial_10;
	// GoogleMobileAds.Api.BannerView dotmob.Scripts.AdsEvents.AdsManager::banner
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * ___banner_11;
	// GoogleMobileAds.Api.AdRequest dotmob.Scripts.AdsEvents.AdsManager::requestAdmob
	AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * ___requestAdmob_12;
	// GoogleMobileAds.Api.RewardBasedVideoAd dotmob.Scripts.AdsEvents.AdsManager::admobRewardedVideo
	RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * ___admobRewardedVideo_13;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobUIDAndroid
	String_t* ___admobUIDAndroid_14;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobRewardedUIDAndroid
	String_t* ___admobRewardedUIDAndroid_15;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobUIDIOS
	String_t* ___admobUIDIOS_16;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobRewardedUIDIOS
	String_t* ___admobRewardedUIDIOS_17;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobBannerAndroid
	String_t* ___admobBannerAndroid_18;
	// System.String dotmob.Scripts.AdsEvents.AdsManager::admobBannerIOS
	String_t* ___admobBannerIOS_19;
	// dotmob.Scripts.AdsEvents.AdManagerScriptable dotmob.Scripts.AdsEvents.AdsManager::adsSettings
	AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * ___adsSettings_20;
};

struct AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_StaticFields
{
	// dotmob.Scripts.AdsEvents.AdsManager dotmob.Scripts.AdsEvents.AdsManager::THIS
	AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * ___THIS_4;
};

// dotmob.Scripts.Core.InitScript
struct InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// dotmob.Scripts.Core.RewardsType dotmob.Scripts.Core.InitScript::currentReward
	int32_t ___currentReward_8;
	// System.Int32 dotmob.Scripts.Core.InitScript::CapOfLife
	int32_t ___CapOfLife_10;
	// System.Single dotmob.Scripts.Core.InitScript::TotalTimeForRestLifeHours
	float ___TotalTimeForRestLifeHours_11;
	// System.Single dotmob.Scripts.Core.InitScript::TotalTimeForRestLifeMin
	float ___TotalTimeForRestLifeMin_12;
	// System.Single dotmob.Scripts.Core.InitScript::TotalTimeForRestLifeSec
	float ___TotalTimeForRestLifeSec_13;
	// System.Int32 dotmob.Scripts.Core.InitScript::FirstGems
	int32_t ___FirstGems_14;
	// System.Int32 dotmob.Scripts.Core.InitScript::ShowRateEvery
	int32_t ___ShowRateEvery_17;
	// System.String dotmob.Scripts.Core.InitScript::RateURL
	String_t* ___RateURL_18;
	// System.String dotmob.Scripts.Core.InitScript::RateURLIOS
	String_t* ___RateURLIOS_19;
	// UnityEngine.GameObject dotmob.Scripts.Core.InitScript::rate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___rate_20;
	// System.Int32 dotmob.Scripts.Core.InitScript::rewardedGems
	int32_t ___rewardedGems_21;
	// System.Boolean dotmob.Scripts.Core.InitScript::losingLifeEveryGame
	bool ___losingLifeEveryGame_22;
	// UnityEngine.GameObject dotmob.Scripts.Core.InitScript::DailyMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___DailyMenu_23;
};

struct InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63_StaticFields
{
	// dotmob.Scripts.Core.InitScript dotmob.Scripts.Core.InitScript::Instance
	InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63 * ___Instance_4;
	// System.Int32 dotmob.Scripts.Core.InitScript::openLevel
	int32_t ___openLevel_5;
	// System.Single dotmob.Scripts.Core.InitScript::RestLifeTimer
	float ___RestLifeTimer_6;
	// System.String dotmob.Scripts.Core.InitScript::DateOfExit
	String_t* ___DateOfExit_7;
	// System.Int32 dotmob.Scripts.Core.InitScript::<lifes>k__BackingField
	int32_t ___U3ClifesU3Ek__BackingField_9;
	// System.Int32 dotmob.Scripts.Core.InitScript::Gems
	int32_t ___Gems_15;
	// System.Int32 dotmob.Scripts.Core.InitScript::waitedPurchaseGems
	int32_t ___waitedPurchaseGems_16;
};

// dotmob.Scripts.System.ItemMonoBehaviour
struct ItemMonoBehaviour_t38C44F36E7B49FA470BBB254FAC76982411FD6BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean dotmob.Scripts.System.ItemMonoBehaviour::quit
	bool ___quit_4;
};

// dotmob.Scripts.Core.LevelManager
struct LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// dotmob.Scripts.GUI.LifeShop dotmob.Scripts.Core.LevelManager::lifeShop
	LifeShop_t3C23D63E598F62E8595AF116582F7BE3458FE8B6 * ___lifeShop_5;
	// System.Boolean dotmob.Scripts.Core.LevelManager::enableInApps
	bool ___enableInApps_6;
	// System.Single dotmob.Scripts.Core.LevelManager::squareWidth
	float ___squareWidth_7;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Core.LevelManager::lastDraggedItem
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___lastDraggedItem_8;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Core.LevelManager::lastSwitchedItem
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___lastSwitchedItem_9;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::popupScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___popupScore_10;
	// System.Int32 dotmob.Scripts.Core.LevelManager::currentLevel
	int32_t ___currentLevel_11;
	// System.Int32 dotmob.Scripts.Core.LevelManager::currentSubLevel
	int32_t ___currentSubLevel_12;
	// System.Int32 dotmob.Scripts.Core.LevelManager::FailedCost
	int32_t ___FailedCost_13;
	// System.Int32 dotmob.Scripts.Core.LevelManager::ExtraFailedMoves
	int32_t ___ExtraFailedMoves_14;
	// System.Int32 dotmob.Scripts.Core.LevelManager::ExtraFailedSecs
	int32_t ___ExtraFailedSecs_15;
	// System.Collections.Generic.List`1<dotmob.Scripts.GUI.GemProduct> dotmob.Scripts.Core.LevelManager::gemsProducts
	List_1_t6199D346BB65DAE7FE5E06ED848EDAC431723204 * ___gemsProducts_16;
	// System.String[] dotmob.Scripts.Core.LevelManager::InAppIDs
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___InAppIDs_17;
	// System.Boolean dotmob.Scripts.Core.LevelManager::thrivingBlockDestroyed
	bool ___thrivingBlockDestroyed_18;
	// System.Int32 dotmob.Scripts.Core.LevelManager::BoostColorfullBomb
	int32_t ___BoostColorfullBomb_19;
	// System.Int32 dotmob.Scripts.Core.LevelManager::BoostPackage
	int32_t ___BoostPackage_20;
	// System.Int32 dotmob.Scripts.Core.LevelManager::BoostStriped
	int32_t ___BoostStriped_21;
	// System.Int32 dotmob.Scripts.Core.LevelManager::BoostMarmalade
	int32_t ___BoostMarmalade_22;
	// System.String dotmob.Scripts.Core.LevelManager::androidSharingPath
	String_t* ___androidSharingPath_23;
	// System.String dotmob.Scripts.Core.LevelManager::iosSharingPath
	String_t* ___iosSharingPath_24;
	// dotmob.Scripts.GUI.Boost.BoostIcon dotmob.Scripts.Core.LevelManager::emptyBoostIcon
	BoostIcon_tD387C8F3B65E3D4A0EA0EF6DC4D82D6E0F1BA0A0 * ___emptyBoostIcon_25;
	// dotmob.Scripts.System.DebugSettings dotmob.Scripts.Core.LevelManager::DebugSettings
	DebugSettings_tDA1CB2008DE4A49C0888089510DF67DB1A06D84A * ___DebugSettings_26;
	// dotmob.Scripts.GUI.Boost.BoostIcon dotmob.Scripts.Core.LevelManager::activatedBoost
	BoostIcon_tD387C8F3B65E3D4A0EA0EF6DC4D82D6E0F1BA0A0 * ___activatedBoost_27;
	// System.Int32 dotmob.Scripts.Core.LevelManager::stars
	int32_t ___stars_29;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::stripesEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___stripesEffect_30;
	// System.Boolean dotmob.Scripts.Core.LevelManager::showPopupScores
	bool ___showPopupScores_31;
	// UnityEngine.Color[] dotmob.Scripts.Core.LevelManager::scoresColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___scoresColors_32;
	// UnityEngine.Color[] dotmob.Scripts.Core.LevelManager::scoresColorsOutline
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___scoresColorsOutline_33;
	// UnityEngine.GameObject[] dotmob.Scripts.Core.LevelManager::gratzWords
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gratzWords_34;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::Level
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___Level_35;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::LevelsMap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___LevelsMap_36;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::FieldsParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___FieldsParent_37;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::NoMoreMatches
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___NoMoreMatches_38;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::CompleteWord
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___CompleteWord_39;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::FailedWord
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___FailedWord_40;
	// dotmob.Scripts.GUI.Boost.BoostIcon[] dotmob.Scripts.Core.LevelManager::InGameBoosts
	BoostIconU5BU5D_tEF703EDA538BD4561780645E8C35A688A0FF9CF1* ___InGameBoosts_41;
	// dotmob.Scripts.System.Orientation.OrientationGameCameraHandle dotmob.Scripts.Core.LevelManager::orientationGameCameraHandle
	OrientationGameCameraHandle_tF587279914E152DCEA547AC65E5B25EE382CFBD6 * ___orientationGameCameraHandle_42;
	// System.Boolean dotmob.Scripts.Core.LevelManager::dragBlocked
	bool ___dragBlocked_43;
	// System.Int32 dotmob.Scripts.Core.LevelManager::moveID
	int32_t ___moveID_44;
	// System.Boolean dotmob.Scripts.Core.LevelManager::onlyFalling
	bool ___onlyFalling_45;
	// System.Boolean dotmob.Scripts.Core.LevelManager::levelLoaded
	bool ___levelLoaded_46;
	// System.Boolean dotmob.Scripts.Core.LevelManager::FacebookEnable
	bool ___FacebookEnable_47;
	// dotmob.Scripts.System.Combiner.CombineManager dotmob.Scripts.Core.LevelManager::combineManager
	CombineManager_t44461D52261763C6CC4A7F02B15E4D72421A4F94 * ___combineManager_48;
	// System.Boolean dotmob.Scripts.Core.LevelManager::findMatchesStarted
	bool ___findMatchesStarted_49;
	// System.Boolean dotmob.Scripts.Core.LevelManager::checkMatchesAgain
	bool ___checkMatchesAgain_50;
	// System.Boolean dotmob.Scripts.Core.LevelManager::testByPlay
	bool ___testByPlay_51;
	// dotmob.Scripts.Core.GameState dotmob.Scripts.Core.LevelManager::GameStatus
	int32_t ___GameStatus_64;
	// System.Collections.Generic.List`1<dotmob.Scripts.Level.FieldBoard> dotmob.Scripts.Core.LevelManager::fieldBoards
	List_1_t6A9E4047DAAA6E143DA380A58A7B59B9E06EBBCE * ___fieldBoards_65;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::FieldBoardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___FieldBoardPrefab_66;
	// dotmob.Scripts.Level.LevelData dotmob.Scripts.Core.LevelManager::levelData
	LevelData_t29577FCD36F0B38921885E0F859231DC011DCA49 * ___levelData_67;
	// System.Boolean dotmob.Scripts.Core.LevelManager::tutorialTime
	bool ___tutorialTime_68;
	// System.Boolean dotmob.Scripts.Core.LevelManager::animStarted
	bool ___animStarted_69;
	// UnityEngine.GameObject dotmob.Scripts.Core.LevelManager::winTrail
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___winTrail_70;
	// UnityEngine.Transform dotmob.Scripts.Core.LevelManager::movesTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * ___movesTransform_71;
	// System.Int32 dotmob.Scripts.Core.LevelManager::destLoopIterations
	int32_t ___destLoopIterations_72;
	// System.Collections.Generic.List`1<dotmob.Scripts.Items.GameBlocker> dotmob.Scripts.Core.LevelManager::_stopFall
	List_1_tBD268DF68BE64C3323734691DDF41470B5BC1261 * ____stopFall_73;
	// System.Int32 dotmob.Scripts.Core.LevelManager::combo
	int32_t ___combo_74;
	// UnityEngine.AnimationCurve dotmob.Scripts.Core.LevelManager::fallingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354 * ___fallingCurve_75;
	// System.Single dotmob.Scripts.Core.LevelManager::waitAfterFall
	float ___waitAfterFall_76;
	// System.Boolean dotmob.Scripts.Core.LevelManager::collectIngredients
	bool ___collectIngredients_77;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Core.LevelManager::lastTouchedItem
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___lastTouchedItem_78;
};

struct LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields
{
	// dotmob.Scripts.Core.LevelManager dotmob.Scripts.Core.LevelManager::THIS
	LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * ___THIS_4;
	// System.Int32 dotmob.Scripts.Core.LevelManager::Score
	int32_t ___Score_28;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnMapState
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnMapState_52;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnEnterGame
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnEnterGame_53;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnLevelLoaded
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnLevelLoaded_54;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnWaitForTutorial
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnWaitForTutorial_55;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnMenuPlay
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnMenuPlay_56;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnSublevelChanged
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnSublevelChanged_57;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnMenuComplete
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnMenuComplete_58;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnStartPlay
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnStartPlay_59;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnWin
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnWin_60;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnLose
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnLose_61;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnTurnEnd
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnTurnEnd_62;
	// dotmob.Scripts.Core.LevelManager/GameStateEvents dotmob.Scripts.Core.LevelManager::OnCombo
	GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___OnCombo_63;
};

// dotmob.Scripts.Blocks.Square
struct Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 dotmob.Scripts.Blocks.Square::score
	int32_t ___score_4;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Blocks.Square::item
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___item_5;
	// System.Int32 dotmob.Scripts.Blocks.Square::row
	int32_t ___row_6;
	// System.Int32 dotmob.Scripts.Blocks.Square::col
	int32_t ___col_7;
	// dotmob.Scripts.Blocks.SquareTypes dotmob.Scripts.Blocks.Square::type
	int32_t ___type_8;
	// UnityEngine.Sprite dotmob.Scripts.Blocks.Square::borderSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99 * ___borderSprite_9;
	// System.Boolean dotmob.Scripts.Blocks.Square::canMoveIn
	bool ___canMoveIn_10;
	// System.Boolean dotmob.Scripts.Blocks.Square::canMoveOut
	bool ___canMoveOut_11;
	// System.Boolean dotmob.Scripts.Blocks.Square::undestroyable
	bool ___undestroyable_12;
	// UnityEngine.Vector2 dotmob.Scripts.Blocks.Square::direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___direction_13;
	// System.Boolean dotmob.Scripts.Blocks.Square::isEnterPoint
	bool ___isEnterPoint_14;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square::enterSquare
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___enterSquare_15;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square::nextSquare
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___nextSquare_16;
	// UnityEngine.Vector2Int dotmob.Scripts.Blocks.Square::teleportDestinationCoord
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A  ___teleportDestinationCoord_17;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square::teleportDestination
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___teleportDestination_18;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square::teleportOrigin
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___teleportOrigin_19;
	// dotmob.Scripts.Level.FieldBoard dotmob.Scripts.Blocks.Square::field
	FieldBoard_tC45A5D688F734CA6D34FB4E88C02EB2FB8CD1AD3 * ___field_20;
	// UnityEngine.GameObject dotmob.Scripts.Blocks.Square::mask
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___mask_21;
	// UnityEngine.GameObject dotmob.Scripts.Blocks.Square::teleportEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___teleportEffect_22;
	// dotmob.Scripts.Effects.TeleportDirector dotmob.Scripts.Blocks.Square::teleport
	TeleportDirector_t3DF3C339960287F5C3591EFF9F467E3AA75CE5D0 * ___teleport_23;
	// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square> dotmob.Scripts.Blocks.Square::subSquares
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___subSquares_24;
	// System.Boolean dotmob.Scripts.Blocks.Square::linkedEnterSquare
	bool ___linkedEnterSquare_25;
	// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square> dotmob.Scripts.Blocks.Square::squaresGroup
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___squaresGroup_26;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> dotmob.Scripts.Blocks.Square::directionRestriction
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B * ___directionRestriction_27;
	// System.Int32 dotmob.Scripts.Blocks.Square::orderInSequence
	int32_t ___orderInSequence_28;
	// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square> dotmob.Scripts.Blocks.Square::sequence
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___sequence_29;
	// System.Int32 dotmob.Scripts.Blocks.Square::destroyIteration
	int32_t ___destroyIteration_30;
	// System.Boolean dotmob.Scripts.Blocks.Square::dontDestroyOnThisMove
	bool ___dontDestroyOnThisMove_31;
	// dotmob.Scripts.Blocks.Square[] dotmob.Scripts.Blocks.Square::sequenceBeforeThisSquare
	SquareU5BU5D_t4D5015C6330E349548BC51E8758675521260C033* ___sequenceBeforeThisSquare_32;
	// UnityEngine.GameObject dotmob.Scripts.Blocks.Square::border
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___border_33;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Blocks.Square::mainSquqre
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___mainSquqre_34;
	// UnityEngine.GameObject dotmob.Scripts.Blocks.Square::marmaladeTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___marmaladeTarget_35;
};

// dotmob.Scripts.Items.Item
struct Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52  : public ItemMonoBehaviour_t38C44F36E7B49FA470BBB254FAC76982411FD6BD
{
	// System.Int32 dotmob.Scripts.Items.Item::instanceID
	int32_t ___instanceID_5;
	// System.Boolean dotmob.Scripts.Items.Item::Combinable
	bool ___Combinable_6;
	// System.Boolean dotmob.Scripts.Items.Item::CombinableWithBonus
	bool ___CombinableWithBonus_7;
	// System.Int32 dotmob.Scripts.Items.Item::scoreForItem
	int32_t ___scoreForItem_8;
	// UnityEngine.SpriteRenderer[] dotmob.Scripts.Items.Item::SpriteRenderers
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___SpriteRenderers_9;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Items.Item::square
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___square_10;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Items.Item::previousSquare
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___previousSquare_11;
	// System.Boolean dotmob.Scripts.Items.Item::needFall
	bool ___needFall_12;
	// dotmob.Scripts.Level.FieldBoard dotmob.Scripts.Items.Item::field
	FieldBoard_tC45A5D688F734CA6D34FB4E88C02EB2FB8CD1AD3 * ___field_13;
	// System.Boolean dotmob.Scripts.Items.Item::dragThis
	bool ___dragThis_14;
	// UnityEngine.GameObject dotmob.Scripts.Items.Item::marmaladeTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___marmaladeTarget_15;
	// UnityEngine.Vector3 dotmob.Scripts.Items.Item::mousePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___mousePos_16;
	// UnityEngine.Vector3 dotmob.Scripts.Items.Item::deltaPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___deltaPos_17;
	// UnityEngine.Vector3 dotmob.Scripts.Items.Item::switchDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___switchDirection_18;
	// dotmob.Scripts.Blocks.Square dotmob.Scripts.Items.Item::neighborSquare
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___neighborSquare_19;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Items.Item::switchItem
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___switchItem_20;
	// System.Boolean dotmob.Scripts.Items.Item::falling
	bool ___falling_21;
	// dotmob.Scripts.Items.ItemsTypes dotmob.Scripts.Items.Item::nextType
	int32_t ___nextType_22;
	// dotmob.Scripts.Items.ItemsTypes dotmob.Scripts.Items.Item::currentType
	int32_t ___currentType_23;
	// dotmob.Scripts.Items.ItemsTypes dotmob.Scripts.Items.Item::debugType
	int32_t ___debugType_24;
	// UnityEngine.Transform dotmob.Scripts.Items.Item::itemAnimTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * ___itemAnimTransform_25;
	// System.Int32 dotmob.Scripts.Items.Item::orderInSequence
	int32_t ___orderInSequence_26;
	// System.Boolean dotmob.Scripts.Items.Item::canBePooled
	bool ___canBePooled_27;
	// System.Int32 dotmob.Scripts.Items.Item::COLORView
	int32_t ___COLORView_28;
	// System.Int32 dotmob.Scripts.Items.Item::COLOR
	int32_t ___COLOR_29;
	// System.Boolean dotmob.Scripts.Items.Item::justCreatedItem
	bool ___justCreatedItem_30;
	// UnityEngine.Animator dotmob.Scripts.Items.Item::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883 * ___anim_31;
	// System.Boolean dotmob.Scripts.Items.Item::destroying
	bool ___destroying_32;
	// System.Boolean dotmob.Scripts.Items.Item::animationFinished
	bool ___animationFinished_33;
	// System.Single dotmob.Scripts.Items.Item::xScale
	float ___xScale_34;
	// System.Single dotmob.Scripts.Items.Item::yScale
	float ___yScale_35;
	// System.Boolean dotmob.Scripts.Items.Item::tutorialItem
	bool ___tutorialItem_36;
	// System.Boolean dotmob.Scripts.Items.Item::tutorialUsableItem
	bool ___tutorialUsableItem_37;
	// System.Boolean dotmob.Scripts.Items.Item::globalExplEffect
	bool ___globalExplEffect_38;
	// System.Boolean dotmob.Scripts.Items.Item::destroyNext
	bool ___destroyNext_39;
	// System.Boolean dotmob.Scripts.Items.Item::dontDestroyOnThisMove
	bool ___dontDestroyOnThisMove_40;
	// dotmob.Scripts.Level.ItemForEditor dotmob.Scripts.Items.Item::itemForEditor
	ItemForEditor_tE6BE64699CBAB74BB072F1AC5911501D62376D33 * ___itemForEditor_41;
	// System.Boolean dotmob.Scripts.Items.Item::dontDestroyForThisCombine
	bool ___dontDestroyForThisCombine_42;
	// UnityEngine.Playables.PlayableDirector dotmob.Scripts.Items.Item::director
	PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475 * ___director_43;
	// UnityEngine.GameObject dotmob.Scripts.Items.Item::plusTime
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___plusTime_44;
	// UnityEngine.GameObject dotmob.Scripts.Items.Item::plusTimeObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___plusTimeObj_45;
	// System.Int32 dotmob.Scripts.Items.Item::fallingID
	int32_t ___fallingID_46;
	// UnityEngine.Vector3 dotmob.Scripts.Items.Item::defaultTransformPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___defaultTransformPosition_47;
	// UnityEngine.Vector3 dotmob.Scripts.Items.Item::defaultTransformScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2  ___defaultTransformScale_48;
	// UnityEngine.Quaternion dotmob.Scripts.Items.Item::defaultTransformRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974  ___defaultTransformRotation_49;
	// IColorableComponent dotmob.Scripts.Items.Item::colorableComponent
	IColorableComponent_tF7730E5087D34E9ABCC7CA38C786E0F75B97BA18 * ___colorableComponent_50;
	// dotmob.Scripts.Items.Item dotmob.Scripts.Items.Item::explodedItem
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___explodedItem_51;
	// System.Boolean dotmob.Scripts.Items.Item::destroycoroutineStarted
	bool ___destroycoroutineStarted_52;
};

// dotmob.Scripts.Blocks.SubSquare
struct SubSquare_tF78A859DE9F44B0136A4D8D5322E237DDE1A7C6C  : public Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E
{
};

// dotmob.Scripts.Blocks.ThrivingBlock
struct ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB  : public Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E
{
	// System.Int32 dotmob.Scripts.Blocks.ThrivingBlock::lastMoveID
	int32_t ___lastMoveID_37;
};

struct ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields
{
	// System.Boolean dotmob.Scripts.Blocks.ThrivingBlock::blockCreated
	bool ___blockCreated_36;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A  List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m08CF30C3DC301940DE97CE4583B881A3D2D9EF8C_gshared (Queue_1_tE3C1BF0FFDB53459E19513739DF65417A1EA98BE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject * ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mC6F116587F95AB2F28FC2D0C8B9502E18463CE57_gshared (Queue_1_tE3C1BF0FFDB53459E19513739DF65417A1EA98BE * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mADA83BE8BEC0E1939DC351B4B946F2B003B26F26_gshared (Queue_1_tE3C1BF0FFDB53459E19513739DF65417A1EA98BE * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean dotmob.Scripts.Blocks.Square::IsHaveSolidAbove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Square_IsHaveSolidAbove_m22F8555451BB6BB2EAC5A437AD83B4378AC52D6F (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Boolean dotmob.Scripts.Blocks.Square::IsHaveItemsAbove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Square_IsHaveItemsAbove_m07B02097BCF1D9D2D541611E05C65B89D7FE3216 (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___y1, const RuntimeMethod* method);
// dotmob.Scripts.Items.Item dotmob.Scripts.Blocks.Square::GenItem(System.Boolean,dotmob.Scripts.Items.ItemsTypes,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * Square_GenItem_m98E305D2DDC4EDC1D6B9584B9B9465CE8D445FA7 (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, bool ___falling0, int32_t ___itemType1, int32_t ___color2, const RuntimeMethod* method);
// System.Boolean dotmob.Scripts.Blocks.Square::IsHaveDestroybleObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Square_IsHaveDestroybleObstacle_m0821F989EEFCE8D96930DA17DB0DE1A558EAF5BC (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * __this, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Blocks.Square/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6822043205CF1DCA38AE6DF5A9D6B3FEB1000760 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, const RuntimeMethod* method);
// dotmob.Scripts.Items.Item dotmob.Scripts.Blocks.Square::get_Item()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B * GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B * (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99 * SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___y1, const RuntimeMethod* method);
// System.Int32 dotmob.Scripts.Items.Item::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Item_get_color_mBDD23BB06A04219D10053E382ECD3EEE99864B95 (Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * __this, const RuntimeMethod* method);
// System.Boolean dotmob.Scripts.Blocks.Square::AnyFallingItemsInSeq(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Square_AnyFallingItemsInSeq_mFB51B00449D06B555355FF29D92C329464E1B29F (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, int32_t ___color0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___rhs1, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_2__ctor_m0E884C8A68C52DC45D53B0D9AB01B5088122D9A7 (U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<dotmob.Scripts.Blocks.Square,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C (Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<dotmob.Scripts.Blocks.Square>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B (RuntimeObject* ___source0, Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 *, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>::Contains(!0)
inline bool List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80 (List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 *, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E *, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void dotmob.Scripts.Blocks.Square::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Square__ctor_m353D8C049738060820F1D1FB73E0556F8068ECD9 (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Core.LevelManager/GameStateEvents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateEvents__ctor_m8E6AAC916A16F9CC8BCBFA924AEFC142E3CFB3C8 (GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Core.LevelManager::add_OnTurnEnd(dotmob.Scripts.Core.LevelManager/GameStateEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnTurnEnd_m2AC275138116D159CD9D3D350C33AE84EA26916B (GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___value0, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Core.LevelManager::remove_OnTurnEnd(dotmob.Scripts.Core.LevelManager/GameStateEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnTurnEnd_mD1118193180D2C6376374132785FB7B3BC440982 (GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square> dotmob.Scripts.Blocks.Square::GetAllNeghborsCross()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * Square_GetAllNeghborsCross_m87ACC79C32DB776731C120E861B54492A9165ADC (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>::GetEnumerator()
inline Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290 (List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  (*) (List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 *, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.Blocks.Square>::get_Current()
inline Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_inline (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F * __this, const RuntimeMethod* method)
{
	return ((  Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * (*) (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F *, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean dotmob.Scripts.Blocks.Square::CanGoInto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Square_CanGoInto_mC5083D3DBE6C6F7E26BA03BB7014AD3386277AAD (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Blocks.Square::CreateObstacle(dotmob.Scripts.Blocks.SquareTypes,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Square_CreateObstacle_m8EAA79A2C94B117205F9C6F8560700A4838275C2 (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, int32_t ___obstacleType0, int32_t ___obLayer1, const RuntimeMethod* method);
// System.Collections.IEnumerator dotmob.Scripts.Blocks.ThrivingBlock::blockCreatedCD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThrivingBlock_blockCreatedCD_m91C583A34D9D7ACBE01E54F484F2BC48F02B64FA (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B * MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.Blocks.Square>::MoveNext()
inline bool Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9 (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F *, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.Blocks.Square>::Dispose()
inline void Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6 (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F *, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CblockCreatedCDU3Ed__5__ctor_mE47D21A25B8A5D593E92891C9619E42350D88247 (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents>::.ctor()
inline void List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0 (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 *, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<dotmob.Scripts.AdsEvents.AdManagerScriptable>(System.String)
inline AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * Resources_Load_TisAdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433_m26AFEF5414DBB108387E24513685BF2C891E4CD9 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mCDA721BC837B22E93763620A210CAD8FF00600E6 (String_t* ___appId0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, String_t* ___adUnitId0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m242CEC272D00CA6B31C63D195113F5500CBAF531 (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3 (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * __this, String_t* ___deviceId0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * Builder_AddKeyword_mD19745A31BE41674A4F702F3842B46EB9B5DE097 (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * __this, String_t* ___keyword0, const RuntimeMethod* method);
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * Builder_Build_m5A0C25E1899610BB8CB161A718BA4C2D784D318A (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mDAA6A4F35E1BCAAFA5E942862DC9EED7D251513B (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * ___request0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189 (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___value0, const RuntimeMethod* method);
// System.Void dotmob.Scripts.AdsEvents.AdsManager::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_RequestBanner_m25F882FBB2550F07CBD828EA15573F874DBEED73 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method);
// System.Void dotmob.Scripts.AdsEvents.AdsManager::RequestRewardBasedVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_RequestRewardBasedVideo_m2B7E3755F66262D4E296ABA1B56840AA52981C53 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_add_OnAdLoaded_m54662290B4C560BF995E96791E51B90009801E0D (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_add_OnAdFailedToLoad_mAC6B087094F156A8CF0D4E567DA2105EA3D8ABF1 (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA73F777F555ED5E91915DD5F2C66ECDDDA9AF06A (EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_add_OnAdRewarded_mC4F085FED097F004F5AEDE7A82383AD5C45AB764 (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_add_OnAdClosed_m97C7EEE4CFC1CC82BA0A6D22F04F30049448F7A8 (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m64CF096EF1C3ABE26015B51A72ECAB4B5EEB65CA_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m8FC4FD70255E651E7ED023D27EE2776CCFE050E8 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * __this, String_t* ___adUnitId0, AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * ___adSize1, int32_t ___position2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m5870321B868FEE4F9D32426C253D1F1904C72271 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * __this, AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * ___request0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.RewardBasedVideoAd GoogleMobileAds.Api.RewardBasedVideoAd::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * RewardBasedVideoAd_get_Instance_m78F8493821E395C35A21006AE966C239672630D7_inline (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::LoadAd(GoogleMobileAds.Api.AdRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_LoadAd_m781BC94E4295E771005B19EE6E399C81403E9CD2 (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * ___request0, String_t* ___adUnitId1, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.RewardBasedVideoAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardBasedVideoAd_IsLoaded_m116995C2889191145CF639F42A8A02792645719A (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardBasedVideoAd_Show_mAAB623994FC307770B7606F91D48E7B3CA325694 (RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * __this, const RuntimeMethod* method);
// System.Void dotmob.Scripts.Core.InitScript::ShowReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitScript_ShowReward_m07F97D0091CBE076C7D087385FA939B4513279BF (InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63 * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.Reward::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m6F1EB669A3CAEDCCF9CA973B84883EDE803BBB9F_inline (Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * __this, const RuntimeMethod* method);
// System.Double GoogleMobileAds.Api.Reward::get_Amount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m3A38A3BBD37B02C52650E5836836E126DD889977_inline (Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mE3B77178758E9D191422324F4529BE71B59724C9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<dotmob.Scripts.AdsEvents.AdEvents>::GetEnumerator()
inline Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C  List_1_GetEnumerator_mF4FDBC3F8489FBDF03288F72EE373A12E434CAA6 (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C  (*) (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 *, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.AdsEvents.AdEvents>::get_Current()
inline AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * Enumerator_get_Current_mECF1FA98EBFBA63A8AB2FD28AA266CA907AD2E2A_inline (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C * __this, const RuntimeMethod* method)
{
	return ((  AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * (*) (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C *, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowAdByType(dotmob.Scripts.AdsEvents.AdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAdByType_m98A32A8FD8E7BF961489304E4CA00071000D001A (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, int32_t ___adType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.AdsEvents.AdEvents>::MoveNext()
inline bool Enumerator_MoveNext_m53608265CF0C40A5596666498B2BBF1D4362EF3E (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C *, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<dotmob.Scripts.AdsEvents.AdEvents>::Dispose()
inline void Enumerator_Dispose_m6CFAF7B3DDA751339CA604EA4A37F27DA4B8ABB1 (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C *, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowAds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAds_m1A5D4C8675758E8B2AC12FD147233A5BBBF9621F (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, bool ___chartboost0, const RuntimeMethod* method);
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowVideo_m88A0457A15A55F06CB8C1520FA3345BE0B72C08B (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method);
// dotmob.Scripts.Core.GameState dotmob.Scripts.Core.LevelManager::get_gameStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_get_gameStatus_mD7354786119D0749B525ACF0D0C4235B90B5B2B3_inline (LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * __this, const RuntimeMethod* method);
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7 (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *, const RuntimeMethod*))Queue_1__ctor_m08CF30C3DC301940DE97CE4583B881A3D2D9EF8C_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
inline void Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8 (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *, const RuntimeMethod*))Queue_1_Enqueue_mC6F116587F95AB2F28FC2D0C8B9502E18463CE57_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698 (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * (*) (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *, const RuntimeMethod*))Queue_1_Dequeue_mADA83BE8BEC0E1939DC351B4B946F2B003B26F26_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNullItemU3Ed__28__ctor_mDAE0FF274B2ABBA1AE9DCC22DA434BD8259DA10F (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNullItemU3Ed__28_System_IDisposable_Dispose_m4E42A6B3B7F74BD67F04BABA48767AB1C013B122 (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckNullItemU3Ed__28_MoveNext_m4F2DEE437FBA0BB3794748BDAFF5B35C896170FD (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0075;
	}

IL_0020:
	{
		// if (!IsHaveSolidAbove() && !IsHaveItemsAbove() && isEnterPoint && item == null)
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Square_IsHaveSolidAbove_m22F8555451BB6BB2EAC5A437AD83B4378AC52D6F(L_4, NULL);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = Square_IsHaveItemsAbove_m07B02097BCF1D9D2D541611E05C65B89D7FE3216(L_6, NULL);
		if (L_7)
		{
			goto IL_0052;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->___isEnterPoint_14;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_10 = V_1;
		NullCheck(L_10);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_11 = L_10->___item_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// GenItem();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_13 = V_1;
		NullCheck(L_13);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_14;
		L_14 = Square_GenItem_m98E305D2DDC4EDC1D6B9584B9B9465CE8D445FA7(L_13, (bool)1, 0, (-1), NULL);
		goto IL_005a;
	}

IL_0052:
	{
		// else if (IsHaveDestroybleObstacle())
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = Square_IsHaveDestroybleObstacle_m0821F989EEFCE8D96930DA17DB0DE1A558EAF5BC(L_15, NULL);
		if (L_16)
		{
			goto IL_0083;
		}
	}

IL_005a:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663 * L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663 *)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, /*hidden argument*/NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0075:
	{
		// while (item == null)
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_18 = V_1;
		NullCheck(L_18);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_19 = L_18->___item_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		if (L_20)
		{
			goto IL_0020;
		}
	}

IL_0083:
	{
		// }
		return (bool)0;
	}
}
// System.Object dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckNullItemU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCEC4636AB80E9E0814F150EE42DB35B91413F492 (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNullItemU3Ed__28_System_Collections_IEnumerator_Reset_m6F1CA18BCB0A455325E8221195D6EB0CED192EF3 (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckNullItemU3Ed__28_System_Collections_IEnumerator_Reset_m6F1CA18BCB0A455325E8221195D6EB0CED192EF3_RuntimeMethod_var)));
	}
}
// System.Object dotmob.Scripts.Blocks.Square/<CheckNullItem>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckNullItemU3Ed__28_System_Collections_IEnumerator_get_Current_m8FCFCFB892B9E7B480737539B11C344E809C3CFC (U3CCheckNullItemU3Ed__28_t6E45E99FA17CF265D3B83ED19EEA56B4D1B4A0BC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void dotmob.Scripts.Blocks.Square/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mECBDC90E487067C83ACCF60F0C3A81DC0C1BE203 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * L_0 = (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 *)il2cpp_codegen_object_new(U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6822043205CF1DCA38AE6DF5A9D6B3FEB1000760(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void dotmob.Scripts.Blocks.Square/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6822043205CF1DCA38AE6DF5A9D6B3FEB1000760 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c::<GetIngredientItem>b__31_0(dotmob.Scripts.Items.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetIngredientItemU3Eb__31_0_m3A203283D4FCD1B5D393A56EC819D302C16782A4 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * ___i0, const RuntimeMethod* method)
{
	{
		// var fieldCount = LevelManager.THIS.field.GetItems()?.Where(i => i.currentType == ItemsTypes.INGREDIENT)?.Count() ?? 0;
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___currentType_23;
		return (bool)((((int32_t)L_1) == ((int32_t)6))? 1 : 0);
	}
}
// System.Int32 dotmob.Scripts.Blocks.Square/<>c::<GetSeqBeforeFromThis>b__47_1(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetSeqBeforeFromThisU3Eb__47_1_m979C98BDB22C24BDA71482FB2306FDD34EB1138D (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// return sq.Where(i => i.orderInSequence > orderInSequence).OrderBy(i => i.orderInSequence).ToArray();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___orderInSequence_28;
		return L_1;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c::<AnyFallingItemsInSeq>b__48_0(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAnyFallingItemsInSeqU3Eb__48_0_m6F7A6C3305B92857EFB10D889651F135F8A452FA (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B2_0 = NULL;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B1_0 = NULL;
	{
		// return sq.Any(i => i.Item?.falling ?? false);
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_1;
		L_1 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_0, NULL);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_3 = G_B2_0->___falling_21;
		return L_3;
	}
}
// System.Int32 dotmob.Scripts.Blocks.Square/<>c::<GetItemAbove>b__50_1(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetItemAboveU3Eb__50_1_m791079FDC500B10C2501444597444A0E616CBA54 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// var list = sq.Where(i => i.orderInSequence > orderInSequence).OrderBy(i => i.orderInSequence);
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___orderInSequence_28;
		return L_1;
	}
}
// UnityEngine.GameObject dotmob.Scripts.Blocks.Square/<>c::<GetBlockPrefab>b__79_0(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * U3CU3Ec_U3CGetBlockPrefabU3Eb__79_0_m9A67FC6C0EA76C7B21D662353063F1DBE05F43E3 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// list.AddRange(item1.GetComponent<LayeredBlock>().layers.Select(i => i.gameObject));
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Texture2D dotmob.Scripts.Blocks.Square/<>c::<GetSquareTextures>b__82_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * U3CU3Ec_U3CGetSquareTexturesU3Eb__82_0_m9A1C78D495AB522A0CD8F328823079FCDA53F6E5 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var textureBlocks = listBlocks.Select(i => i.GetComponent<SpriteRenderer>().sprite.texture).Take(sqBlock.blockLayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_0 = ___i0;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99 * L_2;
		L_2 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_1, NULL);
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_3;
		L_3 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Texture2D dotmob.Scripts.Blocks.Square/<>c::<GetSquareTextures>b__82_1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * U3CU3Ec_U3CGetSquareTexturesU3Eb__82_1_m0F5EDE93C9346ACEC18207A2F490B0BB8EF7B373 (U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814 * __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var textureObstacles = listObstacles.Select(i => i.GetComponent<SpriteRenderer>().sprite.texture).Take(sqBlock.obstacleLayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_0 = ___i0;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99 * L_2;
		L_2 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_1, NULL);
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_3;
		L_3 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_2, NULL);
		return L_3;
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m919E0F725CA892E78FBCF88DF0C13BC443FD8B49 (U3CU3Ec__DisplayClass37_0_t0D515968F468DFFFB3FA075B4DD1D7918B29C4AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass37_0::<IsTypeExist>b__0(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass37_0_U3CIsTypeExistU3Eb__0_m0C8E0202CAE640FD65EC2A03EDC4B47B28C88287 (U3CU3Ec__DisplayClass37_0_t0D515968F468DFFFB3FA075B4DD1D7918B29C4AE * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// return subSquares.Count(i => i.type == _type) > 0;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		int32_t L_2 = __this->____type_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m4144DB0983AB40718F0BFAC251CB1906CE7CE124 (U3CU3Ec__DisplayClass48_0_t40A4DF52281954BCCBFDFDE8798FDA3A0F7F97A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass48_0::<AnyFallingItemsInSeq>b__1(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass48_0_U3CAnyFallingItemsInSeqU3Eb__1_mDA1C7E3A03A95A824653088E068D8971349FF184 (U3CU3Ec__DisplayClass48_0_t40A4DF52281954BCCBFDFDE8798FDA3A0F7F97A6 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B3_0 = NULL;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		// var anyFallingItemsInSeq = sq.Any(i => i.Item != null && i.Item?.color == color && i.Item.falling);
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_1;
		L_1 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_3 = ___i0;
		NullCheck(L_3);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_4;
		L_4 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_3, NULL);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_001b;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		NullCheck(G_B3_0);
		int32_t L_6;
		L_6 = Item_get_color_mBDD23BB06A04219D10053E382ECD3EEE99864B95(G_B3_0, NULL);
		int32_t L_7 = __this->___color_0;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
	}

IL_0028:
	{
		if (!G_B4_0)
		{
			goto IL_0036;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_8 = ___i0;
		NullCheck(L_8);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_9;
		L_9 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_8, NULL);
		NullCheck(L_9);
		bool L_10 = L_9->___falling_21;
		return L_10;
	}

IL_0036:
	{
		return (bool)0;
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m616A67D1AF206679099D73174D6BA9821AD69C13 (U3CU3Ec__DisplayClass49_0_t1BFDE24F1F5E00EDD2FA99B731630C8C9B3C5D30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass49_0::<AnyFallingItemsAround>b__0(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass49_0_U3CAnyFallingItemsAroundU3Eb__0_m9ED367BE33B497394389294BCB9BD8B2F509AB39 (U3CU3Ec__DisplayClass49_0_t1BFDE24F1F5E00EDD2FA99B731630C8C9B3C5D30 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// return GetAllNeghborsCross().Any(i => i.AnyFallingItemsInSeq(color));
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		int32_t L_1 = __this->___color_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Square_AnyFallingItemsInSeq_mFB51B00449D06B555355FF29D92C329464E1B29F(L_0, L_1, NULL);
		return L_2;
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m7BE31F4E2D43D66B6226B29B84C0E17ED592514D (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<GetGroupsSquare>b__0(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetGroupsSquareU3Eb__0_mFBCEA9FB2A470228F9921A33B05536E022988A22 (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// list = list.Where(i => i.direction == direction).ToList();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_1 = L_0->___direction_13;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_3 = L_2->___direction_13;
		bool L_4;
		L_4 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<GetGroupsSquare>b__1(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetGroupsSquareU3Eb__1_mBEF7593486D9838AB6222713B1C20358F68F22B1 (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// list = list.Where(i => i.col == col).ToList();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___col_7;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___col_7;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<GetGroupsSquare>b__2(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetGroupsSquareU3Eb__2_m40B98A6D5553C533581F88DD30EB997BFD958C82 (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// list = list.Where(i => i.row == row).ToList();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___row_6;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___row_6;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<GetGroupsSquare>b__3(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetGroupsSquareU3Eb__3_m8684DB5A3F033245A2D1475C95BD9DC061C02607 (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	{
		// list = list.Where(i => i.direction == direction).ToList();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_1 = L_0->___direction_13;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_3 = L_2->___direction_13;
		bool L_4;
		L_4 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_0::<GetGroupsSquare>b__4(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetGroupsSquareU3Eb__4_mF0D4E395453DE8AB9A87066F101F3867726ED110 (U3CU3Ec__DisplayClass69_0_t1538710AA80BFE85A55152E90606736F694A6EBC * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_2_U3CGetGroupsSquareU3Eb__6_m51B2A2625240D9F3E4F9401EC88E8AAA787C8FA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * L_0 = (U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass69_2__ctor_m0E884C8A68C52DC45D53B0D9AB01B5088122D9A7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * L_1 = V_0;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_2 = ___i0;
		NullCheck(L_1);
		L_1->___i_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___i_0), (void*)L_2);
		// list.RemoveAll(i => group.Any(x => x.Equals(i)));
		List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * L_3 = __this->___group_1;
		U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * L_4 = V_0;
		Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 * L_5 = (Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8 *)il2cpp_codegen_object_new(Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8_il2cpp_TypeInfo_var);
		Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C(L_5, L_4, ((intptr_t)U3CU3Ec__DisplayClass69_2_U3CGetGroupsSquareU3Eb__6_m51B2A2625240D9F3E4F9401EC88E8AAA787C8FA4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C_RuntimeMethod_var);
		bool L_6;
		L_6 = Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B(L_3, L_5, Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B_RuntimeMethod_var);
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_1__ctor_m80DAEDD4881027E456F173F3AC57E0A4C6666809 (U3CU3Ec__DisplayClass69_1_tFD82F2D09D3CEBCC4CDAE63504854B99317116E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_1::<GetGroupsSquare>b__5(System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_1_U3CGetGroupsSquareU3Eb__5_m1F397ABAB0ACD83317336A2A52F1501D218FA219 (U3CU3Ec__DisplayClass69_1_tFD82F2D09D3CEBCC4CDAE63504854B99317116E2 * __this, List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// group = groups.Find(i => i.Contains(sq));
		List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * L_0 = ___i0;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_1 = __this->___sq_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80(L_0, L_1, List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80_RuntimeMethod_var);
		return L_2;
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
// System.Void dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_2__ctor_m0E884C8A68C52DC45D53B0D9AB01B5088122D9A7 (U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.Square/<>c__DisplayClass69_2::<GetGroupsSquare>b__6(dotmob.Scripts.Blocks.Square)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_2_U3CGetGroupsSquareU3Eb__6_m51B2A2625240D9F3E4F9401EC88E8AAA787C8FA4 (U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938 * __this, Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * ___x0, const RuntimeMethod* method)
{
	{
		// list.RemoveAll(i => group.Any(x => x.Equals(i)));
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___x0;
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_1 = __this->___i_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void dotmob.Scripts.Blocks.SubSquare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSquare__ctor_m2E7A91F660789751A869180F857F09A086D5314E (SubSquare_tF78A859DE9F44B0136A4D8D5322E237DDE1A7C6C * __this, const RuntimeMethod* method)
{
	{
		Square__ctor_m353D8C049738060820F1D1FB73E0556F8068ECD9(__this, NULL);
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
// System.Void dotmob.Scripts.Blocks.ThrivingBlock::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrivingBlock_OnEnable_m814604942619979766F441AD351B102AE3E1F39E (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LevelManager.OnTurnEnd += OnTurnEnd;
		GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * L_0 = (GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 *)il2cpp_codegen_object_new(GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var);
		GameStateEvents__ctor_m8E6AAC916A16F9CC8BCBFA924AEFC142E3CFB3C8(L_0, __this, ((intptr_t)ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12_RuntimeMethod_var), /*hidden argument*/NULL);
		LevelManager_add_OnTurnEnd_m2AC275138116D159CD9D3D350C33AE84EA26916B(L_0, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrivingBlock_OnDisable_mE7FB6BCD2FE7F1CE90744C433091A2EC5AD21052 (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LevelManager.OnTurnEnd -= OnTurnEnd;
		GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 * L_0 = (GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1 *)il2cpp_codegen_object_new(GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var);
		GameStateEvents__ctor_m8E6AAC916A16F9CC8BCBFA924AEFC142E3CFB3C8(L_0, __this, ((intptr_t)ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12_RuntimeMethod_var), /*hidden argument*/NULL);
		LevelManager_remove_OnTurnEnd_mD1118193180D2C6376374132785FB7B3BC440982(L_0, NULL);
		// LevelManager.THIS.thrivingBlockDestroyed = true;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_1 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_1);
		L_1->___thrivingBlockDestroyed_18 = (bool)1;
		// }
		return;
	}
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock::OnTurnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrivingBlock_OnTurnEnd_m8ED4DFAF174276EDC107DE181FE45E8BDBBF1B12 (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B12_0 = NULL;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	{
		// if (LevelManager.THIS.moveID == lastMoveID) return;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_0 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___moveID_44;
		int32_t L_2 = __this->___lastMoveID_37;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		// if (LevelManager.THIS.moveID == lastMoveID) return;
		return;
	}

IL_0013:
	{
		// lastMoveID = LevelManager.THIS.moveID;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_3 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_3);
		int32_t L_4 = L_3->___moveID_44;
		__this->___lastMoveID_37 = L_4;
		// if (LevelManager.THIS.thrivingBlockDestroyed || blockCreated) return;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_5 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_5);
		bool L_6 = L_5->___thrivingBlockDestroyed_18;
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		bool L_7 = ((ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields*)il2cpp_codegen_static_fields_for(ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var))->___blockCreated_36;
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		// if (LevelManager.THIS.thrivingBlockDestroyed || blockCreated) return;
		return;
	}

IL_0037:
	{
		// LevelManager.THIS.thrivingBlockDestroyed = false;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_8 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_8);
		L_8->___thrivingBlockDestroyed_18 = (bool)0;
		// var sqList = this.mainSquqre.GetAllNeghborsCross();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_9 = ((Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E *)__this)->___mainSquqre_34;
		NullCheck(L_9);
		List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * L_10;
		L_10 = Square_GetAllNeghborsCross_m87ACC79C32DB776731C120E861B54492A9165ADC(L_9, NULL);
		// foreach (var sq in sqList)
		NullCheck(L_10);
		Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  L_11;
		L_11 = List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290(L_10, List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290_RuntimeMethod_var);
		V_0 = L_11;
	}

IL_0053:
	try
	{// begin try (depth: 1)
		{
			goto IL_00d9;
		}

IL_0058:
		{
			// foreach (var sq in sqList)
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_12;
			L_12 = Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_inline((&V_0), Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_RuntimeMethod_var);
			V_1 = L_12;
			// if (!sq.CanGoInto() || Random.Range(0, 1) != 0 ||
			//     sq.type != SquareTypes.EmptySquare || sq.Item?.currentType != ItemsTypes.NONE) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_13 = V_1;
			NullCheck(L_13);
			bool L_14;
			L_14 = Square_CanGoInto_mC5083D3DBE6C6F7E26BA03BB7014AD3386277AAD(L_13, NULL);
			if (!L_14)
			{
				goto IL_00d9;
			}
		}

IL_0068:
		{
			int32_t L_15;
			L_15 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 1, NULL);
			if (L_15)
			{
				goto IL_00d9;
			}
		}

IL_0071:
		{
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_16 = V_1;
			NullCheck(L_16);
			int32_t L_17 = L_16->___type_8;
			if ((!(((uint32_t)L_17) == ((uint32_t)1))))
			{
				goto IL_00d9;
			}
		}

IL_007a:
		{
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_18 = V_1;
			NullCheck(L_18);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_19;
			L_19 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_18, NULL);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_20 = L_19;
			G_B11_0 = L_20;
			if (L_20)
			{
				G_B12_0 = L_20;
				goto IL_0087;
			}
		}

IL_0083:
		{
			G_B13_0 = 1;
			goto IL_008f;
		}

IL_0087:
		{
			NullCheck(G_B12_0);
			int32_t L_21 = G_B12_0->___currentType_23;
			G_B13_0 = ((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		}

IL_008f:
		{
			if (G_B13_0)
			{
				goto IL_00d9;
			}
		}

IL_0091:
		{
			// if (sq.Item == null) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_22 = V_1;
			NullCheck(L_22);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_23;
			L_23 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_22, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_24;
			L_24 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
			if (L_24)
			{
				goto IL_00d9;
			}
		}

IL_009f:
		{
			// if (sq.Item.currentType != ItemsTypes.NONE) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_25 = V_1;
			NullCheck(L_25);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_26;
			L_26 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_25, NULL);
			NullCheck(L_26);
			int32_t L_27 = L_26->___currentType_23;
			if (L_27)
			{
				goto IL_00d9;
			}
		}

IL_00ac:
		{
			// sq.CreateObstacle(SquareTypes.ThrivingBlock, 1);
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_28 = V_1;
			NullCheck(L_28);
			Square_CreateObstacle_m8EAA79A2C94B117205F9C6F8560700A4838275C2(L_28, 5, 1, NULL);
			// blockCreated = true;
			((ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields*)il2cpp_codegen_static_fields_for(ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var))->___blockCreated_36 = (bool)1;
			// StartCoroutine(blockCreatedCD());
			RuntimeObject* L_29;
			L_29 = ThrivingBlock_blockCreatedCD_m91C583A34D9D7ACBE01E54F484F2BC48F02B64FA(__this, NULL);
			Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B * L_30;
			L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
			// Destroy(sq.Item.gameObject);
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_31 = V_1;
			NullCheck(L_31);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_32;
			L_32 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline(L_31, NULL);
			NullCheck(L_32);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_33;
			L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_33, NULL);
			// break;
			IL2CPP_LEAVE(0x245, FINALLY_00e7);
		}

IL_00d9:
		{
			// foreach (var sq in sqList)
			bool L_34;
			L_34 = Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9((&V_0), Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0058;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0x245, FINALLY_00e7);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6((&V_0), Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(231)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x245, IL_00f5)
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator dotmob.Scripts.Blocks.ThrivingBlock::blockCreatedCD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThrivingBlock_blockCreatedCD_m91C583A34D9D7ACBE01E54F484F2BC48F02B64FA (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * L_0 = (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 *)il2cpp_codegen_object_new(U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7_il2cpp_TypeInfo_var);
		U3CblockCreatedCDU3Ed__5__ctor_mE47D21A25B8A5D593E92891C9619E42350D88247(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrivingBlock__ctor_mC3506AB7607030A923F9DC2462E72DAB3A5E4152 (ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * __this, const RuntimeMethod* method)
{
	{
		// int lastMoveID = -1;
		__this->___lastMoveID_37 = (-1);
		Square__ctor_m353D8C049738060820F1D1FB73E0556F8068ECD9(__this, NULL);
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
// System.Void dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CblockCreatedCDU3Ed__5__ctor_mE47D21A25B8A5D593E92891C9619E42350D88247 (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CblockCreatedCDU3Ed__5_System_IDisposable_Dispose_mEA15693F766828FF8E10BE05A60A8F1F0E297772 (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CblockCreatedCDU3Ed__5_MoveNext_m35AB0C6C0E579F2EC0242C3134567C316A8918F7 (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3 * L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3 *)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), /*hidden argument*/NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// blockCreated = false;
		((ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields*)il2cpp_codegen_static_fields_for(ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var))->___blockCreated_36 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CblockCreatedCDU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86CE24129B5D3E31EFF9DF2FF7F1E24403B8ABDA (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CblockCreatedCDU3Ed__5_System_Collections_IEnumerator_Reset_mB1D8B36961869DA51D5D0C9A78AEE2D506F742DF (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A * L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CblockCreatedCDU3Ed__5_System_Collections_IEnumerator_Reset_mB1D8B36961869DA51D5D0C9A78AEE2D506F742DF_RuntimeMethod_var)));
	}
}
// System.Object dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CblockCreatedCDU3Ed__5_System_Collections_IEnumerator_get_Current_mDAFA5171AF2ED83362981005A5175D4F6F14E953 (U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void dotmob.Scripts.AdsEvents.AdManagerScriptable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManagerScriptable__ctor_mCA0798D4795C9467A09048B5DE62DCC528F59F2E (AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<AdEvents> adsEvents = new List<AdEvents>();
		List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * L_0 = (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 *)il2cpp_codegen_object_new(List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_il2cpp_TypeInfo_var);
		List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0(L_0, /*hidden argument*/List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0_RuntimeMethod_var);
		__this->___adsEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsEvents_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void dotmob.Scripts.AdsEvents.AdEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdEvents__ctor_mABDC1207BEC2242161B28DD12DB3BE86817CF344 (AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * __this, const RuntimeMethod* method)
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
// System.Void dotmob.Scripts.AdsEvents.AdsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Awake_m075EBE2A4B8D57A1EB9ADBCFD01ACB2C1FC757B0 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisAdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433_m26AFEF5414DBB108387E24513685BF2C891E4CD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66CD390C1DF5D5A2179696D221AEEDA7931976F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (THIS == null) THIS = this;
		AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * L_0 = ((AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var))->___THIS_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (THIS == null) THIS = this;
		((AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var))->___THIS_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var))->___THIS_4), (void*)__this);
		goto IL_002e;
	}

IL_0015:
	{
		// else if(THIS != this)
		AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * L_2 = ((AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tA0205B508D779282862DE73768A41DCBC076B463_il2cpp_TypeInfo_var))->___THIS_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// adsSettings = Resources.Load<AdManagerScriptable>("Scriptable/AdManagerScriptable");
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_5;
		L_5 = Resources_Load_TisAdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433_m26AFEF5414DBB108387E24513685BF2C891E4CD9(_stringLiteral66CD390C1DF5D5A2179696D221AEEDA7931976F5, Resources_Load_TisAdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433_m26AFEF5414DBB108387E24513685BF2C891E4CD9_RuntimeMethod_var);
		__this->___adsSettings_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsSettings_20), (void*)L_5);
		// adsEvents = adsSettings.adsEvents;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_6 = __this->___adsSettings_20;
		NullCheck(L_6);
		List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * L_7 = L_6->___adsEvents_4;
		__this->___adsEvents_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsEvents_5), (void*)L_7);
		// admobUIDAndroid = adsSettings.admobUIDAndroid;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_8 = __this->___adsSettings_20;
		NullCheck(L_8);
		String_t* L_9 = L_8->___admobUIDAndroid_7;
		__this->___admobUIDAndroid_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobUIDAndroid_14), (void*)L_9);
		// admobUIDIOS = adsSettings.admobUIDIOS;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_10 = __this->___adsSettings_20;
		NullCheck(L_10);
		String_t* L_11 = L_10->___admobUIDIOS_8;
		__this->___admobUIDIOS_16 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobUIDIOS_16), (void*)L_11);
		// admobBannerAndroid = adsSettings.admobBannerAndroid;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_12 = __this->___adsSettings_20;
		NullCheck(L_12);
		String_t* L_13 = L_12->___admobBannerAndroid_5;
		__this->___admobBannerAndroid_18 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobBannerAndroid_18), (void*)L_13);
		// admobBannerIOS = adsSettings.admobBannerIOS;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_14 = __this->___adsSettings_20;
		NullCheck(L_14);
		String_t* L_15 = L_14->___admobBannerIOS_6;
		__this->___admobBannerIOS_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobBannerIOS_19), (void*)L_15);
		// admobRewardedUIDAndroid = adsSettings.admobRewardedUIDAndroid;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_16 = __this->___adsSettings_20;
		NullCheck(L_16);
		String_t* L_17 = L_16->___admobRewardedUIDAndroid_9;
		__this->___admobRewardedUIDAndroid_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobRewardedUIDAndroid_15), (void*)L_17);
		// admobRewardedUIDIOS = adsSettings.admobRewardedUIDIOS;
		AdManagerScriptable_tACE87953DD53F6A569001A87F148918E3F6D1433 * L_18 = __this->___adsSettings_20;
		NullCheck(L_18);
		String_t* L_19 = L_18->___admobRewardedUIDIOS_10;
		__this->___admobRewardedUIDIOS_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobRewardedUIDIOS_17), (void*)L_19);
		// enableUnityAds = false;
		__this->___enableUnityAds_6 = (bool)0;
		// enableChartboostAds = false;
		__this->___enableChartboostAds_8 = (bool)0;
		// enableGoogleMobileAds =true;//1.6.1
		__this->___enableGoogleMobileAds_7 = (bool)1;
		// MobileAds.Initialize(admobUIDIOS);//2.1.6
		String_t* L_20 = __this->___admobUIDIOS_16;
		MobileAds_Initialize_mCDA721BC837B22E93763620A210CAD8FF00600E6(L_20, NULL);
		// interstitial = new InterstitialAd(admobUIDIOS);
		String_t* L_21 = __this->___admobUIDIOS_16;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_22 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC *)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_22, L_21, /*hidden argument*/NULL);
		__this->___interstitial_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitial_10), (void*)L_22);
		// requestAdmob = new AdRequest.Builder()
		//          .AddTestDevice(AdRequest.TestDeviceSimulator)
		//         .AddTestDevice("0123456789ABCDEF0123456789ABCDEF")
		//         .AddKeyword("game")
		//         .Build();
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_23 = (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB *)il2cpp_codegen_object_new(Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		Builder__ctor_m242CEC272D00CA6B31C63D195113F5500CBAF531(L_23, /*hidden argument*/NULL);
		NullCheck(L_23);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_24;
		L_24 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_23, _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32, NULL);
		NullCheck(L_24);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_25;
		L_25 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_24, _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65, NULL);
		NullCheck(L_25);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_26;
		L_26 = Builder_AddKeyword_mD19745A31BE41674A4F702F3842B46EB9B5DE097(L_25, _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		NullCheck(L_26);
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_27;
		L_27 = Builder_Build_m5A0C25E1899610BB8CB161A718BA4C2D784D318A(L_26, NULL);
		__this->___requestAdmob_12 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestAdmob_12), (void*)L_27);
		// interstitial.LoadAd(requestAdmob);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_28 = __this->___interstitial_10;
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_29 = __this->___requestAdmob_12;
		NullCheck(L_28);
		InterstitialAd_LoadAd_mDAA6A4F35E1BCAAFA5E942862DC9EED7D251513B(L_28, L_29, NULL);
		// interstitial.OnAdLoaded += HandleInterstitialLoaded;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_30 = __this->___interstitial_10;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * L_31 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF *)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_31, __this, ((intptr_t)AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		NullCheck(L_30);
		InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D(L_30, L_31, NULL);
		// interstitial.OnAdFailedToLoad += HandleInterstitialFailedToLoad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_32 = __this->___interstitial_10;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * L_33 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 *)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_33, __this, ((intptr_t)AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		NullCheck(L_32);
		InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525(L_32, L_33, NULL);
		// RequestBanner();
		AdsManager_RequestBanner_m25F882FBB2550F07CBD828EA15573F874DBEED73(__this, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Start_m1E67680DDFD7691D838AE704B6C7D828024979D6 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleRewardBasedVideoClosed_m311CE96BC8E41F1637C588A68F5C1552EB05BF8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleRewardBasedVideoFailedToLoad_mFE1FAB1AF93404B12D6F5E35EF28A434803ACDDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleRewardBasedVideoLoaded_m0C7E8725294E5A9DD1FFB75616EFF62219B1B4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleRewardBasedVideoRewarded_m20513F3E5EB61E7D729A29E0B344F50AEF46611A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mA73F777F555ED5E91915DD5F2C66ECDDDA9AF06A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestRewardBasedVideo();
		AdsManager_RequestRewardBasedVideo_m2B7E3755F66262D4E296ABA1B56840AA52981C53(__this, NULL);
		// admobRewardedVideo.OnAdLoaded += HandleRewardBasedVideoLoaded;
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_0 = __this->___admobRewardedVideo_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF *)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, ((intptr_t)AdsManager_HandleRewardBasedVideoLoaded_m0C7E8725294E5A9DD1FFB75616EFF62219B1B4C5_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		NullCheck(L_0);
		RewardBasedVideoAd_add_OnAdLoaded_m54662290B4C560BF995E96791E51B90009801E0D(L_0, L_1, NULL);
		// admobRewardedVideo.OnAdFailedToLoad += HandleRewardBasedVideoFailedToLoad;
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_2 = __this->___admobRewardedVideo_13;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * L_3 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 *)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_3, __this, ((intptr_t)AdsManager_HandleRewardBasedVideoFailedToLoad_mFE1FAB1AF93404B12D6F5E35EF28A434803ACDDC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		NullCheck(L_2);
		RewardBasedVideoAd_add_OnAdFailedToLoad_mAC6B087094F156A8CF0D4E567DA2105EA3D8ABF1(L_2, L_3, NULL);
		// admobRewardedVideo.OnAdRewarded += HandleRewardBasedVideoRewarded;
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_4 = __this->___admobRewardedVideo_13;
		EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 * L_5 = (EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2 *)il2cpp_codegen_object_new(EventHandler_1_t932B18EE86BB44EA97E5109907A231ED79E37EA2_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA73F777F555ED5E91915DD5F2C66ECDDDA9AF06A(L_5, __this, ((intptr_t)AdsManager_HandleRewardBasedVideoRewarded_m20513F3E5EB61E7D729A29E0B344F50AEF46611A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mA73F777F555ED5E91915DD5F2C66ECDDDA9AF06A_RuntimeMethod_var);
		NullCheck(L_4);
		RewardBasedVideoAd_add_OnAdRewarded_mC4F085FED097F004F5AEDE7A82383AD5C45AB764(L_4, L_5, NULL);
		// admobRewardedVideo.OnAdClosed += HandleRewardBasedVideoClosed;
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_6 = __this->___admobRewardedVideo_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF *)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, ((intptr_t)AdsManager_HandleRewardBasedVideoClosed_m311CE96BC8E41F1637C588A68F5C1552EB05BF8D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		NullCheck(L_6);
		RewardBasedVideoAd_add_OnAdClosed_m97C7EEE4CFC1CC82BA0A6D22F04F30049448F7A8(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleInterstitialLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791008188E7D477683B8CE2AF398979C27B5D5C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("HandleInterstitialLoaded event received.");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral791008188E7D477683B8CE2AF398979C27B5D5C9, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleInterstitialFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05A617065ED2AF85E03C7D13C1E99DE7BF98648);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("HandleInterstitialFailedToLoad event received with message: " + args.Message);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * L_0 = ___args1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AdFailedToLoadEventArgs_get_Message_m64CF096EF1C3ABE26015B51A72ECAB4B5EEB65CA_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC05A617065ED2AF85E03C7D13C1E99DE7BF98648, L_1, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_RequestBanner_m25F882FBB2550F07CBD828EA15573F874DBEED73 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// banner = new BannerView(admobBannerIOS, AdSize.Banner, AdPosition.Bottom);
		String_t* L_0 = __this->___admobBannerIOS_19;
		il2cpp_codegen_runtime_class_init_inline(AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_il2cpp_TypeInfo_var);
		AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E * L_1 = ((AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_t32D8AA9C197FB5AF33CD28605D157632B41E8B5E_il2cpp_TypeInfo_var))->___Banner_4;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_2 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB *)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		BannerView__ctor_m8FC4FD70255E651E7ED023D27EE2776CCFE050E8(L_2, L_0, L_1, 1, /*hidden argument*/NULL);
		__this->___banner_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___banner_11), (void*)L_2);
		// requestAdmob = new AdRequest.Builder()
		//     .AddTestDevice(AdRequest.TestDeviceSimulator)
		//     .AddTestDevice("0123456789ABCDEF0123456789ABCDEF")
		//     .AddKeyword("game")
		//     .Build();
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_3 = (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB *)il2cpp_codegen_object_new(Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		Builder__ctor_m242CEC272D00CA6B31C63D195113F5500CBAF531(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_4;
		L_4 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_3, _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32, NULL);
		NullCheck(L_4);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_5;
		L_5 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_4, _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65, NULL);
		NullCheck(L_5);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_6;
		L_6 = Builder_AddKeyword_mD19745A31BE41674A4F702F3842B46EB9B5DE097(L_5, _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		NullCheck(L_6);
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_7;
		L_7 = Builder_Build_m5A0C25E1899610BB8CB161A718BA4C2D784D318A(L_6, NULL);
		__this->___requestAdmob_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestAdmob_12), (void*)L_7);
		// banner.LoadAd(requestAdmob);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_8 = __this->___banner_11;
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_9 = __this->___requestAdmob_12;
		NullCheck(L_8);
		BannerView_LoadAd_m5870321B868FEE4F9D32426C253D1F1904C72271(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowBanner_m511908499A8D9A996D5E00FE553C793D6A666F55 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	{
		// if (banner != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_0 = __this->___banner_11;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// banner.Show();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_1 = __this->___banner_11;
		NullCheck(L_1);
		BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HideBanner_m4B9248D6C3D5366832D962534E938B654B8FAD46 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	{
		// if (banner != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_0 = __this->___banner_11;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// banner.Hide();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB * L_1 = __this->___banner_11;
		NullCheck(L_1);
		BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::RequestRewardBasedVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_RequestRewardBasedVideo_m2B7E3755F66262D4E296ABA1B56840AA52981C53 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D251CAA5442FC19B4B92F40EC601BD44B4FF638);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string adUnitId = admobRewardedUIDIOS;
		String_t* L_0 = __this->___admobRewardedUIDIOS_17;
		V_0 = L_0;
		// admobRewardedVideo = RewardBasedVideoAd.Instance;
		il2cpp_codegen_runtime_class_init_inline(RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var);
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_1;
		L_1 = RewardBasedVideoAd_get_Instance_m78F8493821E395C35A21006AE966C239672630D7_inline(NULL);
		__this->___admobRewardedVideo_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___admobRewardedVideo_13), (void*)L_1);
		// print("admob reward request " + adUnitId);
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6D251CAA5442FC19B4B92F40EC601BD44B4FF638, L_2, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_3, NULL);
		// requestAdmob = new AdRequest.Builder()
		//     .AddTestDevice(AdRequest.TestDeviceSimulator)
		//     .AddTestDevice("0123456789ABCDEF0123456789ABCDEF")
		//     .AddKeyword("game")
		//     .Build();
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_4 = (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB *)il2cpp_codegen_object_new(Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		Builder__ctor_m242CEC272D00CA6B31C63D195113F5500CBAF531(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_5;
		L_5 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_4, _stringLiteral3DB2F4ED354BE1A1B4B0FBF68B7A56D5A64CBD32, NULL);
		NullCheck(L_5);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_6;
		L_6 = Builder_AddTestDevice_m611F4CD11EBB76F0D9C8238E98A6EC227D2B3EB3(L_5, _stringLiteral29B8AB5A42476616D067A35C277BD05FB2529B65, NULL);
		NullCheck(L_6);
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_7;
		L_7 = Builder_AddKeyword_mD19745A31BE41674A4F702F3842B46EB9B5DE097(L_6, _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		NullCheck(L_7);
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_8;
		L_8 = Builder_Build_m5A0C25E1899610BB8CB161A718BA4C2D784D318A(L_7, NULL);
		__this->___requestAdmob_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestAdmob_12), (void*)L_8);
		// admobRewardedVideo.LoadAd(requestAdmob, adUnitId);
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_9 = __this->___admobRewardedVideo_13;
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_10 = __this->___requestAdmob_12;
		String_t* L_11 = V_0;
		NullCheck(L_9);
		RewardBasedVideoAd_LoadAd_m781BC94E4295E771005B19EE6E399C81403E9CD2(L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowRewardBasedVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowRewardBasedVideo_m329D400732976A2CE7555DCFA8AB80B12A0607BE (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E71BD52EBD1C1F83FA15892E06D87CA236B5C6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.admobRewardedVideo.IsLoaded())
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_0 = __this->___admobRewardedVideo_13;
		NullCheck(L_0);
		bool L_1;
		L_1 = RewardBasedVideoAd_IsLoaded_m116995C2889191145CF639F42A8A02792645719A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.admobRewardedVideo.Show();
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_2 = __this->___admobRewardedVideo_13;
		NullCheck(L_2);
		RewardBasedVideoAd_Show_mAAB623994FC307770B7606F91D48E7B3CA325694(L_2, NULL);
		return;
	}

IL_0019:
	{
		// MonoBehaviour.print("Reward based video ad is not ready yet");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral9E71BD52EBD1C1F83FA15892E06D87CA236B5C6D, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleRewardBasedVideoClosed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleRewardBasedVideoClosed_m311CE96BC8E41F1637C588A68F5C1552EB05BF8D (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CF69D391181E619DD40FF4A9E7623149D7E5E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestRewardBasedVideo();
		AdsManager_RequestRewardBasedVideo_m2B7E3755F66262D4E296ABA1B56840AA52981C53(__this, NULL);
		// MonoBehaviour.print("HandleRewardBasedVideoClosed event received");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralC5CF69D391181E619DD40FF4A9E7623149D7E5E2, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleRewardBasedVideoRewarded(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleRewardBasedVideoRewarded_m20513F3E5EB61E7D729A29E0B344F50AEF46611A (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA890CBFA3BB681CFB8E158C428E66E16A13F6FC5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	{
		// InitScript.Instance.ShowReward();
		InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63 * L_0 = ((InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63_StaticFields*)il2cpp_codegen_static_fields_for(InitScript_t6AFB9E7614584E1151F8B9083AA1941D6ED3DB63_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		InitScript_ShowReward_m07F97D0091CBE076C7D087385FA939B4513279BF(L_0, NULL);
		// string type = e.Type;
		Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * L_1 = ___e1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Reward_get_Type_m6F1EB669A3CAEDCCF9CA973B84883EDE803BBB9F_inline(L_1, NULL);
		V_0 = L_2;
		// double amount = e.Amount;
		Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * L_3 = ___e1;
		NullCheck(L_3);
		double L_4;
		L_4 = Reward_get_Amount_m3A38A3BBD37B02C52650E5836836E126DD889977_inline(L_3, NULL);
		V_1 = L_4;
		// MonoBehaviour.print(
		//     "HandleRewardBasedVideoRewarded event received for " + amount.ToString() + " " + type);
		String_t* L_5;
		L_5 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralA890CBFA3BB681CFB8E158C428E66E16A13F6FC5, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_6, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_7, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleRewardBasedVideoFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleRewardBasedVideoFailedToLoad_mFE1FAB1AF93404B12D6F5E35EF28A434803ACDDC (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD119D6F00A699068A3E67CEC4C28369B6643637);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("On admob reward load failed " + e.Message);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AdFailedToLoadEventArgs_get_Message_m64CF096EF1C3ABE26015B51A72ECAB4B5EEB65CA_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralAD119D6F00A699068A3E67CEC4C28369B6643637, L_1, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::HandleRewardBasedVideoLoaded(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_HandleRewardBasedVideoLoaded_m0C7E8725294E5A9DD1FFB75616EFF62219B1B4C5 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, RuntimeObject * ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE294E3DD7BBA01E0CAC66B18E937A83ED15F23E8);
		s_Il2CppMethodInitialized = true;
	}
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// print("On admob reward loaded " + e);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * L_0 = ___e1;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteralE294E3DD7BBA01E0CAC66B18E937A83ED15F23E8;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteralE294E3DD7BBA01E0CAC66B18E937A83ED15F23E8;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0012:
	{
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_3, NULL);
		// }
		return;
	}
}
// System.Boolean dotmob.Scripts.AdsEvents.AdsManager::GetRewardedUnityAdsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdsManager_GetRewardedUnityAdsReady_m8E8CA3BE505E54A8E85BF0A77CE55925513FBFB7 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnDisable_m585FC1F81829B8667840AA67E7F727DBCAA98C9C (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitial != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_0 = __this->___interstitial_10;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// interstitial.OnAdLoaded -= HandleInterstitialLoaded;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_1 = __this->___interstitial_10;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF * L_2 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF *)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_2, __this, ((intptr_t)AdsManager_HandleInterstitialLoaded_m5959D31A2F9B017B552453302C01B9047AEAE2C2_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0_RuntimeMethod_var);
		NullCheck(L_1);
		InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC(L_1, L_2, NULL);
		// interstitial.OnAdFailedToLoad -= HandleInterstitialFailedToLoad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_3 = __this->___interstitial_10;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 * L_4 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17 *)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_4, __this, ((intptr_t)AdsManager_HandleInterstitialFailedToLoad_m0C0114E1140F30838E4B52B2A88BD844B9F21B9A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189_RuntimeMethod_var);
		NullCheck(L_3);
		InterstitialAd_remove_OnAdFailedToLoad_mE3B77178758E9D191422324F4529BE71B59724C9(L_3, L_4, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowRewardedAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowRewardedAds_m59A04F2584B9B5EFAE5C65FE2C1CF36801BF9341 (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::CheckAdsEvents(dotmob.Scripts.Core.GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_CheckAdsEvents_m6C56C5075A8A1C5578ACA4D422F1CD081866514C (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6CFAF7B3DDA751339CA604EA4A37F27DA4B8ABB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53608265CF0C40A5596666498B2BBF1D4362EF3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mECF1FA98EBFBA63A8AB2FD28AA266CA907AD2E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF4FDBC3F8489FBDF03288F72EE373A12E434CAA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in adsEvents)
		List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * L_0 = __this->___adsEvents_5;
		NullCheck(L_0);
		Enumerator_tA457C5296E80FE7C1D65D1D03DACA3AA0182715C  L_1;
		L_1 = List_1_GetEnumerator_mF4FDBC3F8489FBDF03288F72EE373A12E434CAA6(L_0, List_1_GetEnumerator_mF4FDBC3F8489FBDF03288F72EE373A12E434CAA6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{// begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_000e:
		{
			// foreach (var item in adsEvents)
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_2;
			L_2 = Enumerator_get_Current_mECF1FA98EBFBA63A8AB2FD28AA266CA907AD2E2A_inline((&V_0), Enumerator_get_Current_mECF1FA98EBFBA63A8AB2FD28AA266CA907AD2E2A_RuntimeMethod_var);
			V_1 = L_2;
			// if (item.gameEvent == state)
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4 = L_3->___gameEvent_0;
			int32_t L_5 = ___state0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0048;
			}
		}

IL_001f:
		{
			// item.calls++;
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_6 = V_1;
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_7 = L_6;
			NullCheck(L_7);
			int32_t L_8 = L_7->___calls_3;
			NullCheck(L_7);
			L_7->___calls_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			// if (item.calls % item.everyLevel == 0)
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = L_9->___calls_3;
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_11 = V_1;
			NullCheck(L_11);
			int32_t L_12 = L_11->___everyLevel_2;
			if (((int32_t)((int32_t)L_10%(int32_t)L_12)))
			{
				goto IL_0048;
			}
		}

IL_003c:
		{
			// ShowAdByType(item.adType);
			AdEvents_t9F9F1EDD472CA819EFAE48A66A061DE32C61B33F * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = L_13->___adType_1;
			AdsManager_ShowAdByType_m98A32A8FD8E7BF961489304E4CA00071000D001A(__this, L_14, NULL);
		}

IL_0048:
		{
			// foreach (var item in adsEvents)
			bool L_15;
			L_15 = Enumerator_MoveNext_m53608265CF0C40A5596666498B2BBF1D4362EF3E((&V_0), Enumerator_MoveNext_m53608265CF0C40A5596666498B2BBF1D4362EF3E_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0053);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m6CFAF7B3DDA751339CA604EA4A37F27DA4B8ABB1((&V_0), Enumerator_Dispose_m6CFAF7B3DDA751339CA604EA4A37F27DA4B8ABB1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0061)
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowAdByType(dotmob.Scripts.AdsEvents.AdType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAdByType_m98A32A8FD8E7BF961489304E4CA00071000D001A (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, int32_t ___adType0, const RuntimeMethod* method)
{
	{
		// if (adType == AdType.AdmobInterstitial && enableGoogleMobileAds)
		int32_t L_0 = ___adType0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->___enableGoogleMobileAds_7;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// ShowAds(false);
		AdsManager_ShowAds_m1A5D4C8675758E8B2AC12FD147233A5BBBF9621F(__this, (bool)0, NULL);
		return;
	}

IL_0013:
	{
		// else if (adType == AdType.UnityAdsVideo && enableUnityAds)
		int32_t L_2 = ___adType0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = __this->___enableUnityAds_6;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// ShowVideo();
		AdsManager_ShowVideo_m88A0457A15A55F06CB8C1520FA3345BE0B72C08B(__this, NULL);
		return;
	}

IL_0026:
	{
		// else if (adType == AdType.ChartboostInterstitial && enableChartboostAds)
		int32_t L_4 = ___adType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0039;
		}
	}
	{
		bool L_5 = __this->___enableChartboostAds_8;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// ShowAds(true);
		AdsManager_ShowAds_m1A5D4C8675758E8B2AC12FD147233A5BBBF9621F(__this, (bool)1, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowVideo_m88A0457A15A55F06CB8C1520FA3345BE0B72C08B (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::ShowAds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_ShowAds_m1A5D4C8675758E8B2AC12FD147233A5BBBF9621F (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, bool ___chartboost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_tD063AA6BD86518E9E6AE91B99A50BDB47B1F48D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52E7CF01D22BBF27A953B993F4F0C85E75B2182F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (chartboost)
		bool L_0 = ___chartboost0;
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		// Debug.Log("show admob Interstitial in " + LevelManager.THIS.gameStatus);
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_1 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LevelManager_get_gameStatus_mD7354786119D0749B525ACF0D0C4235B90B5B2B3_inline(L_1, NULL);
		V_0 = L_2;
		Il2CppFakeBox<int32_t> L_3(GameState_tD063AA6BD86518E9E6AE91B99A50BDB47B1F48D2_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2 *)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral52E7CF01D22BBF27A953B993F4F0C85E75B2182F, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// if (interstitial.IsLoaded())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_6 = __this->___interstitial_10;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7(L_6, NULL);
		if (!L_7)
		{
			goto IL_0074;
		}
	}
	{
		// interstitial.Show();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_8 = __this->___interstitial_10;
		NullCheck(L_8);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_8, NULL);
		// interstitial = new InterstitialAd(admobUIDIOS);
		String_t* L_9 = __this->___admobUIDIOS_16;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_10 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC *)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_10, L_9, /*hidden argument*/NULL);
		__this->___interstitial_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitial_10), (void*)L_10);
		// requestAdmob = new AdRequest.Builder().Build();
		Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB * L_11 = (Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB *)il2cpp_codegen_object_new(Builder_t2500BA6984018FDCC4D8F26FB9F46F37C41EF0CB_il2cpp_TypeInfo_var);
		Builder__ctor_m242CEC272D00CA6B31C63D195113F5500CBAF531(L_11, /*hidden argument*/NULL);
		NullCheck(L_11);
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_12;
		L_12 = Builder_Build_m5A0C25E1899610BB8CB161A718BA4C2D784D318A(L_11, NULL);
		__this->___requestAdmob_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___requestAdmob_12), (void*)L_12);
		// interstitial.LoadAd(requestAdmob);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC * L_13 = __this->___interstitial_10;
		AdRequest_t1BA805A840B05206B0B1B4B2319CD0AE4127B37D * L_14 = __this->___requestAdmob_12;
		NullCheck(L_13);
		InterstitialAd_LoadAd_mDAA6A4F35E1BCAAFA5E942862DC9EED7D251513B(L_13, L_14, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void dotmob.Scripts.AdsEvents.AdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager__ctor_m5C24CF18ABDD1B2CB1C6B3383FD01D8D254E130C (AdsManager_tA0205B508D779282862DE73768A41DCBC076B463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<AdEvents> adsEvents = new List<AdEvents>();
		List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 * L_0 = (List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3 *)il2cpp_codegen_object_new(List_1_tFE0741A06A0A44F892FB21C4F26A090B86240FD3_il2cpp_TypeInfo_var);
		List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0(L_0, /*hidden argument*/List_1__ctor_mF8C2EBB6584502E6896BF75435422BD4E22179D0_RuntimeMethod_var);
		__this->___adsEvents_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsEvents_5), (void*)L_0);
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
// System.Void DentedPixel.LeanDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDummy__ctor_mAD97A9FAAAF771BEC38CA22F2CBA2DBA31E609CC (LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3 * __this, const RuntimeMethod* method)
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
// UnityEngine.GameObject[] DentedPixel.LeanPool::init(UnityEngine.GameObject,System.Int32,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* LeanPool_init_m45465AB4883DAA46DF6C68372678BFDBE51F001C (LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416 * __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___prefab0, int32_t ___count1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * ___parent2, bool ___retrieveOldestItems3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_1 = NULL;
	{
		// array = new GameObject[count];
		int32_t L_0 = ___count1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___array_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_0), (void*)L_1);
		// if (retrieveOldestItems)
		bool L_2 = ___retrieveOldestItems3;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// oldestItems = new Queue<GameObject>();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_3 = (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)il2cpp_codegen_object_new(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7(L_3, /*hidden argument*/Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		__this->___oldestItems_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldestItems_1), (void*)L_3);
	}

IL_001b:
	{
		// for (int i = 0; i < array.Length; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_001f:
	{
		// GameObject go = GameObject.Instantiate(prefab, parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_4 = ___prefab0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * L_5 = ___parent2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_6;
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_7 = V_1;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// array[i] = go;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___array_0;
		int32_t L_9 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_10 = V_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)L_10);
		// for (int i = 0; i < array.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___array_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		// return array;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___array_0;
		return L_14;
	}
}
// System.Void DentedPixel.LeanPool::init(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPool_init_m59442BCD63AC53E6924715C26503A6B585F11249 (LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416 * __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___array0, bool ___retrieveOldestItems1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.array = array;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___array0;
		__this->___array_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_0), (void*)L_0);
		// if (retrieveOldestItems)
		bool L_1 = ___retrieveOldestItems1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// oldestItems = new Queue<GameObject>();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_2 = (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)il2cpp_codegen_object_new(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7(L_2, /*hidden argument*/Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		__this->___oldestItems_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldestItems_1), (void*)L_2);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void DentedPixel.LeanPool::giveup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPool_giveup_m34ED7EA303C747845325442B278227DF469B741A (LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416 * __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_0 = ___go0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// oldestItems.Enqueue(go);
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_1 = __this->___oldestItems_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_2 = ___go0;
		NullCheck(L_1);
		Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8(L_1, L_2, Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.GameObject DentedPixel.LeanPool::retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * LeanPool_retrieve_mF7ACD9A12E3832E50FE0B7E6E70DAA933126E983 (LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_2 = NULL;
	{
		// for (int i = 0; i < array.Length; i++)
		V_0 = 0;
		goto IL_006c;
	}

IL_0004:
	{
		// retrieveIndex++;
		int32_t L_0 = __this->___retrieveIndex_2;
		__this->___retrieveIndex_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		// if (retrieveIndex >= array.Length)
		int32_t L_1 = __this->___retrieveIndex_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___array_0;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// retrieveIndex = 0;
		__this->___retrieveIndex_2 = 0;
	}

IL_0029:
	{
		// if (array[retrieveIndex].activeSelf == false)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___array_0;
		int32_t L_4 = __this->___retrieveIndex_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		if (L_7)
		{
			goto IL_0068;
		}
	}
	{
		// GameObject returnObj = array[retrieveIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___array_0;
		int32_t L_9 = __this->___retrieveIndex_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// returnObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_12 = V_1;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (oldestItems != null)
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_13 = __this->___oldestItems_1;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// oldestItems.Enqueue(returnObj);
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_14 = __this->___oldestItems_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_15 = V_1;
		NullCheck(L_14);
		Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8(L_14, L_15, Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
	}

IL_0066:
	{
		// return returnObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_16 = V_1;
		return L_16;
	}

IL_0068:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_18 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___array_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// if (oldestItems != null)
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_20 = __this->___oldestItems_1;
		if (!L_20)
		{
			goto IL_0099;
		}
	}
	{
		// GameObject go = oldestItems.Dequeue();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_21 = __this->___oldestItems_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_22;
		L_22 = Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698(L_21, Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698_RuntimeMethod_var);
		V_2 = L_22;
		// oldestItems.Enqueue(go);// put at the end of the queue again
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_23 = __this->___oldestItems_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_24 = V_2;
		NullCheck(L_23);
		Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8(L_23, L_24, Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
		// return go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_25 = V_2;
		return L_25;
	}

IL_0099:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)NULL;
	}
}
// System.Void DentedPixel.LeanPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanPool__ctor_m30DCDFDB6E93EC494F2520DA4EFE91377902F23D (LeanPool_t328139E3ACE974A1450E5C6AD98DA7EF5CAB6416 * __this, const RuntimeMethod* method)
{
	{
		// private int retrieveIndex = -1;
		__this->___retrieveIndex_2 = (-1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E_inline (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method)
{
	{
		// get { return item; }
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_0 = __this->___item_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7  L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m64CF096EF1C3ABE26015B51A72ECAB4B5EEB65CA_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * RewardBasedVideoAd_get_Instance_m78F8493821E395C35A21006AE966C239672630D7_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var);
		RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9 * L_0 = ((RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAd_t3821E9DBC75ED7F1A85DC871D7B10918D7A7D2B9_il2cpp_TypeInfo_var))->___instance_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m6F1EB669A3CAEDCCF9CA973B84883EDE803BBB9F_inline (Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * __this, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m3A38A3BBD37B02C52650E5836836E126DD889977_inline (Reward_tABD6DDB785C30383881A61E147A20D8B4CDD05DC * __this, const RuntimeMethod* method)
{
	{
		// public double Amount { get; set; }
		double L_0 = __this->___U3CAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_get_gameStatus_mD7354786119D0749B525ACF0D0C4235B90B5B2B3_inline (LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * __this, const RuntimeMethod* method)
{
	{
		// get { return GameStatus; }
		int32_t L_0 = __this->___GameStatus_64;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->___current_3;
		return L_0;
	}
}
