//
//  SCIColumnSeriesStyle.h
//  SciChart
//
//  Created by Admin on 01.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;

/*!
 * @brief The SCIColumnSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastColumnRenderableSeries within SciChart.
 */
@interface SCIColumnSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIColumnSeriesStyle class' property.
 * @discussion Defines SCIColumnSeries Border Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;

/*!
 * @brief The SCIColumnSeriesStyle class' property.
 * @discussion Defines SCIColumnSeries Fill brush.
 */
@property (nonatomic, strong) id<SCIBrush2D> fillBrush;

/*!
 * @brief The SCIColumnSeriesStyle class' property.
 * @discussion Called whenever SCIColumnSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

/*!
 * @brief The SCIColumnSeriesStyle class' property.
 * @discussion If true draws border, otherwise skips the step.
 */
@property (nonatomic) BOOL drawBorders;

/*!
 * @brief The SCIColumnSeriesStyle class' property.
 * @discussion Defines SCIColumnSeries Data Point width.
 */
@property (nonatomic) double dataPointWidth;

@end
