//
//  SCIDataDistributionCalculator.h
//  SciChart
//
//  Created by Admin on 08.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol ISeriesColumn;

@protocol SCIDataDistributionCalculator <NSObject>

@required
-(BOOL) dataIsSortedAscending;
-(BOOL) dataIsEvenlySpaced;

-(void) onAppendXColumn:(id<ISeriesColumn>)xValues WithValue:(NSNumber*)newValue acceptUnsorted:(BOOL)acceptUnsorted;
-(void) onAppendXColumn:(id<ISeriesColumn>)xValues WithValues:(NSNumber*)newValue Count:(int)count acceptUnsorted:(BOOL)acceptUnsorted;

-(void) onInsertToXColumn:(id<ISeriesColumn>)xValues AtIndex:(int)index Value:(NSNumber*)newValue acceptUnsorted:(BOOL)acceptUnsorted;
-(void) onInsertToXColumn:(id<ISeriesColumn>)xValues AtIndex:(int)index Values:(NSNumber*)newValue Count:(int)count acceptUnsorted:(BOOL)acceptUnsorted;

-(void) updateDataDistributionFlagsWhenRemovedXValues;

-(void) clear;

@end
