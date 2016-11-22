//
//  SCIAxisMarkerAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 27/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import <QuartzCore/QuartzCore.h>
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;
@class UITextField;
@class SCITextFormattingStyle;
@class UIColor;

typedef void (^SCIAxisMarkerAnnotationViewSetupBlock) (UITextField * view);

/*!
 * @abstract SCIAxisMarkerAnnotationStyle class
 * @discussion Contains properties for axis marker annotation theming and customization
 * @see SCIAxisMarkerAnnotation
 */
@interface SCIAxisMarkerAnnotationStyle : NSObject <SCIStyle, NSCopying>

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
 * @see SCIAxisMarkerAnnotationViewSetupBlock
 */
@property (nonatomic, copy) SCIAxisMarkerAnnotationViewSetupBlock viewSetup;

/*!
 * @abstract Pen that defines marker line width and color
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> markerLinePen;

/*!
 * @abstract Defines margin between text field and fill area edge
 */
@property (nonatomic) float margin;

/*!
 * @abstract Defines annotation's background color
 */
@property (nonatomic, strong) UIColor * backgroundColor;

/*!
 * @abstract Defines annotation's border color
 */
@property (nonatomic, strong) UIColor * borderColor;

/*!
 * @abstract Defines annotation's border width
 */
@property (nonatomic) float borderWidth;

/*!
 * @abstract Defines annotation 'arrow' size in pixels
 * @discussion if set to 0 annotation will be rectangular
 */
@property (nonatomic) float arrowSize;

/*!
 * @abstract Defines annotation's background opacity
 */
@property (nonatomic) float opacity;

@end


/** @}*/
