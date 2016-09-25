//
//  SCIDeltaCalculator.h
//  SciChart
//
//  Created by Admin on 13.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@protocol SCIAxisDelta;
#import "SCIGenericType.h"

@protocol SCIDeltaCalculator <NSObject>

@required
-(id<SCIAxisDelta>) getDeltaFromRangeMin:(SCIGenericType)min Max:(SCIGenericType)max MinorsPerMajor:(int)minorsPerMajor MaxTicks:(uint)maxTicks;

@end
