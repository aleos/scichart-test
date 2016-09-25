//
//  SCIPathColor.h
//  SciChart
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@class UIColor;

@protocol SCIPathColor <NSObject, NSCopying>

@required
-(UIColor*) color;

-(unsigned int) colorCode;
-(unsigned int) colorCodeAtX:(double)x Y:(double)y;

@end
