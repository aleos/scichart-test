//
//  SCITooltipModifierStyle.h
//  SciChart
//
//  Created by Admin on 15.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SCITooltipModifierStyleBase.h"

@interface SCITooltipModifierStyle : NSObject <SCITooltipModifierStyleBase>

@property (nonatomic, strong) id<SCIPointMarker> targetMarker;
@property (nonatomic) float alignmentMargin;

@property (nonatomic) SCITooltipTargetOffsetMode targetOffsetMode;
@property (nonatomic) float targetOffsetValue;
@property (nonatomic) CGPoint targetCustomOffset;

@property (nonatomic) SCITooltipColorMode colorMode;

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
