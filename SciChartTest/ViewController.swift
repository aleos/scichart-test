//
//  ViewController.swift
//  SciChartTest
//
//  Created by Alexander Ostrovsky on 25.09.16.
//  Copyright © 2016 Alexander Ostrovsky. All rights reserved.
//

import UIKit
import SciChart

class ViewController: UIViewController {
    private var chartSurfaceView = ChartView()
    private var dataGenerator: ChartDataSource = ChartDataGenerator(startValue: 1000, maxValueDelta: 1)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        chartSurfaceView.frame = view.bounds
        chartSurfaceView.autoresizingMask = [.flexibleHeight, .flexibleWidth]
        chartSurfaceView.translatesAutoresizingMaskIntoConstraints = true
        view.addSubview(chartSurfaceView)
        
        dataGenerator.start(every: 0.2) { [weak self] time, value in
            self?.chartSurfaceView.addValue(time: time, value: value)
        }
    }
}

