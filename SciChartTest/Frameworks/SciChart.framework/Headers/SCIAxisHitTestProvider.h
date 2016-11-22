//
//  AxisHitTestProvider.h
//  SciChart
//
//  Created by Admin on 14.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup HitTest
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIAxisInfo.h"
#import "SCIGenericType.h"

@protocol SCIAxis2D;

@interface SCIAxisHitTestProvider : NSObject

-(SCIAxisInfo *)hitTestAxis:(id<SCIAxis2D>)axis AtX:(double)x Y:(double)y;
-(SCIAxisInfo *)hitTestAxis:(id<SCIAxis2D>)axis AtValue:(SCIGenericType)dataValue;

@end

/** @}*/
