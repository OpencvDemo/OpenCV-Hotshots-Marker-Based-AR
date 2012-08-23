//
//  TinyLA.hpp
//  Example_MarkerBasedAR
//
//  Created by Ievgen Khvedchenia on 3/29/12.
//  Copyright (c) 2012 Ievgen Khvedchenia. All rights reserved.
//

#ifndef Example_MarkerBasedAR_TinyLA_hpp
#define Example_MarkerBasedAR_TinyLA_hpp

#include <vector>
#include <opencv2/opencv.hpp>

float perimeter(const std::vector<cv::Point2f> &a);

bool isInto(cv::Mat &contour, std::vector<cv::Point2f> &b);

#endif
