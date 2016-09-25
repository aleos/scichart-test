//
//  HeatMapRenderableSeries.h
//  SciChart
//
//  Created by Admin on 04.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIHeatMapSeriesStyle;

/*!
 @brief The SCIHeatMapRenderableSeries class.
 @discussion Displays 2D data as a heatmap
 @code
 SCIHeatMapRenderableSeries * series = [[SCIHeatMapRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIHeatMapRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIHeatMapRenderableSeries class' property.
 @discussion Gets or sets the HeatMapRenderableSeries Style property.
 */
@property (nonatomic, strong) SCIHeatMapSeriesStyle * style;

@end
