//
//  SCIBrushLinearGradient.h
//  SciChart
//
//  Created by Admin on 07.10.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIBrush2D.h"
#import "SCILinearGradientBrush.h"

@protocol SCIRenderPassData;

@interface SCIBrushLinearGradient : NSObject <SCIBrush2D, SCILinearGradientBrush>

-(id) initWithColorStart:(UIColor*)startColor Finish:(UIColor*)finishColor Direction:(SCILinearGradientDirection)gradientDirection;
-(id) initWithColorCodeStart:(uint)startColor Finish:(uint)finishColor Direction:(SCILinearGradientDirection)gradientDirection;

-(instancetype)initWithGradientCoords:(float*)coords Colors:(uint*)colors Count:(int)count
                            Direction:(SCILinearGradientDirection)direction;

@property (nonatomic) BOOL requireRenderPassData;

@property (nonatomic) float minCoord;
@property (nonatomic) float maxCoord;

@property (nonatomic) int gradientIndex;

@end
