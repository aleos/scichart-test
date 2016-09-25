//
//  Point2DSeries.h
//  SciChart
//
//  Created by Admin on 31.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCIDoubleRange;
@class SCIArrayController;

#pragma mark - SCIPointSeries protocol

@protocol SCIPointSeries <NSObject>

@required

-(SCIArrayController *) xValues;
-(SCIArrayController *) yValues;
-(int) count;
-(SCIDoubleRange*) getYRange;
-(void) clear;

@end

#pragma mark - SCIPointSeries default implementation

@interface SCIPointSeries : NSObject <SCIPointSeries>

-(id) initWithCapacity:(NSInteger)size;
-(id) initWithXData:(SCIArrayController*)xData YData:(SCIArrayController*)yData;
-(void) addX:(double)x Y:(double)y;

@end
