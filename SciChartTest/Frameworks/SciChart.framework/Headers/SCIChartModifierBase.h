//
//  SCIChartModifierBase.h
//  SciChart
//
//  Created by Admin on 04.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIChartModifier.h"

@protocol SCIChartSurface;
@protocol SCIAxis2D;
@class SCIAxisCollection;

@interface SCIChartModifierBase : NSObject <SCIChartModifier>

@property (nonatomic) BOOL isEnabled;

@property (nonatomic) BOOL isAttached;

@property (nonatomic, copy) NSString *modifierName;

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;

-(SCIAxisCollection*) xAxes;
-(SCIAxisCollection*) yAxes;

-(id<SCIAxis2D>) xAxis;
-(id<SCIAxis2D>) yAxis;

-(id<SCIAxis2D>) getXAxis:(NSString*)axisName;
-(id<SCIAxis2D>) getYAxis:(NSString*)axisName;

@property (nonatomic) BOOL autoPassAreaCheck;

@end

/** @}*/
