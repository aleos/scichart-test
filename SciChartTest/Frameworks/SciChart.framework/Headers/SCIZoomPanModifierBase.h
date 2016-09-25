//
//  SCIZoomPanModifierBase.h
//  SciChart
//
//  Created by Admin on 11.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIChartModifierBase.h"
#import "SCIEnumerationConstants.h"

@interface SCIZoomPanModifierBase : SCIChartModifierBase

@property (nonatomic) SCIXYDirection xyDirection;
@property (nonatomic) SCIZoomPanClipMode clipModeX;
@property (nonatomic) BOOL zoomExtentsY;

-(void) panFrom:(CGPoint)lastPoint To:(CGPoint)currentPoint Start:(CGPoint)startPoint;

@property (nonatomic, readonly) BOOL gestureLocked;

@end
