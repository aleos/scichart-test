//
//  TimeSpanDelta.h
//  SciChart
//
//  Created by Admin on 01.10.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAxisDelta.h"

@interface SCITimeSpanDelta : NSObject <SCIAxisDelta>

@property (nonatomic) SCIGenericType majorDelta;
@property (nonatomic) SCIGenericType minorDelta;

-(id) initWithMin:(NSTimeInterval)min Max:(NSTimeInterval)max;

-(SCITimeSpanDelta *) clone;

-(BOOL) equals:(id)object;

@end
