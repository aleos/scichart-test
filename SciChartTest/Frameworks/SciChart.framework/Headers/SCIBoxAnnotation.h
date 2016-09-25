//
//  BoxAnnotation.h
//  SciChart
//
//  Created by Admin on 12.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAnnotationBase.h"

@class SCIBoxAnnotationStyle;

@interface SCIBoxAnnotation : SCIAnnotationBase

@property (nonatomic) SCIGenericType xStart;
@property (nonatomic) SCIGenericType yStart;
@property (nonatomic) SCIGenericType xEnd;
@property (nonatomic) SCIGenericType yEnd;

@property (nonatomic, copy) SCIBoxAnnotationStyle * style;

@end
