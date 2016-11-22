//
//  PointMarkerBase.h
//  SciChart
//
//  Created by Admin on 26.11.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

/** \addtogroup PointMarkers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIPointMarker.h"

@interface SCIPointMarkerBase : NSObject <SCIPointMarker> {
@protected
    float _width;
    float _height;
}

@property (nonatomic) float width;
@property (nonatomic) float height;

@end

/** @}*/
