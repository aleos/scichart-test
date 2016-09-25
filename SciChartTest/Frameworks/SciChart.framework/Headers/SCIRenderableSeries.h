//
//  SCIRenderableSeries.h
//  SciChart
//
//  Created by Admin on 15.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//
#import "SCIDrawable.h"
#import "SCIResamplingMode.h"
#import "SCIHitTestProvider.h"

@protocol SCIDataSeries;
@protocol SCIAxis2D;
@protocol SCIRenderPassData;
@protocol SCIRange;
@protocol SCIChartSurface;
@class SCISeriesInfo;

@class UIColor;

@protocol SCIRenderableSeries <NSObject, SCIDrawable>

@property (nonatomic, weak) id<SCIChartSurface>     parentSurface;
@property (nonatomic) BOOL                          isVisible;
@property (nonatomic) BOOL                          isSelected;
@property (nonatomic) SCIResamplingMode         resamplingMode;
@property (nonatomic, strong) id<SCIDataSeries>     dataSeries;
@property (nonatomic, strong) id<SCIAxis2D>           xAxis;
@property (nonatomic, strong) id<SCIAxis2D>           yAxis;
@property (nonatomic, copy) NSString *              xAxisId;
@property (nonatomic, copy) NSString *              yAxisId;
@property (nonatomic) double                        zeroLineY;
@property (nonatomic, strong) id<SCIRenderPassData> currentRenderPassData;

-(UIColor *) seriesColor;
-(id<SCIRange>) getXRange;
-(id<SCIRange>) getYRange:(id<SCIRange>)xRange;
-(id<SCIRange>) getYRange:(id<SCIRange>)xRange Positive:(BOOL)getPositiveRange;
-(id<SCIHitTestProvider>) hitTestProvider;
-(SCISeriesInfo*) toSeriesInfoWithHitTest:(HitTestResult)info;

@end
