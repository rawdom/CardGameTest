// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
struct FSlateColor;
struct FVector2D;
struct FLinearColor;
#ifdef PAPERFLIPBOOKWIDGET_PaperFlipbookUserWidget_generated_h
#error "PaperFlipbookUserWidget.generated.h already included, missing '#pragma once' in PaperFlipbookUserWidget.h"
#endif
#define PAPERFLIPBOOKWIDGET_PaperFlipbookUserWidget_generated_h

#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_19_DELEGATE \
static inline void FOnFlipbookFinishedPlayingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFlipbookFinishedPlayingEvent) \
{ \
	OnFlipbookFinishedPlayingEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_SPARSE_DATA
#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFlipbookFramerate); \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames); \
	DECLARE_FUNCTION(execGetFlipbookLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetFlipbook); \
	DECLARE_FUNCTION(execSetFlipbook); \
	DECLARE_FUNCTION(execSetBrushMirroring); \
	DECLARE_FUNCTION(execSetBrushTiling); \
	DECLARE_FUNCTION(execSetBrushTintColor); \
	DECLARE_FUNCTION(execOverrideBrushSize); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFlipbookFramerate); \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames); \
	DECLARE_FUNCTION(execGetFlipbookLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetFlipbook); \
	DECLARE_FUNCTION(execSetFlipbook); \
	DECLARE_FUNCTION(execSetBrushMirroring); \
	DECLARE_FUNCTION(execSetBrushTiling); \
	DECLARE_FUNCTION(execSetBrushTintColor); \
	DECLARE_FUNCTION(execOverrideBrushSize); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperFlipbookUserWidget(); \
	friend struct Z_Construct_UClass_UPaperFlipbookUserWidget_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookUserWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperFlipbookWidget"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookUserWidget)


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbookUserWidget(); \
	friend struct Z_Construct_UClass_UPaperFlipbookUserWidget_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookUserWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperFlipbookWidget"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookUserWidget)


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookUserWidget(UPaperFlipbookUserWidget&&); \
	NO_API UPaperFlipbookUserWidget(const UPaperFlipbookUserWidget&); \
public:


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookUserWidget(UPaperFlipbookUserWidget&&); \
	NO_API UPaperFlipbookUserWidget(const UPaperFlipbookUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookUserWidget)


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_PRIVATE_PROPERTY_OFFSET
#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_29_PROLOG
#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_PRIVATE_PROPERTY_OFFSET \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_SPARSE_DATA \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_RPC_WRAPPERS \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_INCLASS \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_PRIVATE_PROPERTY_OFFSET \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_SPARSE_DATA \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_INCLASS_NO_PURE_DECLS \
	CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperFlipbookUserWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERFLIPBOOKWIDGET_API UClass* StaticClass<class UPaperFlipbookUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CardGameTest_Plugins_PaperFlipbookWidget_HostProject_Plugins_PaperFlipbookWidget_Source_PaperFlipbookWidget_Public_PaperFlipbookUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
