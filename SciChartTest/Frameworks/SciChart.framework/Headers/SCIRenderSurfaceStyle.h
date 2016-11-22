//
//  SCIRenderSurfaceStyle.h
//  SciChart
//
//  Created by Admin on 23.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIBrush2D;
@protocol SCIPen2D;

/*!
 * @brief The SCIRenderSurfaceStyle class.
 * @discussion Defines chart surface background colors and axis areas' size
 * @see SCIChartSurface
 */
@interface SCIRenderSurfaceStyle : NSObject <SCIStyle, NSCopying>

/**
 * Defines background fill color for surface.
 * @code
 * surface.style.backgroundBrush = SCIBrushSolid(colorCode: 0xFFA0A050)
 * @endcode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> backgroundBrush;
/**
 * Defines chart area border thicknes and color.
 * @code
 * surface.style.borderPen = SCIPenSolid(colorCode: 0xFFF0F050, width: 1)
 * @endcode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;
/**
 * Defines background fill color for chart area
 * @code
 * surface.style.seriesBackgroundBrush = SCIBrushSolid(colorCode: 0xFFA0A050)
 * @endcode
 * @see SCIBrush2D
 */
@property (nonatomic, strong) id<SCIBrush2D> seriesBackgroundBrush;

/**
 * Set left axis area size. If set to NAN axis area will be auto resized. Default is NAN
 */
@property (nonatomic) float leftAxisAreaSize;
/**
 * Set right axis area size. If set to NAN axis area will be auto resized. Default is NAN
 */
@property (nonatomic) float rightAxisAreaSize;
/**
 * Set top axis area size. If set to NAN axis area will be auto resized. Default is NAN
 */
@property (nonatomic) float topAxisAreaSize;
/**
 * Set bottom axis area size. If set to NAN axis area will be auto resized. Default is NAN
 */
@property (nonatomic) float bottomAxisAreaSize;

/**
 * For internal use
 */
@property (nonatomic) BOOL supressCallbacks;

/**
 * For internal use
 * @discussion Block executed when axes request resize from surface
 */
@property (nonatomic, copy) SCIActionBlock layoutChanged;

@end
