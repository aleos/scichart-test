//
//  SCIPointMarker.h
//  SciChart
//
//  Created by Admin on 26.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup PointMarkers
 *  @{
 */

#import <Foundation/Foundation.h>

@protocol SCIRenderContext2D;
@class UIColor;

@protocol SCIPointMarker <NSObject, NSCopying>

@property (nonatomic) float width;
@property (nonatomic) float height;

-(void) drawToContext:(__unsafe_unretained id<SCIRenderContext2D>)context AtX:(float)x Y:(float)y;

-(UIColor*) pointMarkerColor;
-(void) setPointMarkerColor:(UIColor*)color;

@end

/** @}*/
