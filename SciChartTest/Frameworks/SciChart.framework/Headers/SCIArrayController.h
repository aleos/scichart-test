//
//  SCIArrayController.h
//  SciChart
//
//  Created by Admin on 20.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataType.h"
#import "SCIEnumerationConstants.h"
#import "SCIGenericType.h"

@interface SCIArrayController : NSObject {
@protected
    void * _data;
    NSInteger _maxSize;
    NSInteger _count;
    SCIDataType _type;
}

-(id) initWithType:(SCIDataType)type;
-(id) initWithType:(SCIDataType)type Size:(NSInteger)size;
-(SCIDataType) type;
-(NSInteger) count;
-(void) setCount:(int)count;
-(int) dataTypeSize;

-(void *) data;
-(void *) dataOfType:(SCIDataType)type;
-(float *) floatData;
-(double *) doubleData;
-(short *) int16Data;
-(int *) int32Data;
-(long long *) int64Data;
-(char *) byteData;
-(double *) dateTimeData;
-(SCIGenericType)genericData;

-(SCIGenericType) valueAt:(NSInteger)index;
-(void) getRangeMin:(double*)outMin max:(double*)outMax;

-(void) removeAt:(int)index;
-(void) removeValue:(SCIGenericType)value;
-(void) removeRangeFrom:(int)index Count:(int)count;

-(void) setValue:(SCIGenericType)value At:(int)index;
-(void) insertValue:(SCIGenericType)value At:(int)index;
-(void) insertRange:(SCIGenericType)array At:(int)index Count:(int)count;

-(NSInteger) indexOf:(SCIGenericType)value IsSorted:(BOOL)isSorted SearchMode:(SCIArraySearchMode)searchMode;

-(BOOL) isEmpty;

-(void) append:(SCIGenericType)value;
-(void) clear;
-(void) purge;
-(NSInteger) currentMaxSize;
-(void) appendRange:(NSArray*)array;
-(void) appendRange:(SCIGenericType)array Count:(NSInteger)count;

-(void) copyToArray:(void**)data Count:(NSInteger*)count Type:(SCIDataType)type;

-(void)reverse;

@end
