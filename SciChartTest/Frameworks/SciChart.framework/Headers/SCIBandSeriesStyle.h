//
//  SCIBandSeriesStyle.h
//  SciChart
//
//  Created by Admin on 17.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;
@protocol SCIPointMarker;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Provides styling capabilities for SCIBandRenderableSeries within SciChart.
 */
@interface SCIBandSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Defines SCIBandSeriesStyle First Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> pen1;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Defines SCIBandSeriesStyle Second Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> pen2;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Defines SCIBandSeriesStyle First Brush.
 */
@property (nonatomic, strong) id<SCIBrush2D> brush1;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Defines SCIBandSeriesStyle Second Brush.
 */
@property (nonatomic, strong) id<SCIBrush2D> brush2;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion If true acts like a digital line.
 */
@property (nonatomic) BOOL isDigitalLine;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion If true draws Point Markers, otherwise skips the step.
 */
@property (nonatomic) BOOL drawPointMarkers;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Gets or sets SCIBandSeriesStyle First PointMarker.
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker1;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Gets or sets SCIBandSeries Second PointMarker.
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker2;

/*!
 * @brief The SCIBandSeriesStyle class' property.
 * @discussion Called whenever SCIBandSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
