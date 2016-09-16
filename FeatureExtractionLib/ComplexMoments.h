#pragma once
#include <opencv2/opencv.hpp>

class ComplexMoments
{
public:
	cv::Mat real;
	cv::Mat imaginary;
	cv::Mat abs;
	cv::Mat phases;

	ComplexMoments();
	~ComplexMoments();
};

