//
//  AxisArea.h
//  SciChart
//
//  Created by Admin on 24.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SCICallbackBlock.h"

typedef NS_ENUM(NSInteger, SCIStackPanelOrientation) {
    SCIStackPanelOrientation_Vertical,
    SCIStackPanelOrientation_Horizontal
};

@protocol SCIAxis2D;

@interface SCIAxisArea : UIView

@property (nonatomic) SCIStackPanelOrientation orientation;

-(int) count;
-(id<SCIAxis2D>)itemAt:(int)index;
-(void)addItem:(id<SCIAxis2D>)item;
-(void)insertItem:(id<SCIAxis2D>)item At:(int)index;
-(BOOL)contains:(id<SCIAxis2D>)item;
-(void)removeItem:(id<SCIAxis2D>)item;
-(void)removeItemAt:(int)index;
-(void) removeAll;
-(void)clear;

-(void)layout;

-(float)recommendedSize;
@property (nonatomic, copy) SCIActionBlock resizeRequest;
-(BOOL) hasEnoughSpace;
-(BOOL)needResizing;

@property (nonatomic) float forcedSize;

@end

/** @}*/
