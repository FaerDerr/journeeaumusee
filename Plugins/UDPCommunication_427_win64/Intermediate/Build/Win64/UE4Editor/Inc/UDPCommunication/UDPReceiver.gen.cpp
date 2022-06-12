// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UDPCommunication/Classes/UDPReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPReceiver() {}
// Cross Module References
	UDPCOMMUNICATION_API UClass* Z_Construct_UClass_AUDPReceiver_NoRegister();
	UDPCOMMUNICATION_API UClass* Z_Construct_UClass_AUDPReceiver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UDPCommunication();
	UDPCOMMUNICATION_API UScriptStruct* Z_Construct_UScriptStruct_FUDPData();
// End Cross Module References
	DEFINE_FUNCTION(AUDPReceiver::execStartUDPReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartUDPReceiver(Z_Param_SocketName,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUDPReceiver::execIsNewDataReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNewDataReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUDPReceiver::execGetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUDPData*)Z_Param__Result=P_THIS->GetData();
		P_NATIVE_END;
	}
	static FName NAME_AUDPReceiver_BPEvent_DataReceived = FName(TEXT("BPEvent_DataReceived"));
	void AUDPReceiver::BPEvent_DataReceived(FUDPData const& data)
	{
		UDPReceiver_eventBPEvent_DataReceived_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_AUDPReceiver_BPEvent_DataReceived),&Parms);
	}
	void AUDPReceiver::StaticRegisterNativesAUDPReceiver()
	{
		UClass* Class = AUDPReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &AUDPReceiver::execGetData },
			{ "IsNewDataReady", &AUDPReceiver::execIsNewDataReady },
			{ "StartUDPReceiver", &AUDPReceiver::execStartUDPReceiver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventBPEvent_DataReceived_Parms, data), Z_Construct_UScriptStruct_FUDPData, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "ModuleRelativePath", "Classes/UDPReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "BPEvent_DataReceived", nullptr, nullptr, sizeof(UDPReceiver_eventBPEvent_DataReceived_Parms), Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPReceiver_GetData_Statics
	{
		struct UDPReceiver_eventGetData_Parms
		{
			FUDPData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUDPReceiver_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventGetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FUDPData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "ModuleRelativePath", "Classes/UDPReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "GetData", nullptr, nullptr, sizeof(UDPReceiver_eventGetData_Parms), Z_Construct_UFunction_AUDPReceiver_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPReceiver_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics
	{
		struct UDPReceiver_eventIsNewDataReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPReceiver_eventIsNewDataReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPReceiver_eventIsNewDataReady_Parms), &Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "ModuleRelativePath", "Classes/UDPReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "IsNewDataReady", nullptr, nullptr, sizeof(UDPReceiver_eventIsNewDataReady_Parms), Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_IsNewDataReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPReceiver_IsNewDataReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics
	{
		struct UDPReceiver_eventStartUDPReceiver_Parms
		{
			FString SocketName;
			int32 Port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventStartUDPReceiver_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPReceiver_eventStartUDPReceiver_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_Port_MetaData)) };
	void Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPReceiver_eventStartUDPReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPReceiver_eventStartUDPReceiver_Parms), &Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPCommunication" },
		{ "ModuleRelativePath", "Classes/UDPReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUDPReceiver, nullptr, "StartUDPReceiver", nullptr, nullptr, sizeof(UDPReceiver_eventStartUDPReceiver_Parms), Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUDPReceiver_NoRegister()
	{
		return AUDPReceiver::StaticClass();
	}
	struct Z_Construct_UClass_AUDPReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUDPReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UDPCommunication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUDPReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUDPReceiver_BPEvent_DataReceived, "BPEvent_DataReceived" }, // 2681986550
		{ &Z_Construct_UFunction_AUDPReceiver_GetData, "GetData" }, // 1874648732
		{ &Z_Construct_UFunction_AUDPReceiver_IsNewDataReady, "IsNewDataReady" }, // 841309265
		{ &Z_Construct_UFunction_AUDPReceiver_StartUDPReceiver, "StartUDPReceiver" }, // 860331056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UDPReceiver.h" },
		{ "ModuleRelativePath", "Classes/UDPReceiver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUDPReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUDPReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUDPReceiver_Statics::ClassParams = {
		&AUDPReceiver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUDPReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUDPReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUDPReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUDPReceiver, 3561768221);
	template<> UDPCOMMUNICATION_API UClass* StaticClass<AUDPReceiver>()
	{
		return AUDPReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUDPReceiver(Z_Construct_UClass_AUDPReceiver, &AUDPReceiver::StaticClass, TEXT("/Script/UDPCommunication"), TEXT("AUDPReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUDPReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
