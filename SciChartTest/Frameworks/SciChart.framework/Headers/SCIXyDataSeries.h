//
//  XYDataSeries.h
//  SciChart
//
//  Created by Admin on 07.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"
#import "SCIGenericType.h"

#pragma mark - SCIXyDataSeries protocol

@protocol SCIXyDataSeries <NSObject>

@required
-(SCIDataType) xType;
-(SCIDataType) yType;

-(void) appendX:(SCIGenericType)x Y:(SCIGenericType)y;
-(void) appendRangeX:(NSArray*)x Y:(NSArray*)y;
-(void) appendRangeX:(SCIGenericType)x Y:(SCIGenericType)y Count:(NSInteger)count;

-(void) updateAt:(int)index XValue:(SCIGenericType)xValue YValue:(SCIGenericType)yValue;

-(void) insertAt:(int)index X:(SCIGenericType)x Y:(SCIGenericType)y;
-(void) insertRangeAt:(int)index X:(SCIGenericType)x Y:(SCIGenericType)y Count:(int)count;

@end

#pragma mark - SCIXyDataSeries default implementation

@interface SCIXyDataSeries : SCIDataSeries <SCIXyDataSeries>

@end
