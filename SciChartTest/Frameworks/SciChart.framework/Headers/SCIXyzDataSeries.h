//
//  XyzDataSeries.h
//  SciChart
//
//  Created by Admin on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"

#pragma mark - SCIXyzDataSeries protocol

@protocol SCIXyzDataSeries <SCIDataSeries>

-(SCIDataType) zType;

-(SCIArrayController*) zValues;

-(void) appendX:(SCIGenericType)x
              Y:(SCIGenericType)y
              Z:(SCIGenericType)z;

-(void) appendRangeX:(NSArray*)x
                   Y:(NSArray*)y
                   Z:(NSArray*)z;

-(void) appendRangeX:(SCIGenericType)x
                   Y:(SCIGenericType)y
                   Z:(SCIGenericType)z
               Count:(NSInteger)count;

-(void) updateAt:(int)index
               Y:(SCIGenericType)y
               Z:(SCIGenericType)z;

-(void) insertAt:(int)index
               X:(SCIGenericType)x
               Y:(SCIGenericType)y
               Z:(SCIGenericType)z;

-(void) insertRangeAt:(int)index
                    X:(SCIGenericType)x
                    Y:(SCIGenericType)y
                    Z:(SCIGenericType)z
                Count:(int)count;

@end

#pragma mark - SCIXyzDataSeries default implementation

@interface SCIXyzDataSeries : SCIDataSeries <SCIXyzDataSeries> {
@protected
    SCIArrayController * _zColumn;
}

@property (nonatomic, strong) SCIArrayController * zColumn;

-(instancetype)initWithXType:(SCIDataType)xType YType:(SCIDataType)yType ZType:(SCIDataType)zType;
-(instancetype)initFifoWithXType:(SCIDataType)xType YType:(SCIDataType)yType ZType:(SCIDataType)zType FifoSize:(int)size;

@end
