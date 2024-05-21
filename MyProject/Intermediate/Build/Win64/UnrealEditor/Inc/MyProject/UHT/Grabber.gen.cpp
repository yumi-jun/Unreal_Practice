// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Grabber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UGrabber();
	MYPROJECT_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UGrabber::execGrabSomeThing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabSomeThing();
		P_NATIVE_END;
	}
	void UGrabber::StaticRegisterNativesUGrabber()
	{
		UClass* Class = UGrabber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrabSomeThing", &UGrabber::execGrabSomeThing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabber, nullptr, "GrabSomeThing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGrabber_GrabSomeThing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrabber_GrabSomeThing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber);
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabber_GrabSomeThing, "GrabSomeThing" }, // 765687640
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
		&UGrabber::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGrabber()
	{
		if (!Z_Registration_Info_UClass_UGrabber.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber.OuterSingleton, Z_Construct_UClass_UGrabber_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrabber.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UGrabber>()
	{
		return UGrabber::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
	UGrabber::~UGrabber() {}
	struct Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Grabber_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Grabber_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber, UGrabber::StaticClass, TEXT("UGrabber"), &Z_Registration_Info_UClass_UGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber), 1101936880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Grabber_h_263795767(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Grabber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_Grabber_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
