//
//  SCILineSeriesStyle.h
//  SciChart
//
//  Created by Admin on 22.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPen2D;
@protocol SCIPointMarker;
@class SCIPointMarkerClusterizer;

/*!
 * @brief The SCILineSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastLineRenderableSeries within SciChart.
 */
@interface SCILineSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCILineSeriesStyle class' property.
 * @discussion Defines Line's Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

/*!
 * @brief The SCILineSeriesStyle class' property.
 * @discussion If true acts like a digital line.
 */
@property (nonatomic) BOOL isDigitalLine;

/*!
 * @brief The SCILineSeriesStyle class' property.
 * @discussion If true draws PointMarkers, otherwise skips the step.
 */
@property (nonatomic) BOOL drawPointMarkers;

/*!
 * @brief The SCILineSeriesStyle class' property.
 * @discussion Gets or sets a PointMarker property.
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker;

/*!
 * @brief The SCILineSeriesStyle class' property.
 */
@property (nonatomic, strong) SCIPointMarkerClusterizer * cluster;

/*!
 * @brief The SCILineSeriesStyle class' property.
 */
@property (nonatomic) float clusterSpacing;

/*!
 * @brief The SCILineSeriesStyle class' property.
 * @discussion Called whenever LineSeries style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
