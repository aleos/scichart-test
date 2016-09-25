//
//  SCIRenderSurfaceStyle.h
//  SciChart
//
//  Created by Admin on 23.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCICallbackBlock.h"

@protocol SCIBrush2D;
@protocol SCIPen2D;

/*!
 * @brief The SCIRenderSurfaceStyle class.
 * @discussion All surfaces have many properties to define how they operate.
    All surface components can be styled. Please see the examples suite.
 */
@interface SCIRenderSurfaceStyle : NSObject <NSCopying>

@property (nonatomic) BOOL supressCallbacks;

@property (nonatomic, strong) id<SCIBrush2D> backgroundBrush;
@property (nonatomic, strong) id<SCIPen2D> borderPen;
@property (nonatomic, strong) id<SCIBrush2D> seriesBackgroundBrush;

@property (nonatomic) float leftAxisAreaSize;
@property (nonatomic) float rightAxisAreaSize;
@property (nonatomic) float topAxisAreaSize;
@property (nonatomic) float bottomAxisAreaSize;

@property (nonatomic) BOOL autoSizeAxes;

@property (nonatomic, copy) SCIActionBlock layoutChanged;
@property (nonatomic, copy) SCIActionBlock styleChanged;

@end
