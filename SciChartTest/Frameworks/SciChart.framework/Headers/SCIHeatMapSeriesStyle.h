//
//  SCIHeatMapSeriesStyle.h
//  SciChart
//
//  Created by Admin on 08.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIGenericType.h"

@class SCITextureOpenGL;

/*!
 * @brief The SCIHeatMapSeriesStyle class.
 * @discussion Provides styling capabilities for SCIHeatMapRenderableSeries within SciChart.
 */
@interface SCIHeatMapSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIHeatMapSeriesStyle class' property.
 * @discussion Defines SCIHeatMapSeries Palette.
 */
@property (nonatomic, strong) SCITextureOpenGL * palette;

/*!
 * @brief The SCIHeatMapSeriesStyle class' property.
 * @discussion Defines SCIHeatMapSeries Minimum.
 */
@property (nonatomic) SCIGenericType min;

/*!
  @brief The SCIHeatMapSeriesStyle class' property.
  @discussion Defines SCIHeatMapSeries Maximum.
 */
@property (nonatomic) SCIGenericType max;

/*!
  @brief The SCIHeatMapSeriesStyle class' property.
  @discussion Called whenever SCIHeatMapSeries Style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

/*!
  @brief The SCIHeatMapSeriesStyle class' custom init.
  @discussion Provides capability to initialize SCIHeatMapSeriesStyle with Palette.
  @code
    [heatMapSeriesStyle initWithPalette: palette];
  @endcode
 */
-(instancetype)initWithPalette:(SCITextureOpenGL*)palette;

@end
