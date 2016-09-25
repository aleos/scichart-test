//
//  SCIAxisStyle.h
//  SciChart
//
//  Created by Admin on 20.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPen2D.h"
#import "SCICallbackBlock.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;
@class SCITextFormattingStyle;

#pragma mark SCIAxisLabelClippingMode enum
/*!
 * @typedef SCIAxisLabelClippingMode
 * @abstract A list of axis labels clipping modes.
 * @discussion Possible values:
 * @discussion - SCIAxisLabelClipping_None labels will not be clipped
 * @discussion - SCIAxisLabelClipping_Axis labels will be clipped to axis area
 * @discussion - SCIAxisLabelClipping_Surface labels will be clipped to whole chart surface (axes and charts area)
 */
typedef NS_ENUM(NSUInteger, SCIAxisLabelClippingMode) {
    SCIAxisLabelClipping_None,
    SCIAxisLabelClipping_Axis,
    SCIAxisLabelClipping_Surface
};

#pragma mark - SCIAxisStyle class
/*!
 * @abstract SCIAxisStyle class
 * @discussion Contains properties for axis theming and customization
 * @discussion It signals about properties changes with "styleChanged" block
 */
@interface SCIAxisStyle : NSObject <NSCopying>

#pragma mark Minor ticks setting
/*!
 * @abstract Defines if minor ticks will be drawn on axis.
 */
@property (nonatomic) BOOL drawMinorTicks;

/*!
 * @abstract Pen with which minor ticks are drawn.
 * @discussion Defines ticks width and color.
 */
@property (nonatomic, strong) id<SCIPen2D> minorTickBrush;

/*!
 * @abstract Defines minor ticks line length.
 */
@property (nonatomic) float minorTickSize;

#pragma mark Major ticks setting
/*!
 * @abstract Defines if major ticks will be drawn on axis.
 */
@property (nonatomic) BOOL drawMajorTicks;

/*!
 * @abstract Pen with which major ticks are drawn.
 * @discussion Defines ticks width and color.
 */
@property (nonatomic, strong) id<SCIPen2D> majorTickBrush;

/*!
 * @abstract Defines major ticks line length.
 */
@property (nonatomic) float majorTickSize;

#pragma mark Minor grid lines setting
/*!
 * @abstract Defines if minor grid lines will be drawn on chart surface.
 */
@property (nonatomic) BOOL drawMinorGridLines;

/*!
 * @abstract Pen with which minor grid lines are drawn on chart surface.
 * @discussion Defines minor grid lines width and color.
 */
@property (nonatomic, strong) id<SCIPen2D> minorGridLineBrush;

#pragma mark Major Grid lines setting
/*!
 * @abstract Defines if major grid lines will be drawn on chart surface.
 */
@property (nonatomic) BOOL drawMajorGridLines;

/*!
 * @abstract Pen with which major grid lines are drawn on chart surface.
 * @discussion Defines major grid lines width and color.
 */
@property (nonatomic, strong) id<SCIPen2D> majorGridLineBrush;

#pragma mark Major bands setting
/*!
 * @abstract Defines if grid bands will be drawn on chart surface.
 * @discussion Bands are drawn between major grid lines.
 */
@property (nonatomic) BOOL drawMajorBands;

/*!
 * @abstract Brush with which grid bands are drawn on chart surface.
 * @discussion Defines bands color.
 * @discussion Bands are drawn between major grid lines.
 */
@property (nonatomic, strong) id<SCIBrush2D> gridBandBrush;

#pragma mark Axis labels setting
/*!
 * @abstract Defines if axis labels will be created.
 */
@property (nonatomic) BOOL drawLabels;

/*!
 * @abstract Defines axis labels style.
 * @discussion Contains properties for customization of labels font, color, alignment etc.
 * @see SCITextFormattingStyle
 */
@property (nonatomic, strong) SCITextFormattingStyle * labelStyle;

/*!
 * @abstract Defines axis Title label style.
 * @discussion Contains properties for customization of labels font, color, alignment etc.
 * @see SCITextFormattingStyle
 */
@property (nonatomic, strong) SCITextFormattingStyle * axisTitleLabelStyle;

/*!
 * @abstract Defines axis labels clipping mode.
 * @discussion Labels can be clipped to axis bounds or chart surface bounds.
 * @see SCIAxisLabelClippingMode
 */
@property (nonatomic) SCIAxisLabelClippingMode labelClipping;

/*!
 * @abstract Defines if axis should move labels instead of clipping.
 * @discussion Axis will atempt to layout labels that about to get clipped inside clipping area.
 * @discussion Clipping area is defined with "labelClipping" property
 */
@property (nonatomic) BOOL moveLabelsToClippingArea;

/*!
 * @abstract Defines distance from axis panel border to axis labels. Spacing is horizontal for vertical axes and vertical for horizontal axes.
 */
@property (nonatomic) float labelSpacing;

#pragma mark Axis size
/*!
 * @abstract Defines recommended size of axis panel. Width for vertical axes and height for horizontal axis.
 * @discussion Actual axis size can be different if it is not possible to layout axes with recommended size
 */
@property (nonatomic) float recommendedSize;

#pragma mark Style changed callback
/*!
 * @abstract Block wich is called on every style property change.
 * @discussion It is used for invalidating parent axis and provoking redraw of charts on style change
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
