//
//  SCIRolloverModifierStyle.h
//  SciChart
//
//  Created by Admin on 17.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCITooltipModifierStyleBase.h"
#import "SCITooltipModifierStyle.h"

@protocol SCIPen2D;

@interface SCIRolloverModifierStyle : NSObject <SCITooltipModifierStyleBase>

@property (nonatomic, copy) SCITextFormattingStyle * axisTextStyle;

@property (nonatomic, copy) SCITooltipViewSetupBlock axisTooltipSetup;


@property (nonatomic, strong) id<SCIPointMarker> pointMarker;


@property (nonatomic) float alignmentMargin;

@property (nonatomic) SCITooltipColorMode colorMode;

@property (nonatomic, strong) UIColor * axisTooltipColor;
@property (nonatomic, strong) UIColor * axisTooltipBorderColor;
@property (nonatomic) float axisTooltipBorderWidth;
@property (nonatomic) float axisTooltipCornerRadius;

@property (nonatomic) float tooltipOpacity;
@property (nonatomic) float axisTooltipOpacity;

@property (nonatomic) BOOL useSeriesColorForMarker;

@property (nonatomic, strong) id<SCIPen2D> rolloverPen;

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
