//
//  OhlcDataSeries.h
//  SciChart
//
//  Created by Admin on 23.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup DataSeries
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"

#pragma mark - SCIOhlcDataSeries protocol


@protocol SCIOhlcDataSeries <SCIDataSeries>

/**
 * Datasource of open Values.
 */
-(id<SCIArrayControllerProtocol>) openValues;

/**
 * Datasource of high Values.
 */
-(id<SCIArrayControllerProtocol>) highValues;

/**
 * Datasource of low Values.
 */
-(id<SCIArrayControllerProtocol>) lowValues;

/**
 * Datasource of close Values.
 */
-(id<SCIArrayControllerProtocol>) closeValues;

/**
 * Returns type of open values
 */
-(SCIDataType) openType;

/**
 * Returns type of high values
 */
-(SCIDataType) highType;

/**
 * Returns type of low values
 */
-(SCIDataType) lowType;

/**
 * Returns type of close values
 */
-(SCIDataType) closeType;

/**
 * Add new values to SCIOhlcDataSeries. 
 * @code
 * // Swift 3 Example
 * let ohlcDataSeries = SCIOhlcDataSeries(xType: .int16, yType: .int16)
 * ohlcDataSeries?.appendX(SCIGeneric(1), open: SCIGeneric(6), high: SCIGeneric(5), low: SCIGeneric(4), close: SCIGeneric(3))
 * @endcode
 */
-(void) appendX:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;

/**
 * Add new values to SCIOhlcDataSeries with arrays of values.
 * @code
 * let ohlcDataSeries = SCIOhlcDataSeries(xType: .int16, yType: .int16)
 * let xValues = [1, 2, 3, 4]
 * let openValues = [1, 2, 3, 4]
 * let closeValues = [1, 2, 3, 4]
 * let highValues = [1, 2, 3, 4]
 * let lowValues = [1, 2, 3, 4]
 * ohlcDataSeries?.appendRangeX(xValues, open: openValues, high: highValues, low: lowValues, close: closeValues)
 * @endcode
 */
-(void) appendRangeX:(NSArray*)x Open:(NSArray*)open High:(NSArray*)high Low:(NSArray*)low Close:(NSArray*)close;

/**
 * Add new values with SCIGenericType which has pointer on array of types such like those: void, char, int, double, float.
 */
-(void) appendRangeX:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close Count:(NSInteger)count;

/**
 * Update values at particular index.
 * @ecode
 * let ohlcDataSeries = SCIOhlcDataSeries(xType: .int16, yType: .int16)
 * ohlcDataSeries?.update(at: 1, open: SCIGeneric(6), high: SCIGeneric(5), low: SCIGeneric(4), close: SCIGeneric(3))
 * @endcode
 */
-(void) updateAt:(int)index Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;

/**
 * Insert values at particular index.
 * @ecode
 * let ohlcDataSeries = SCIOhlcDataSeries(xType: .int16, yType: .int16)
 * ohlcDataSeries?.update(at: 1, open: SCIGeneric(6), high: SCIGeneric(5), low: SCIGeneric(4), close: SCIGeneric(3))
 * @endcode
 */
-(void) insertAt:(int)index X:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;

/**
 * Insert values at particular index with SCIGenericType which has pointer on array of types such like those: void, char, int, double, float.
 */
-(void) insertRangeAt:(int)index X:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close Count:(int)count;

@end

#pragma mark - SCIOhlcDataSeries default implementation

@interface SCIOhlcDataSeries : SCIDataSeries <SCIOhlcDataSeries>

/**
 * Datasource for open column
 */
@property (nonatomic, strong) id<SCIArrayControllerProtocol> openColumn;

/**
 * Datasource for high column
 */
@property (nonatomic, strong) id<SCIArrayControllerProtocol> highColumn;

/**
 * Datasource for low column
 */
@property (nonatomic, strong) id<SCIArrayControllerProtocol> lowColumn;

/**
 * Datasource for close column
 */
@property (nonatomic, strong) id<SCIArrayControllerProtocol> closeColumn;

@end

/** @}*/
