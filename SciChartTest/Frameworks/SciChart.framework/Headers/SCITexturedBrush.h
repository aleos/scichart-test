//
//  SCITexturedBrush.h
//  SciChart
//
//  Created by Admin on 05.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

@class SCITextureOpenGL;

@protocol SCITexturedBrush <NSObject>

@property (nonatomic, strong, readonly) SCITextureOpenGL* texture;

@end
