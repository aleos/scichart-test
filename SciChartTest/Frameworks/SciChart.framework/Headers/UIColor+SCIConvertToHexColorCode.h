//
//  UIColor+SCIConvertToHexColorCode.h
//  SciChart
//
//  Created by Admin on 09/06/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <UIKit/UIKit.h>

// color code has format AABBGGRR
@interface UIColor (SCIConvertToHexColorCode)

+(UIColor *) fromColorCode:(uint)color;
-(uint) colorCode;

@end
