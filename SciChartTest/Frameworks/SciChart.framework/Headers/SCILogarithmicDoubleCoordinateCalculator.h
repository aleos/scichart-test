//
//  LogarithmicDoubleCoordinateCalculator.h
//  SciChart
//
//  Created by Admin on 15.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup CoordinateCalculators
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICoordinateCalculatorBase.h"
#import "SCILogarithmicCoordinateCalculator.h"
#import "SCIEnumerationConstants.h"

@interface SCILogarithmicDoubleCoordinateCalculator : SCICoordinateCalculatorBase <SCILogarithmicCoordinateCalculator>

-(id) initWithDimension:(double)viewportDimension Min:(double)min Max:(double)max LogBase:(double)logBase
              Direction:(SCIXYDirection)direction FlipCoordinates:(BOOL)flipCoordinates;
-(id) initWithDimension:(double)viewportDimension Min:(double)min Max:(double)max LogBase:(double)logBase
                IsXAxis:(BOOL)isXAxis IsHorizontal:(BOOL)isHorizintal FlipCoordinates:(BOOL)flipCoordinates;

@property (nonatomic) double coordinatesOffset;

@end

/** @}*/
