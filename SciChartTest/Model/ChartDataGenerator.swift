//
//  ChartDataGenerator.swift
//  SciChartTest
//
//  Created by Alexander Ostrovsky on 25.09.16.
//  Copyright © 2016 Alexander Ostrovsky. All rights reserved.
//

import Foundation

class ChartDataGenerator {
    private var lastTime: TimeInterval = 0
    private var lastValue: Float
    private var maxValueDelta: Float
    
    private var timer: Timer?
    
    init(startValue: Float = 1000, maxValueDelta: Float = 1) {
        self.lastValue = startValue
        self.maxValueDelta = maxValueDelta
    }
    
    func start(every deltaTime: TimeInterval = 0.1, newValue: @escaping (_ time: TimeInterval, _ value: Float) -> Void) {
         timer = Timer.scheduledTimer(withTimeInterval: deltaTime, repeats: true) { [weak self] timer in
            guard let `self` = self else { return }
            newValue(self.lastTime, self.lastValue)
            self.lastTime += 1
            self.lastValue += Float(arc4random()) / Float(UInt32.max) * self.maxValueDelta * 2 - self.maxValueDelta
        }
    }
    
    func stop() {
        timer?.invalidate()
        timer = nil
    }
}
