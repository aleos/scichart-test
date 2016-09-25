//
//  SCIAnnotationGroup.h
//  SciChart
//
//  Created by Admin on 29.03.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SCIAnnotationBase.h"

@class SCILineAnnotationStyle;

@interface SCIAnnotationGroup : SCIAnnotationBase

-(id) initWithChildAnnotations:(NSArray*)childAnnotations;

-(void) addItem:(id<SCIAnnotation>)item;
-(void) removeItem:(id<SCIAnnotation>)item;
-(void) removeAt:(int)index;
-(int) itemCount;
-(id<SCIAnnotation>) itemByName:(NSString *)name;
-(id<SCIAnnotation>) itemAt:(int)index;

@end
