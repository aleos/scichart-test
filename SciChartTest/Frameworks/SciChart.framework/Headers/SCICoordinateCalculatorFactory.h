//
//  SCICoordinateCalculatorFactory.h
//  SciChart
//
//  Created by Admin on 16.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup CoordinateCalculators
 *  @{
 */

#import <Foundation/Foundation.h>

@protocol SCICoordinateCalculator;
@class SCIAxisParams;

@interface SCICoordinateCalculatorFactory : NSObject

+(id<SCICoordinateCalculator>) getInstance:(SCIAxisParams*)arg;

@end

/** @}*/
