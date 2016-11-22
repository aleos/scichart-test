//
//  SCIRangeChangedCallbackHelper.h
//  SciChart
//
//  Created by Admin on 25/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCICallbackHelper.h"

@protocol SCIRange;

typedef void (^SCIAxisVisibleRangeChanged) (id<SCIRange> newRange, id<SCIRange> oldRange, BOOL isAnimated, id sender);

@interface SCIRangeChangedCallbackHelper : SCICallbackHelper

-(instancetype)initWithCallback:(SCIAxisVisibleRangeChanged)callback;

@property (nonatomic, copy) SCIAxisVisibleRangeChanged callback;

@end

/** @}*/
