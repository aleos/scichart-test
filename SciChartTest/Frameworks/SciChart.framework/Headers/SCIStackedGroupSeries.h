//
//  StackedGroupSeries.h
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

@protocol SCIStackedRenderableSeries;

@interface SCIStackedGroupSeries : SCIRenderableSeriesBase

-(void)addSeries:(id<SCIStackedRenderableSeries>)series;
-(void)removeSeries:(id<SCIStackedRenderableSeries>)series;
-(void)removeAllSeries;

@end

/** @}*/
