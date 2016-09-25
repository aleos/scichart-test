//
//  SCICoordinateCalculator.h
//  SciChart
//
//  Created by Admin on 13.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@protocol SCIRange;

typedef double (*SCICoordinateCalculatorCoordFunction)(void * info, double value);

typedef struct {
    void * info;
    SCICoordinateCalculatorCoordFunction converter;
} SCICoordinateCalculatorHelper;

@protocol SCICoordinateCalculator <NSObject>

@required
-(BOOL) isCategoryAxisCalculator;
-(BOOL) isLogarithmicAxisCalculator;
-(BOOL) isHorizontalAxisCalculator;
-(BOOL) isXAxisCalculator;
-(BOOL) hasFlippedCoordinates;
-(BOOL) isPolarAxisCalculator;
-(double) coordinatesOffset;
-(double) getCoordinateFromDate:(NSDate*)dataValue;
-(double) getCoordinateFrom:(double)dataValue;
-(double) getDataValueFrom:(double)pixelCoordinate;
-(id<SCIRange>) translateByPixels:(double)pixels InputRange:(id<SCIRange>)inputRange;
-(id<SCIRange>) translateByMinFraction:(double)minFraction MaxFraction:(double)maxFraction InputRange:(id<SCIRange>)inputRange;

-(SCICoordinateCalculatorHelper) getCalculatorHelper;

@end
