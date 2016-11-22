//
//  AxisInteractivityHelper.h
//  SciChart
//
//  Created by Admin on 16.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIEnumerationConstants.h"

@protocol SCIRange;

#pragma mark - SCIAxisInteractivityHelper protocol

@protocol SCIAxisInteractivityHelper <NSObject>

@required
-(id<SCIRange>) zoom:(id<SCIRange>)initialRange From:(double)fromCoord To:(double)toCoord;
-(id<SCIRange>) zoom:(id<SCIRange>)initialRange ByMin:(double)minFraction Max:(double)maxFraction;
-(id<SCIRange>) scrollInMinDirection:(id<SCIRange>)rangeToScroll ForPixels:(double)pixels;
-(id<SCIRange>) scrollInMaxDirection:(id<SCIRange>)rangeToScroll ForPixels:(double)pixels;
-(id<SCIRange>) scroll:(id<SCIRange>)rangeToScroll ForPixels:(double)pixels;
-(id<SCIRange>) clipRange:(id<SCIRange>)rangeToClip ToMaximum:(id<SCIRange>)maximumRange ClipMode:(SCIZoomPanClipMode)clipMode;

@end

@protocol SCICoordinateCalculator;

#pragma mark - SCIAxisInteractivityHelper default implementation

@interface SCIAxisInteractivityHelper : NSObject <SCIAxisInteractivityHelper>

-(id)initWithCoordinateCalculator:(id<SCICoordinateCalculator>)coordCalculator;

@end

/** @}*/
