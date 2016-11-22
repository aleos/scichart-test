//
//  SCIAxisMarkerAnnotation.h
//  SciChart
//
//  Created by Admin on 27/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Annotations
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIAnnotationBase.h"

@class SCIAxisMarkerAnnotationStyle;

@interface SCIAxisMarkerAnnotation : SCIAnnotationBase

@property (nonatomic, copy) SCIAxisMarkerAnnotationStyle * style;

@property (nonatomic, copy) NSString * formattedValue;

@property (nonatomic) SCIGenericType position;

-(NSString *) formatValue:(SCIGenericType)value;

@end

/** @}*/
