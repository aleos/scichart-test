//
//  SCITextureOpenGL.h
//  SciChart
//
//  Created by Admin on 05.02.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OpenGLES/ES2/gl.h>

@class UIImage;

@interface SCITextureOpenGL : NSObject

-(instancetype)initWithId:(GLuint)textureId;
-(instancetype)initWithByteData:(GLubyte*)data Width:(int)width Height:(int)height;
-(void)updateWithByteData:(GLubyte*)data Width:(int)width Height:(int)height;
-(instancetype)initWithImage:(UIImage*)image;
-(instancetype)initWithFloatData:(GLfloat*)data Width:(int)width Height:(int)height;
-(instancetype)initWithGradientCoords:(float*)coords Colors:(uint*)colors Count:(int)count;
-(instancetype)initWithGradientCoords:(float*)coords Colors:(uint*)colors Count:(int)count Detalization:(int)detalization;
-(GLuint)textureId;
-(BOOL) isValid;

@end
