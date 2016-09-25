//
//  AxisBase.h
//  SciChart
//
//  Created by Admin on 10.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAxisCore.h"
#import "SCIAxis2D.h"

@class SCIAxisParams;
@protocol SCIRenderSurface;
@class SCIArrayController;

@interface SCIAxisBase : SCIAxisCore <SCIAxis2D> {
    @protected
    id<SCICoordinateCalculator> _currentCoordinateCalculator;
    id<SCIAxisInteractivityHelper> _currentInteractivityHelper;
    SCIArrayController * _supportedTypes;
}

@property (nonatomic, copy) NSString * axisId;

@property (nonatomic) SCIAxisAlignmentMode axisAlignment;
@property (nonatomic, copy) SCIActionBlock onAxisAlignmentChanged;

@property (nonatomic) BOOL isCenterAxis;
@property (nonatomic) BOOL isPrimaryAxis;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) SCIRangeClipMode visibleRangeLimitMode;
@property (nonatomic) BOOL isLabelCullingEnabled;

@property (nonatomic, strong) id<SCIRange> visibleRangeLimit;

+(NSString *) defaultAxisId;
-(int) minDistanceToBounds;
-(double) zeroRangeGrowBy;

-(id<SCIRenderSurface>) renderSurface;

-(id<SCIRange>) coerceZeroRange:(id<SCIRange>)maximumRange;
-(SCIArrayController*) getSupportedTypes;
-(SCIAxisParams*) getAxisParams;

-(void) onDrawWithContext:(id<SCIRenderContext2D>)renderContext WithData:(id<SCIRenderPassData>)renderPassData;

@property (nonatomic) BOOL isLicenseValid;
-(void) drawGridLinesWithContext:(id<SCIRenderContext2D>)renderContext WithCoordinates:(SCITickCoordinates*)tickCoords;
-(void) onDrawAxis:(SCITickCoordinates*)tickCoords;
-(id<SCIAxisPanel>) axisPanel;
-(double) getOffsetForLabels;

-(SCIGenericType) convertTickToDataValue:(SCIGenericType)value;

@property (nonatomic, copy) SCIAxisStyle * style;


-(void) drawAxisAreaWithContext:(id<SCIRenderContext2D>)renderContext;
-(BOOL) prepareToDrawGridLines:(id<SCIRenderContext2D>)renderContext;
-(void) drawBandsWithContext:(id<SCIRenderContext2D>)renderContext;
-(void) drawMinorGridLinesWithContext:(id<SCIRenderContext2D>)renderContext;
-(void) drawMajorGridLinesWithContext:(id<SCIRenderContext2D>)renderContext;

@end
