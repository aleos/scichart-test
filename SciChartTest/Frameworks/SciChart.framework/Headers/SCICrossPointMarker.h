//
//  CrossPointMarker.h
//  SciChart
//
//  Created by Admin on 26.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPointMarkerBase.h"

@protocol SCIPen2D;

@interface SCICrossPointMarker : SCIPointMarkerBase

@property (nonatomic, strong) id<SCIPen2D> linePen;

@property (nonatomic) BOOL drawRotated;

@end
