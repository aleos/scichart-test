//
//  SeriesInfo.h
//  SciChart
//
//  Created by Admin on 08.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup SeriesInfo
 *  @{
 */

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "SCIGenericType.h"
#import "SCIDataSeries.h"
#import "SCIHitTestProviderBase.h"

@protocol SCIRenderableSeries;
@protocol SCIPathColor;
@class UIView;
@class SCITooltipDataView;

@interface SCISeriesInfo : NSObject {
@protected
    id<SCIRenderableSeries> _rSeries;
    NSString * _seriesName;
    SCIGenericType _xValue;
    SCIGenericType _yValue;
    SCIDataSeriesType _dataSeriesType;
    BOOL _isHit;
    int _dataSeriesIndex;
    
    id<SCIPathColor> _seriesColor;
}

@property (nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) NSDateFormatter *dateTimeFormatter;

-(instancetype)initWithSeries:(id<SCIRenderableSeries>)series HitTest:(HitTestResult)hitTest;

-(id<SCIRenderableSeries>) renderableSeries;
-(NSString *) seriesName;
-(SCIGenericType) xValue;
-(SCIGenericType) yValue;
-(SCIDataSeriesType) dataSeriesType;
-(BOOL) isHit;
-(int) dataSeriesIndex;

-(unsigned int) seriesColor;
-(unsigned int) seriesColorAtX:(double)x Y:(double)y;

-(SCITooltipDataView *) createDataSeriesView;

- (NSString*)fortmatterdValueFromSeriesInfo:(SCIGenericType)data forDataType:(SCIDataType)dataType;

@end

/** @}*/
