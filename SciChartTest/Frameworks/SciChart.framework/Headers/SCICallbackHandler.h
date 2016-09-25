//
//  SCICallbackHandler.h
//  SciChart
//
//  Created by Admin on 25/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SCICallbackHelper;

@protocol SCICallbackHandler

-(void) addCallback:(id<SCICallbackHelper>)callback;
-(void) removeCallback:(id<SCICallbackHelper>)callback;

@property (nonatomic, strong) NSMutableArray * callbacks;

@end

@interface SCICallbackHandler : NSObject <SCICallbackHandler>

@property (nonatomic, strong) NSMutableArray * callbacks;

@end
