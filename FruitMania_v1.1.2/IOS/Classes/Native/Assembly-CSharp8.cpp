#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<dotmob.Scripts.Blocks.Square>
struct IEnumerable_1_t3F9B6AD3E6DA0E252EEEB087E6371A3AF2F786E7;
// System.Collections.Generic.List`1<dotmob.Scripts.Level.FieldBoard>
struct List_1_t6A9E4047DAAA6E143DA380A58A7B59B9E06EBBCE;
// System.Collections.Generic.List`1<dotmob.Scripts.Items.GameBlocker>
struct List_1_tBD268DF68BE64C3323734691DDF41470B5BC1261;
// System.Collections.Generic.List`1<dotmob.Scripts.GUI.GemProduct>
struct List_1_t6199D346BB65DAE7FE5E06ED848EDAC431723204;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<dotmob.Scripts.Blocks.Square>
struct List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE3C1BF0FFDB53459E19513739DF65417A1EA98BE;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
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
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
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
// dotmob.Scripts.Level.FieldBoard
struct FieldBoard_tC45A5D688F734CA6D34FB4E88C02EB2FB8CD1AD3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// IColorableComponent
struct IColorableComponent_tF7730E5087D34E9ABCC7CA38C786E0F75B97BA18;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
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
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
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

IL2CPP_EXTERN_C RuntimeClass* Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameStateEvents_tB085461F2B6593F8099CD0E6D50B6CDD830A90D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_2_tFE3173B2CD281859CFB5021B8E8EE18A98E97938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9D24F7AEF588A9FC170F19FD18A277A0C53C8814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisSquare_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E_m1D3187214A72E195309FC4E03B6ACD081DFEB06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6AD0B8CBF53FB75A690020F23C58CDCA79D4EF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m82A4540542C7A47A2ABBEFF0A49EBD37C6E92F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var;
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
	// dotmob.Scripts.Blocks.ThrivingBlock dotmob.Scripts.Blocks.ThrivingBlock/<blockCreatedCD>d__5::<>4__this
	ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB * ___U3CU3E4__this_2;
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

// dotmob.Scripts.Blocks.SquareTypes
struct SquareTypes_t0F1045CFA0BC1DC1A729870D4D93F2F7E4EA3182 
{
	// System.Int32 dotmob.Scripts.Blocks.SquareTypes::value__
	int32_t ___value___2;
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

// System.Func`2<dotmob.Scripts.Blocks.Square,System.Boolean>
struct Func_2_tEA1E29A54A836034A6CA46BD339C3A01E95547D8  : public MulticastDelegate_t
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E (Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * __this, const RuntimeMethod* method);
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
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_009b;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00a3;
	}

IL_0025:
	{
		// if (!IsHaveSolidAbove() && !IsHaveItemsAbove() && isEnterPoint && item == null)
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = Square_IsHaveSolidAbove_m22F8555451BB6BB2EAC5A437AD83B4378AC52D6F(L_3, NULL);
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Square_IsHaveItemsAbove_m07B02097BCF1D9D2D541611E05C65B89D7FE3216(L_5, NULL);
		if (L_6)
		{
			goto IL_0060;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		bool L_8 = L_7->___isEnterPoint_14;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_10 = L_9->___item_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		G_B13_0 = ((int32_t)(L_11));
		goto IL_0061;
	}

IL_0060:
	{
		G_B13_0 = 0;
	}

IL_0061:
	{
		V_1 = (bool)G_B13_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// GenItem();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_14;
		L_14 = Square_GenItem_m98E305D2DDC4EDC1D6B9584B9B9465CE8D445FA7(L_13, (bool)1, 0, (-1), NULL);
		goto IL_0087;
	}

IL_0076:
	{
		// else if (IsHaveDestroybleObstacle())
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		bool L_16;
		L_16 = Square_IsHaveDestroybleObstacle_m0821F989EEFCE8D96930DA17DB0DE1A558EAF5BC(L_15, NULL);
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		// break;
		goto IL_00bb;
	}

IL_0087:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663 * L_18 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663 *)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_18, /*hidden argument*/NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a3:
	{
		// while (item == null)
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_20 = L_19->___item_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0025;
		}
	}

