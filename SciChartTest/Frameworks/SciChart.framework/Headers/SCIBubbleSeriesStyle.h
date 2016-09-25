//
//  SCIBubbleSeriesStyle.h
//  SciChart
//
//  Created by Admin on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <SciChart/SciChart.h>
#import "SCICallbackBlock.h"


@protocol SCIPen2D;
@protocol SCIBrush2D;

/*!
 * @brief The SCIBubbleSeriesStyle class.
 * @discussion Provides styling capabilities for SCIBubbleRenderableSeries within SciChart.
 */
@interface SCIBubbleSeriesStyle: NSObject <NSCopying>

/*!
 * @brief The SCIBubbleSeriesStyle class' property.
 * @discussion Defines Bubble Brush.
 */
@property (nonatomic, strong) id<SCIBrush2D> bubbleBrush;

/*!
 * @brief The SCIBubbleSeriesStyle class' property.
 * @discussion Defines Bubble's Border Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;

/*!
 * @brief The SCIBubbleSeriesStyle class' property.
 * @discussion If true draws the border, otherwise skips the step.
 */
@property (nonatomic) BOOL drawBorder;

/*!
 * @brief The SCIBubbleSeriesStyle class' property.
 * @discussion Defines Bubble's level of detalization.
 */
@property (nonatomic) int detalization;

/*!
 * @brief The SCIBubbleSeriesStyle class' property.
 * @discussion Called whenever Bubble style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
