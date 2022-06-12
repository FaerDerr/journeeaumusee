// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUDPData;
#ifdef UDPCOMMUNICATION_UDPSender_generated_h
#error "UDPSender.generated.h already included, missing '#pragma once' in UDPSender.h"
#endif
#define UDPCOMMUNICATION_UDPSender_generated_h

#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_SPARSE_DATA
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUDPSendArray); \
	DECLARE_FUNCTION(execStartUDPSender);


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUDPSendArray); \
	DECLARE_FUNCTION(execStartUDPSender);


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUDPSender(); \
	friend struct Z_Construct_UClass_AUDPSender_Statics; \
public: \
	DECLARE_CLASS(AUDPSender, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UDPCommunication"), NO_API) \
	DECLARE_SERIALIZER(AUDPSender)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUDPSender(); \
	friend struct Z_Construct_UClass_AUDPSender_Statics; \
public: \
	DECLARE_CLASS(AUDPSender, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UDPCommunication"), NO_API) \
	DECLARE_SERIALIZER(AUDPSender)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPSender(AUDPSender&&); \
	NO_API AUDPSender(const AUDPSender&); \
public:


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUDPSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUDPSender(AUDPSender&&); \
	NO_API AUDPSender(const AUDPSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUDPSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUDPSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUDPSender)


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_PRIVATE_PROPERTY_OFFSET
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_9_PROLOG
#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_PRIVATE_PROPERTY_OFFSET \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_SPARSE_DATA \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_RPC_WRAPPERS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_INCLASS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_PRIVATE_PROPERTY_OFFSET \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_SPARSE_DATA \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_INCLASS_NO_PURE_DECLS \
	udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UDPSender."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDPCOMMUNICATION_API UClass* StaticClass<class AUDPSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID udptest_Plugins_UDPCommunication_427_win64_Source_UDPCommunication_Classes_UDPSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
