//
//  XyyPointSeries.h
//  SciChart
//
//  Created by Admin on 16.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPointSeries.h"

@interface SCIXyyPointSeries : NSObject <SCIPointSeries>

-(id)initWithSeriesY1:(id<SCIPointSeries>)y1 Y2:(id<SCIPointSeries>)y2;

-(SCIArrayController *) xValues;
-(SCIArrayController *) yValues;
-(SCIArrayController *) indices;

-(SCIArrayController *) y1Values;
-(SCIArrayController *) y2Values;

@end
