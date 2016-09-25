//
//  ChartView.swift
//  SciChartTest
//
//  Created by Alexander Ostrovsky on 25.09.16.
//  Copyright © 2016 Alexander Ostrovsky. All rights reserved.
//

import UIKit
import SciChart

class ChartView: SCIChartSurfaceView {
    private static let rolloverModifierName = "RolloverModifier"
    private static let extendZoomModifierName = "ZoomExtentsModifier"
    private static let pinchZoomModifierName = "PinchZoomModifier"
    private struct Axis {
        static let xAxisID = "xAxis"
        static let yAxisID = "yAxis"
        static let xAxisDragModifierName = "xAxisDragModifierName"
        static let yAxisDragModifierName = "yAxisDragModifierName"
    }
    private struct SCSFontsName {
        static let defaultFontName = "Helvetica"
    }
    private struct SCSFontSizes {
        static let defaultFontSize: Float = 16
    }
    private struct SCSColorsHEX {
        static let backgroundBrush: UInt32 = 0xFF1e1c1c
        static let seriesBackgroundBrush: UInt32 = 0xFF1e1c1c
        static let majorPen: UInt32 = 0xFF393532
        static let gridBandPen: UInt32 = 0xE1232120
        static let minorPen: UInt32 = 0xFF262423
        static let textColor: UInt32 = 0xFFafb3DC
    }
    
    private static let defaultAxisStyle: SCIAxisStyle = {
        let axisStyle = SCIAxisStyle()
        let majorPen = SCIPenSolid(colorCode: SCSColorsHEX.majorPen, width: 0.5)
        let minorPen = SCIPenSolid(colorCode: SCSColorsHEX.minorPen, width: 0.5)
        let textFormat = SCITextFormattingStyle()
        textFormat.fontName = SCSFontsName.defaultFontName
        textFormat.fontSize = SCSFontSizes.defaultFontSize
        textFormat.color = .gray
        axisStyle.majorTickBrush = majorPen
        axisStyle.majorGridLineBrush = majorPen
        axisStyle.gridBandBrush = SCIBrushSolid(colorCode: SCSColorsHEX.gridBandPen)
        axisStyle.minorTickBrush = minorPen
        axisStyle.minorGridLineBrush = minorPen
        axisStyle.labelStyle = textFormat
        axisStyle.drawMinorGridLines = true
        axisStyle.drawMajorBands = true
        return axisStyle
    }()
    
    private static let ellipsePointMarker: SCIEllipsePointMarker = {
        let ellipsePointMarker = SCIEllipsePointMarker()
        ellipsePointMarker.drawBorder = true
        ellipsePointMarker.fillBrush = SCIBrushSolid(colorCode: 0xFFd6ffd7)
        ellipsePointMarker.height = 5
        ellipsePointMarker.width = 5
        return ellipsePointMarker
    }()
    
    private var chartSurface: SCIChartSurface!
    private let dataSeries = SCIXyDataSeries(xType: .dateTime, yType: .float)!
    private let lineAnnotation: SCILineAnnotation = {
        let lineAnnotation = SCILineAnnotation()
        lineAnnotation.xAxisId = Axis.xAxisID
        lineAnnotation.yAxisId = Axis.yAxisID
        lineAnnotation.coordMode = .relativeX
        lineAnnotation.xStart = SCIGeneric(0)
        lineAnnotation.yStart = SCIGeneric(0)
        lineAnnotation.xEnd = SCIGeneric(1)
        lineAnnotation.yEnd = SCIGeneric(0)
        lineAnnotation.style.linePen = SCIPenSolid(colorCode: 0xCFFFFFFF, width: 1)
        return lineAnnotation
    }()
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        configureChartSurface()
        addSeries()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func addValue(time: TimeInterval, value: Float) {
        dataSeries.appendX(SCIGeneric(time), y: SCIGeneric(value))
        
        lineAnnotation.yStart = SCIGeneric(value)
        lineAnnotation.yEnd = SCIGeneric(value)
        chartSurface.annotation = lineAnnotation
        
        chartSurface.invalidateElement()
    }
    
    private func addSeries() {
        dataSeries.dataDistributionCalculator = SCIUserDefinedDistributionCalculator()
        let renderSeries = SCIFastMountainRenderableSeries()
        renderSeries.dataSeries = dataSeries
        renderSeries.xAxisId = Axis.xAxisID
        renderSeries.yAxisId = Axis.yAxisID
        renderSeries.style.areaBrush = SCIBrushSolid(colorCode: 0x5FBB0000)
        renderSeries.style.borderPen = SCIPenSolid(colorCode: 0xBFFF0000, width: 1)
        chartSurface.attach(renderSeries)
        chartSurface.invalidateElement()
        chartSurface.yAxis.zoom(from: 900, to: 1000)
    }

    private func configureChartSurface() {
        chartSurface = SCIChartSurface(view: self)
        chartSurface.style.backgroundBrush = SCIBrushSolid(colorCode: 0xFF1e1c1c)
        chartSurface.style.seriesBackgroundBrush = SCIBrushSolid(colorCode: 0xFF1e1c1c)
        
        let axisX = SCIDateTimeAxis()
        axisX.axisId = Axis.xAxisID
        axisX.style = ChartView.defaultAxisStyle
        axisX.autoRange = .once
        axisX.animatedChangeDuration = 0.2
        axisX.animateVisibleRangeChanges = true
        chartSurface.attach(axisX, isXAxis: true)
        
        let axisY = SCINumericAxis()
        axisY.axisId = Axis.yAxisID
        axisY.style = ChartView.defaultAxisStyle
        axisY.autoRange = .always
        axisY.animatedChangeDuration = 0.2
        axisY.animateVisibleRangeChanges = true
        chartSurface.attach(axisY, isXAxis: false)
        
        addDefaultModifiers()
    }
    
    private func addDefaultModifiers() {
        let xAxisDragmodifier = SCIXAxisDragModifier()
        xAxisDragmodifier.modifierName = Axis.xAxisDragModifierName
        xAxisDragmodifier.axisId = Axis.xAxisID
        xAxisDragmodifier.dragMode = .scale
        xAxisDragmodifier.clipModeX = .none
        
        let yAxisDragmodifier = SCIYAxisDragModifier()
        yAxisDragmodifier.modifierName = Axis.yAxisDragModifierName
        yAxisDragmodifier.axisId = Axis.yAxisID
        yAxisDragmodifier.dragMode = .pan
        
        let panModifier = SCIZoomPanModifier()
        panModifier.xyDirection = .xyDirection
        panModifier.clipModeX = .clipAtMin
        
        let pinchZoomModifier = SCIPinchZoomModifier()
        pinchZoomModifier.xyDirection = .xyDirection
        pinchZoomModifier.modifierName = ChartView.pinchZoomModifierName
        let groupModifier = SCIModifierGroup(childModifiers: [xAxisDragmodifier, yAxisDragmodifier, pinchZoomModifier, panModifier])
        
        chartSurface.chartModifier = groupModifier
    }
}
