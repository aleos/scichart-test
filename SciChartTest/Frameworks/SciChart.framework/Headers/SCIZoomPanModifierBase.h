//
//  SCIZoomPanModifierBase.h
//  SciChart
//
//  Created by Admin on 11.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIGestureModifier.h"
#import "SCIEnumerationConstants.h"

@interface SCIZoomPanModifierBase : SCIGestureModifier

@property (nonatomic) SCIXYDirection xyDirection;
@property (nonatomic) SCIZoomPanClipMode clipModeX;
@property (nonatomic) BOOL zoomExtentsY;

-(void) panFrom:(CGPoint)lastPoint To:(CGPoint)currentPoint Start:(CGPoint)startPoint;

@property (nonatomic, readonly) BOOL gestureLocked;

@end

/** @}*/
