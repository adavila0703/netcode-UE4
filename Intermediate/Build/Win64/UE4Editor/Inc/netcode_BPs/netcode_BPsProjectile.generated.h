// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NETCODE_BPS_netcode_BPsProjectile_generated_h
#error "netcode_BPsProjectile.generated.h already included, missing '#pragma once' in netcode_BPsProjectile.h"
#endif
#define NETCODE_BPS_netcode_BPsProjectile_generated_h

#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_SPARSE_DATA
#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAnetcode_BPsProjectile(); \
	friend struct Z_Construct_UClass_Anetcode_BPsProjectile_Statics; \
public: \
	DECLARE_CLASS(Anetcode_BPsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/netcode_BPs"), NO_API) \
	DECLARE_SERIALIZER(Anetcode_BPsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAnetcode_BPsProjectile(); \
	friend struct Z_Construct_UClass_Anetcode_BPsProjectile_Statics; \
public: \
	DECLARE_CLASS(Anetcode_BPsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/netcode_BPs"), NO_API) \
	DECLARE_SERIALIZER(Anetcode_BPsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Anetcode_BPsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Anetcode_BPsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Anetcode_BPsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Anetcode_BPsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Anetcode_BPsProjectile(Anetcode_BPsProjectile&&); \
	NO_API Anetcode_BPsProjectile(const Anetcode_BPsProjectile&); \
public:


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Anetcode_BPsProjectile(Anetcode_BPsProjectile&&); \
	NO_API Anetcode_BPsProjectile(const Anetcode_BPsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Anetcode_BPsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Anetcode_BPsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Anetcode_BPsProjectile)


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Anetcode_BPsProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Anetcode_BPsProjectile, ProjectileMovement); }


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_9_PROLOG
#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_SPARSE_DATA \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_RPC_WRAPPERS \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_INCLASS \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_SPARSE_DATA \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_INCLASS_NO_PURE_DECLS \
	netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETCODE_BPS_API UClass* StaticClass<class Anetcode_BPsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID netcode_UE4_Source_netcode_BPs_netcode_BPsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
