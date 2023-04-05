// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_UItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SEM2();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UItem::StaticRegisterNativesUItem()
	{
	}
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
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
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The text for using the item. Etc (Equip, Eat)\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "The text for using the item. Etc (Equip, Eat)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, UseActionText), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The mesh to display for this items pickup\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "The mesh to display for this items pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, PickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The thumbnail for this item\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "The thumbnail for this item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//The display name for this item in the inventory\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "The display name for this item in the inventory" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName = { "ItemDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, ItemDisplayName), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//An optional description for the item\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "An optional description for the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_UseActionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_PickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItem, 298531803);
	template<> SEM2_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItem(Z_Construct_UClass_UItem, &UItem::StaticClass, TEXT("/Script/SEM2"), TEXT("UItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
