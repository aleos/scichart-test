//
//  LogarithmicNumericAxis.h
//  SciChart
//
//  Created by Admin on 14.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCINumericAxis.h"
#import "SCILogarithmicAxis.h"

@interface SCILogarithmicNumericAxis : SCINumericAxis <SCILogarithmicAxis>

@property (nonatomic) double logarithmicBase;

@end

/** @}*/
