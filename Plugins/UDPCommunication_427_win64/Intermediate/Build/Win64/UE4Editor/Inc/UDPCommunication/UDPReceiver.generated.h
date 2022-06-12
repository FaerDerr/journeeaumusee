// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUDPData;
#ifdef UDPCOMMUNICATION_UDPReceiver_generated_h
#error "UDPReceiver.generated.h already included, missing '#pragma once' in UDPReceiver.h"
#endif
#define UDPCOMMUNICATION_UDPReceiver_generated_h

#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_SPARSE_DATA
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartUDPReceiver); \
	DECLARE_FUNCTION(execIsNewDataReady); \
	DECLARE_FUNCTION(execGetData);


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartUDPReceiver); \
	DECLARE_FUNCTION(execIsNewDataReady); \
	DECLARE_FUNCTION(execGetData);


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_EVENT_PARMS \
	struct UDPReceiver_eventBPEvent_DataReceived_Parms \
	{ \
		FUDPData data; \
	};


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_CALLBACK_WRAPPERS
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUDPReceiver(); \
	friend struct Z_Construct_UClass_AUDPReceiver_Statics; \
public: \
	DECLARE_CLASS(AUDPReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UDPCommunication"), NO_API) \
	DECLARE_SERIALIZER(AUDPReceiver)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAUDPReceiver(); \
	friend struct Z_Construct_UClass_AUDPReceiver_Statics; \
public: \
	DECLARE_CLASS(AUDPReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UDPCommunication"), NO_API) \
	DECLARE_SERIALIZER(AUDPReceiver)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPReceiver(AUDPReceiver&&); \
	NO_API AUDPReceiver(const AUDPReceiver&); \
public:


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPReceiver(AUDPReceiver&&); \
	NO_API AUDPReceiver(const AUDPReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPReceiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPReceiver)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_PRIVATE_PROPERTY_OFFSET
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_8_PROLOG \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_EVENT_PARMS


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_PRIVATE_PROPERTY_OFFSET \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_SPARSE_DATA \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_RPC_WRAPPERS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_CALLBACK_WRAPPERS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_INCLASS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_PRIVATE_PROPERTY_OFFSET \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_SPARSE_DATA \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_CALLBACK_WRAPPERS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_INCLASS_NO_PURE_DECLS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UDPReceiver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDPCOMMUNICATION_API UClass* StaticClass<class AUDPReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
