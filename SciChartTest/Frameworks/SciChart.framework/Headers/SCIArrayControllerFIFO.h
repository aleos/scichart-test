//
//  SCIArrayControllerFIFO.h
//  SciChart
//
//  Created by Admin on 07.03.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIArrayController.h"

@interface SCIArrayControllerFIFO : SCIArrayController

-(NSInteger) headIndex;
-(void) normalizeIndices;

@end
