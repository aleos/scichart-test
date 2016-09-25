//
//  FastOhlcRenderableSeries.h
//  SciChart
//
//  Created by Admin on 25.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIOhlcSeriesStyle;

/*!
 @brief The SCIFastOhlcRenderableSeries class.
 @discussion Provides Fast Candlestick series rendering.
 @remark In order to render data as a SCIFastOhlcRenderableSeries, the input must have OHLC data appended via the SCIOhlcDataSeries
 @code
 SCIFastOhlcRenderableSeries * series = [[SCIFastOhlcRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIFastOhlcRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastOhlcRenderableSeries class' property.
 @discussion Gets or sets the SCIFastOhlcRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIOhlcSeriesStyle * style;

@end
