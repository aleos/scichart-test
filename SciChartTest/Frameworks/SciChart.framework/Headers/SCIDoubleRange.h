//
//  SCIDoubleRange.h
//  SciChart
//
//  Created by Admin on 08.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Ranges
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIRange.h"

@interface SCIDoubleRange : NSObject <SCIRange>

@property (nonatomic) SCIGenericType min;
@property (nonatomic) SCIGenericType max;

-(id) initWithMin:(SCIGenericType)min Max:(SCIGenericType)max;

@end

/** @}*/
