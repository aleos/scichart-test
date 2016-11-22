//
//  BubbleRenderableSeries.h
//  SciChart
//
//  Created by Admin on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <SciChart/SciChart.h>

@class SCIBubbleSeriesStyle;

/*!
 @brief The SCIBubbleRenderableSeries class.
 @discussion Defines a Bubble-chart renderable series, supporting rendering of bubbles using Z data, positioned using X-Y data.
 @remark Requires SCIXyzDataSeries data-source
 @code
 SCIBubbleRenderableSeries * series = [[SCIBubbleRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 */
@interface SCIBubbleRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIBubbleRenderableSeries class' property.
 @discussion Gets or sets the BubbleRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIBubbleSeriesStyle * style;
@property (nonatomic) double zScale;

@end

/** @}*/
