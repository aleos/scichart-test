//
//  SCIChartModifier.h
//  SciChart
//
//  Created by Admin on 04.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

@class SCIAxisCollection;
@protocol SCIAxis2D;
@protocol SCIChartSurface;

@protocol SCIChartModifier <NSObject>

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;
@property (nonatomic) BOOL isAttached;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic, copy) NSString *modifierName;

-(id<SCIAxis2D>) xAxis;
-(id<SCIAxis2D>) yAxis;
-(SCIAxisCollection*) xAxes;
-(SCIAxisCollection*) yAxes;
-(id<SCIAxis2D>) getXAxis:(NSString*)axisName;
-(id<SCIAxis2D>) getYAxis:(NSString*)axisId;

-(void) resetInertia;
-(void)draw;
-(void) onAttached;
-(void) onDetached;

@property (nonatomic) BOOL autoPassAreaCheck;

@end

/** @}*/
