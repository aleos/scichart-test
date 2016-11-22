//
//  SCIModifierGroup.h
//  SciChart
//
//  Created by Admin on 05.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIGestureModifier.h"

@interface SCIModifierGroup : SCIGestureModifier

-(id) initWithChildModifiers:(NSArray<id<SCIChartModifier>>*)childModifiers;

-(void) addItem:(id<SCIChartModifier>)item;
-(void) removeItem:(id<SCIChartModifier>)item;
-(void) removeAt:(int)index;
-(int) itemCount;
-(id<SCIChartModifier>) itemByName:(NSString *)name;
-(id<SCIChartModifier>) itemAt:(int)index;

@end

/** @}*/
