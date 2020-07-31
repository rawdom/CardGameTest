// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperFlipbookWidget/Public/PaperFlipbookUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookUserWidget() {}
// Cross Module References
	PAPERFLIPBOOKWIDGET_API UFunction* Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PaperFlipbookWidget();
	PAPERFLIPBOOKWIDGET_API UClass* Z_Construct_UClass_UPaperFlipbookUserWidget_NoRegister();
	PAPERFLIPBOOKWIDGET_API UClass* Z_Construct_UClass_UPaperFlipbookUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event for a non-looping flipbook finishing play\n" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Event for a non-looping flipbook finishing play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PaperFlipbookWidget, nullptr, "OnFlipbookFinishedPlayingEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetFlipbookFramerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFlipbookFramerate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetFlipbookLengthInFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFlipbookLengthInFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetFlipbookLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFlipbookLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetNewTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewTime(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetPlaybackPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetPlaybackPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetPlaybackPositionInFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackPositionInFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetPlaybackPositionInFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewFramePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackPositionInFrames(Z_Param_NewFramePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execIsReversing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execReverseFromEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReverseFromEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execGetFlipbook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->GetFlipbook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetFlipbook)
	{
		P_GET_OBJECT(UPaperFlipbook,Z_Param_NewFlipbook);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFlipbook(Z_Param_NewFlipbook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetBrushMirroring)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InMirroring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushMirroring(ESlateBrushMirrorType::Type(Z_Param_InMirroring));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetBrushTiling)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushTiling(ESlateBrushTileType::Type(Z_Param_InTiling));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetBrushTintColor)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_TintColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushTintColor(Z_Param_TintColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execOverrideBrushSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InDesiredSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideBrushSize(Z_Param_InDesiredSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpacity(Z_Param_InOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperFlipbookUserWidget::execSetColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	void UPaperFlipbookUserWidget::StaticRegisterNativesUPaperFlipbookUserWidget()
	{
		UClass* Class = UPaperFlipbookUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFlipbook", &UPaperFlipbookUserWidget::execGetFlipbook },
			{ "GetFlipbookFramerate", &UPaperFlipbookUserWidget::execGetFlipbookFramerate },
			{ "GetFlipbookLength", &UPaperFlipbookUserWidget::execGetFlipbookLength },
			{ "GetFlipbookLengthInFrames", &UPaperFlipbookUserWidget::execGetFlipbookLengthInFrames },
			{ "GetPlaybackPosition", &UPaperFlipbookUserWidget::execGetPlaybackPosition },
			{ "GetPlaybackPositionInFrames", &UPaperFlipbookUserWidget::execGetPlaybackPositionInFrames },
			{ "GetPlayRate", &UPaperFlipbookUserWidget::execGetPlayRate },
			{ "IsLooping", &UPaperFlipbookUserWidget::execIsLooping },
			{ "IsPlaying", &UPaperFlipbookUserWidget::execIsPlaying },
			{ "IsReversing", &UPaperFlipbookUserWidget::execIsReversing },
			{ "OverrideBrushSize", &UPaperFlipbookUserWidget::execOverrideBrushSize },
			{ "Play", &UPaperFlipbookUserWidget::execPlay },
			{ "PlayFromStart", &UPaperFlipbookUserWidget::execPlayFromStart },
			{ "Reverse", &UPaperFlipbookUserWidget::execReverse },
			{ "ReverseFromEnd", &UPaperFlipbookUserWidget::execReverseFromEnd },
			{ "SetBrushMirroring", &UPaperFlipbookUserWidget::execSetBrushMirroring },
			{ "SetBrushTiling", &UPaperFlipbookUserWidget::execSetBrushTiling },
			{ "SetBrushTintColor", &UPaperFlipbookUserWidget::execSetBrushTintColor },
			{ "SetColorAndOpacity", &UPaperFlipbookUserWidget::execSetColorAndOpacity },
			{ "SetFlipbook", &UPaperFlipbookUserWidget::execSetFlipbook },
			{ "SetLooping", &UPaperFlipbookUserWidget::execSetLooping },
			{ "SetNewTime", &UPaperFlipbookUserWidget::execSetNewTime },
			{ "SetOpacity", &UPaperFlipbookUserWidget::execSetOpacity },
			{ "SetPlaybackPosition", &UPaperFlipbookUserWidget::execSetPlaybackPosition },
			{ "SetPlaybackPositionInFrames", &UPaperFlipbookUserWidget::execSetPlaybackPositionInFrames },
			{ "SetPlayRate", &UPaperFlipbookUserWidget::execSetPlayRate },
			{ "Stop", &UPaperFlipbookUserWidget::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics
	{
		struct PaperFlipbookUserWidget_eventGetFlipbook_Parms
		{
			UPaperFlipbook* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetFlipbook_Parms, ReturnValue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Gets the flipbook used by this instance. */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Gets the flipbook used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetFlipbook", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetFlipbook_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics
	{
		struct PaperFlipbookUserWidget_eventGetFlipbookFramerate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetFlipbookFramerate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetFlipbookFramerate", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetFlipbookFramerate_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics
	{
		struct PaperFlipbookUserWidget_eventGetFlipbookLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetFlipbookLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get length of the flipbook (in seconds) */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get length of the flipbook (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetFlipbookLength", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetFlipbookLength_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics
	{
		struct PaperFlipbookUserWidget_eventGetFlipbookLengthInFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetFlipbookLengthInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get length of the flipbook (in frames) */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get length of the flipbook (in frames)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetFlipbookLengthInFrames", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetFlipbookLengthInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics
	{
		struct PaperFlipbookUserWidget_eventGetPlaybackPosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get the current playback position (in seconds) of the flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get the current playback position (in seconds) of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetPlaybackPosition", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetPlaybackPosition_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics
	{
		struct PaperFlipbookUserWidget_eventGetPlaybackPositionInFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetPlaybackPositionInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get the current playback position (in frames) of the flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get the current playback position (in frames) of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetPlaybackPositionInFrames", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetPlaybackPositionInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics
	{
		struct PaperFlipbookUserWidget_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get the current play rate for this flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get the current play rate for this flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventGetPlayRate_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics
	{
		struct PaperFlipbookUserWidget_eventIsLooping_Parms
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
	void Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookUserWidget_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookUserWidget_eventIsLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get whether we are looping or not */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "IsLooping", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventIsLooping_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics
	{
		struct PaperFlipbookUserWidget_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookUserWidget_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookUserWidget_eventIsPlaying_Parms), &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get whether this flipbook is playing or not. */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get whether this flipbook is playing or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "IsPlaying", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventIsPlaying_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics
	{
		struct PaperFlipbookUserWidget_eventIsReversing_Parms
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
	void Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookUserWidget_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookUserWidget_eventIsReversing_Parms), &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Get whether we are reversing or not */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "IsReversing", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventIsReversing_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics
	{
		struct PaperFlipbookUserWidget_eventOverrideBrushSize_Parms
		{
			FVector2D InDesiredSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDesiredSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::NewProp_InDesiredSize = { "InDesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventOverrideBrushSize_Parms, InDesiredSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::NewProp_InDesiredSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "OverrideBrushSize", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventOverrideBrushSize_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Start playback of flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Start playback of flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Start playback of flipbook from the start */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Start playback of flipbook from the start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Start playback of flipbook in reverse */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Start playback of flipbook in reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "Reverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Start playback of flipbook in reverse from the end */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Start playback of flipbook in reverse from the end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "ReverseFromEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics
	{
		struct PaperFlipbookUserWidget_eventSetBrushMirroring_Parms
		{
			TEnumAsByte<ESlateBrushMirrorType::Type> InMirroring;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMirroring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::NewProp_InMirroring = { "InMirroring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetBrushMirroring_Parms, InMirroring), Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::NewProp_InMirroring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetBrushMirroring", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetBrushMirroring_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics
	{
		struct PaperFlipbookUserWidget_eventSetBrushTiling_Parms
		{
			TEnumAsByte<ESlateBrushTileType::Type> InTiling;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTiling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::NewProp_InTiling = { "InTiling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetBrushTiling_Parms, InTiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::NewProp_InTiling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetBrushTiling", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetBrushTiling_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics
	{
		struct PaperFlipbookUserWidget_eventSetBrushTintColor_Parms
		{
			FSlateColor TintColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::NewProp_TintColor = { "TintColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetBrushTintColor_Parms, TintColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::NewProp_TintColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetBrushTintColor", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetBrushTintColor_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics
	{
		struct PaperFlipbookUserWidget_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetColorAndOpacity", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics
	{
		struct PaperFlipbookUserWidget_eventSetFlipbook_Parms
		{
			UPaperFlipbook* NewFlipbook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookUserWidget_eventSetFlipbook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookUserWidget_eventSetFlipbook_Parms), &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_NewFlipbook = { "NewFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetFlipbook_Parms, NewFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::NewProp_NewFlipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook). */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetFlipbook", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetFlipbook_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics
	{
		struct PaperFlipbookUserWidget_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((PaperFlipbookUserWidget_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookUserWidget_eventSetLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** true means we should loop, false means we should not. */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "true means we should loop, false means we should not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetLooping", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetLooping_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics
	{
		struct PaperFlipbookUserWidget_eventSetNewTime_Parms
		{
			float NewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Set the new playback position time to use */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetNewTime", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetNewTime_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics
	{
		struct PaperFlipbookUserWidget_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget|Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetOpacity", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetOpacity_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics
	{
		struct PaperFlipbookUserWidget_eventSetPlaybackPosition_Parms
		{
			float NewPosition;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in seconds).  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in seconds)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetPlaybackPosition", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics
	{
		struct PaperFlipbookUserWidget_eventSetPlaybackPositionInFrames_Parms
		{
			int32 NewFramePosition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFramePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition = { "NewFramePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetPlaybackPositionInFrames_Parms, NewFramePosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in frames). */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in frames)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetPlaybackPositionInFrames", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetPlaybackPositionInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics
	{
		struct PaperFlipbookUserWidget_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookUserWidget_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Sets the new play rate for this flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Sets the new play rate for this flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(PaperFlipbookUserWidget_eventSetPlayRate_Parms), Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PaperFlipbook|Widget" },
		{ "Comment", "/** Stop playback of flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Stop playback of flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookUserWidget, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperFlipbookUserWidget_NoRegister()
	{
		return UPaperFlipbookUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPaperFlipbookUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedPlaying_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideContentSize_MetaData[];
#endif
		static void NewProp_bOverrideContentSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideContentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mirroring_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mirroring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperFlipbookWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbook, "GetFlipbook" }, // 2751101496
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookFramerate, "GetFlipbookFramerate" }, // 2003133483
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLength, "GetFlipbookLength" }, // 2650530922
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetFlipbookLengthInFrames, "GetFlipbookLengthInFrames" }, // 2054210066
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPosition, "GetPlaybackPosition" }, // 2892044531
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlaybackPositionInFrames, "GetPlaybackPositionInFrames" }, // 3239983232
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_GetPlayRate, "GetPlayRate" }, // 2301154643
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsLooping, "IsLooping" }, // 2278559069
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsPlaying, "IsPlaying" }, // 3662406061
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_IsReversing, "IsReversing" }, // 2650734799
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_OverrideBrushSize, "OverrideBrushSize" }, // 330880241
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_Play, "Play" }, // 1103485244
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_PlayFromStart, "PlayFromStart" }, // 3860527509
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_Reverse, "Reverse" }, // 2123925535
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_ReverseFromEnd, "ReverseFromEnd" }, // 1305957919
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushMirroring, "SetBrushMirroring" }, // 1294174627
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTiling, "SetBrushTiling" }, // 320276825
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetBrushTintColor, "SetBrushTintColor" }, // 1942789870
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 115163570
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetFlipbook, "SetFlipbook" }, // 1457784136
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetLooping, "SetLooping" }, // 3004765299
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetNewTime, "SetNewTime" }, // 3161290940
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetOpacity, "SetOpacity" }, // 2070943081
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPosition, "SetPlaybackPosition" }, // 4228831264
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlaybackPositionInFrames, "SetPlaybackPositionInFrames" }, // 2691979275
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_SetPlayRate, "SetPlayRate" }, // 971216393
		{ &Z_Construct_UFunction_UPaperFlipbookUserWidget_Stop, "Stop" }, // 2958618533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The paper flipbook widget allows you to display a flipbook asset in the UI.\n *\n * * No Children\n */" },
		{ "DisplayName", "Paper Flipbook" },
		{ "IncludePath", "PaperFlipbookUserWidget.h" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "The paper flipbook widget allows you to display a flipbook asset in the UI.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnFinishedPlaying_MetaData[] = {
		{ "Category", "PaperFlipbook|Widget|Event" },
		{ "Comment", "/** Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction) */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnFinishedPlaying = { "OnFinishedPlaying", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, OnFinishedPlaying), Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnFinishedPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnFinishedPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnMouseButtonDownEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnMouseButtonDownEvent = { "OnMouseButtonDownEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnMouseButtonDownEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnMouseButtonDownEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_DesiredSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bOverrideContentSize" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, DesiredSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_DesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_DesiredSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize_SetBit(void* Obj)
	{
		((UPaperFlipbookUserWidget*)Obj)->bOverrideContentSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize = { "bOverrideContentSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookUserWidget), &Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Mirroring_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How to mirror the image in Image mode.  This is normally only used for dynamic image brushes where the source texture\n\x09\x09""comes from a hardware device such as a web camera. */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "How to mirror the image in Image mode.  This is normally only used for dynamic image brushes where the source texture\n              comes from a hardware device such as a web camera." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Mirroring = { "Mirroring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, Mirroring), Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Mirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Mirroring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How to tile the image in Image mode */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "How to tile the image in Image mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, Tiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Tiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color and opacity */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the flipbook should loop when it reaches the end, or stop */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Whether the flipbook should loop when it reaches the end, or stop" },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UPaperFlipbookUserWidget*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookUserWidget), &Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Current play rate of the flipbook */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Current play rate of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Are we currently playing . */" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Are we currently playing ." },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UPaperFlipbookUserWidget*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookUserWidget), &Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_SourceFlipbook_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Flipbook currently being played */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/PaperFlipbookUserWidget.h" },
		{ "ToolTip", "Flipbook currently being played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_SourceFlipbook = { "SourceFlipbook", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookUserWidget, SourceFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_SourceFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_SourceFlipbook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnFinishedPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_OnMouseButtonDownEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_DesiredSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bOverrideContentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Mirroring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_Tiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::NewProp_SourceFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbookUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::ClassParams = {
		&UPaperFlipbookUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperFlipbookUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperFlipbookUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperFlipbookUserWidget, 1096474286);
	template<> PAPERFLIPBOOKWIDGET_API UClass* StaticClass<UPaperFlipbookUserWidget>()
	{
		return UPaperFlipbookUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperFlipbookUserWidget(Z_Construct_UClass_UPaperFlipbookUserWidget, &UPaperFlipbookUserWidget::StaticClass, TEXT("/Script/PaperFlipbookWidget"), TEXT("UPaperFlipbookUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbookUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
