//
//  SciChartSurface.h
//  SciChart
//
//  Created by Admin on 23.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIInvalidatableElement.h"
#import "SCIRenderSurfaceCallbackDelegate.h"
#import <QuartzCore/QuartzCore.h>

@protocol SCIAxis2D;
@class SCIAxisCollection;
@protocol SCIDataSeries;
@protocol SCIViewportManager;
@protocol SCIChartModifier;
@protocol SCIAnnotation;
@class UIView;
@protocol SCIRenderableSeries;
@protocol SCIRenderSurface;
@class SCIRenderSurfaceStyle;
@protocol SCIRenderContext2D;

#pragma mark - SCIChartSurface protocol

@protocol SCIChartSurface <NSObject, SCIInvalidatableElement>

@property (nonatomic, strong) id<SCIChartModifier> chartModifier;
@property (nonatomic, strong) id<SCIAnnotation> annotation;

@property (nonatomic, strong) SCIAxisCollection * xAxes;
@property (nonatomic, strong) SCIAxisCollection * yAxes;

-(NSArray*) renderableSeries;
-(NSArray*) selectedRenderableSeries;

@property (nonatomic, strong) id<SCIViewportManager> viewportManager;
-(void) clearSeries;
-(CGRect) chartFrame;

-(void) detachRenderableSeries:(id<SCIRenderableSeries>)rSeries;
-(void) attachRenderableSeries:(id<SCIRenderableSeries>)rSeries;

-(void) attachAxis:(id<SCIAxis2D>)axis IsXAxis:(BOOL)isXAxis;
-(void) detachAxis:(id<SCIAxis2D>)axis;

-(UIView*) view;
-(UIView*) axesCanvas;
-(UIView*) modifierCanvas;

-(void) free;

@property (nonatomic, copy) NSString * chartTitle;
@property (nonatomic, weak) id<SCIRenderSurface> renderSurface;

-(void)drawBackground:(id<SCIRenderContext2D>)context;
@property (nonatomic, copy) SCIRenderSurfaceStyle * style;

+(void) setLicenseContract:(NSString *)licenseContract;

@end

@protocol SCIRenderableSeries;
@class SCIChartSurfaceViewBase;

#pragma mark - SCIChartSurface default implementation

@interface SCIChartSurface : NSObject <SCIChartSurface, SCIRenderSurfaceCallbackDelegate>

-(id) initWithView:(SCIChartSurfaceViewBase*)view;

@property (nonatomic, strong) id<SCIAxis2D> xAxis;
@property (nonatomic, strong) id<SCIAxis2D> yAxis;

@property (nonatomic, strong) SCIAxisCollection * xAxes;
@property (nonatomic, strong) SCIAxisCollection * yAxes;

@property (nonatomic, strong) id<SCIChartModifier> chartModifier;
@property (nonatomic, strong) id<SCIAnnotation> annotation;

@property (nonatomic) BOOL clipUnderlayAnnotations;
@property (nonatomic) BOOL clipOverlayAnnotations;

@property (nonatomic, weak) SCIChartSurfaceViewBase * view;

@property (nonatomic, strong) NSMutableArray * renderableSeries;
@property (nonatomic, strong) NSMutableArray * selectedRenderableSeries;

@property (nonatomic, strong) id<SCIViewportManager> viewportManager;

@property (nonatomic) BOOL isPolarChart;

-(void) detachRenderableSeries:(id<SCIRenderableSeries>)rSeries;
-(void) attachRenderableSeries:(id<SCIRenderableSeries>)rSeries;

-(void) attachAxis:(id<SCIAxis2D>)axis IsXAxis:(BOOL)isXAxis;
-(void) detachAxis:(id<SCIAxis2D>)axis;

@property (nonatomic, copy) NSString * chartTitle;
@property (nonatomic, weak) id<SCIRenderSurface> renderSurface;

@property (nonatomic, copy) SCIRenderSurfaceStyle * style;

+(void) setLicenseContract:(NSString *)licenseContract;

@end
