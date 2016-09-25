//
//  SCIBrushTexture.h
//  SciChart
//
//  Created by Admin on 05.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIBrush2D.h"
#import "SCITexturedBrush.h"

@interface SCIBrushTexture : NSObject <SCIBrush2D, SCITexturedBrush>

-(instancetype)initWithTexture:(SCITextureOpenGL*)texture;

@property (nonatomic, strong, readonly) SCITextureOpenGL* texture;

@property (nonatomic) BOOL requireRenderPassData;

@end
