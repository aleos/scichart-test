//
//  LabelProviderBase.h
//  SciChart
//
//  Created by Admin on 20.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCILabelProvider.h"

@protocol SCIAxisCore;

@interface SCILabelProviderBase : NSObject <SCILabelProvider>

@property (nonatomic, weak) id<SCIAxisCore> parentAxis;

@end
