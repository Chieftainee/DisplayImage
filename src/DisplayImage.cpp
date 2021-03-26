/*
 * Example 2-1 : DisplayImage.cpp
 *
 * A simple OpenCV program that loads an image
 * from disk and displays it on the screen.
 *
 *  Created on: Mar 25, 2021
 *      Author: 454878437@qq.com
 */

#include <cstdio>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("%s has no appropriate number of parameters\n", argv[0]);
		return -1;
	}

	std::cout << "A simple OpenCV program that loads "
			"an image from disk and displays it on the screen" << std::endl;

	cv::Mat img = cv::imread(argv[1], cv::IMREAD_UNCHANGED);
	if(img.empty()) return -1;
	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example1", img);
	cv::waitKey(0);

	return 0;
}




