//
//  SCIErrorBarsSeriesStyle.h
//  SciChart
//
//  Created by Mykola Hrybeniuk on 9/17/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"
#import "SCIStyle.h"

@protocol SCIPen2D;

@interface SCIErrorBarsSeriesStyle : NSObject <SCIStyle, NSCopying>

/*!
 * @brief The SCIErrorBarsSeriesStyle class' property.
 * @discussion Defines Line's Pen.
 */
@property (nonatomic, strong) id<SCIPen2D> linePen;

@property (nonatomic, strong) id<SCIPen2D> highPen;
@property (nonatomic, strong) id<SCIPen2D> lowPen;

@end

/** @} */
