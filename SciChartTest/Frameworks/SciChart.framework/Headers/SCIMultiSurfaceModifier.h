//
//  SCIMultiSurfaceModifier.h
//  SciChart
//
//  Created by Admin on 08/07/16.
//  Copyright © 2016 SciChart. All rights reserved.
//

/** \addtogroup ChartModifiers
 *  @{
 */

#import <Foundation/Foundation.h>
#import "SCIChartModifier.h"
#import "SCIGestureEventsHandler.h"

@interface SCIMultiSurfaceModifier : NSObject <SCIChartModifier, SCIGestureEventsHandler>

@property (nonatomic, copy) NSString *modifierName;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL autoPassAreaCheck;

-(instancetype)initWithModifierType:(Class<SCIChartModifier, SCIGestureEventsHandler>)modifier;
-(id<SCIChartModifier, SCIGestureEventsHandler>)modifierForSurface:(id<SCIChartSurface>)surface;

-(void)disconnectSurface:(id<SCIChartSurface>)surface;
-(void)disconnectSurfaces;

@end

/** @}*/
