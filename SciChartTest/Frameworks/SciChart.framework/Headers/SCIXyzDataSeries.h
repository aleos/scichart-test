//
//  XyzDataSeries.h
//  SciChart
//
//  Created by Admin on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup DataSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"

#pragma mark - SCIXyzDataSeries protocol

/**
 * DataSeries which is used in SCIBubbleRenderableSeries.
 * @see SCIBubbleRenderableSeries
 */
@protocol SCIXyzDataSeries <SCIDataSeries>

/**
 * Return type of values in z Column;
 * @see SCIDataType
 */
-(SCIDataType) zType;

/**
 * Return an instance of SCIArrayController of x values.
 * @see SCIArrayControllerProtocol
 */
-(id<SCIArrayControllerProtocol>) zValues;

/**
 * @code
 * let xyzDataSeries = SCIXyzDataSeries(xType: .int16, yType: .int16, zType: .int16)
 * xyzDataSeries?.appendX(SCIGeneric(1), y: SCIGeneric(2), z: SCIGeneric(3))
 * @endcode
 */
-(void) appendX:(SCIGenericType)x
              Y:(SCIGenericType)y
              Z:(SCIGenericType)z;

/**
 * Add new x Values, y Values and z Values;
 * @code
 * let xyzDataSeries = SCIXyzDataSeries(xType: .int16, yType: .int16, zType: .int16)
 *
 * let xValues = [1, 2, 3, 4]
 * let yValues = [1, 2, 3, 4]
 * let zValues = [1, 2, 3, 4]
 *
 * xyzDataSeries?.appendRangeX(xValues, y: yValues, z: zValues)
 * @endcode
 */
-(void) appendRangeX:(NSArray*)x
                   Y:(NSArray*)y
                   Z:(NSArray*)z;

/**
 * Add new values with SCIGenericType which has pointer on array of types such like those: void, char, int, double, float.
 */
-(void) appendRangeX:(SCIGenericType)x
                   Y:(SCIGenericType)y
                   Z:(SCIGenericType)z
               Count:(NSInteger)count;

/**
 *  * Update y Value and z Value at index.
 * @code
 * let xyzDataSeries = SCIXyzDataSeries(xType: .int16, yType: .int16, zType: .int16)
 * xyzDataSeries?.appendX(SCIGeneric(1), y: SCIGeneric(2), z: SCIGeneric(3))
 * xyzDataSeries?.update(at: 0, y: SCIGeneric(3), z: SCIGeneric(4))
 * @endcode
 */
-(void) updateAt:(int)index
               Y:(SCIGenericType)y
               Z:(SCIGenericType)z;

/**
 * Insert new x Value, y Value and z Value at particular index.
 * @code
 * let xyzDataSeries = SCIXyzDataSeries(xType: .int16, yType: .int16, zType: .int16)
 * xyzDataSeries?.appendX(SCIGeneric(1), y: SCIGeneric(2), z: SCIGeneric(3))
 * xyzDataSeries?.insert(at: 0, x: SCIGeneric(0), y: SCIGeneric(5), z: SCIGeneric(7))
 * @endcode
 */
-(void) insertAt:(int)index
               X:(SCIGenericType)x
               Y:(SCIGenericType)y
               Z:(SCIGenericType)z;

/**
 * Insert new values with SCIGenericType which has pointer on array of types such like those: void, char, int, double, float.
 */
-(void) insertRangeAt:(int)index
                    X:(SCIGenericType)x
                    Y:(SCIGenericType)y
                    Z:(SCIGenericType)z
                Count:(int)count;

@end

#pragma mark - SCIXyzDataSeries default implementation

/**
 * DataSeries which is used in SCIBubbleRenderableSeries.
 * @see SCIBubbleRenderableSeries
 */
@interface SCIXyzDataSeries : SCIDataSeries <SCIXyzDataSeries>

/**
 * An instance of SCIArrayController of z values.
 */
@property (nonatomic, strong) id<SCIArrayControllerProtocol> zColumn;

/**
 * Initializers which set types for x column, y column z column.
 */
-(instancetype)initWithXType:(SCIDataType)xType YType:(SCIDataType)yType ZType:(SCIDataType)zType;

/**
 * The initializer creates data series instance with xColumn, yColumn and zColumn of SCIArrayControllerFIFO. And also sets type for them.
 */
-(instancetype)initFifoWithXType:(SCIDataType)xType YType:(SCIDataType)yType ZType:(SCIDataType)zType FifoSize:(int)size;

@end

/** @}*/
