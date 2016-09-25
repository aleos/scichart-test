//
//  SCIMultiSurfaceModifier.h
//  SciChart
//
//  Created by Admin on 08/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIChartModifier.h"

@interface SCIMultiSurfaceModifier : NSObject <SCIChartModifier>

@property (nonatomic, copy) NSString *modifierName;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL autoPassAreaCheck;

-(instancetype)initWithModifierType:(Class<SCIChartModifier>)modifier;
-(id<SCIChartModifier>)modifierForSurface:(id<SCIChartSurface>)surface;

-(void)disconnectSurface:(id<SCIChartSurface>)surface;
-(void)disconnectSurfaces;

@end
