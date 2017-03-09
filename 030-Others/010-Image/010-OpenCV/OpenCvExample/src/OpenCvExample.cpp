//============================================================================
// Name        : OpenCvExample.cpp
// Author      : Ben
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <opencv2/core/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <iostream>

int main() {

	cv::Mat m ;
	m= cv::imread("opencv-logo-white.png", 1 );
	if (!m.data){
		std::cout << "" << std::endl;
		return -1;
	}


	cv::namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
	cv::imshow( "Display Image", m);
	cv::waitKey(0);


	return 0;
}
