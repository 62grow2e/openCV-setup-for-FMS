//
//  main.cpp
//  opencv_test
//
//  Created by YotaOdaka on 9/30/15.
//  Copyright (c) 2015 YotaOdaka. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[]) {
  cv::Mat image = cv::imread("Resources/Lenna.png");
  if (image.empty()) {
    std::cout << "image file not found!" << std::endl;
    exit(EXIT_FAILURE);
  }
  cv::namedWindow("input");
  cv::imshow("input", image);
  std::cout << "input any key to export jpeg file and finish" << std::endl;
  cv::waitKey();
  cv::imwrite("output.jpg", image);
  return 0;
}
