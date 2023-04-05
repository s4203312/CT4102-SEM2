// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/Coin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoin() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_ACoin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SEM2();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ACoin::StaticRegisterNativesACoin()
	{
	}
	UClass* Z_Construct_UClass_ACoin_NoRegister()
	{
		return ACoin::StaticClass();
	}
	struct Z_Construct_UClass_ACoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseActionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UseActionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Coin.h" },
		{ "ModuleRelativePath", "Coin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Coin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_UseActionText_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The text for using the item. Etc (Equip, Eat)\n" },
		{ "ModuleRelativePath", "Coin.h" },
		{ "ToolTip", "The text for using the item. Etc (Equip, Eat)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, UseActionText), METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_UseActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_UseActionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_MeshImage_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The mesh to display for this item\n" },
		{ "ModuleRelativePath", "Coin.h" },
		{ "ToolTip", "The mesh to display for this item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_MeshImage = { "MeshImage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, MeshImage), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_MeshImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_MeshImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The thumbnail for this item\n" },
		{ "ModuleRelativePath", "Coin.h" },
		{ "ToolTip", "The thumbnail for this item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_ItemDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The display name for this item in the inventory\n" },
		{ "ModuleRelativePath", "Coin.h" },
		{ "ToolTip", "The display name for this item in the inventory" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_ItemDisplayName = { "ItemDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, ItemDisplayName), METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_ItemDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_ItemDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//An optional description for the item\n" },
		{ "ModuleRelativePath", "Coin.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "An optional description for the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoin, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_ItemDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_UseActionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_MeshImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_ItemDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_ItemDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoin_Statics::ClassParams = {
		&ACoin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoin, 543533570);
	template<> SEM2_API UClass* StaticClass<ACoin>()
	{
		return ACoin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoin(Z_Construct_UClass_ACoin, &ACoin::StaticClass, TEXT("/Script/SEM2"), TEXT("ACoin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
