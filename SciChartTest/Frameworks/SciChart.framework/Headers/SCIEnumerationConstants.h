//
//  SCIEnumerationConstants.h
//  SciChart
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#ifndef SciChart_EnumerationConstants_h
#define SciChart_EnumerationConstants_h

typedef NS_ENUM(NSInteger, SCIArraySearchMode) {
    SCIArraySearchMode_Exact,
    SCIArraySearchMode_Nearest,
    SCIArraySearchMode_RoundDown,
    SCIArraySearchMode_RoundUp
};

typedef NS_ENUM(NSInteger, SCIXYDirection) {
    SCIXYDirection_XDirection,
    SCIXYDirection_YDirection,
    SCIXYDirection_XYDirection
};

typedef NS_ENUM(NSInteger, SCIAxisDragMode) {
    SCIAxisDragMode_Scale,
    SCIAxisDragMode_Pan
};

typedef NS_ENUM(NSInteger, SCIZoomPanClipMode) {
    // ClipMode.None means you can pan right off the edge of the data into uncharted space.
    SCIZoomPanClipMode_None,
    // ClipMode.StretchAtExtents causes a zooming (stretch) action when you reach the edge of the data.
    SCIZoomPanClipMode_StretchAtExtents,
    // ClipAtMin forces the panning operation to stop suddenly at the minimum of the data, but expand at the maximum
    SCIZoomPanClipMode_ClipAtMin,
    // ClipAtMax forces the panning operation to stop suddenly at the maximum of the data, but expand at the minimum
    SCIZoomPanClipMode_ClipAtMax,
    // ClipAtExtents forces the panning operation to stop suddenly at the extents of the data
    SCIZoomPanClipMode_ClipAtExtents
};

#endif
