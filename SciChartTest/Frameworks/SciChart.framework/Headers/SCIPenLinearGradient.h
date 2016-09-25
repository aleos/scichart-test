//
//  SCIPenLinearGradient.h
//  SciChart
//
//  Created by Admin on 23.10.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPen2D.h"
#import "SCILinearGradientBrush.h"

@protocol SCIRenderPassData;

@interface SCIPenLinearGradient : NSObject <SCIPen2D, SCILinearGradientBrush>

@property (nonatomic) BOOL requireRenderPassData;

-(id) initWithColorStart:(UIColor *)colorStart Finish:(UIColor *)colorFinish Direction:(SCILinearGradientDirection)direction Width:(float)width;
-(id) initWithColorCodeStart:(unsigned int)colorStart Finish:(unsigned int)colorFinish Direction:(SCILinearGradientDirection)direction Width:(float)width;

-(instancetype)initWithGradientCoords:(float*)coords Colors:(uint*)colors Count:(int)count
                            Direction:(SCILinearGradientDirection)direction Width:(float)width;

-(void) setDrawingAreaX:(double)X Y:(double)y Width:(double)width Height:(double)height;

@property (nonatomic) float minCoord;
@property (nonatomic) float maxCoord;

@property (nonatomic) int gradientIndex;

@end
