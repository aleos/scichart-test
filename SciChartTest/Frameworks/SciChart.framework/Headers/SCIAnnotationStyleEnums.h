//
//  SCIAnnotationStyleEnums.h
//  SciChart
//
//  Created by Admin on 12.01.16.
//  Copyright © 2016 SciChart Ltd. All rights reserved.
//

/** \addtogroup Themes
 *  @{
 */

/*!
 * @typedef SCIAnnotationLayerMode
 * @abstract Enum of annotation placement modes.
 * @discussion Possible values:
 * @discussion - SCIAnnotationLayer_Overlay annotation will be on top of charts
 * @discussion - SCIAnnotationLayer_Underlay annotation will be below charts
 */
typedef NS_ENUM(NSUInteger, SCIAnnotationLayerMode) {
    /*! annotation will be on top of charts */
    SCIAnnotationLayer_Overlay,
    /*! annotation will be below charts */
    SCIAnnotationLayer_Underlay
};

/** @}*/
