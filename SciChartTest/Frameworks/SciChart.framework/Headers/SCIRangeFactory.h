//
//  RangeFactory.h
//  SciChart
//
//  Created by Admin on 09.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Ranges
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRange.h"
#import "SCIGenericType.h"
#import "SCIDataType.h"

@interface SCIRangeFactory : NSObject

+(id<SCIRange>) clone:(id<SCIRange>)originalRange WithMin:(SCIGenericType)min Max:(SCIGenericType)max Limit:(id<SCIRange>)rangeLimit;
+(id<SCIRange>) clone:(id<SCIRange>)originalRange WithMin:(SCIGenericType)min Max:(SCIGenericType)max;
+(id<SCIRange>) getRangeOfType:(SCIDataType)type Min:(SCIGenericType)min Max:(SCIGenericType)max;
+(id<SCIRange>) getRangeWithRangeType:(Class)type Min:(SCIGenericType)min Max:(SCIGenericType)max;

@end

/** @}*/
