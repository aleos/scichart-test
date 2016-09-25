//
//  BrushProtocol.h
//  SciChart
//
//  Created by Admin on 11.06.15.
//
//

#import "SCIPathColor.h"

@protocol SCIRenderPassData;
@class SCIShaderAttributes;

@protocol SCIOpenGLBrush <NSObject, SCIPathColor>

@required
-(BOOL) hasAlpha;

-(void) apply:(SCIShaderAttributes*)attributes;
-(NSUInteger) shaderType;
-(bool) equalsToBrush:(__unsafe_unretained id <SCIOpenGLBrush>)otherBrush;

-(void) getColorCode:(uint*)color TextureX:(ushort *)tx Y:(ushort *)ty AtX:(double)x Y:(double)y;
-(BOOL) variativeColor;

@property (nonatomic) BOOL requireRenderPassData;
-(void) setRenderPassData:(id<SCIRenderPassData>)data;
-(void) setDrawingAreaX:(double)x Y:(double)y Width:(double)width Height:(double)height;

@end
