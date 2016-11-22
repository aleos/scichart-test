//
//  SCIViewPortManager.h
//  SciChart
//
//  Created by Admin on 28.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Visuals
 *  @{
 */

#import "SCIInvalidatableElement.h"

@protocol SCIAxis2D;
@protocol SCIRange;
@class SCIRenderPassInfo;
@protocol SCIChartSurface;

#pragma mark - SCIViewPortManagee Protocol

@protocol SCIViewportManager <NSObject, SCIInvalidatableElement>

-(BOOL) isAttached;

-(id<SCIRange>) calculateNewYAxisRange:(id<SCIAxis2D>)yAxis WithInfo:(SCIRenderPassInfo*)renderPassInfo;
-(id<SCIRange>) calculateNewXAxisRange:(id<SCIAxis2D>)xAxis;

-(id<SCIRange>) calculateAutoRange:(id<SCIAxis2D>)axis;

-(void) attachSciChartSurface:(id<SCIChartSurface>)scs;
-(void) detachSciChartSurface;

-(void) zoomExtents;
-(void) animateZoomExtents:(float)duration;
-(void) zoomExtentsY;
-(void) animateZoomExtentsY:(float)duration;
-(void) zoomExtentsX;
-(void) animateZoomExtentsX:(float)duration;
-(void) autorangeAxes;

@end

#pragma mark - SCIViewPortManage default implementation

@interface SCIViewportManager : NSObject <SCIViewportManager>

-(id<SCIRange>) onCalculateNewXRange:(id<SCIAxis2D>)xAxis;
-(id<SCIRange>) onCalculateNewYRange:(id<SCIAxis2D>)yAxis RenderPassInfo:(SCIRenderPassInfo*)renderPassInfo;

@end

/** @}*/
