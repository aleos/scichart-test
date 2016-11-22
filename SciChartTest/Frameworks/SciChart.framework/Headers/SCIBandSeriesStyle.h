//
//  SCIBandSeriesStyle.h
//  SciChart
//
//  Created by Admin on 17.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;
@protocol SCIPointMarker;

/*!
 * @brief The SCIBandSeriesStyle class.
 * @discussion Provides styling capabilities for SCIBandRenderableSeries within SciChart.
 * @see SCIStyle
 * @see SCIBandRenderableSeries
 */
@interface SCIBandSeriesStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @brief Defines first line's thickness and color
 * @code
 * style.pen1 = SCIPenSolid(colorCode: 0xFF00FF00, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> pen1;

/*!
 * @brief Defines second line's thickness and color
 * @code
 * style.pen2 = SCIPenSolid(colorCode: 0xFF0000FF, width: 1)
 * @encode
 * @see SCIPen2D
 */
@property (nonatomic, strong) id<SCIPen2D> pen2;

/*!
 * @brief Defines area fill color if first line is on top
 * @code
 * style.brush1 = SCIBrushSolid(colorCode: 0x7000FF00)
 * @encode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> brush1;

/*!
 * @brief Defines area fill color if second line is on top
 * @code
 * style.brush2 = SCIBrushSolid(colorCode: 0x700000FF)
 * @encode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> brush2;

/*!
 * @brief If true acts like a digital line, outline will be jagged
 */
@property (nonatomic) BOOL isDigitalLine;

/*!
 * @brief If true draws Point Markers at every data point, otherwise skips the step.
 */
@property (nonatomic) BOOL drawPointMarkers;

/*!
 * @brief Defines point marker for first line
 * @discussion Point markers will be displayed at data points if drawPointMarkers is set to true
 * @code
 * let marker = SCIEllipsePointMarker()
 * marker.drawBorder = false
 * marker.fillBrush = SCIBrushSolid(color: UIColor.redColor())
 * bandSeries.style.pointMarker1 = marker
 * @endcode
 * @see SCIPointMarker
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker1;

/*!
 * @brief Defines point marker for second line
 * @discussion Point markers will be displayed at data points if drawPointMarkers is set to true
 * @code
 * let marker = SCIEllipsePointMarker()
 * marker.drawBorder = false
 * marker.fillBrush = SCIBrushSolid(color: UIColor.redColor())
 * bandSeries.style.pointMarker2 = marker
 * @endcode
 * @see SCIPointMarker
 */
@property (nonatomic, strong) id<SCIPointMarker> pointMarker2;

@end

/** @} */
