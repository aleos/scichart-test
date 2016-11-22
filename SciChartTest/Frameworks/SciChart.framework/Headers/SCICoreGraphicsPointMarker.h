//
//  SCICoreGraphicsPointMarker.h
//  SciChart
//
//  Created by Admin on 08.04.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup PointMarkers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIPointMarkerBase.h"
#import <QuartzCore/QuartzCore.h>

typedef void (^SCIPointMarkerCoreGraphicsSetup) (CGContextRef context, CGRect area);

@interface SCICoreGraphicsPointMarker : SCIPointMarkerBase

@property (nonatomic, copy) SCIPointMarkerCoreGraphicsSetup drawingCall;

@end

/** @}*/
