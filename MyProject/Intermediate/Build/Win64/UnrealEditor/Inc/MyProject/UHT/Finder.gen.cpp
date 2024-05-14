// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Finder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UFinder();
	MYPROJECT_API UClass* Z_Construct_UClass_UFinder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UFinder::execFind_Coffee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Find_Coffee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFinder::execFind_Car)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Find_Car();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFinder::execFind_People)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Find_People();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFinder::execFind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Find();
		P_NATIVE_END;
	}
	void UFinder::StaticRegisterNativesUFinder()
	{
		UClass* Class = UFinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Find", &UFinder::execFind },
			{ "Find_Car", &UFinder::execFind_Car },
			{ "Find_Coffee", &UFinder::execFind_Coffee },
			{ "Find_People", &UFinder::execFind_People },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFinder_Find_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinder_Find_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Finder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinder_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinder, nullptr, "Find", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFinder_Find_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFinder_Find()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinder_Find_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFinder_Find_Car_Statics
	{
		struct Finder_eventFind_Car_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFinder_Find_Car_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Finder_eventFind_Car_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFinder_Find_Car_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Finder_eventFind_Car_Parms), &Z_Construct_UFunction_UFinder_Find_Car_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFinder_Find_Car_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFinder_Find_Car_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinder_Find_Car_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelBluePrint" },
		{ "ModuleRelativePath", "Finder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinder_Find_Car_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinder, nullptr, "Find_Car", nullptr, nullptr, Z_Construct_UFunction_UFinder_Find_Car_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Car_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFinder_Find_Car_Statics::Finder_eventFind_Car_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Car_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFinder_Find_Car_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Car_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFinder_Find_Car_Statics::Finder_eventFind_Car_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFinder_Find_Car()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinder_Find_Car_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFinder_Find_Coffee_Statics
	{
		struct Finder_eventFind_Coffee_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFinder_Find_Coffee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Finder_eventFind_Coffee_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFinder_Find_Coffee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Finder_eventFind_Coffee_Parms), &Z_Construct_UFunction_UFinder_Find_Coffee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFinder_Find_Coffee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFinder_Find_Coffee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinder_Find_Coffee_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelBluePrint" },
		{ "ModuleRelativePath", "Finder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinder_Find_Coffee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinder, nullptr, "Find_Coffee", nullptr, nullptr, Z_Construct_UFunction_UFinder_Find_Coffee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Coffee_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFinder_Find_Coffee_Statics::Finder_eventFind_Coffee_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Coffee_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFinder_Find_Coffee_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_Coffee_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFinder_Find_Coffee_Statics::Finder_eventFind_Coffee_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFinder_Find_Coffee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinder_Find_Coffee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFinder_Find_People_Statics
	{
		struct Finder_eventFind_People_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFinder_Find_People_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Finder_eventFind_People_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFinder_Find_People_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Finder_eventFind_People_Parms), &Z_Construct_UFunction_UFinder_Find_People_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFinder_Find_People_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFinder_Find_People_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFinder_Find_People_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelBluePrint" },
		{ "ModuleRelativePath", "Finder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFinder_Find_People_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFinder, nullptr, "Find_People", nullptr, nullptr, Z_Construct_UFunction_UFinder_Find_People_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_People_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFinder_Find_People_Statics::Finder_eventFind_People_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_People_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFinder_Find_People_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFinder_Find_People_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFinder_Find_People_Statics::Finder_eventFind_People_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFinder_Find_People()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFinder_Find_People_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFinder);
	UClass* Z_Construct_UClass_UFinder_NoRegister()
	{
		return UFinder::StaticClass();
	}
	struct Z_Construct_UClass_UFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFinder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFinder_Find, "Find" }, // 924527809
		{ &Z_Construct_UFunction_UFinder_Find_Car, "Find_Car" }, // 3139885137
		{ &Z_Construct_UFunction_UFinder_Find_Coffee, "Find_Coffee" }, // 856691003
		{ &Z_Construct_UFunction_UFinder_Find_People, "Find_People" }, // 181163732
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFinder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Finder.h" },
		{ "ModuleRelativePath", "Finder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFinder_Statics::ClassParams = {
		&UFinder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFinder_Statics::Class_MetaDataParams), Z_Construct_UClass_UFinder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFinder()
	{
		if (!Z_Registration_Info_UClass_UFinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFinder.OuterSingleton, Z_Construct_UClass_UFinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFinder.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UFinder>()
	{
		return UFinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFinder);
	UFinder::~UFinder() {}
	struct Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Finder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Finder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFinder, UFinder::StaticClass, TEXT("UFinder"), &Z_Registration_Info_UClass_UFinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFinder), 2121711696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Finder_h_3107163007(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Finder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Finder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
