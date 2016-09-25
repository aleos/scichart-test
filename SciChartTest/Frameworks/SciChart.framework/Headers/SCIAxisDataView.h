//
//  AxisDataView.h
//  SciChart
//
//  Created by Admin on 14.12.15.
//  Copyright © 2015 SciChart Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCITooltipDataView.h"

@class SCIAxisInfo;

@interface SCIAxisDataView : SCITooltipDataView

@property (weak, nonatomic) IBOutlet UILabel *dataLabel;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;

-(void) setData:(SCIAxisInfo *)data;

+(SCIAxisDataView *) createInstance;

@end
