//
//  FastColumnRenderableSeries.h
//  SciChart
//
//  Created by Admin on 01.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIColumnSeriesStyle;

/*!
 @brief The SCIFastColumnRenderableSeries class.
 @discussion Provides Fast Column (bar) series rendering.
 @code
 SCIFastColumnRenderableSeries * series = [[SCIFastColumnRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIXyScatterRenderableSeries
 @see SCIFastLineRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIFastColumnRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastColumnRenderableSeries class' property.
 @discussion Gets or sets the FastColumnRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIColumnSeriesStyle * style;

@end
