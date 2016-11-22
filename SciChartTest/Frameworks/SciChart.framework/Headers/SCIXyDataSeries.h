//
//  XYDataSeries.h
//  SciChart
//
//  Created by Admin on 07.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup DataSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"
#import "SCIGenericType.h"

#pragma mark - SCIXyDataSeries protocol

/**
 * Inteface for all dataSeries which has at least x and y columns.
 */
@protocol SCIXyDataSeries <SCIDataSeries>

@required

/**
 * Update y Value and x Value at index. For example if our dataSeries looks like this
 * [(1, 3), (3, 6), (5, 12)]
 *
 * @code
 *
 * let dataSeriesXy = SCIXyDataSeries(xType: .int16, yType: .int16)
 * dataSeriesXy?.update(at: 1, xValue: SCIGeneric(0), yValue: SCIGeneric(Double.nan))
 *
 * @endcode
 *
 * After this code DataSeries looks like this.
 * [(1, 3), (0, NaN), (5, 12)]
 */
-(void) updateAt:(int)index XValue:(SCIGenericType)xValue YValue:(SCIGenericType)yValue;

/**
 * Insert y Value and x Value at index. For example if our dataSeries looks like this
 * [(1, 3), (3, 6), (5, 12)]
 *
 * @code
 *
 * let dataSeriesXy = SCIXyDataSeries(xType: .int16, yType: .int16)
 * dataSeriesXy?.insert(at: 1, x: SCIGeneric(3), y: SCIGeneric(Double.nan))
 *
 * @endcode
 *
 * After this code DataSeries looks like this.
 * [(1, 3), (0, NaN), (3, 6), (5, 12)]
 */
-(void) insertAt:(int)index X:(SCIGenericType)x Y:(SCIGenericType)y;

/**
 * Update y Value and x Value at index. For example if our dataSeries looks like this
 * [(1, 3), (3, 6), (5, 12)]
 *
 * @code
 * let dataSeriesXy = SCIXyDataSeries(xType: .int16, yType: .int16)
 * let xArray = UnsafeMutablePointer<Int16>.allocate(capacity: 2)
 * xArray[0] = 12
 * xArray[1] = 4
 *
 * let yArray = UnsafeMutablePointer<Int16>.allocate(capacity: 2)
 * yArray[0] = 19
 * yArray[1] = 14
 *
 * dataSeriesXy?.insertRange(at:2, x:SCIGeneric(xArray), y: SCIGeneric(yArray), count: 2)
 * @endcode
 *
 * After this code DataSeries looks like this.
 * [(1, 3), (12, 19), (4, 14), (3, 6), (5, 12)]
 */
-(void) insertRangeAt:(int)index X:(SCIGenericType)x Y:(SCIGenericType)y Count:(int)count;

@end

#pragma mark - SCIXyDataSeries default implementation

/**
 * Simpliest implementation of x y dataSeries.
 */
@interface SCIXyDataSeries : SCIDataSeries <SCIXyDataSeries>

@end


/** @}*/
