//
//  SCIBrushSolid.h
//  SciChart
//
//  Created by Admin on 09.06.15.
//
//

#import <Foundation/Foundation.h>
#import "SCIBrush2D.h"

@interface SCIBrushSolid : NSObject <SCIBrush2D>

-(id) initWithColor:(UIColor*)color;
-(id) initWithColorCode:(unsigned int)color;

@property (nonatomic) BOOL requireRenderPassData;

@end
