//
//  SciChart.h
//  SciChart
//
//  Created by Admin on 07.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SciChart.
FOUNDATION_EXPORT double SciChartVersionNumber;

//! Project version string for SciChart.
FOUNDATION_EXPORT const unsigned char SciChartVersionString[];


#import <SciChart/SCIDataType.h>
#import <SciChart/SCIEnumerationConstants.h>
#import <SciChart/SCIBrush2D.h>
#import <SciChart/SCIAxisDelta.h>
#import <SciChart/SCITickCoordinatesProviderDefault.h>
#import <SciChart/SCIArrayController.h>
#import <SciChart/SCICoordinateCalculatorFactory.h>
#import <SciChart/SCICoordinateCalculatorBase.h>
#import <SciChart/SCIAxisBase.h>
#import <SciChart/SCIRenderSurface.h>
#import <SciChart/SCINumericDeltaCalculatorBase.h>
#import <SciChart/SCIDoubleAxisDelta.h>
#import <SciChart/SCIRenderContext2D.h>
#import <SciChart/SCIInvalidatableElement.h>
#import <SciChart/SCIResamplingMode.h>
#import <SciChart/SCITickCoordinatesProvider.h>
#import <SciChart/SCICallbackBlock.h>
#import <SciChart/SCILabelProviderBase.h>
#import <SciChart/SCIDoubleCoordinateCalculator.h>
#import <SciChart/SCIAxis2D.h>
#import <SciChart/SCIFloatRange.h>
#import <SciChart/SCIPathColor.h>
#import <SciChart/SCINumericLabelProvider.h>
#import <SciChart/SCILabelProvider.h>
#import <SciChart/SCIAxisInteractivityHelper.h>
#import <SciChart/SCIRangeFactory.h>
#import <SciChart/SCINiceDoubleScale.h>
#import <SciChart/SCINumericDeltaCalculator.h>
#import <SciChart/SCINumericTickProvider.h>
#import <SciChart/SCIAxisCollection.h>
#import <SciChart/SCITickLabel.h>
#import <SciChart/SCIAxisCore.h>
#import <SciChart/SCIPen2D.h>
#import <SciChart/SCICoordinateCalculator.h>
#import <SciChart/SCITickProvider.h>
#import <SciChart/SCIIntegerRange.h>
#import <SciChart/SCINumericAxis.h>
#import <SciChart/SCIPointSeries.h>
#import <SciChart/SCITickCoordinates.h>
#import <SciChart/SCINiceScale.h>
#import <SciChart/SCIAxisEnums.h>
#import <SciChart/SCIDoubleRange.h>
#import <SciChart/SCIRenderableSeries.h>
#import <SciChart/SCIAxisParams.h>
#import <SciChart/SCIDefaultTickLabel.h>
#import <SciChart/SCIDataDistributionCalculatorBase.h>
#import <SciChart/SCICategoryCoordinateCalculator.h>
#import <SciChart/SCIDeltaCalculator.h>
#import <SciChart/SCIDataSeries.h>
#import <SciChart/SCIRange.h>
#import <SciChart/SCIXyDataSeries.h>
#import <SciChart/SCIDataDistributionCalculator.h>
#import <SciChart/SCIIndexRange.h>
#import <SciChart/SCINumericTickLabel.h>
#import <SciChart/SCIFlippedDoubleCoordinateCalculator.h>
#import <SciChart/SciChart.h>

#import <SciChart/SCIBrushSolid.h>
#import <SciChart/SCIOpenGLBrush.h>
#import <SciChart/SCIRenderSurfaceBase.h>
#import <SciChart/SCIAxisArea.h>
#import <SciChart/SCIChartSurface.h>
#import <SciChart/SCIBrushLinearGradient.h>
#import <SciChart/SCIChartSurfaceViewBase.h>
#import <SciChart/SCIOpenGLRenderSurface.h>
#import <SciChart/SCIPenSolid.h>

#import <SciChart/SCIRenderSurfaceCallbackDelegate.h>

#import <SciChart/SCIAxisDragModifierBase.h>
#import <SciChart/SCIChartModifier.h>
#import <SciChart/SCIGestureEventsHandler.h>
#import <SciChart/SCIChartModifierBase.h>
#import <SciChart/SCIModifierGroup.h>
#import <SciChart/SCIXAxisDragModifier.h>
#import <SciChart/SCIYAxisDragModifier.h>

