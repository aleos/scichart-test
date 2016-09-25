//
//  MountainSeriesStyle.h
//  SciChart
//
//  Created by Admin on 22.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIBrush2D;
@protocol SCIPen2D;

/*!
 * @brief The SCIMountainSeriesStyle class.
 * @discussion Provides styling capabilities for SCIFastMountainRenderableSeries within SciChart.
 */
@interface SCIMountainSeriesStyle : NSObject <NSCopying>

/*!
 * @brief The SCIMountainSeriesStyle class' property.
 * @discussion Defines Mountain Area brush.
 */
@property (nonatomic, strong) id<SCIBrush2D> areaBrush;

/*!
 * @brief The SCIMountainSeriesStyle class' property.
 * @discussion Defines Mountain border pen.
 */
@property (nonatomic, strong) id<SCIPen2D> borderPen;

/*!
 * @brief The SCIMountainSeriesStyle class' property.
 * @discussion If true acts like a digital line.
 */
@property (nonatomic) BOOL isDigitalLine;

/*!
 * @brief The SCIMountainSeriesStyle class' property.
 * @discussion Called whenever MountainSeries style was changed.
 */
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
