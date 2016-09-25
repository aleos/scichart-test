//
//  AppDelegate.swift
//  SciChartTest
//
//  Created by Alexander Ostrovsky on 25.09.16.
//  Copyright © 2016 Alexander Ostrovsky. All rights reserved.
//

import UIKit
import SciChart

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?


    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        let licencing =
            "<LicenseContract>"
                + "<Customer>thealeos@gmail.com</Customer>"
                + "<OrderId>Trial</OrderId>"
                + "<LicenseCount>1</LicenseCount>"
                + "<IsTrialLicense>true</IsTrialLicense>"
                + "<SupportExpires>10/25/2016 00:00:00</SupportExpires>"
                + "<ProductCode>SC-IOS-2D-ENTERPRISE-SRC</ProductCode>"
                + "<KeyCode>32f5c8e3ce4afc02ab4a2435a5d92716b138bda373b598a5c5c6d5250a2dce75ef6be1f060fe1b835c2b2e272b956f9987b8615dfc55aeef0545137073671fade6a6231d20d5fc38dacdbab5e9fba111af3c2038c8093508870343ae64244cbb31f8586b634d75d9f3a16a01ece3253795bf5f62128c738da585486880ef88fc5f27a0975adfd4de03913b7ee1da77574bedf4aab356ceb38f39b82ee1fadd8d328f20d5f6143d97</KeyCode>"
                + "</LicenseContract>"
        
        SCIChartSurface.setLicenseContract(licencing)
        
        return true
    }

    func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    }

    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }

    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }

    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }


}

