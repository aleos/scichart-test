//
//  SCIFastFixedErrorBarsRenderableSeries.h
//  SciChart
//
//  Created by Mykola Hrybeniuk on 9/17/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup RenderableSeries
 *  @{
 */

#import <SciChart/SciChart.h>

/**
 * Possible varinats how errorHigh and errorLow is calculated in error bars series.
 */
typedef enum : NSUInteger {
    /**
     * It means that errorHigh is added to value. And errorLow deducted from value.
     */
    SCIErrorBarTypeAbsolute,
    
    /**
     * It means that errorHighValue = value + ABS(value * self.errorHigh). And errorLowValue = value - ABS(value * self.errorLow)
     */
    SCIErrorBarTypeRelative,
} SCIErrorBarType;

/**
 * Defines direction of errors.
 */
typedef enum : NSUInteger {
    
    /**
     * In that case errorHigh is added to xValue and yValue is deducted from xValue.
     */
    SCIErrorBarDirectionHorizontal,
    
    /**
     * In that case errorHigh is added to yValue and yValue is deducted from yValue.
     */
    SCIErrorBarDirectionVertical,
} SCIErrorBarDirection;


/**
 * Defines which limits erros is shown.
 */
typedef enum : NSUInteger {
    
    /**
     * Shows only high limit of errors
     */
    SCIErrorBarModeHigh,
    
    /**
     * Shows only low limit of errors
     */
    SCIErrorBarModeLow,
    
    /**
     * Shows only both limits of errors
     */
    SCIErrorBarModeBoth
} SCIErrorBarMode;

@class SCIErrorBarsSeriesStyle;

/**
 * @brief SCIFastFixedErrorBarsRenderableSeries class.
 * @discussion Provides properties for setting the parameters of the ErrorBars.
 */
@interface SCIFastFixedErrorBarsRenderableSeries : SCIRenderableSeriesBase

/*!
 @brief The SCIFastFixedErrorBarsRenderableSeries class' property.
 @discussion Gets or sets the SCIFastImpulseRenderableSeries Style property.
 @see SCIErrorBarsSeriesStyle
 */
@property (nonatomic, copy) SCIErrorBarsSeriesStyle * style;

/**
 * Value is used for defining max limit of error bar. It's value can be relative or absolute, it depends on errorType.
 * @see SCIErrorBarType
 */
@property (nonatomic) double errorHigh;

/**
 * Value is used for defining min limit of error bar. It's value can be relative or absolute, it depends on errorType.
 * @see SCIErrorBarType
 */
@property (nonatomic) double errorLow;

/**
 * Width of line limit of errors
 */
@property (nonatomic) double errorDataPointWidth;

/**
 * Error type of erros bars. For more description see SCIErrorBarType enum.
 * @see SCIErrorBarType
 */
@property (nonatomic) SCIErrorBarType errorType;

/**
 * Error direction of erros bars. For more description see SCIErrorBarDirection enum.
 * @see SCIErrorBarDirection
 */
@property (nonatomic) SCIErrorBarDirection errorDirection;

/**
 * Error mode of erros bars. For more description see SCIErrorBarMode enum.
 * @see SCIErrorBarMode
 */
@property (nonatomic) SCIErrorBarMode errorMode;

@end

/** @}*/
