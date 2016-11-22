//
//  SCIAxisRangeSyncronization.h
//  SciChart
//
//  Created by Admin on 15/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>

@protocol SCIAxis2D;

@interface SCIAxisRangeSyncronization : NSObject

-(void) attachAxis:(id<SCIAxis2D>)axis;
-(void) detachAxis:(id<SCIAxis2D>)axis;

@end

/** @}*/
