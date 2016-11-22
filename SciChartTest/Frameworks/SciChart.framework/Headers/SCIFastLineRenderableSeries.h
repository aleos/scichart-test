//
//  FastLineRenderableSeries.h
//  SciChart
//
//  Created by Admin on 28.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCILineSeriesStyle;

/*!
 @brief The SCIFastLineRenderableSeries class.
 @discussion Defines a Line renderable series, suppotring solid, stroked (thicknes 1+) lines and Point-markers.
 @code
 SCIFastLineRenderableSeries * series = [[SCIFastLineRenderableSeries alloc] init]
 [surface attachRenderableSeries: series];
 @endcode
 @see SCIXyScatterRenderableSeries
 @see SCIFastColumnRenderableSeries
 @see SCIFastMountainRenderableSeries
 @see SCIFastCandlestickRenderableSeries
 @see SCIBubbleRenderableSeries
 */
@interface SCIFastLineRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastLineRenderableSeries class' property.
 @discussion Gets or sets the FastLineRenderableSeries Style property.
 */
@property (nonatomic, copy) SCILineSeriesStyle * style;

@end

/** @}*/
