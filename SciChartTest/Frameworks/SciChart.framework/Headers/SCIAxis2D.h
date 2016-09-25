//
//  SCIAxis2D.h
//  SciChart
//
//  Created by Admin on 10.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "SCIAxisCore.h"
#import "SCIDrawable.h"
#import "SCIDataType.h"
#import "SCIRange.h"
#import "SCIAxisEnums.h"
#import "SCIEnumerationConstants.h"
#import "SCICallbackBlock.h"

@protocol SCIChartSurface;
@protocol SCIAxisInteractivityHelper;
@class SCIRenderPassInfo;
@protocol SCILabelProvider;
@protocol SCIAxisPanel;
@class SCIAxisStyle;
@class SCIAxisHitTestProvider;

@protocol SCIAxis2D <NSObject, SCIAxisCore, SCIDrawable>

@required

@property (nonatomic, copy) NSString * axisId;

-(id<SCIRange>) getDataRange;

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;
@property (nonatomic, strong) id <SCILabelProvider> labelProvider;

-(BOOL) isHorizontalAxis;

@property (nonatomic) BOOL isStaticAxis;

@property (nonatomic) SCIAxisAlignmentMode axisAlignment;
@property (nonatomic, copy) SCIActionBlock onAxisAlignmentChanged;

-(BOOL) isCategoryAxis;
-(BOOL) isPolarAxis;
@property (nonatomic) BOOL isCenterAxis;
@property (nonatomic) BOOL isPrimaryAxis;

@property (nonatomic) BOOL isVisible;
-(BOOL) isAxisFlipped;

@property (nonatomic, strong) id<SCIRange> visibleRangeLimit;
@property (nonatomic) SCIRangeClipMode visibleRangeLimitMode;
@property (nonatomic) BOOL isLabelCullingEnabled;
-(id<SCIAxisInteractivityHelper>) getCurrentInteractivityHelper;

-(id<SCIRange>) calculateYRangeWithRenderPassInfo:(SCIRenderPassInfo*)renderPassInfo;
-(id<SCIRange>) getWindowedYRangeWithXRanges:(NSDictionary*) xRanges; // <string : SCIRange>

-(void) onBeginRenderPass;

-(void) scrollByPixels:(double)pixelsToScroll ClipMode:(SCIZoomPanClipMode)clipMode;
-(void) scrollByPixels:(double)pixelsToScroll ClipMode:(SCIZoomPanClipMode)clipMode AnimationTime:(float)duration;

-(void) scrollByDataPoints:(int)pointAmount;
-(void) scrollByDataPoints:(int)pointAmount AnimationTime:(float)duration;

-(void) zoomFrom:(double)fromCoord To:(double)toCoord;
-(void) zoomFrom:(double)fromCoord To:(double)toCoord AnimationTime:(float)duration;

-(void) zoomByFractionMin:(double)minFraction Max:(double)maxFraction;
-(void) ZoomByFractionMin:(double)minFraction Max:(double)maxFraction AnimationTime:(float)duration;

-(void) scrollToPixels:(double)pixelsToScroll WithVisibleRange:(id<SCIRange>)startVisibleRange WithLimit:(id<SCIRange>)rangeLimit;

-(void) assertDataType:(SCIDataType)type;

-(NSString*) formatText:(SCIGenericType)value;
-(NSString*) formatCursorText:(SCIGenericType)value;

-(void) clear;

-(id<SCIRange>) getUndefinedRange;
-(id<SCIRange>) getDefaultNonZeroRange;

-(BOOL)trySetOrAnimateVisibleRange:(id<SCIRange>)newRange;
-(BOOL) trySetOrAnimateVisibleRange:(id<SCIRange>)newRange duration:(float)duration;

-(id<SCIAxisPanel>) axisPanel;
@property (nonatomic, copy) SCIAxisStyle * style;

-(SCIAxisHitTestProvider*) hitTestProvider;

-(CGRect)frame;
-(BOOL) isPointWithinBounds:(CGPoint)point;

-(void) free;

@end
