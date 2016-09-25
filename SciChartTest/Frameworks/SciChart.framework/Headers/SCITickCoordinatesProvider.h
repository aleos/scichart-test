//
//  ITickCoordinateProvider.h
//  SciChart
//
//  Created by Admin on 13.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

@protocol SCIAxisCore;
@class SCITickCoordinates;

@protocol SCITickCoordinatesProvider <NSObject>

@required
@property (nonatomic, weak) id<SCIAxisCore> parentAxis;
-(void) setAxis:(id<SCIAxisCore>)parentAxis;
-(SCITickCoordinates*) getTickCoordinatesWithMinorTicks:(double*)minorTicks Count:(int)minorCount
                                          MajorTicks:(double*)majorTicks Count:(int)majorCount;

@end
