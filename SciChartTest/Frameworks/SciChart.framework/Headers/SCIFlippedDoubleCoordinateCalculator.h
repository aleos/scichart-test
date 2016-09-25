//
//  SCIFlippedDoubleCoordinateCalculator.h
//  SciChart
//
//  Created by Admin on 22.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICoordinateCalculatorBase.h"
#import "SCIEnumerationConstants.h"

@interface SCIFlippedDoubleCoordinateCalculator : SCICoordinateCalculatorBase

-(id) initWithDimension:(double)viewportDimension Min:(double)min Max:(double)max
              Direction:(SCIXYDirection)direction FlipCoordinates:(BOOL)flipCoordinates;
-(id) initWithDimension:(double)viewportDimension Min:(double)min Max:(double)max
                IsXAxis:(BOOL)isXAxis IsHorizontal:(BOOL)isHorizintal FlipCoordinates:(BOOL)flipCoordinates;

@property (nonatomic) double coordinateConstant;
@property (nonatomic) double coordinatesOffset;

@end
