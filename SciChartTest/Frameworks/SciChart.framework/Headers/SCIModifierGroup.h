//
//  SCIModifierGroup.h
//  SciChart
//
//  Created by Admin on 05.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIChartModifierBase.h"

@interface SCIModifierGroup : SCIChartModifierBase

-(id) initWithChildModifiers:(NSArray*)childModifiers;

-(void) addItem:(id<SCIChartModifier>)item;
-(void) removeItem:(id<SCIChartModifier>)item;
-(void) removeAt:(int)index;
-(int) itemCount;
-(id<SCIChartModifier>) itemByName:(NSString *)name;
-(id<SCIChartModifier>) itemAt:(int)index;

@end
