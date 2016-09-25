//
//  RenderableSeriesBase.h
//  SciChart
//
//  Created by Admin on 27.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeries.h"

@protocol SCIPointSeries;
@protocol SCICoordinateCalculator;

@interface SCIRenderableSeriesBase : NSObject <SCIRenderableSeries>

@property (nonatomic) BOOL                      isVisible;
@property (nonatomic) BOOL                      isSelected;
@property (nonatomic) SCIResamplingMode     resamplingMode;
@property (nonatomic, strong) id<SCIDataSeries> dataSeries;
@property (nonatomic, strong) id<SCIAxis2D>       xAxis;
@property (nonatomic, strong) id<SCIAxis2D>       yAxis;
@property (nonatomic, copy) NSString *          xAxisId;
@property (nonatomic, copy) NSString *          yAxisId;
@property (nonatomic, weak) id<SCIChartSurface> parentSurface;
@property (nonatomic, strong) id<SCIRenderPassData> currentRenderPassData;

@property (nonatomic) double zeroLineY;

-(double)   getChartRotationAngle:(id<SCIRenderPassData>)renderPassData;
-(double)   getYZeroCoord;
-(void)     invalidateParentSurface;
-(BOOL)     isValidForDrawing;
-(float)    getDatapointWidthFrom:(id<SCIPointSeries>)pointSeries Amount:(int)barsAmount Calculator:(id<SCICoordinateCalculator>)xCalc WidthFraction:(double)widthFraction;
-(void)     internalDrawWithContext:(id<SCIRenderContext2D>)renderContext WithData:(id<SCIRenderPassData>)renderPassData;

@end
