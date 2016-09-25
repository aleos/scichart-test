//
//  SCIModifierStyleBase.h
//  SciChart
//
//  Created by Yaroslav Pelyukh on 7/17/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import <UIKit/UIKit.h>
#import "SCIHitTestProvider.h"

@class SCITextFormattingStyle;
@protocol SCIPointMarker;

@class SCITooltipView;

typedef void (^SCITooltipViewSetupBlock) (SCITooltipView * view);

typedef NS_ENUM(NSUInteger, SCITooltipTargetOffsetMode) {
    SCITooltipTargetOffset_None,
    SCITooltipTargetOffset_Up,
    SCITooltipTargetOffset_Down,
    SCITooltipTargetOffset_Left,
    SCITooltipTargetOffset_Right,
    SCITooltipTargetOffset_UpLeft,
    SCITooltipTargetOffset_UpRight,
    SCITooltipTargetOffset_DownLeft,
    SCITooltipTargetOffset_DownRight
};

typedef NS_ENUM(NSUInteger, SCITooltipViewAlignmentMode) {
    SCITooltipViewAlignment_TopRight,
    SCITooltipViewAlignment_TopLeft,
    SCITooltipViewAlignment_BottomRight,
    SCITooltipViewAlignment_BottomLeft,
};

typedef NS_ENUM(NSUInteger, SCITooltipColorMode) {
    SCITooltipColorMode_Default,
    SCITooltipColorMode_SeriesColor,
    SCITooltipColorMode_SeriesColorToDataView
};

@protocol SCITooltipModifierStyleBase <NSObject, NSCopying>

@property (nonatomic, copy) SCITextFormattingStyle * headLineStyle;
@property (nonatomic, copy) SCITextFormattingStyle * dataStyle;
@property (nonatomic, copy) SCITooltipViewSetupBlock tooltipViewSetup;
@property (nonatomic) CGSize tooltipSize;
@property (nonatomic) float contentPadding;
@property (nonatomic, copy) SCIActionBlock styleChanged;
@property (nonatomic) SCITooltipViewAlignmentMode tooltipAlignment;

@property (nonatomic, strong) UIColor * tooltipColor;
@property (nonatomic, strong) UIColor * tooltipBorderColor;
@property (nonatomic) float tooltipBorderWidth;
@property (nonatomic) float tooltipCornerRadius;

@property (nonatomic) CGSize tooltipShadowOffset;
@property (nonatomic) float tooltipShadowRadius;
@property (nonatomic) float tooltipShadowOpacity;

@property (nonatomic) float tooltipOpacity;

@property (nonatomic) SCIHitTestMode hitTestMode;

@end