IL_00bb:
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
	int32_t G_B3_0 = 0;
	{
		// return sq.Any(i => i.Item?.falling ?? false);
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_1;
		L_1 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_0, NULL);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		bool L_3 = G_B2_0->___falling_21;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0012:
	{
		return (bool)G_B3_0;
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
	int32_t G_B7_0 = 0;
	{
		// var anyFallingItemsInSeq = sq.Any(i => i.Item != null && i.Item?.color == color && i.Item.falling);
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_0 = ___i0;
		NullCheck(L_0);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_1;
		L_1 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_3 = ___i0;
		NullCheck(L_3);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_4;
		L_4 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_3, NULL);
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
			goto IL_0037;
		}
	}
	{
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_8 = ___i0;
		NullCheck(L_8);
		Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_9;
		L_9 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_8, NULL);
		NullCheck(L_9);
		bool L_10 = L_9->___falling_21;
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		return (bool)G_B7_0;
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
	List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B14_0 = NULL;
	Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (LevelManager.THIS.moveID == lastMoveID) return;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_0 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___moveID_44;
		int32_t L_2 = __this->___lastMoveID_37;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if (LevelManager.THIS.moveID == lastMoveID) return;
		goto IL_012e;
	}

IL_001c:
	{
		// lastMoveID = LevelManager.THIS.moveID;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_4 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_4);
		int32_t L_5 = L_4->___moveID_44;
		__this->___lastMoveID_37 = L_5;
		// if (LevelManager.THIS.thrivingBlockDestroyed || blockCreated) return;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_6 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_6);
		bool L_7 = L_6->___thrivingBlockDestroyed_18;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		bool L_8 = ((ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields*)il2cpp_codegen_static_fields_for(ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var))->___blockCreated_36;
		G_B5_0 = ((int32_t)(L_8));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 1;
	}

IL_0040:
	{
		V_2 = (bool)G_B5_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// if (LevelManager.THIS.thrivingBlockDestroyed || blockCreated) return;
		goto IL_012e;
	}

IL_0049:
	{
		// LevelManager.THIS.thrivingBlockDestroyed = false;
		LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C * L_10 = ((LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t9E39CEECB8D0B2989626226DF1931EC2F1A8768C_il2cpp_TypeInfo_var))->___THIS_4;
		NullCheck(L_10);
		L_10->___thrivingBlockDestroyed_18 = (bool)0;
		// var sqList = this.mainSquqre.GetAllNeghborsCross();
		Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_11 = ((Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E *)__this)->___mainSquqre_34;
		NullCheck(L_11);
		List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * L_12;
		L_12 = Square_GetAllNeghborsCross_m87ACC79C32DB776731C120E861B54492A9165ADC(L_11, NULL);
		V_0 = L_12;
		// foreach (var sq in sqList)
		List_1_t8198563084F679EA2B060CD8DAE6F34FCADBEF56 * L_13 = V_0;
		NullCheck(L_13);
		Enumerator_tC4A46C003FA12B28B7BC257A2E3A7B3E427E065F  L_14;
		L_14 = List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290(L_13, List_1_GetEnumerator_mA2E221E46507F8E3BC746F51CCE9BEB563E11290_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_0068:
	try
	{// begin try (depth: 1)
		{
			goto IL_0111;
		}

IL_006d:
		{
			// foreach (var sq in sqList)
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_15;
			L_15 = Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_inline((&V_3), Enumerator_get_Current_mFEAFC4301641290ADEB3BDA6EE8635CE94132C99_RuntimeMethod_var);
			V_4 = L_15;
			// if (!sq.CanGoInto() || Random.Range(0, 1) != 0 ||
			//     sq.type != SquareTypes.EmptySquare || sq.Item?.currentType != ItemsTypes.NONE) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_16 = V_4;
			NullCheck(L_16);
			bool L_17;
			L_17 = Square_CanGoInto_mC5083D3DBE6C6F7E26BA03BB7014AD3386277AAD(L_16, NULL);
			if (!L_17)
			{
				goto IL_00ab;
			}
		}

IL_0080:
		{
			int32_t L_18;
			L_18 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 1, NULL);
			if (L_18)
			{
				goto IL_00ab;
			}
		}

IL_0089:
		{
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_19 = V_4;
			NullCheck(L_19);
			int32_t L_20 = L_19->___type_8;
			if ((!(((uint32_t)L_20) == ((uint32_t)1))))
			{
				goto IL_00ab;
			}
		}

IL_0093:
		{
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_21 = V_4;
			NullCheck(L_21);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_22;
			L_22 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_21, NULL);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_23 = L_22;
			G_B13_0 = L_23;
			if (L_23)
			{
				G_B14_0 = L_23;
				goto IL_00a1;
			}
		}

IL_009d:
		{
			G_B15_0 = 1;
			goto IL_00a9;
		}

IL_00a1:
		{
			NullCheck(G_B14_0);
			int32_t L_24 = G_B14_0->___currentType_23;
			G_B15_0 = ((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
		}

IL_00a9:
		{
			G_B17_0 = G_B15_0;
			goto IL_00ac;
		}

IL_00ab:
		{
			G_B17_0 = 1;
		}

IL_00ac:
		{
			V_5 = (bool)G_B17_0;
			bool L_25 = V_5;
			if (!L_25)
			{
				goto IL_00b4;
			}
		}

IL_00b2:
		{
			// sq.type != SquareTypes.EmptySquare || sq.Item?.currentType != ItemsTypes.NONE) continue;
			goto IL_0111;
		}

IL_00b4:
		{
			// if (sq.Item == null) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_26 = V_4;
			NullCheck(L_26);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_27;
			L_27 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_26, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_28;
			L_28 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)NULL, NULL);
			V_6 = L_28;
			bool L_29 = V_6;
			if (!L_29)
			{
				goto IL_00c9;
			}
		}

IL_00c7:
		{
			// if (sq.Item == null) continue;
			goto IL_0111;
		}

IL_00c9:
		{
			// if (sq.Item.currentType != ItemsTypes.NONE) continue;
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_30 = V_4;
			NullCheck(L_30);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_31;
			L_31 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_30, NULL);
			NullCheck(L_31);
			int32_t L_32 = L_31->___currentType_23;
			V_7 = (bool)((!(((uint32_t)L_32) <= ((uint32_t)0)))? 1 : 0);
			bool L_33 = V_7;
			if (!L_33)
			{
				goto IL_00e0;
			}
		}

