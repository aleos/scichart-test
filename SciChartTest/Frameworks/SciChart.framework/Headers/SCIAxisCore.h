//
//  AxisCore.h
//  SciChart
//
//  Created by Admin on 10.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Axis
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIInvalidatableElement.h"
#import "SCIGenericType.h"
#import "SCIRangeChangedCallbackHelper.h"

@protocol SCIRange;
@protocol SCICoordinateCalculator;
@protocol SCITickProvider;
@protocol SCIChartSurface;
@class UIView;

typedef NS_ENUM(NSInteger, SCIAutoRangeMode) {
    SCIAutoRange_Once,
    SCIAutoRange_Always,
    SCIAutoRange_Never
};

#pragma mark - SCIAxisCore protocol

@protocol SCIAxisCore <NSObject, SCIInvalidatableElement>

@property (nonatomic, strong) id<SCIRange> visibleRange;
@property (nonatomic, strong) id<SCIRange> growBy;
@property (nonatomic) SCIGenericType minorDelta;
@property (nonatomic) SCIGenericType majorDelta;

-(id<SCIRange>) getMaximumRange;

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;

@property (nonatomic, copy) NSString * axisTitle;
@property (nonatomic) BOOL flipCoordinates;

@property (nonatomic, copy) NSString * textFormatting;
@property (nonatomic) SCIGenericType minimalZoomConstrain;
@property (nonatomic) SCIGenericType maximalZoomConstrain;
@property (nonatomic) NSInteger minorsPerMajor;
@property (nonatomic) NSInteger maxAutoTicks;
@property (nonatomic) BOOL autoTicks;
@property (nonatomic, strong) id<SCITickProvider> tickProvider;

@property (nonatomic) SCIAutoRangeMode autoRange;

@property (nonatomic, copy) NSString * cursorTextFormatting;

-(BOOL) isLogarithmicAxis;
-(BOOL) hasValidVisibleRange;
-(BOOL) hasDefaultVisibleRange;
@property (nonatomic) BOOL isXAxis;

-(void) animateVisibleRangeTo:(id<SCIRange>)to AnimationTime:(float)duration;
@property (nonatomic) BOOL animateVisibleRangeChanges;
@property (nonatomic) double animatedChangeDuration;
-(BOOL)trySetOrAnimateVisibleRange:(id<SCIRange>)newRange;
-(BOOL) isValidRange:(id<SCIRange>)range;
-(void) validateAxis;

-(id<SCICoordinateCalculator>) getCurrentCoordinateCalculator;

-(double) getAxisSize;
-(double) getCoordinate:(SCIGenericType)value;
-(SCIGenericType) getDataValue:(double)pixelCoordinate;
-(double) getAxisOffset;

-(void) free;

-(id<SCICallbackHelper>) registerVisibleRangeChangedCallback:(SCIAxisVisibleRangeChanged)callback;
- (void)setTitleCustomView:(UIView*)view;
- (UIView*)titleCustomView;

@end

#pragma mark - SCIAxisCore default implementation

@class SCITickCoordinates;
@protocol SCIDeltaCalculator;
@protocol SCITickCoordinatesProvider;
@protocol SCILabelProvider;

@interface SCIAxisCore : NSObject <SCIAxisCore> {
    @protected
    __weak id<SCIChartSurface> _parentSurface;
}

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;
@property (nonatomic, strong) id<SCIRange> visibleRange;
@property (nonatomic, strong) id<SCIRange> growBy; // <double>
@property (nonatomic, copy) NSString * axisTitle;
@property (nonatomic) BOOL flipCoordinates;
@property (nonatomic, copy) NSString * textFormatting;
@property (nonatomic) SCIGenericType minimalZoomConstrain;
@property (nonatomic) SCIGenericType maximalZoomConstrain;
@property (nonatomic) NSInteger minorsPerMajor; // minor ticks count between major ticks
@property (nonatomic) NSInteger maxAutoTicks; // max amount of major ticks
@property (nonatomic) BOOL autoTicks; // if disabled minorDelta and majorDelta are not calculated and have to be set manually
@property (nonatomic) SCIGenericType minorDelta;
@property (nonatomic) SCIGenericType majorDelta;
@property (nonatomic, strong) id<SCITickProvider> tickProvider;
@property (nonatomic) SCIAutoRangeMode autoRange;
@property (nonatomic, copy) NSString * cursorTextFormatting;
@property (nonatomic) BOOL isXAxis;
@property (nonatomic, strong) id<SCITickCoordinatesProvider> tickCoordinatesProvider;
@property (nonatomic) BOOL isStaticAxis;
@property (nonatomic, strong) id<SCILabelProvider> labelProvider;
@property (nonatomic) BOOL animateVisibleRangeChanges;
@property (nonatomic) double animatedChangeDuration;

- (BOOL)isCategoryAxis;
- (id<SCIRange>)getUndefinedRange;
- (id<SCIRange>)getDefaultNonZeroRange;
- (BOOL)isRangeOfValidType:(id<SCIRange>)range;
- (void)coerceVisibleRange;
- (BOOL)isVisibleRangeValid;
- (SCITickCoordinates *)CalculateTicks;
- (void)calculateDelta;
- (id<SCIDeltaCalculator>)getDeltaCalculator;
- (uint)getMaxAutoTicks;
- (void)assertRangeType:(id<SCIRange>)range;
- (void)setTitleCustomView:(UIView*)view;
- (UIView*)titleCustomView;

@end

/** @}*/
