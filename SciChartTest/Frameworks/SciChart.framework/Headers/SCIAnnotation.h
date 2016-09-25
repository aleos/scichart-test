//
//  SCIAnnotation.h
//  SciChart
//
//  Created by Admin on 28.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import "SCIGestureEventsHandler.h"

@class SCIAxisCollection;
@protocol SCIAxis2D;
@protocol SCIChartSurface;


@protocol SCIAnnotation <SCIGestureEventsHandler>

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;

-(id<SCIAxis2D>) xAxis;
-(SCIAxisCollection*) yAxes;
-(id<SCIAxis2D>) yAxis;
-(id<SCIAxis2D>) getYAxis:(NSString*)axisId;

-(void)draw;

-(void)onAttached;
-(void)onDetached;

@property (nonatomic) BOOL isAttached;
@property (nonatomic, copy) NSString * annotationName;

@end
