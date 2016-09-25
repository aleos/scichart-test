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
    var chartSurfaceView = ChartView()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        chartSurfaceView.frame = view.bounds
        chartSurfaceView.autoresizingMask = [.flexibleHeight, .flexibleWidth]
        chartSurfaceView.translatesAutoresizingMaskIntoConstraints = true
        view.addSubview(chartSurfaceView)
    }
}

