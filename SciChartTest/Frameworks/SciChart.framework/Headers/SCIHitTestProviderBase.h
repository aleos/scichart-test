//
//  HitTestBase.h
//  SciChart
//
//  Created by Admin on 03.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "SCIHitTestProvider.h"

@interface SCIHitTestProviderBase : NSObject <SCIHitTestProvider>

-(int) getClosestPointToCoordX:(double)x Y:(double)y From:(id<SCIRenderPassData>)data;
-(CGPoint) getClosestPointOnSegmentToCoordX:(double)x Y:(double)y From:(id<SCIRenderPassData>)data;

@property (nonatomic) SCIHitTestMode hitTestMode;

@end
