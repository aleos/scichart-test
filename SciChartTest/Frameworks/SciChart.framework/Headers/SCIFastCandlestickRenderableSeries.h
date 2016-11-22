//
//  FastCandlestickRenderableSeries.h
//  SciChart
//
//  Created by Admin on 24.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCICandlestickSeriesStyle;

/*!
 @brief The SCIFastCandlestickRenderableSeries class.
 @discussion Provides Fast Candlestick series rendering.
 @remark In order to render data as a SCIFastCandlestickSeries, the input must have OHLC data appended via the SCIOhlcDataSeries
 @code
 SCIFastCandlestickRenderableSeries * series = [[SCIFastCandlestickRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIFastCandlestickRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastCandlestickRenderableSeries class' property.
 @discussion Gets or sets the FastCandlestickRenderableSeries Style property.
 */
@property (nonatomic, copy) SCICandlestickSeriesStyle * style;

@end

/** @}*/
