//
//  SCIDrawable.h
//  SciChart
//
//  Created by Admin on 14.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@protocol SCIRenderContext2D;
@protocol SCIRenderPassData;

@protocol SCIDrawable <NSObject>

@required
-(void) onDrawWithContext:(id<SCIRenderContext2D>)renderContext WithData:(id<SCIRenderPassData>)renderPassData;
-(void) prepareForDrawing;

@end
