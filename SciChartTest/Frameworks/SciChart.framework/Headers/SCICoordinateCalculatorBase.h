//
//  CoordinateCalculatorBase.h
//  SciChart
//
//  Created by Admin on 16.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup CoordinateCalculators
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICoordinateCalculator.h"

typedef NS_OPTIONS(NSInteger, CoordinateCalculatorOptions) {
    CoordinateCalculator_XAxis = 1,
    CoordinateCalculator_YAxis = 2,
    CoordinateCalculator_CategoryAxis = 4,
    CoordinateCalculator_LogarithmicAxis = 8,
    CoordinateCalculator_HorizontalAxis = 16,
    CoordinateCalculator_Flipped = 32
};

@protocol SCIRange;

@interface SCICoordinateCalculatorBase : NSObject <SCICoordinateCalculator>

@property (nonatomic) BOOL isCategoryAxisCalculator;
@property (nonatomic) BOOL isLogarithmicAxisCalculator;
@property (nonatomic) BOOL isHorizontalAxisCalculator;
@property (nonatomic) BOOL isXAxisCalculator;
@property (nonatomic) BOOL hasFlippedCoordinates;
@property (nonatomic) BOOL isPolarAxisCalculator;

-(double) getCoordinateFromDate:(NSDate *)dataValue;
-(id<SCIRange>) translateByPixels:(double)pixels InputRange:(id<SCIRange>)inputRange;
-(double) getDataValueFrom:(double)pixelCoordinate;
-(id<SCIRange>) translateByMinFraction:(double)minFraction MaxFraction:(double)maxFraction InputRange:(id<SCIRange>)inputRange;
+(double) flip:(BOOL)flipCoords Coords:(double)coord WithViewPortDimension:(double)viewportDimension;

-(void)setCoordinatesOffset:(double)value;

@end

/** @}*/
