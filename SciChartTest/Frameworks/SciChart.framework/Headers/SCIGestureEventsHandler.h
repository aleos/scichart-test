//
//  SCIGestureEventsHandler.h
//  SciChart
//
//  Created by Admin on 04.08.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCIGestureEventsHandler <NSObject>

@required

@property (nonatomic) BOOL isEnabled;

-(BOOL) pointWithinBounds:(CGPoint)point;

-(BOOL) onTapGesture:(UITapGestureRecognizer*)gesture At:(UIView*)view;
-(BOOL) onPanGesture:(UIPanGestureRecognizer*)gesture At:(UIView*)view;
-(BOOL) onPinchGesture:(UIPinchGestureRecognizer*)gesture At:(UIView*)view;
-(BOOL) onDoubleTapGesture:(UITapGestureRecognizer*)gesture At:(UIView*)view;

@end
