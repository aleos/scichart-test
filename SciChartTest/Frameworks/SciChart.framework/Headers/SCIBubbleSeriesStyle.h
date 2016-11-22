//
//  SCIBubbleSeriesStyle.h
//  SciChart
//
//  Created by Admin on 18.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <SciChart/SciChart.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;

/*!
 * @brief The SCIBubbleSeriesStyle class
 * @discussion Provides styling capabilities for SCIBubbleRenderableSeries
 * @see SCIBubbleRenderableSeries
 * @see SCIStyle
 */
@interface SCIBubbleSeriesStyle: NSObject <SCIStyle, NSCopying>

/*!
 * @brief Defines bubble fill color
 * @code
 * style.bubbleBrush = SCIBrushSolid(colorCode: 0xFF00A0FF)
 * @encode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> bubbleBrush;

/*!
 * @brief Defines Bubble's outline color and width
 * @code
 * style.borderPen = SCIPenSolid(colorCode: 0xFF00A0FF, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;

/*!
 * @brief If true draws the border, otherwise skips the step.
 */
@property (nonatomic) BOOL drawBorder;

/*!
 * @brief Defines Bubble's level of detalization or number of edges
 * @discussion The higher value, the better looking circle will be. But it can hit performance, especially with outlines turned on
 * @discussion Default value is 20
 */
@property (nonatomic) int detalization;

@end

/** @} */
