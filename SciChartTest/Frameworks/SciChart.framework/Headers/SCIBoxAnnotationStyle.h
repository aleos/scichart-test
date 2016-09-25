//
//  SCIBoxAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 12.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIAnnotationStyleEnums.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;
@protocol SCIPointMarker;

/*!
 * @abstract SCIBoxAnnotationStyle class
 * @discussion Contains properties for box annotation theming and customization
 * @discussion It signals about properties changes with "styleChanged" block
 */
@interface SCIBoxAnnotationStyle : NSObject <NSCopying>

/*!
 * @abstract Point marker that will be displayed on box corners when interaction with annotation started
 */
@property (nonatomic, strong) id<SCIPointMarker> resizeMarker;
/*!
 * @abstract Pen with which outline of box annotation is drawn on chart surface
 * @discussion Defines line width and color
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;
/*!
 * @abstract Brush with which box annotation is drawn on chart surface
 * @discussion Defines rectangle color
 */
@property (nonatomic, strong) id<SCIBrush2D> fillBrush;

/*!
 * @abstract Defines width of box "hit body"
 * @discussion It's distance at which user should tap to select box annotation
 */
@property (nonatomic) double selectRadius;
/*!
 * @abstract Defines width of box corners' point markers "hit body"
 * @discussion It's distance at which user should tap and pan at box corners to interact with annotation
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
