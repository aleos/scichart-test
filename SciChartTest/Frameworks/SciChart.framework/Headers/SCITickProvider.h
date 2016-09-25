//
//  SCITickProvider.h
//  SciChart
//
//  Created by Admin on 13.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@protocol SCIAxisCore;
@class SCIArrayController;

@protocol SCITickProvider <NSObject>

@required
@property (nonatomic, weak) id<SCIAxisCore> axis;
-(SCIArrayController*) getMajorTicksFromAxis:(id<SCIAxisCore>)axis;
-(SCIArrayController*) getMinorTicksFromAxis:(id<SCIAxisCore>)axis;

@end
