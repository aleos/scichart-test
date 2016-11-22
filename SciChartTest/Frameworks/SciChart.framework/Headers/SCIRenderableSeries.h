//
//  SCIRenderableSeries.h
//  SciChart
//
//  Created by Admin on 15.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import "SCIDrawable.h"
#import "SCIResamplingMode.h"
#import "SCIHitTestProvider.h"

@protocol SCIDataSeries;
@protocol SCIAxis2D;
@protocol SCIRenderPassData;
@protocol SCIRange;
@protocol SCIChartSurface;
@class SCISeriesInfo;
@protocol SCIStyle;
@protocol SCIPaletteProvider;

@class UIColor;

/**
 * @brief Protocol declares properties and methods common for all renderable series
 * @discussion Renderable series is charts visual part
 */
@protocol SCIRenderableSeries <NSObject, SCIDrawable>

/**
 * @brief Surface that holds and displays renderable series
 * @see SCIChartSurface
 */
@property (nonatomic, weak) id<SCIChartSurface>     parentSurface;
/**
 * @brief Property that controls chart visibility. If set to false all drawing steps will be skipped
 */
@property (nonatomic) BOOL                          isVisible;
/**
 * @brief If set to true, renderable series considered as selected
 */
@property (nonatomic) BOOL                          isSelected;
/**
 * @brief mode of point reduction (resampling)
 * @see SCIResamplingMode
 */
@property (nonatomic) SCIResamplingMode         resamplingMode;
/**
 * @brief Data series, contains data
 * @discussion Make sure that data series type is suitable for specific given renderable series. Check in documentation for specific renderable series
 * @see SCIDataSeries
 */
@property (nonatomic, strong) id<SCIDataSeries>     dataSeries;

/**
 * @brief X axis on surface to which renderable series are bound
 * @discussion This is property for internal use mainly. It is checked and initialised at render loop
 * @see SCIAxis2D
 */
@property (nonatomic, weak) id<SCIAxis2D> xAxis;
/**
 * @brief Y axis on surface to which renderable series are bound
 * @discussion This is property for internal use mainly. It is checked and initialised at render loop
 * @see SCIAxis2D
 */
@property (nonatomic, weak) id<SCIAxis2D> yAxis;
/**
 * @brief X axis ID on surface to which renderable series are bound
 * @discussion Make sure that axis with given ID attached to SCIChartSurface
 * @see SCIAxis2D
 */
@property (nonatomic, copy) NSString *              xAxisId;
/**
 * @brief Y axis ID on surface to which renderable series are bound
 * @discussion Make sure that axis with given ID attached to SCIChartSurface
 * @see SCIAxis2D
 */
@property (nonatomic, copy) NSString *              yAxisId;
/**
 * @brief Render pass data that is used during current drawing loop
 * @discussion For internal use. Data is valid only during current drawing loop
 */
@property (nonatomic, strong) id<SCIRenderPassData> currentRenderPassData;
/**
 * @brief Zero line of chart in data value
 * @discussion Some charts depends on this property during drawing. For example mountains and columns
 */
@property (nonatomic) double                        zeroLineY;
/**
 * @brief Returns coordinates of zero line set at property "zeroLineY"
 */
-(double) getYZeroCoord;
/**
 * @brief Returns color of renderable series based on it's style and brushes
 */
-(UIColor *) seriesColor;
/**
 * @brief Method for getting renderable series X range based on it's data and drawing methods
 * @return SCIRange renderable series maximum X range
 * @see SCIRange
 */
-(id<SCIRange>) getXRange;
/**
 * @brief Method for getting renderable series Y range based on it's data and drawing methods and current X range
 * @return SCIRange renderable series Y range at given X range diapason
 * @see SCIRange
 */
-(id<SCIRange>) getYRange:(id<SCIRange>)xRange;
/**
 * @brief Method for getting positive renderable series Y range based on it's data and drawing methods and current X range
 * @return SCIRange renderable series positive Y range at given X range diapason
 * @see SCIRange
 */
-(id<SCIRange>) getYRange:(id<SCIRange>)xRange Positive:(BOOL)getPositiveRange;
/**
 * @brief Method for getting hit test tools for specific renderable series
 * @return SCIHitTestProvider hit test tools for renderable series
 * @see SCIHitTestProvider
 */
-(id<SCIHitTestProvider>) hitTestProvider;
/**
 * @brief Method for getting series info from hit test results
 * @discussion SCISeriesInfo is intermediate class that constructs UIView with series info data
 * @params info HitTestResult you can get from hit test tools
 * @return SCISeriesInfo tools for construction of series data view
 * @see SCISeriesInfo
 * @see HitTestResult
 */
-(SCISeriesInfo*) toSeriesInfoWithHitTest:(HitTestResult)info;
/**
 * @brief Tools for flexible customization of renderable series style
 * @see SCIPaletteProvider
 */
@property (nonatomic, strong) id<SCIPaletteProvider> paletteProvider;

@end

/** @}*/
