//
//  SCIAnnotationStyleEnums.h
//  SciChart
//
//  Created by Admin on 12.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/*!
 * @typedef SCIAnnotationLayerMode
 * @abstract Enum of annotation placement modes.
 * @discussion Possible values:
 * @discussion - SCIAnnotationLayer_Overlay annotation will be on top of charts
 * @discussion - SCIAnnotationLayer_Underlay annotation will be below charts
 */
typedef NS_ENUM(NSUInteger, SCIAnnotationLayerMode) {
    SCIAnnotationLayer_Overlay,
    SCIAnnotationLayer_Underlay
};

