// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UDPCommunication/Classes/UDPSender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPSender() {}
// Cross Module References
	UDPCOMMUNICATION_API UClass* Z_Construct_UClass_AUDPSender_NoRegister();
	UDPCOMMUNICATION_API UClass* Z_Construct_UClass_AUDPSender();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UDPCommunication();
	UDPCOMMUNICATION_API UScriptStruct* Z_Construct_UScriptStruct_FUDPData();
// End Cross Module References
	DEFINE_FUNCTION(AUDPSender::execUDPSendArray)
	{
		P_GET_STRUCT(FUDPData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UDPSendArray(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUDPSender::execStartUDPSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TheIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThePort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartUDPSender(Z_Param_SocketName,Z_Param_TheIP,Z_Param_ThePort);
		P_NATIVE_END;
	}
	void AUDPSender::StaticRegisterNativesAUDPSender()
	{
		UClass* Class = AUDPSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartUDPSender", &AUDPSender::execStartUDPSender },
			{ "UDPSendArray", &AUDPSender::execUDPSendArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics
	{
		struct UDPSender_eventStartUDPSender_Parms
		{
			FString SocketName;
			FString TheIP;
			int32 ThePort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TheIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThePort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventStartUDPSender_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort_MetaData)) };
	void Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPSender_eventStartUDPSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPSender_eventStartUDPSender_Parms), &Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_TheIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ThePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "Comment", "//Tekitab saatja jaoks sokli pordi ja ip-ga\n" },
		{ "ModuleRelativePath", "Classes/UDPSender.h" },
		{ "ToolTip", "Tekitab saatja jaoks sokli pordi ja ip-ga" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPSender, nullptr, "StartUDPSender", nullptr, nullptr, sizeof(UDPSender_eventStartUDPSender_Parms), Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPSender_StartUDPSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPSender_StartUDPSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics
	{
		struct UDPSender_eventUDPSendArray_Parms
		{
			FUDPData data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPSender_eventUDPSendArray_Parms, data), Z_Construct_UScriptStruct_FUDPData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPSender_eventUDPSendArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPSender_eventUDPSendArray_Parms), &Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "Comment", "//Saadab numbrite jada l?bi saatja ning serialiseerimise\n" },
		{ "ModuleRelativePath", "Classes/UDPSender.h" },
		{ "ToolTip", "Saadab numbrite jada l?bi saatja ning serialiseerimise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPSender, nullptr, "UDPSendArray", nullptr, nullptr, sizeof(UDPSender_eventUDPSendArray_Parms), Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPSender_UDPSendArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPSender_UDPSendArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUDPSender_NoRegister()
	{
		return AUDPSender::StaticClass();
	}
	struct Z_Construct_UClass_AUDPSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUDPSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UDPCommunication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUDPSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUDPSender_StartUDPSender, "StartUDPSender" }, // 1615880705
		{ &Z_Construct_UFunction_AUDPSender_UDPSendArray, "UDPSendArray" }, // 2773255910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UDPSender.h" },
		{ "ModuleRelativePath", "Classes/UDPSender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUDPSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUDPSender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUDPSender_Statics::ClassParams = {
		&AUDPSender::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUDPSender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUDPSender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUDPSender, 3850461461);
	template<> UDPCOMMUNICATION_API UClass* StaticClass<AUDPSender>()
	{
		return AUDPSender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUDPSender(Z_Construct_UClass_AUDPSender, &AUDPSender::StaticClass, TEXT("/Script/UDPCommunication"), TEXT("AUDPSender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUDPSender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
