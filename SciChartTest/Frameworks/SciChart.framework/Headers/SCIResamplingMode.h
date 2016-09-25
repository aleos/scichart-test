//
//  SCIResamplingMode.h
//  SciChart
//
//  Created by Admin on 15.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#ifndef SciChart_ResamplingModeEnum_h
#define SciChart_ResamplingModeEnum_h

typedef NS_ENUM(NSInteger, SCIResamplingMode) {
    SCIResamplingMode_None,
    SCIResamplingMode_MinMax,
    SCIResamplingMode_Mid,
    SCIResamplingMode_Max,
    SCIResamplingMode_Min,
    SCIResamplingMode_Nyquist,
    SCIResamplingMode_Cluster2D,
    SCIResamplingMode_MinMaxWithUnevenSpacing,
    SCIResamplingMode_Auto
};

#endif