#import <SciChart/SCIZoomPanModifier.h>
#import <SciChart/SCIZoomPanModifierBase.h>
#import <SciChart/SCIRelativeZoomModifierBase.h>
#import <SciChart/SCIPinchZoomModifier.h>

#import <SciChart/SCIFastLineRenderableSeries.h>
#import <SciChart/SCIRenderableSeriesBase.h>
#import <SciChart/SCIPointSeries.h>

#import <SciChart/SCIUserDefinedDistributionCalculator.h>
#import <SciChart/SCIGenericType.h>

#import <SciChart/SCIDateRange.h>
#import <SciChart/SCIDateTimeDeltaCalculator.h>
#import <SciChart/SCITimeSpanAxisBase.h>
#import <SciChart/SCITimeSpanTickProviderBase.h>
#import <SciChart/SCIDateTimeLabelProvider.h>
#import <SciChart/SCIDateTimeAxis.h>
#import <SciChart/SCITimeSpanDelta.h>
#import <SciChart/SCITimeSpanDeltaCalculatorBase.h>
#import <SciChart/SCIDateDeltaCalculator.h>
#import <SciChart/SCIDateTimeTickProvider.h>

#import <SciChart/SCIFastMountainRenderableSeries.h>
#import <SciChart/SCINiceTimeSpanScale.h>

#import <SciChart/SCIAxisStyle.h>
#import <SciChart/SCITextFormattingStyle.h>
#import <SciChart/SCIMountainSeriesStyle.h>
#import <SciChart/SCILineSeriesStyle.h>
#import <SciChart/SCIPenLinearGradient.h>
#import <SciChart/SCIRenderSurfaceStyle.h>

#import <SciChart/SCILinearGradientBrush.h>
#import <SciChart/SCIZoomExtentsModifier.h>

#import <SciChart/SCIFastCandlestickRenderableSeries.h>
#import <SciChart/SCIOhlcPointSeries.h>
#import <SciChart/SCIOhlcDataSeries.h>
#import <SciChart/SCICandlestickSeriesStyle.h>

#import <SciChart/SCIFastOhlcRenderableSeries.h>
#import <SciChart/SCIOhlcSeriesStyle.h>

#import <SciChart/SCIEllipsePointMarker.h>
#import <SciChart/SCIPointMarkerBase.h>
#import <SciChart/SCISquarePointMarker.h>
#import <SciChart/SCITrianglePointMarker.h>
#import <SciChart/SCIPointMarker.h>
#import <SciChart/SCICrossPointMarker.h>
#import <SciChart/SCIXyScatterRenderableSeries.h>

#import <SciChart/SCIPointMarkerClusterizer.h>
#import <SciChart/SCIScatterSeriesStyle.h>

#import <SciChart/SCIFastColumnRenderableSeries.h>
#import <SciChart/SCIColumnSeriesStyle.h>

#import <SciChart/SCIPointMarkerHitTestProvider.h>
#import <SciChart/SCIHitTestProviderBase.h>
#import <SciChart/SCICursorModifier.h>

#import <SciChart/SCITooltipModifier.h>
#import <SciChart/SCIXySeriesInfo.h>
#import <SciChart/SCICursorModifierStyle.h>
#import <SciChart/SCIXySeriesDataView.h>
#import <SciChart/SCIHitTestProvider.h>
#import <SciChart/SCITooltipView.h>
#import <SciChart/SCISeriesInfo.h>

#import <SciChart/SCILineHitTestProvider.h>
#import <SciChart/SCIRolloverModifier.h>

#import <SciChart/SCITooltipModifierStyle.h>
#import <SciChart/SCITooltipDataView.h>
#import <SciChart/SCIAxisInfo.h>
#import <SciChart/SCIAxisDataView.h>
#import <SciChart/SCIAxisHitTestProvider.h>

#import <SciChart/SCIRolloverModifierStyle.h>
#import <SciChart/SCIMountainHitTestProvider.h>
#import <SciChart/SCIColumnHitTestProvider.h>
#import <SciChart/SCIOhlcHitTestProvider.h>
#import <SciChart/SCICandlestickHitTestProvider.h>

