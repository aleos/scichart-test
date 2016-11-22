//
//  SCILineSeriesStyle.h
//  SciChart
//
//  Created by Admin on 22.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIPointMarker;
@class SCIPointMarkerClusterizer;

/*!
 * @brief The SCILineSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastLineRenderableSeries
 * @see SCIFastLineRenderableSeries
 */
@interface SCILineSeriesStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @brief Defines line series color and thickness
 * @code
 * style.linePen = SCIPenSolid(colorCode: 0xFF00A0FF, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

/*!
 * @brief If true acts like a digital line
 */
@property (nonatomic) BOOL isDigitalLine;

/*!
 * @brief If true draws PointMarkers at data points, otherwise skips the step.
 */
@property (nonatomic) BOOL drawPointMarkers;

/*!
 * @brief Gets or sets a point marker
 * @discussion Point markers will be displayed at data points if drawPointMarkers is set to true
 * @code
 * let marker = SCIEllipsePointMarker()
 * marker.drawBorder = false
 * marker.fillBrush = SCIBrushSolid(color: UIColor.redColor())
 * lineSeries.style.pointMarker = marker
 * @endcode
 * @see SCIPointMarker
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker;

/*!
 * @brief Point marker drawing optimization
 * @discussion For internal use
 * @see SCIPointMarkerClusterizer
 */
@property (nonatomic, strong) SCIPointMarkerClusterizer * cluster;

/*!
 * @brief Culling distance of tightly packed point markers
 * @discussion Distance in pixels on screen at which point markers will be culled.
 * @discussion Default value is 2. Bigger value can create noticable gaps, smaller will hit performance
 */
@property (nonatomic) float clusterSpacing;

@end

/** @} */
