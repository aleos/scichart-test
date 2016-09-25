//
//  IPen2D.h
//  SciChart
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import "SCIOpenGLBrush.h"

@protocol SCIPen2D <NSObject, SCIOpenGLBrush>

-(float) strokeThickness;

@end
