//
//  SCINumericTickProvider.h
//  SciChart
//
//  Created by Admin on 20.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import  "SCITickProvider.h"

@protocol SCIRange;
@protocol SCIAxisDelta;

@interface SCINumericTickProvider : NSObject <SCITickProvider>

@property (nonatomic, weak) id <SCIAxisCore> axis;
-(SCIArrayController*) calculateMajorTicksWithRange:(id<SCIRange>)tickRange Delta:(id<SCIAxisDelta>)tickDelta;
-(SCIArrayController*) calculateMinorTicksWithRange:(id<SCIRange>)tickRange Delta:(id<SCIAxisDelta>)tickDelta;

@end
