//
//  TimeSpanAxisBase.h
//  SciChart
//
//  Created by Admin on 01.10.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIAxisBase.h"

@interface SCITimeSpanAxisBase : SCIAxisBase

-(id<SCIRange>) toVisibleRangeMin:(SCIGenericType)min Max:(SCIGenericType)max;

@end

/** @}*/
