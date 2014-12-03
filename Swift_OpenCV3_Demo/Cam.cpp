//
//  Cam.cpp
//  Swift_OpenCV3_Demo
//
//  Created by lj on 3/12/2014.
//  Copyright (c) 2014 flopalm.com. All rights reserved.
//

#include "Cam.h"

#include <opencv2/opencv.hpp>

int Cam::showCam(){
    
    cv::VideoCapture capture(0); // open default camera
    if ( capture.isOpened() == false )
        return -1;
    
    cv::namedWindow("Test OpenCV",1);
    cv::Mat frame;
    
    while ( true )
    {
        capture >> frame;
        cv::imshow("Test OpenCV", frame );
        int key = cv::waitKey(1);
        if ( key == 27 )
            break;
    }
    return 0;
}