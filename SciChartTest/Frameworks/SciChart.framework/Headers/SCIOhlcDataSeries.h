//
//  OhlcDataSeries.h
//  SciChart
//
//  Created by Admin on 23.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIDataSeries.h"

#pragma mark - SCIOhlcDataSeries protocol

@protocol SCIOhlcDataSeries <SCIDataSeries>

-(SCIArrayController*) openValues;
-(SCIArrayController*) highValues;
-(SCIArrayController*) lowValues;
-(SCIArrayController*) closeValues;

-(void) appendX:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;
-(void) appendRangeX:(NSArray*)x Open:(NSArray*)open High:(NSArray*)high Low:(NSArray*)low Close:(NSArray*)close;
-(void) appendRangeX:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close Count:(NSInteger)count;

-(void) updateAt:(int)index Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;

-(void) insertAt:(int)index X:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close;
-(void) insertRangeAt:(int)index X:(SCIGenericType)x Open:(SCIGenericType)open High:(SCIGenericType)high Low:(SCIGenericType)low Close:(SCIGenericType)close Count:(int)count;

@end

#pragma mark - SCIOhlcDataSeries default implementation

@interface SCIOhlcDataSeries : SCIDataSeries <SCIOhlcDataSeries> {
@protected
    SCIArrayController * _openColumn;
    SCIArrayController * _highColumn;
    SCIArrayController * _lowColumn;
    SCIArrayController * _closeColumn;
}

@property (nonatomic, strong) SCIArrayController * openColumn;
@property (nonatomic, strong) SCIArrayController * highColumn;
@property (nonatomic, strong) SCIArrayController * lowColumn;
@property (nonatomic, strong) SCIArrayController * closeColumn;

@end
