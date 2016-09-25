//
//  AnnotationBase.h
//  SciChart
//
//  Created by Admin on 25.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIAnnotation.h"
#import "SCIGenericType.h"

@protocol SCIChartSurface;
@protocol SCIAxis2D;
@class SCIAxisCollection;

typedef NS_ENUM(NSUInteger, SCIAnnotationCoordMode) {
    SCIAnnotationCoord_Absolute,
    SCIAnnotationCoord_Relative,
    SCIAnnotationCoord_RelativeX,
    SCIAnnotationCoord_RelativeY
};

@interface SCIAnnotationBase : NSObject <SCIAnnotation>

@property (nonatomic, copy) NSString * annotationName;

@property (nonatomic) BOOL isEnabled;

@property (nonatomic, copy) NSString * xAxisId;
@property (nonatomic, copy) NSString * yAxisId;

@property (nonatomic, weak) id<SCIChartSurface> parentSurface;

-(SCIAxisCollection*) xAxes;
-(SCIAxisCollection*) yAxes;

-(id<SCIAxis2D>) xAxis;
-(id<SCIAxis2D>) yAxis;

-(id<SCIAxis2D>) getXAxis:(NSString*)axisName;
-(id<SCIAxis2D>) getYAxis:(NSString*)axisName;

@property (nonatomic) SCIAnnotationCoordMode coordMode;

-(BOOL) isVertical;

-(CGRect)getBindingArea;
-(CGPoint)pointInBindingArea:(CGPoint)point;
-(CGPoint)getCoordFromDataX:(SCIGenericType)x Y:(SCIGenericType)y;
-(SCIGenericType)getDataXFromCoord:(double)x;
-(SCIGenericType)getDataYFromCoord:(double)y;

@property (nonatomic) BOOL isAttached;

@end
