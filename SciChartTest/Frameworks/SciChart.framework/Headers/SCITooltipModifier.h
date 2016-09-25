//
//  SCITooltipModifier.h
//  SciChart
//
//  Created by Admin on 08.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIChartModifierBase.h"
#import "SCIHitTestProvider.h"

@class SCITooltipModifierStyle;

/*!
 @brief The SCITooltipModifier class.
 @discussion Provides a touch tooltip to a chart, outputting a single SeriesIfo.
 */
@interface SCITooltipModifier : SCIChartModifierBase

/*!
 @brief The SCITooltipModifier class' property.
 @discussion Gets or sets the ToolTip Style property.
 */
@property (nonatomic, copy) SCITooltipModifierStyle * style;

/*!
 @brief The SCITooltipModifier class' property.
 @discussion A radius used in the method for interpolation.
 */
@property (nonatomic) double hitTestRadius;

-(HitTestResult) hitTestWithProvider:(__unsafe_unretained id<SCIHitTestProvider>)provider
                            Location:(CGPoint)location Radius:(double)radius
                              onData:(id<SCIRenderPassData>)data
                         hitTestMode:(SCIHitTestMode) hitTestMode;

@end