IL_00de:
		{
			// if (sq.Item.currentType != ItemsTypes.NONE) continue;
			goto IL_0111;
		}

IL_00e0:
		{
			// sq.CreateObstacle(SquareTypes.ThrivingBlock, 1);
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_34 = V_4;
			NullCheck(L_34);
			Square_CreateObstacle_m8EAA79A2C94B117205F9C6F8560700A4838275C2(L_34, 5, 1, NULL);
			// blockCreated = true;
			((ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_StaticFields*)il2cpp_codegen_static_fields_for(ThrivingBlock_t10241F76B4CC5E1372345C3032054C79ED1534DB_il2cpp_TypeInfo_var))->___blockCreated_36 = (bool)1;
			// StartCoroutine(blockCreatedCD());
			RuntimeObject* L_35;
			L_35 = ThrivingBlock_blockCreatedCD_m91C583A34D9D7ACBE01E54F484F2BC48F02B64FA(__this, NULL);
			Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B * L_36;
			L_36 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_35, NULL);
			// Destroy(sq.Item.gameObject);
			Square_tF1E2A3DC62160557976B41638CAAB7AA82C23E2E * L_37 = V_4;
			NullCheck(L_37);
			Item_t2CD98D4F71AF8BA2326E9B10CD3C53E803B8DB52 * L_38;
			L_38 = Square_get_Item_m182360B0092FCD8A6668921433D904F08C00A48E(L_37, NULL);
			NullCheck(L_38);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_39;
			L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_39, NULL);
			// break;
			goto IL_011d;
		}

IL_0111:
		{
			// foreach (var sq in sqList)
			bool L_40;
			L_40 = Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9((&V_3), Enumerator_MoveNext_m10F56D9694D78B5DFE6E772D3187F390970597F9_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_006d;
			}
		}

IL_011d:
		{
			IL2CPP_LEAVE(0x302, FINALLY_011f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011f;
	}

FINALLY_011f:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6((&V_3), Enumerator_Dispose_m4642F9474D82063BB1757BDD1BA271130424F3A6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(287)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(287)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x302, IL_012e)
	}

IL_012e:
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
		U3CblockCreatedCDU3Ed__5_tA6AAFC56C32E80E702823C2C418B7B471E08DFE7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
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
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
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

