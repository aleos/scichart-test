//
//  SCILineAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 30.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIAnnotationStyleEnums.h"

@protocol SCIPen2D;
@protocol SCIPointMarker;

/*!
 * @abstract SCILineAnnotationStyle class
 * @discussion Contains properties for line annotation theming and customization
 * @discussion It signals about properties changes with "styleChanged" block
 */
@interface SCILineAnnotationStyle : NSObject <NSCopying>

/*!
 * @abstract Point marker that will be displayed on line ends when interaction with annotation started
 */
@property (nonatomic, strong) id<SCIPointMarker> resizeMarker;

/*!
 * @abstract Pen with which line annotation is drawn on chart surface
 * @discussion Defines line width and color
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

/*!
 * @abstract Defines width of line's "hit body"
 * @discussion It's distance at which user should tap to select line annotation
 */
@property (nonatomic) double selectRadius;
/*!
 * @abstract Defines width of line ends' point markers "hit body"
 * @discussion It's distance at which user should tap and pan at line ends' point markers to interact with line annotation
 */
@property (nonatomic) double resizeRadius;

/*!
 * @abstract Defines layer (overlay or underlay) on which annotation is displayed
 * @see SCIAnnotationLayerMode
 */
@property (nonatomic) SCIAnnotationLayerMode layer;
/*!
 * @abstract Block wich is called on every style property change.
 * @discussion It is used for invalidating parent annotation and provoking redraw of annotations and modifiers on style change
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
