//
//  SCIStackedRenderableSeries.h
//  SciChart
//
//  Created by Admin on 19.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import "SCIRenderableSeries.h"
@protocol SCIRenderPassData;

typedef void(^SCIStackedSeriesRenderDataRequest)(id<SCIRenderableSeries> series, id<SCIRenderPassData> data);

@protocol SCIStackedRenderableSeries <SCIRenderableSeries>

@property (nonatomic, copy) SCIStackedSeriesRenderDataRequest updateRenderData;

-(void) modifyPointSeries:(id<SCIPointSeries>)points1 With:(id<SCIPointSeries>)points2;

-(void) drawWithContext:(id<SCIRenderContext2D>)renderContext
        WithStackedData:(id<SCIRenderPassData>)renderPassData;

-(id<SCIPointSeries>) getStackedPointSeriesFromPoints1:(id<SCIPointSeries>)points1 Points2:(id<SCIPointSeries>)points2;

@end
