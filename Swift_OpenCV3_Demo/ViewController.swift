//
//  ViewController.swift
//  Swift_OpenCV3_Demo
//
//  Created by lj on 3/12/2014.
//  Copyright (c) 2014 flopalm.com. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        ObjCam.objShowCam();
    }

    override var representedObject: AnyObject? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

