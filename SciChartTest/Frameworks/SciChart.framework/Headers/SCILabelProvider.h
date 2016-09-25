//
//  SCILabelProvider.h
//  SciChart
//
//  Created by Admin on 13.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import "SCIGenericType.h"
@protocol SCIAxisCore;
@protocol SCITickLabel;
@class SCITextFormattingStyle;
@class SCIDefaultTickLabel;

@protocol SCILabelProvider <NSObject>

@required
-(void) setAxis:(id<SCIAxisCore>)parentAxis;
-(void) onBeginAxisDraw;
-(id<SCITickLabel>) updateDataContextWithContext:(SCIDefaultTickLabel*)label
                                                   Data:(SCIGenericType)dataValue Style:(SCITextFormattingStyle*)style;
-(NSString *) formatLabel:(SCIGenericType)dataValue;
-(NSString *) formatCursorLabel:(SCIGenericType)dataValue;

@end
