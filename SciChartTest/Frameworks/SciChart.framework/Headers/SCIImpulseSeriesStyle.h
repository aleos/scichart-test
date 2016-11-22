//
//  SCIImpulseSeriesStyle.h
//  SciChart
//
//  Created by Mykola Hrybeniuk on 9/15/16.
//  Copyright © 2016 SciChart. All rights reserved.
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
 * @brief The SCIImpulseSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastImpulseRenderableSeries within SciChart.
 * @see SCIStyle
 * @see SCIFastImpulseRenderableSeries
 */
@interface SCIImpulseSeriesStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @brief Defines impulse line color and thickness
 * @code
 * style.linePen = SCIPenSolid(color: UIColor.blueColor(), width: 2)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

/*!
 * @brief Defines impulse point marker
 * @code
 * let marker = SCIEllipsePointMarker()
 * marker.drawBorder = false
 * marker.fillBrush = SCIBrushSolid(color: UIColor.blueColor())
 * impulseSeries.style.pointMarker = marker
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
