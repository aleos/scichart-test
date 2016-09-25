//
//  XyyDataSeries.h
//  SciChart
//
//  Created by Admin on 16.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"
#import "SCIDataSeries.h"

#pragma mark - SCIXyyDataSeries protocol

@protocol SCIXyyDataSeries <SCIDataSeries>

-(SCIArrayController*) y1Values;
-(SCIArrayController*) y2Values;

-(void) appendX:(SCIGenericType)x Y1:(SCIGenericType)y1 Y2:(SCIGenericType)y2;
-(void) appendRangeX:(NSArray*)x Y1:(NSArray*)y1 Y2:(NSArray*)y2;
-(void) appendRangeX:(SCIGenericType)x Y1:(SCIGenericType)y1 Y2:(SCIGenericType)y2 Count:(NSInteger)count;

-(void) updateAt:(int)index Y1:(SCIGenericType)y1 Y2:(SCIGenericType)y2;

-(void) insertAt:(int)index X:(SCIGenericType)x Y1:(SCIGenericType)y1 Y2:(SCIGenericType)y2;
-(void) insertRangeAt:(int)index X:(SCIGenericType)x Y1:(SCIGenericType)y1 Y2:(SCIGenericType)y2 Count:(int)count;

@end

#pragma mark - SCIXyyDataSeries default implementation

@interface SCIXyyDataSeries : SCIDataSeries <SCIXyyDataSeries> {
@protected
    SCIArrayController * _y1Column;
    SCIArrayController * _y2Column;
}

@property (nonatomic, strong) SCIArrayController * y1Column;
@property (nonatomic, strong) SCIArrayController * y2Column;

@end
