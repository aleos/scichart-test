//
//  SCIDateRange.h
//  SciChart
//
//  Created by Admin on 21.09.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Ranges
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRange.h"

@interface SCIDateRange : NSObject <SCIRange>

@property (nonatomic) SCIGenericType min;
@property (nonatomic) SCIGenericType max;

-(id) initWithMin:(SCIGenericType)min Max:(SCIGenericType)max;
-(id) initWithDateMin:(NSDate*)min Max:(NSDate*)max;

@end

/** @}*/
