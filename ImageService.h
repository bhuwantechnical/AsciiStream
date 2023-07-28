//#pragma once
//#include <string>
//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/imgproc.hpp>
//
//class ImageService
//{
//private:
//
//public:
//	cv::Mat ReadImage(std::string path);
//	cv::Mat Resize(cv::Mat image);
//	float** ConvertToBrightnessArray(cv::Mat image, int rows, int columns);
//};
//
#pragma once
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/opencv.hpp>
class ImageService
{
private:
	
public:
	cv::Mat imageReader( std::string path);
	cv::Mat imageResizer(cv::Mat image);
	void  loadImage(cv::Mat image);
  cv::Vec3b** convertImageToPixelArr(cv::Mat image);
  double** convertToBrightnessMat(cv::Vec3b** pixelarr, cv::Mat image);
  void deletePixelArray(cv::Vec3b** pixelArray, int rows);

	
};