//
//  SCIAxisAreaSizeSyncronization.h
//  SciChart
//
//  Created by Admin on 18/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, SCIAxisSizeSyncMode) {
    SCIAxisSizeSync_Left = 1 << 0,
    SCIAxisSizeSync_Right = 1 << 1,
    SCIAxisSizeSync_Top = 1 << 2,
    SCIAxisSizeSync_Bottom = 1 << 3
};

@protocol SCIChartSurface;

@interface SCIAxisAreaSizeSyncronization : NSObject

-(void) attachSurface:(id<SCIChartSurface>)surface;
-(void) detachSurface:(id<SCIChartSurface>)surface;

@property (nonatomic) SCIAxisSizeSyncMode syncMode;

@end

/** @}*/
