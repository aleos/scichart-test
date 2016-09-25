//
//  XyScatterRenderableSeries.h
//  SciChart
//
//  Created by Admin on 27.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@protocol SCIPointMarker;
@class SCIScatterSeriesStyle;

/*!
 @brief The SCIXyScatterRenderableSeries class.
 @discussion Provides Scatter series rendering via the PointMarker property.
 @code
 SCIXyScatterRenderableSeries * series = [[SCIXyScatterRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIFastLineRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIXyScatterRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIXyScatterRenderableSeries class' property.
 @discussion Gets or sets the XyScatterRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIScatterSeriesStyle * style;

@end
