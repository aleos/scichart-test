//
//  HeatMapDataSeries.h
//  SciChart
//
//  Created by Admin on 04.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"

@class SCIArrayController2D;

@interface SCIHeatMapDataSeries : NSObject <SCIDataSeries>

-(id)initWithTypeX:(SCIDataType)typeX Y:(SCIDataType)typeY Z:(SCIDataType)typeZ
             SizeX:(int)sizeX Y:(int)sizeY
            RangeX:(id<SCIRange>)rangeX Y:(id<SCIRange>)rangeY;

-(id)initWithTypeX:(SCIDataType)typeX Y:(SCIDataType)typeY Z:(SCIDataType)typeZ
             SizeX:(int)sizeX Y:(int)sizeY
            StartX:(SCIGenericType)startX StepX:(SCIGenericType)stepX
            StartY:(SCIGenericType)startY StepY:(SCIGenericType)stepY;

-(SCIGenericType)stepX;
-(SCIGenericType)stepY;

@property (nonatomic, strong) id<SCIRange> xRange;
@property (nonatomic, strong) id<SCIRange> yRange;

-(SCIArrayController *) xIndices;
-(SCIArrayController *) yIndices;
-(SCIArrayController2D *) data;

-(int) sizeX;
-(int) sizeY;

@property (nonatomic, copy) NSString * seriesName;
@property (nonatomic) int fifoCapacity;
@property (nonatomic) BOOL acceptUnsortedData;

@property (nonatomic, strong) id<SCIDataDistributionCalculator> dataDistributionCalculator;

@property (nonatomic, copy) SCIActionBlock onDataSeriesChanged;

-(void) dataSeriesChanged;

@property (nonatomic, strong) id<SCIPointSeries> lastPointSeries;

@end
