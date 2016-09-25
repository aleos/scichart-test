//
//  SCITextAnnotationStyle.h
//  SciChart
//
//  Created by Admin on 05.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@class UITextField;
@class SCITextFormattingStyle;
@class UIColor;

typedef void (^SCITextAnnotationViewSetupBlock) (UITextField * view);

/*!
 * @abstract SCITextAnnotationStyle class
 * @discussion Contains properties for text annotation theming and customization
 * @discussion It signals about properties changes with "styleChanged" block
 */
@interface SCITextAnnotationStyle : NSObject <NSCopying>

/*!
 * @abstract Defines text annotation text formatting style.
 * @discussion Contains properties for customization of labels font, color etc.
 * @see SCITextFormattingStyle
 */
@property (nonatomic, strong) SCITextFormattingStyle * textStyle;

/*!
 * @abstract Defines text annotation text color
 */
@property (nonatomic, strong) UIColor * textColor;
/*!
 * @abstract Defines text annotation background color
 */
@property (nonatomic, strong) UIColor * backgroundColor;

/*!
 * @abstract viewSetup block used for additional customization of text annotation
 * @discussion Type: void (^SCITextAnnotationViewSetupBlock) (UITextField * view)
 */
@property (nonatomic, copy) SCITextAnnotationViewSetupBlock viewSetup;

/*!
 * @abstract Block wich is called on every style property change.
 * @discussion It is used for invalidating parent annotation and provoking redraw of annotations and modifiers on style change
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
