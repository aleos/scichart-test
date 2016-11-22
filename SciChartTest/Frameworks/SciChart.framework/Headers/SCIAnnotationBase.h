//
//  AnnotationBase.h
//  SciChart
//
//  Created by Admin on 25.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup Annotations
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIAnnotation.h"
#import "SCIGenericType.h"

@protocol SCIChartSurface;
@protocol SCIAxis2D;
@class SCIAxisCollection;

/**
 * @typedef SCIAnnotationCoordMode
 * @abstract Enumeration constants to define the Coordinate mode used to place an annotation.
 * @discussion Possible values:
 * @discussion - SCIAnnotationCoord_Absolute requires that coordinates X1,Y1,X2,Y2 are data-values
 * @discussion - SCIAnnotationCoord_Relative requires X1,Y1,X2,Y2 are double values between 0.0 and 1.0
 * @discussion - SCIAnnotationCoord_RelativeX requires X1,X2 are double values between 0.0 and 1.0
 * @discussion - SCIAnnotationCoord_RelativeY requires Y1,Y2 are double values between 0.0 and 1.0
 */
typedef NS_ENUM(NSUInteger, SCIAnnotationCoordMode) {
    /** Requires that coordinates X1,Y1,X2,Y2 are data-values */
    SCIAnnotationCoord_Absolute,
    /** Requires X1,Y1,X2,Y2 are double values between 0.0 and 1.0*/
    SCIAnnotationCoord_Relative,
    /** Requires X1,X2 are double values between 0.0 and 1.0*/
    SCIAnnotationCoord_RelativeX,
    /** Requires Y1,Y2 are double values between 0.0 and 1.0*/
    SCIAnnotationCoord_RelativeY
};

/**
 * Provides a base class for annotations to be rendered over the chart
 */
@interface SCIAnnotationBase : NSObject <SCIAnnotation>

/**
 * Gets or sets the name of current annotation
 */
@property (nonatomic, copy) NSString * annotationName;

/**
 * Gets or sets whether the current annotation is editable. When editable, the user may click to select and interact with the annotation
 */
@property (nonatomic) BOOL isEnabled;

/**
 * Gets or sets the ID of the X-Axis which this Annotation is measured against
 */
@property (nonatomic, copy) NSString * xAxisId;

/**
 * Gets or sets the ID of the Y-Axis which this Annotation is measured against
 */
@property (nonatomic, copy) NSString * yAxisId;

/**
 * Gets or sets the parent that this Annotation belongs to
 * @see SCIChartSurface
 */
@property (nonatomic, weak) id<SCIChartSurface> parentSurface;

/**
 * Gets the xAxes instance on the parent
 * @see SCIAxisCollection, SCIChartSurface
 */
-(SCIAxisCollection*) xAxes;

/**
 * Gets the YAxes instance on the parent
 * @see SCIAxisCollection, SCIChartSurface
 */
-(SCIAxisCollection*) yAxes;

/**
 * Gets the primary XAxis instance on the parent
 * @see SCIAxis2D, SCIChartSurface
 */
-(id<SCIAxis2D>) xAxis;

/**
 * Gets the primary YAxis instance on the parent
 * @see SCIAxis2D, SCIChartSurface
 */
-(id<SCIAxis2D>) yAxis;

/**
 * Gets the XAxis instance on the parent by Id
 * @param axisName XAxis Id
 * @see SCIAxisCollection, SCIChartSurface
 */
-(id<SCIAxis2D>) getXAxis:(NSString*)axisName;

/**
 * Gets the YAxis instance on the parent by Id
 * @param axisName YAxis Id
 * @see SCIAxisCollection, SCIChartSurface
 */
-(id<SCIAxis2D>) getYAxis:(NSString*)axisName;


/**
 * Gets or sets the SCIAnnotationCoordMode to use when placing the annotation. E.g. the default Absolute requires that X1,Y1,X2,Y2 are data-values.
 */
@property (nonatomic) SCIAnnotationCoordMode coordMode;

/**
 * Gets whether the current annotation is vertical or not. Returns true when XAxis is vertical
 */
-(BOOL) isVertical;

/**
 * Gets chart frame of the current annotation
 */
-(CGRect)getBindingArea;

/**
 * Gets CGPoint within chart frame of the current annotation
 */
-(CGPoint)pointInBindingArea:(CGPoint)point;

/**
 * Gets CGPoint from data-value
 * @param x X data-value
 * @param y Y data-value
 */
-(CGPoint)getCoordFromDataX:(SCIGenericType)x Y:(SCIGenericType)y;

/**
 * Gets data-value from x coordinate
 * @param x X coordinate
 */
-(SCIGenericType)getDataXFromCoord:(double)x;

/**
 * Gets data-value from y coordinate
 * @param y Y coordinate
 */
-(SCIGenericType)getDataYFromCoord:(double)y;

/**
 * Gets or sets whether the current annotation is attached or not
 */
@property (nonatomic) BOOL isAttached;

@end

/** @}*/
