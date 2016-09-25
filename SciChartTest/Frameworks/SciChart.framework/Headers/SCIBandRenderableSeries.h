//
//  BandRenderableSeries.h
//  SciChart
//
//  Created by Admin on 16.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIBandSeriesStyle;

/*!
 @brief The SCIBandRenderableSeries class.
 @discussion A RenderableSeries type which displays two lines and shaded bands between them, where band-colors depend on wether one line is greater then the other
 @code
 SCIBandRenderableSeries * series = [[SCIBandRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIBandRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIBandRenderableSeries class' property.
 @discussion Gets or sets the BandRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIBandSeriesStyle * style;

@end
