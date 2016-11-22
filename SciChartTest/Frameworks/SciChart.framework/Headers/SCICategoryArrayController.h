//
//  SCICategoryArrayController.h
//  SciChart
//
//  Created by Hrybenuik Mykola on 7/8/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

#import <SciChart/SciChart.h>

@interface SCICategoryArrayController : SCIArrayController

/**
 * Get value at index of category.
 */
- (SCIGenericType)getCategoryValueAtIndex:(NSInteger)index;

@end
