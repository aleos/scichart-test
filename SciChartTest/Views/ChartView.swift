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
    let rolloverModifierName = "RolloverModifier"
    private struct Axis {
        static let xAxisID = "xAxis"
        static let yAxisID = "yAxis"
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
    
    var chartSurface: SCIChartSurface!
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        configureChartSurface()
        addSeries()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func configureChartSurface() {
        chartSurface = SCIChartSurface(view: self)
        chartSurface.style.backgroundBrush = SCIBrushSolid(colorCode: 0xFF1e1c1c)
        chartSurface.style.seriesBackgroundBrush = SCIBrushSolid(colorCode: 0xFF1e1c1c)
        
        let axisX = SCIDateTimeAxis()
        axisX.axisId = Axis.xAxisID
        axisX.style = ChartView.defaultAxisStyle
        chartSurface.attach(axisX, isXAxis: true)
        
        let axisY = SCINumericAxis()
        axisY.axisId = Axis.yAxisID
        axisY.style = ChartView.defaultAxisStyle
        chartSurface.attach(axisY, isXAxis: false)
        
        let rolloverModifier = SCIRolloverModifier()
        rolloverModifier.modifierName = rolloverModifierName
        rolloverModifier.style.tooltipSize = CGSize(width: 200, height: CGFloat.nan)
        rolloverModifier.style.pointMarker = ChartView.ellipsePointMarker
        chartSurface.chartModifier = rolloverModifier
    }
    
    private func addSeries() {
        let dataCount = 20
        let dataSeries = SCIXyDataSeries(xType: .dateTime, yType: .float)!
//        let now = Date().timeIntervalSince1970
        for i in 0..<dataCount {
            let x = Double(i) //10 * Float(i) / Float(dataCount)
            let y = arc4random_uniform(UInt32(dataCount))
            var xValue = x
            var yValue = Float(y)
            dataSeries.appendX(SCI_constructGenericTypeWithInfo(&xValue, .double), y: SCI_constructGenericTypeWithInfo(&yValue, .float))
        }
        dataSeries.dataDistributionCalculator = SCIUserDefinedDistributionCalculator()
        let renderSeries = SCIFastMountainRenderableSeries()
        renderSeries.dataSeries = dataSeries
        renderSeries.xAxisId = Axis.xAxisID
        renderSeries.yAxisId = Axis.yAxisID
        renderSeries.style.areaBrush = SCIBrushSolid(colorCode: 0x5FBB0000)
        renderSeries.style.borderPen = SCIPenSolid(colorCode: 0xBFFF0000, width: 1)
//        renderSeries.style.pointMarker = ChartView.ellipsePointMarker
//        renderSeries.style.drawPointMarkers = true
//        renderSeries.style.linePen = SCIPenSolid(colorCode: 0xFF99EE99, width: 0.7)
        chartSurface.attach(renderSeries)
        chartSurface.invalidateElement()
    }
}
