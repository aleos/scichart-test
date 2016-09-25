//
//  EllipsePointMarker.h
//  SciChart
//
//  Created by Admin on 26.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPointMarkerBase.h"

@protocol SCIPen2D;
@protocol SCIBrush2D;

@interface SCIEllipsePointMarker : SCIPointMarkerBase

@property (nonatomic, strong) id<SCIBrush2D> fillBrush;
@property (nonatomic, strong) id<SCIPen2D> borderPen;

@property (nonatomic) int detalization;

@property (nonatomic) BOOL drawBorder;

@end
