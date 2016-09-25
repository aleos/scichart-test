//
//  ArrayController2D.h
//  SciChart
//
//  Created by Admin on 04.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIGenericType.h"

@interface SCIArrayController2D : NSObject

-(id) initWithType:(SCIDataType)type SizeX:(int)xSize Y:(int)ySize;
-(SCIDataType) type;
-(int)xSize;
-(int)ySize;
-(int) dataTypeSize;

-(void *) data;
-(SCIGenericType)genericData;

-(SCIGenericType) valueAtX:(int)x Y:(int)y;
//-(void) getXRangeMin:(double*)outMin max:(double*)outMax;
//-(void) getYRangeMin:(double*)outMin max:(double*)outMax;

-(void) setValue:(SCIGenericType)value AtX:(int)x Y:(int)y;

@end
