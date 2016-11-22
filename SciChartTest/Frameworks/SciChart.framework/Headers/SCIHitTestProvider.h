//
//  HitTestProvider.h
//  SciChart
//
//  Created by Admin on 08.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup HitTest
 *  @{
 */

#import "SCIGenericType.h"

@protocol SCIRenderPassData;

@protocol SCIHitTestProvider <NSObject>

typedef NS_ENUM(NSUInteger, SCIHitTestMode) {
    SCIHitTest_Default,
    SCIHitTest_Point,
    SCIHitTest_Vertical,
    SCIHitTest_Interpolate,
    SCIHitTest_VerticalInterpolate,
};

typedef struct {
    BOOL match;
    int index;
    double x;
    double y;
    SCIGenericType xValue;
    SCIGenericType yValue;
    SCIGenericType xValueInterpolated;
    SCIGenericType yValueInterpolated;
    SCIGenericType y2Value;
    SCIGenericType y2ValueInterpolated;
    SCIGenericType zValue;
    SCIGenericType zValueInterpolated;
    SCIGenericType openValue;
    SCIGenericType highValue;
    SCIGenericType lowValue;
    SCIGenericType closeValue;
    double radius;
} HitTestResult;

@property (nonatomic) SCIHitTestMode hitTestMode;

-(HitTestResult) hitTestAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

-(HitTestResult) hitTestVerticalAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

-(HitTestResult) hitTestAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data Mode:(SCIHitTestMode)mode;

-(HitTestResult) hitTestPointModeAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

-(HitTestResult) hitTestInterpolateModeAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

-(HitTestResult) hitTestVerticalModeAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

-(HitTestResult) hitTestVerticalInterpolateModeAtX:(double)x Y:(double)y Radius:(double)radius onData:(id<SCIRenderPassData>)data;

@end

/** @}*/
