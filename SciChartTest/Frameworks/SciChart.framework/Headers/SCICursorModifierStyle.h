//
//  SCICursorModifierStyle.h
//  SciChart
//
//  Created by Admin on 07.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCITooltipModifierStyleBase.h"
#import "SCITooltipModifierStyle.h"

@protocol SCIPen2D;

@interface SCICursorModifierStyle : NSObject <SCITooltipModifierStyleBase>

@property (nonatomic, copy) SCITextFormattingStyle * axisHorizontalTextStyle;
@property (nonatomic, copy) SCITextFormattingStyle * axisVerticalTextStyle;

@property (nonatomic, copy) SCITooltipViewSetupBlock axisHorizontalTooltipSetup;
@property (nonatomic, copy) SCITooltipViewSetupBlock axisVerticalTooltipSetup;

@property (nonatomic) float alignmentMargin;

@property (nonatomic) SCITooltipColorMode colorMode;

@property (nonatomic, strong) id<SCIPen2D> cursorPen;

@property (nonatomic) SCITooltipTargetOffsetMode targetOffsetMode;
@property (nonatomic) float targetOffsetValue;
@property (nonatomic) CGPoint targetCustomOffset;

@property (nonatomic, strong) UIColor * axisHorizontalTooltipColor;
@property (nonatomic, strong) UIColor * axisHorizontalTooltipBorderColor;
@property (nonatomic) float axisHorizontalTooltipBorderWidth;
@property (nonatomic) float axisHorizontalTooltipCornerRadius;

@property (nonatomic, strong) UIColor * axisVerticalTooltipColor;
@property (nonatomic, strong) UIColor * axisVerticalTooltipBorderColor;
@property (nonatomic) float axisVerticalTooltipBorderWidth;
@property (nonatomic) float axisVerticalTooltipCornerRadius;

@property (nonatomic) float tooltipOpacity;
@property (nonatomic) float axisHorizontalTooltipOpacity;
@property (nonatomic) float axisVerticalTooltipOpacity;

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

@property (nonatomic) SCIHitTestMode hitTestMode;

@end
