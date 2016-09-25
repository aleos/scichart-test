//
//  SCIOpenGLRenderSurface.h
//  SciChart
//
//  Created by Admin on 18.06.15.
//

#import "SCIRenderSurfaceBase.h"

@interface SCIOpenGLRenderSurface : SCIRenderSurfaceBase 

@property (nonatomic) CGRect projectionFrame;
@property (nonatomic) UIColor *backgroundColor;

-(void)free;

-(NSString *) displayLinkRunLoopMode;
@property (nonatomic) int drawingBufferSize;

@end
