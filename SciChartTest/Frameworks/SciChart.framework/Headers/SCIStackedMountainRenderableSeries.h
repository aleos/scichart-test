//
//  StackedMountainRenderableSeries.h
//  SciChart
//
//  Created by Admin on 19.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRenderableSeriesBase.h"
#import "SCIStackedRenderableSeries.h"

@class SCIMountainSeriesStyle;

@interface SCIStackedMountainRenderableSeries : SCIRenderableSeriesBase <SCIStackedRenderableSeries>

@property (nonatomic, copy) SCIStackedSeriesRenderDataRequest updateRenderData;

@property (nonatomic, strong) SCIMountainSeriesStyle * style;

@end

/** @}*/
