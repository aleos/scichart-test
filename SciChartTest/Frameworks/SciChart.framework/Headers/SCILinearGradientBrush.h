//
//  ILinearGradientBrush.h
//  SciChart
//
//  Created by Admin on 10.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

typedef NS_ENUM(NSInteger, SCILinearGradientDirection) {
    SCILinearGradientDirection_Vertical,
    SCILinearGradientDirection_Horizontal
};

@protocol SCILinearGradientBrush <NSObject>

@property (nonatomic) float minCoord;
@property (nonatomic) float maxCoord;

-(SCILinearGradientDirection)direction;

@property (nonatomic) int gradientIndex;

-(void) getGradientData:(uint**)data size:(int*)size;

@end
