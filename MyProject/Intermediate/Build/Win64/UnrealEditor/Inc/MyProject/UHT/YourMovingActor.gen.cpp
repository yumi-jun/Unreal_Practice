// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/YourMovingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYourMovingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UYourMovingActor();
	MYPROJECT_API UClass* Z_Construct_UClass_UYourMovingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UYourMovingActor::StaticRegisterNativesUYourMovingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYourMovingActor);
	UClass* Z_Construct_UClass_UYourMovingActor_NoRegister()
	{
		return UYourMovingActor::StaticClass();
	}
	struct Z_Construct_UClass_UYourMovingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYourMovingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYourMovingActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYourMovingActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "YourMovingActor.h" },
		{ "ModuleRelativePath", "YourMovingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYourMovingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYourMovingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYourMovingActor_Statics::ClassParams = {
		&UYourMovingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYourMovingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UYourMovingActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UYourMovingActor()
	{
		if (!Z_Registration_Info_UClass_UYourMovingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYourMovingActor.OuterSingleton, Z_Construct_UClass_UYourMovingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYourMovingActor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UYourMovingActor>()
	{
		return UYourMovingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYourMovingActor);
	UYourMovingActor::~UYourMovingActor() {}
	struct Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_YourMovingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_YourMovingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYourMovingActor, UYourMovingActor::StaticClass, TEXT("UYourMovingActor"), &Z_Registration_Info_UClass_UYourMovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYourMovingActor), 534816373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_YourMovingActor_h_3942681266(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_YourMovingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_yumi_UnrealPractice_Unreal_Practice_MyProject_Source_MyProject_YourMovingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
