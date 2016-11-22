//
//  OhlcPointSeries.h
//  SciChart
//
//  Created by Admin on 23.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPointSeries.h"

@interface SCIOhlcPointSeries : NSObject <SCIPointSeries>

-(id)initWithSeriesOpen:(id<SCIPointSeries>)open High:(id<SCIPointSeries>)high Low:(id<SCIPointSeries>)low Close:(id<SCIPointSeries>)close;

-(SCIArrayController *) xValues;
-(SCIArrayController *) yValues;
-(SCIArrayController *) indices;

-(SCIArrayController *) openValues;
-(SCIArrayController *) highValues;
-(SCIArrayController *) lowValues;
-(SCIArrayController *) closeValues;

@end
