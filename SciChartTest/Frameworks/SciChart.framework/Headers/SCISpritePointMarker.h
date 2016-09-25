//
//  SCISpritePointMarker.h
//  SciChart
//
//  Created by Admin on 28.03.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIPointMarkerBase.h"

@protocol SCITexturedBrush;

@interface SCISpritePointMarker : SCIPointMarkerBase

@property (nonatomic, strong) id<SCITexturedBrush> brush;

@end
