//
//  SCITextFormattingStyle.h
//  SciChart
//
//  Created by Admin on 20.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SCICallbackBlock.h"

typedef NS_ENUM(NSUInteger, SCILabelAlignmentHorizontalMode) {
    SCILabelAlignmentHorizontal_Default,
    SCILabelAlignmentHorizontal_Center,
    SCILabelAlignmentHorizontal_Left,
    SCILabelAlignmentHorizontal_Right
};

typedef NS_ENUM(NSUInteger, SCILabelAlignmentVerticalMode) {
    SCILabelAlignmentVertical_Default,
    SCILabelAlignmentVertical_Center,
    SCILabelAlignmentVertical_Top,
    SCILabelAlignmentVertical_Bottom
};

/*!
 * @brief SCITextFormattingStyle class.
 * @discussion Provides properties for styling the text with Font, Size, Color.
 */
@interface SCITextFormattingStyle : NSObject <NSCopying>

/*!
 * @brief SCITextFormattingStyle class' FontName property.
 */
@property (nonatomic, copy) NSString * fontName; // http://iosfonts.com/

/*!
 * @brief SCITextFormattingStyle class' FontSize property.
 */
@property (nonatomic) float fontSize;

/*!
 * @brief SCITextFormattingStyle class' Text Color property.
 */
@property (nonatomic, copy) UIColor * color;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) CGAffineTransform transform;

@property (nonatomic) SCILabelAlignmentHorizontalMode alignmentHorizontal;
@property (nonatomic) SCILabelAlignmentVerticalMode alignmentVertical;

/*!
 * @discussion SCITextFormattingStyle class' getFont method.
 * @return Returns UIFont instance
 */
-(UIFont*) getFont;

@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
