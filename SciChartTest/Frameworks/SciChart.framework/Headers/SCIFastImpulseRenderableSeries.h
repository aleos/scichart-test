//
//  SCIFastImpulseRenderableSeries.h
//  SciChart
//
//  Created by Mykola Hrybeniuk on 9/15/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"

@class SCIImpulseSeriesStyle;

@interface SCIFastImpulseRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastImpulseRenderableSeries class' property.
 @discussion Gets or sets the SCIFastImpulseRenderableSeries Style property.
 */
@property (nonatomic, copy) SCIImpulseSeriesStyle * style;

@end

/** @}*/
