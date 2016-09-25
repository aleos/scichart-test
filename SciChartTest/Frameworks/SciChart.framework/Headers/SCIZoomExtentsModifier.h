//
//  SCIZoomExtentsModifier.h
//  SciChart
//
//  Created by Admin on 12.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIChartModifierBase.h"
#import "SCIEnumerationConstants.h"

@interface SCIZoomExtentsModifier : SCIChartModifierBase

@property (nonatomic) BOOL isAnimated;

@property (nonatomic) SCIXYDirection xyDirection;

@end
