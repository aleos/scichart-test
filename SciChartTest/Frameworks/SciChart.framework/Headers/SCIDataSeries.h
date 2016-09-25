//
//  SCIDataSeries.h
//  SciChart
//
//  Created by Admin on 07.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIGenericType.h"
#import "SCIResamplingMode.h"
#import "SCICallbackBlock.h"
#import "SCIEnumerationConstants.h"

typedef NS_ENUM(NSInteger, SCiDataSeriesType) {
    SCIDataSeriesType_Xy,
    SCIDataSeriesType_Ohlc,
    SCIDataSeriesType_HeatMap,
    SCIDataSeriesType_Xyy,
    SCIDataSeriesType_Xyz
};

@protocol SCIRange;
@class SCIIndexRange;
@protocol SCIPointSeries;
@class SCIArrayController;
@protocol SCIPointResampler;
@protocol SCIDataDistributionCalculator;

#pragma mark - SCIDataSeries protocol

@protocol SCIDataSeries <NSObject>

@required
-(SCIDataType) xType;
-(SCIDataType) yType;

-(id<SCIRange>) getXRange;
-(id<SCIRange>) getYRange;

-(SCiDataSeriesType) dataSeriesType;

-(SCIArrayController*) xValues;
-(SCIArrayController*) yValues;

@property (nonatomic, copy) NSString * seriesName;

-(SCIGenericType) YMin;
-(SCIGenericType) YMax;
-(SCIGenericType) XMin;
-(SCIGenericType) XMax;

-(BOOL) isFifo;
@property (nonatomic) int fifoCapacity;
-(BOOL) hasValues;
-(int) count;
-(BOOL) isSorted;
@property (nonatomic) BOOL acceptUnsortedData;
-(void)clear;

-(SCIIndexRange *) getIndicesRangeWithVisibleRange:(id <SCIRange>)visibleRange;

@property (nonatomic, strong) id<SCIPointSeries> lastPointSeries;

-(id <SCIPointSeries>) toPointSeriesWithResamplingMode:(SCIResamplingMode)resamplingMode
                                       SCIIndexRange:(__unsafe_unretained SCIIndexRange*)indexRange
                                       ViewportWidth:(int)viewportWidth
                                      IsCategoryAxis:(BOOL)isCategoryAxis
                                        VisibleRange:(__unsafe_unretained id<SCIRange>)visibleRange
                                           Resampler:(__unsafe_unretained id<SCIPointResampler>)resampler;

-(id<SCIRange>) getWindowYRangeWithXRange:(id<SCIRange>)xRange;
-(id<SCIRange>) getWindowYRangeWithXRange:(id<SCIRange>)xRange GetPositiveRange:(BOOL)getPositiveRange;
-(id<SCIRange>) getWindowYRangeWithIndexRange:(SCIIndexRange *)xIndexRange;
-(id<SCIRange>) getWindowYRangeWithIndexRange:(SCIIndexRange *)xIndexRange GetPositiveRange:(BOOL)getPositiveRange;

-(int) findIndexForValue:(SCIGenericType)x Mode:(SCIArraySearchMode)searchMode;

-(void) appendX:(SCIGenericType)x Y:(SCIGenericType)y;
-(void) removeAt:(int)index;
-(void) removeValue:(SCIGenericType)value;
-(void) appendRangeX:(NSArray*)x Y:(NSArray*)y;
-(void) appendRangeX:(SCIGenericType)x Y:(SCIGenericType)y Count:(NSInteger)count;
-(void) removeRangeFrom:(int)startIndex Count:(int)count;

-(double) getYMinAt:(int) index ExistingYMin:(double)existingYMin;
-(double) getYMaxAt:(int) index ExistingYMax:(double)existingYMax;

@property (nonatomic, copy) SCIActionBlock onDataSeriesChanged;

-(id<SCIDataSeries>) clone;

@end

#pragma mark - SCIDataSeries deafault implementation

@class SCIMathOperations;

@interface SCIDataSeries : NSObject <SCIDataSeries> {
    @protected
    SCIArrayController * _xColumn;
    SCIArrayController * _yColumn;
    SCIActionBlock _onDataSeriesChanged;

    id<SCIRange> _yRange;
    id<SCIRange> _xRange;
    BOOL _yRangeValid;
    BOOL _xRangeValid;
}

- (id)initWithXType:(SCIDataType)xType YType:(SCIDataType)yType;
- (id)initFifoWithXType:(SCIDataType)xType YType:(SCIDataType)yType FifoSize:(int)size;

/**
 It returns SCIDataSeries which has category x column and category y column.
 **/
- (id)initWithCategoryXType:(SCIDataType)xType categoryYType:(SCIDataType)yType;

/**
 It returns SCIDataSeries which has category x column and default y column.
 **/
- (id)initWithCategoryXType:(SCIDataType)xType YType:(SCIDataType)yType;

/**
 It returns SCIDataSeries which has default x column and category y column.
 **/
- (id)initWithXType:(SCIDataType)xType categoryYType:(SCIDataType)yType;

@property (nonatomic, strong) SCIArrayController * xColumn;
@property (nonatomic, strong) SCIArrayController * yColumn;
@property (nonatomic, copy) NSString * seriesName;
@property (nonatomic) int fifoCapacity;
@property (nonatomic) BOOL acceptUnsortedData;
@property (nonatomic, strong) id<SCIDataDistributionCalculator> dataDistributionCalculator;
@property (nonatomic, copy) SCIActionBlock onDataSeriesChanged;
@property (nonatomic, strong) id<SCIPointSeries> lastPointSeries;

- (void) dataSeriesChanged;
- (void)clearColumns;

@end