#import <SciChart/SCIAnnotation.h>
#import <SciChart/SCIAnnotationBase.h>
#import <SciChart/SCILineAnnotation.h>
#import <SciChart/SCILineAnnotationStyle.h>

#import <SciChart/SCITextAnnotation.h>
#import <SciChart/SCITextAnnotationStyle.h>

#import <SciChart/SCIBoxAnnotation.h>
#import <SciChart/SCIBoxAnnotationStyle.h>
#import <SciChart/SCIAnnotationStyleEnums.h>

#import <SciChart/SCILogarithmicAxis.h>
#import <SciChart/SCILogarithmicDeltaCalculator.h>
#import <SciChart/SCILogarithmicNumericTickProvider.h>
#import <SciChart/SCILogarithmicDoubleCoordinateCalculator.h>
#import <SciChart/SCINiceLogScale.h>
#import <SciChart/SCILogarithmicNumericAxis.h>
#import <SciChart/SCILogarithmicCoordinateCalculator.h>

#import <SciChart/SCILogarithmicNumericLabelProvider.h>

#import <SciChart/SCIHeatMapDataSeries.h>
#import <SciChart/SCIHeatMapSeriesStyle.h>
#import <SciChart/SCIBrushPalettedTexture.h>
#import <SciChart/SCITexturedBrush.h>
#import <SciChart/SCITextureOpenGL.h>
#import <SciChart/SCIHeatMapRenderableSeries.h>
#import <SciChart/SCIBrushTexture.h>
#import <SciChart/SCIArrayController2D.h>

#import <SciChart/SCIHeatMapHitTestProvider.h>
#import <SciChart/SCIXyzSeriesInfo.h>
#import <SciChart/SCIXyzSeriesDataView.h>
#import <SciChart/SCIOhlcSeriesDataView.h>
#import <SciChart/SCIOhlcSeriesInfo.h>

#import <SciChart/SCIChartSurfaceView.h>

#import <SciChart/SCIXyyPointSeries.h>
#import <SciChart/SCIXyyDataSeries.h>
#import <SciChart/SCIBandRenderableSeries.h>
#import <SciChart/SCIBandSeriesStyle.h>
#import <SciChart/SCIXyySeriesInfo.h>
#import <SciChart/SCIBandHitTestProvider.h>
#import <SciChart/SCIBubbleHitTestProvider.h>
#import <SciChart/SCIXyySeriesDataView.h>

#import <SciCHart/SCIBubbleRenderableSeries.h>
#import <SciCHart/SCIBubbleSeriesStyle.h>

#import <SciChart/SCIStackedGroupSeries.h>
#import <SciChart/SCIStackedRenderableSeries.h>
#import <SciChart/SCIStackedMountainRenderableSeries.h>
#import <SciChart/SCIStackedMountainHitTestProvider.h>

#import <SciChart/SCIXyzDataSeries.h>
#import <SciChart/SCIXyzPointSeries.h>

#import <SciChart/SCIArrayControllerFIFO.h>

#import <SCiChart/SCIBrushColoredTexture.h>
#import <SCiChart/SCISpritePointMarker.h>

#import <SCiChart/SCIAnnotationGroup.h>

#import <SCiChart/SCICoreGraphicsPointMarker.h>
#import <SCiChart/SCIAxisPinchZoomModifier.h>
#import <SciChart/UIColor+SCIConvertToHexColorCode.h>

#import <SciChart/SCIViewportManager.h>
#import <SciChart/SCIRenderPassData.h>

#import <SciChart/SCIMultiSurfaceModifier.h>

#import <SciChart/SCICategoryNumericAxis.h>
#import <SciChart/SCIAxisRangeSyncronization.h>
#import <SciChart/SCICategoryDateTimeAxis.h>
#import <SciChart/SCIAxisAreaSizeSyncronization.h>
#import <SciChart/SCICallbackHelper.h>
#import <SciChart/SCICallbackHandler.h>
#import <SciChart/SCIRangeChangedCallbackHelper.h>

#import <SciChart/SCIAxisMarkerAnnotation.h>
#import <SciChart/SCIAxisMarkerAnnotationStyle.h>
