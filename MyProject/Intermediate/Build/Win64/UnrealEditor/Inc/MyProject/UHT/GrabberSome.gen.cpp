// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/GrabberSome.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabberSome() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UGrabberSome();
	MYPROJECT_API UClass* Z_Construct_UClass_UGrabberSome_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UGrabberSome::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabberSome::execGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grab();
		P_NATIVE_END;
	}
	void UGrabberSome::StaticRegisterNativesUGrabberSome()
	{
		UClass* Class = UGrabberSome::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Grab", &UGrabberSome::execGrab },
			{ "Release", &UGrabberSome::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabberSome_Grab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabberSome_Grab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GrabberSome.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabberSome_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabberSome, nullptr, "Grab", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabberSome_Grab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrabberSome_Grab_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGrabberSome_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabberSome_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabberSome_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabberSome_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GrabberSome.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabberSome_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabberSome, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabberSome_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrabberSome_Release_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGrabberSome_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabberSome_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabberSome);
	UClass* Z_Construct_UClass_UGrabberSome_NoRegister()
	{
		return UGrabberSome::StaticClass();
	}
	struct Z_Construct_UClass_UGrabberSome_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabberSome_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberSome_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabberSome_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabberSome_Grab, "Grab" }, // 3096433872
		{ &Z_Construct_UFunction_UGrabberSome_Release, "Release" }, // 4032999625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberSome_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberSome_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GrabberSome.h" },
		{ "ModuleRelativePath", "GrabberSome.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabberSome_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabberSome>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabberSome_Statics::ClassParams = {
		&UGrabberSome::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberSome_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabberSome_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGrabberSome()
	{
		if (!Z_Registration_Info_UClass_UGrabberSome.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabberSome.OuterSingleton, Z_Construct_UClass_UGrabberSome_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrabberSome.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UGrabberSome>()
	{
		return UGrabberSome::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabberSome);
	UGrabberSome::~UGrabberSome() {}
	struct Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_GrabberSome_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_GrabberSome_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrabberSome, UGrabberSome::StaticClass, TEXT("UGrabberSome"), &Z_Registration_Info_UClass_UGrabberSome, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabberSome), 2774081956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_GrabberSome_h_3999523642(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_GrabberSome_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_GrabberSome_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
