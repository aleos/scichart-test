//
//  XyzPointSeries.h
//  SciChart
//
//  Created by Yaroslav Pelyukh on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <SciChart/SciChart.h>
#import "SCIPointSeries.h"

@interface SCIXyzPointSeries: NSObject <SCIPointSeries>

-(id)initWithSeriesXY:(id<SCIPointSeries>) xy
                   XZ:(id<SCIPointSeries>) xz;

-(SCIArrayController *) zValues;

@end
