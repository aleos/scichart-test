//
//  SCIAnnotationGroup.h
//  SciChart
//
//  Created by Admin on 29.03.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Annotations
 *  @{
 */

#import <Foundation/Foundation.h>

#import "SCIAnnotationBase.h"

@class SCILineAnnotationStyle;

/**
 * @brief Provides a class for annotation group to be rendered over the chart
 * @discussion Is used when there is a need to have multiple annotations
 * @code
 * @endcode
 */
@interface SCIAnnotationGroup : SCIAnnotationBase

/**
 * @brief Provides default initialization of the current annotation group with an array of annotations
 * @code
 let annotationGroup = SCIAnnotationGroup(childAnnotations: [boxBlue, boxRed, lineAnnotationRelative, xMarker, yMarker])
 
 chartSurface.annotation = annotationGroup
 * @endcode
 */
-(id) initWithChildAnnotations:(NSArray*)childAnnotations;

/**
 * @brief Adds annotation into the current annotation group
 @code
 annotationGroup.addItem(textAnnotation)
 @endcode
 */
-(void) addItem:(id<SCIAnnotation>)item;

/**
 * @brief Deletes annotation from the current annotation group
 @code
 annotationGroup.removeItem(textAnnotation)
 @endcode
 */
-(void) removeItem:(id<SCIAnnotation>)item;

/**
 * @brief Deletes annotation from the current annotation group in custom position
 @code
 annotationGroup.removeAt(3)
 @endcode
 */
-(void) removeAt:(int)index;

/**
 * @brief Returns annotations quantity from the current annotation group
 */
-(int) itemCount;

/**
 * @brief Returns SCIAnnotation from the current annotation group by annotation name
 */
-(id<SCIAnnotation>) itemByName:(NSString *)name;

/**
 * @brief Returns SCIAnnotation from the current annotation group by annotation index in group
 */
-(id<SCIAnnotation>) itemAt:(int)index;

@end

/** @}*/
