//
//  RenderPassData.h
//  SciChart
//
//  Created by Admin on 28.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCIIndexRange;
@protocol SCIPointSeries;
@protocol SCICoordinateCalculator;
@protocol SCIDataSeries;
@protocol SCIRenderableSeries;

#pragma mark - SCIRenderPassData protocol

@protocol SCIRenderPassData <NSObject>

@required
-(SCIIndexRange *) pointRange;
-(id<SCIPointSeries>) pointSeries;
-(id<SCIDataSeries>) dataSeries;
-(id<SCIRenderableSeries>) renderableSeries;
-(BOOL) isVerticalChart;
-(id<SCICoordinateCalculator>) yCoordinateCalculator;
-(id<SCICoordinateCalculator>) xCoordinateCalculator;

@end

#pragma mark - SCIRenderPassData default implementation

@interface SCIRenderPassData : NSObject <SCIRenderPassData>

-(id) initWithPointRange:(SCIIndexRange*)pointRange
             PointSeries:(id<SCIPointSeries>)pointSeries
              DataSeries:(id<SCIDataSeries>)dataSeries
        RenderableSeries:(id<SCIRenderableSeries>)renderableSeries
             YCalculator:(id<SCICoordinateCalculator>)yCalculator
             XCalculator:(id<SCICoordinateCalculator>)xCalculator;

@end
