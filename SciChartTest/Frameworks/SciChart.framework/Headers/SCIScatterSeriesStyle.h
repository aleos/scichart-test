//
//  SCIScatterSeriesStyle.h
//  SciChart
//
//  Created by Admin on 30.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIPointMarker;
@class SCIPointMarkerClusterizer;

/*!
 * @brief The SCIScatterSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastOhlcRenderableSeries within SciChart.
 */
@interface SCIScatterSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIScatterSeriesStyle class' property.
 * @discussion Gets or sets SCIScatterSeriesStyle PointMarker.
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker;

/*!
 * @brief The SCIScatterSeriesStyle class' property.
 */
@property (nonatomic, strong) SCIPointMarkerClusterizer * cluster;

/*!
 * @brief The SCIScatterSeriesStyle class' property.
 */
@property (nonatomic) float clusterSpacing;

/*!
 * @brief The SCIScatterSeriesStyle class' property.
 * @discussion Called whenever SCIScatterSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
