//
//  SCIPenSolid.h
//  SciChart
//
//  Created by Admin on 17.06.15.
//
//

#import <Foundation/Foundation.h>
#import "SCIPen2D.h"

@interface SCIPenSolid : NSObject <SCIPen2D>

-(id) initWithColor:(UIColor *)color Width:(float)width;
-(id) initWithColorCode:(unsigned int)color Width:(float)width;

@property (nonatomic) BOOL requireRenderPassData;

@end
