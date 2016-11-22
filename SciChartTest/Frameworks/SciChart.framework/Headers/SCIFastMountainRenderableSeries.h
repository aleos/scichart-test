//
//  FastMountainRenderableSeries.h
//  SciChart
//
//  Created by Admin on 06.10.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIMountainSeriesStyle;

/*!
 @brief The SCIFastMountainRenderableSeries class.
 @discussion Provides Fast Mountain(area) series rendering.
 @code
 SCIFastMountainRenderableSeries * series = [[SCIFastMountainRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIXyScatterRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastLineRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIFastMountainRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastMountainRenderableSeries class' property.
 @discussion Gets or sets the FastMountainRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIMountainSeriesStyle * style;

@end

/** @}*/
