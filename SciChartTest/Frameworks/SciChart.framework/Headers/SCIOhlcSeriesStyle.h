//
//  SCIOhlcSeriesStyle.h
//  SciChart
//
//  Created by Admin on 25.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;

/*!
 * @brief The SCIOhlcSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastOhlcRenderableSeries within SciChart.
 * @see SCIFastOhlcRenderableSeries
 */
@interface SCIOhlcSeriesStyle : NSObject <SCIStyle, NSCopying>

// TODO: reaname wick to week!!!

/*!
 * @brief defines week pen for chart Up mode (open < close)
 * @code
 * style.upWickPen = SCIPenSolid(colorCode: 0xFF00FF00, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> upWickPen;

/*!
 * @brief defines week pen for chart Down mode (open > close)
 * @code
 * style.downWickPen = SCIPenSolid(colorCode: 0xFF0000FF, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> downWickPen;

/*!
 * @brief relative width of marker for data point
 * @discussion Valid values are from 0 to 1, where 0 - no body, 1 - no space between data points
 * @discussion Default value is 0.7
 */
@property (nonatomic) double dataPointWidth;

@end

/** @} */
