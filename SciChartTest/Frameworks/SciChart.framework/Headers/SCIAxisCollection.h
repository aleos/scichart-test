//
//  AxisCollection.h
//  SciChart
//
//  Created by Admin on 15.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SCIAxis2D;

@interface SCIAxisCollection : NSObject

-(id)initWithAxisCollection:(NSArray*)axes;

-(id<SCIAxis2D>) getAxisById:(NSString*)axisId;
-(id<SCIAxis2D>) getAxisById:(NSString*)axisId AssertAxisExist:(BOOL)assert;

-(int) count;
-(id<SCIAxis2D>)itemAt:(int)index;
-(void)addItem:(id<SCIAxis2D>)item;
-(void)insertItem:(id<SCIAxis2D>)item At:(int)index;
-(BOOL)contains:(id<SCIAxis2D>)item;
-(void)removeItem:(id<SCIAxis2D>)item;
-(void)removeItemAt:(int)index;
-(void)clear;

-(BOOL)hasPrimaryAxis;
-(id<SCIAxis2D>) primaryAxis;
-(id<SCIAxis2D>) defaultAxis;

@end
