//
//  SCICandlestickSeriesStyle.h
//  SciChart
//
//  Created by Admin on 25.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;

/*!
 * @brief The SCICandlestickSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastCandlestickRenderableSeries within SciChart.
 */
@interface SCICandlestickSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion Gets or sets Candlestick Up Wick Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> upWickPen;

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion Gets or sets Candlestick Down Wick Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> downWickPen;

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion Gets or sets Candlestick Up Body Pen.
 */
@property (nonatomic, strong) id<SCIBrush2D> upBodyBrush;

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion Gets or sets Candlestick Down Body Pen.
 */
@property (nonatomic, strong) id<SCIBrush2D> downBodyBrush;

/*!
 * @brief The SCICandlestickSeriesStyle class.
 * @discussion Called whenever CandlestickSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion If true draws border, otherwise skips the step.
 */
@property (nonatomic) BOOL drawBorders;

/*!
 * @brief The SCICandlestickSeriesStyle class' property.
 * @discussion Gets or sets Candlestick Point width.
 */
@property (nonatomic) double dataPointWidth;

@end
