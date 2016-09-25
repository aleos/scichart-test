//
//  SCIAxisMarkerAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 27/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import <QuartzCore/QuartzCore.h>

@protocol SCIPen2D;
@protocol SCIBrush2D;
@class UITextField;
@class SCITextFormattingStyle;
@class UIColor;

typedef void (^SCITextAnnotationViewSetupBlock) (UITextField * view);

/*!
 * @abstract SCIAxisMarkerAnnotationStyle class
 * @discussion Contains properties for axis marker annotation theming and customization
 * @discussion It signals about properties changes with "styleChanged" block
 */
@interface SCIAxisMarkerAnnotationStyle : NSObject <NSCopying>

/*!
 * @abstract Defines text formatting style.
 * @discussion Contains properties for customization of labels font, color etc.
 * @see SCITextFormattingStyle
 */
@property (nonatomic, strong) SCITextFormattingStyle * textStyle;

/*!
 * @abstract Defines text color
 */
@property (nonatomic, strong) UIColor * textColor;

/*!
 * @abstract viewSetup block used for additional customization of text field
 * @discussion Type: void (^SCITextAnnotationViewSetupBlock) (UITextField * view)
 */
@property (nonatomic, copy) SCITextAnnotationViewSetupBlock viewSetup;

/*!
 * @abstract Pen that defines marker line width and color
 */
@property (nonatomic, strong) id<SCIPen2D> markerLinePen;

/*!
 * @abstract Defines margin between text field and fill area
 */
@property (nonatomic) float margin;

@property (nonatomic, strong) UIColor * backgroundColor;

@property (nonatomic, strong) UIColor * borderColor;

@property (nonatomic) float borderWidth;

@property (nonatomic) float arrowSize;

@property (nonatomic) float opacity;

/*!
 * @abstract Block wich is called on every style property change.
 * @discussion It is used for invalidating parent annotation and provoking redraw of annotations and modifiers on style change
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
