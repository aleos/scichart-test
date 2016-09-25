//
//  SCIOhlcSeriesStyle.h
//  SciChart
//
//  Created by Admin on 25.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPen2D;

/*!
 * @brief The SCIOhlcSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastOhlcRenderableSeries within SciChart.
 */
@interface SCIOhlcSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIOhlcSeriesStyle class' property.
 * @discussion Defines SCIOhlcSeries Up Wick Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> upWickPen;

/*!
 * @brief The SCIOhlcSeriesStyle class' property.
 * @discussion Defines SCIOhlcSeries Down Wick Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> downWickPen;

/*!
 * @brief The SCIOhlcSeriesStyle class' property.
 * @discussion Called whenever SCIOhlcSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

/*!
 * @brief The SCIOhlcSeriesStyle class' property.
 * @discussion Defines SCIOhlcSeries Point width.
 */
@property (nonatomic) double dataPointWidth;

@end
