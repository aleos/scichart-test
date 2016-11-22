//
//  SCILineAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 30.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIAnnotationStyleEnums.h"
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIPointMarker;

/*!
 * @abstract SCILineAnnotationStyle class
 * @discussion Contains properties for line annotation theming and customization
 * @see SCILineAnnotation
 */
@interface SCILineAnnotationStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @abstract Point marker that will be displayed on line ends when interaction with annotation started
 * @see SCIPointMarker
 */
@property (nonatomic, strong) id<SCIPointMarker> resizeMarker;

/*!
 * @abstract Pen with which line annotation is drawn on chart surface
 * @discussion Defines line width and color
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

/*!
 * @abstract Defines width of line's "hit body"
 * @discussion It is distance at which user should tap to select line annotation
 * @discussion The greater value the easier to select line annotation by tapping on it
 */
@property (nonatomic) double selectRadius;

/*!
 * @abstract Defines width of line ends' point markers "hit body"
 * @discussion It's distance at which user should tap and pan at line ends' point markers to interact with line annotation
 * @discussion The greater value, the easier will be to resize or move line annotation by dragging it's ends
 */
@property (nonatomic) double resizeRadius;

/*!
 * @abstract Defines layer (overlay or underlay) on which annotation is displayed
 * @see SCIAnnotationLayerMode
 */
@property (nonatomic) SCIAnnotationLayerMode layer;

@end

/** @}*/
