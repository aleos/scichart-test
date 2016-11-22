//
//  Range.h
//  SciChart
//
//  Created by Admin on 08.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Ranges
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIGenericType.h"

typedef NS_ENUM(NSInteger, SCIRangeClipMode) {
    SCIRangeClipMode_MinMax,
    SCIRangeClipMode_Max,
    SCIRangeClipMode_Min
};

typedef NS_ENUM(NSInteger, SCIRangeType) {
    SCIRangeType_Numeric,
    SCIRangeType_Date,
    SCIRangeType_Index
};

@protocol SCIRange <NSObject>

@required

-(SCIRangeType) rangeType;

@property (nonatomic) SCIGenericType min;
@property (nonatomic) SCIGenericType max;
-(SCIGenericType) diff;
-(BOOL) isZero;

-(id<SCIRange>) asDoubleRange;
-(void) setMinTo:(SCIGenericType)min MaxTo:(SCIGenericType)max;
-(void) setMinTo:(SCIGenericType)min MaxTo:(SCIGenericType)max WithLimits:(id<SCIRange>)limits;
-(id<SCIRange>) growMinBy:(SCIGenericType)min MaxBy:(SCIGenericType)max;
-(id<SCIRange>) clipTo:(id<SCIRange>)maximumRange;
-(BOOL) isValueWithinTheRange:(SCIGenericType)value;

-(BOOL) isDefined;

-(BOOL) equals:(__unsafe_unretained id<SCIRange>)otherRange;

-(id<SCIRange>) unionWith:(__unsafe_unretained id<SCIRange>)range;
-(id<SCIRange>) clone;

-(void) assertMinLessOrEqualToThanMax;

-(id<SCIRange>) growMinBy:(SCIGenericType)minFraction MaxBy:(SCIGenericType)maxFraction isLogarithmic:(BOOL)isLogarithmic LogBase:(double)logBase;

@end

/** @}*/
