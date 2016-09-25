//
//  TextAnnotation.h
//  SciChart
//
//  Created by Admin on 04.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAnnotationBase.h"
#import "SCIGenericType.h"

@class SCITextAnnotationStyle;

@interface SCITextAnnotation : SCIAnnotationBase

@property (nonatomic) SCIGenericType xPosition;
@property (nonatomic) SCIGenericType yPosition;

@property (nonatomic, copy) NSString * text;

@property (nonatomic, copy) SCITextAnnotationStyle * style;

@end
