//
//  SCIColumnSeriesStyle.h
//  SciChart
//
//  Created by Admin on 01.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;

/*!
 * @brief The SCIColumnSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastColumnRenderableSeries within SciChart.
 */
@interface SCIColumnSeriesStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @brief defines columns' outline color and thickness
 * @code
 * style.borderPen = SCIPenSolid(colorCode: 0xFF00FF00, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;

/*!
 * @brief Defines columns' fill color
 * @code
 * style.fillBrush = SCIBrushSolid(colorCode: 0xFFFFFF00)
 * @encode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> fillBrush;

/*!
 * @brief If property set to true, column body is drawn with outline
 */
@property (nonatomic) BOOL drawBorders;

/*!
 * @brief relative width of column
 * @discussion Valid values are from 0 to 1, where 0 - no body, 1 - no space between columns
 * @discussion Default value is 0.7
 */
@property (nonatomic) double dataPointWidth;

@end

/** @} */
