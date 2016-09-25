//
//  LineAnnotation.h
//  SciChart
//
//  Created by Admin on 24.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAnnotationBase.h"

@class SCILineAnnotationStyle;

@interface SCILineAnnotation : SCIAnnotationBase

@property (nonatomic) SCIGenericType xStart;
@property (nonatomic) SCIGenericType yStart;
@property (nonatomic) SCIGenericType xEnd;
@property (nonatomic) SCIGenericType yEnd;

@property (nonatomic, copy) SCILineAnnotationStyle * style;

@end
