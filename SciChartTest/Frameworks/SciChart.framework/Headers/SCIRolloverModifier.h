//
//  SCIRolloverModiifer.h
//  SciChart
//
//  Created by Admin on 14.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIGestureModifier.h"
#import "SCIHitTestProvider.h"

@class SCIRolloverModifierStyle;

/*!
 @brief The SCIRolloverModifier class.
 @discussion Provides a touch gesture hit-test to a chart.
 */
@interface SCIRolloverModifier : SCIGestureModifier

/*!
 @brief The SCIRolloverModifier class' property.
 @discussion Gets or sets the RolloverModifier Style property.
 */
@property (nonatomic, copy) SCIRolloverModifierStyle * style;

/*!
 @brief The SCIRolloverModifier class' property.
 @discussion A radius used in the method for interpolation.
 */
@property (nonatomic) double hitTestRadius;


-(HitTestResult) hitTestWithProvider:(__unsafe_unretained id<SCIHitTestProvider>)provider
                            Location:(CGPoint)location Radius:(double)radius
                              onData:(id<SCIRenderPassData>)data
                         hitTestMode:(SCIHitTestMode) hitTestMode;

@end

/** @}*/

