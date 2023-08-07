#pragma once
#include"AsciiService.h"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/opencv.hpp>
class VideoService :public AsciiService
{
private:
public:
	cv::Mat videoCapture(int path);
};