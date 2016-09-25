//
//  SCICallbackHelper.h
//  SciChart
//
//  Created by Admin on 25/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCICallbackHandler;

@protocol SCICallbackHelper

-(void) setParentHandler:(SCICallbackHandler *)parent;
-(void) remove;

@end

@interface SCICallbackHelper : NSObject <SCICallbackHelper>

@end
