//
//  DateTimeAxis.h
//  SciChart
//
//  Created by Admin on 01.10.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCITimeSpanAxisBase.h"

@interface SCIDateTimeAxis : SCITimeSpanAxisBase

@property (nonatomic, copy) NSString * subDayTextFormatting;
@property (nonatomic, copy) NSString * subYearTextFormatting;
@property (nonatomic, copy) NSString * decadesTextFormatting;

@end

/** @}*/
