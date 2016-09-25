//
//  SCIRenderSurface.h
//  SciChart
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import "SCIInvalidatableElement.h"
#import <QuartzCore/QuartzCore.h>
#import "SCICallbackBlock.h"

@protocol SCIRenderContext2D;
@class FrameworkElement;
@protocol SCIRenderSurfaceCallbackDelegate;
@class UIView;
@class SCIRenderSurfaceStyle;

@protocol SCIRenderSurface <NSObject, SCIInvalidatableElement>

@property (nonatomic, weak) id<SCIRenderSurfaceCallbackDelegate> delegate;
@property (nonatomic) BOOL multisampling;

-(void) clear;
-(void) free;
-(void) clearRenderSurface;
-(void) clearModifiers;

-(id<SCIRenderContext2D>) renderContext;
-(id<SCIRenderContext2D>) modifierContext;
-(id<SCIRenderContext2D>) backgroundContext;

@property (nonatomic, weak) UIView * chartFrameView;

-(CGRect)frame;
-(CGRect)chartFrame;
-(BOOL) isPointWithinBounds:(CGPoint)point;
-(CGPoint)pointInChartFrame:(CGPoint)point;

-(void) drawBackground:(id<SCIRenderContext2D>)context Style:(SCIRenderSurfaceStyle*)style;

@property (nonatomic) BOOL reduceCPUFrames;
@property (nonatomic) BOOL reduceGPUFrames;

@property (nonatomic, copy) SCIActionBlock_Pint renderedCallback;


@end
