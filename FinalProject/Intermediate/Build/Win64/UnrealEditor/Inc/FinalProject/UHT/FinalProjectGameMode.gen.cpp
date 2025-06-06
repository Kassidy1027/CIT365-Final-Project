// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/FinalProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINALPROJECT_API UClass* Z_Construct_UClass_AFinalProjectGameMode();
FINALPROJECT_API UClass* Z_Construct_UClass_AFinalProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProject();
// End Cross Module References

// Begin Class AFinalProjectGameMode
void AFinalProjectGameMode::StaticRegisterNativesAFinalProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinalProjectGameMode);
UClass* Z_Construct_UClass_AFinalProjectGameMode_NoRegister()
{
	return AFinalProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AFinalProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalProjectGameMode.h" },
		{ "ModuleRelativePath", "FinalProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFinalProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalProjectGameMode_Statics::ClassParams = {
	&AFinalProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AFinalProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalProjectGameMode.OuterSingleton, Z_Construct_UClass_AFinalProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalProjectGameMode.OuterSingleton;
}
template<> FINALPROJECT_API UClass* StaticClass<AFinalProjectGameMode>()
{
	return AFinalProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectGameMode);
AFinalProjectGameMode::~AFinalProjectGameMode() {}
// End Class AFinalProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_knc23_Documents_GitHub_CIT365_Final_Project_FinalProject_Source_FinalProject_FinalProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalProjectGameMode, AFinalProjectGameMode::StaticClass, TEXT("AFinalProjectGameMode"), &Z_Registration_Info_UClass_AFinalProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalProjectGameMode), 3625887936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_knc23_Documents_GitHub_CIT365_Final_Project_FinalProject_Source_FinalProject_FinalProjectGameMode_h_3628109244(TEXT("/Script/FinalProject"),
	Z_CompiledInDeferFile_FID_Users_knc23_Documents_GitHub_CIT365_Final_Project_FinalProject_Source_FinalProject_FinalProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_knc23_Documents_GitHub_CIT365_Final_Project_FinalProject_Source_FinalProject_FinalProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