IL_0039:
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
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_2 = NULL;
	bool V_3 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	{
		// array = new GameObject[count];
		int32_t L_0 = ___count1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___array_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_0), (void*)L_1);
		// if (retrieveOldestItems)
		bool L_2 = ___retrieveOldestItems3;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// oldestItems = new Queue<GameObject>();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_4 = (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)il2cpp_codegen_object_new(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7(L_4, /*hidden argument*/Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		__this->___oldestItems_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldestItems_1), (void*)L_4);
	}

IL_001e:
	{
		// for (int i = 0; i < array.Length; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_0022:
	{
		// GameObject go = GameObject.Instantiate(prefab, parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_5 = ___prefab0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 * L_6 = ___parent2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_2 = L_7;
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_8 = V_2;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// array[i] = go;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___array_0;
		int32_t L_10 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_11 = V_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)L_11);
		// for (int i = 0; i < array.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___array_0;
		NullCheck(L_14);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0022;
		}
	}
	{
		// return array;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___array_0;
		V_4 = L_16;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_4;
		return L_17;
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
	bool V_0 = false;
	{
		// this.array = array;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___array0;
		__this->___array_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___array_0), (void*)L_0);
		// if (retrieveOldestItems)
		bool L_1 = ___retrieveOldestItems1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// oldestItems = new Queue<GameObject>();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_3 = (Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)il2cpp_codegen_object_new(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35_il2cpp_TypeInfo_var);
		Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7(L_3, /*hidden argument*/Queue_1__ctor_mC7AF43309CAEF83716863BF06C89A3C794B73EB7_RuntimeMethod_var);
		__this->___oldestItems_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldestItems_1), (void*)L_3);
	}

IL_0018:
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
	bool V_1 = false;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_3 = NULL;
	bool V_4 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * V_8 = NULL;
	{
		// for (int i = 0; i < array.Length; i++)
		V_0 = 0;
		goto IL_008d;
	}

IL_0008:
	{
		// retrieveIndex++;
		int32_t L_0 = __this->___retrieveIndex_2;
		__this->___retrieveIndex_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		// if (retrieveIndex >= array.Length)
		int32_t L_1 = __this->___retrieveIndex_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___array_0;
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// retrieveIndex = 0;
		__this->___retrieveIndex_2 = 0;
	}

IL_0035:
	{
		// if (array[retrieveIndex].activeSelf == false)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___array_0;
		int32_t L_5 = __this->___retrieveIndex_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		// GameObject returnObj = array[retrieveIndex];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___array_0;
		int32_t L_11 = __this->___retrieveIndex_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// returnObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_14 = V_3;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// if (oldestItems != null)
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_15 = __this->___oldestItems_1;
		V_4 = (bool)((!(((RuntimeObject*)(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		// oldestItems.Enqueue(returnObj);
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_17 = __this->___oldestItems_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_18 = V_3;
		NullCheck(L_17);
		Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8(L_17, L_18, Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
	}

IL_0083:
	{
		// return returnObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_19 = V_3;
		V_5 = L_19;
		goto IL_00d7;
	}

IL_0088:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008d:
	{
		// for (int i = 0; i < array.Length; i++)
		int32_t L_21 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___array_0;
		NullCheck(L_22);
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0008;
		}
	}
	{
		// if (oldestItems != null)
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_24 = __this->___oldestItems_1;
		V_7 = (bool)((!(((RuntimeObject*)(Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 *)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		// GameObject go = oldestItems.Dequeue();
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_26 = __this->___oldestItems_1;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_27;
		L_27 = Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698(L_26, Queue_1_Dequeue_mE351610528B222F355ABE0B96AD5A9BA43AC5698_RuntimeMethod_var);
		V_8 = L_27;
		// oldestItems.Enqueue(go);// put at the end of the queue again
		Queue_1_t02B7D0CE4033A4D6FACEF8B3DAE9F6FF72BEFB35 * L_28 = __this->___oldestItems_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_29 = V_8;
		NullCheck(L_28);
		Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8(L_28, L_29, Queue_1_Enqueue_m4A304A60FEC8F873553AC91C4D0CF4687C8F69F8_RuntimeMethod_var);
		// return go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_30 = V_8;
		V_5 = L_30;
		goto IL_00d7;
	}

IL_00d2:
	{
		// return null;
		V_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)NULL;
		goto IL_00d7;
	}

IL_00d7:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F * L_31 = V_5;
		return L_31;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->___current_3;
		return L_0;
	}
}
