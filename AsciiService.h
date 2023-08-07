//#pragma once
//class AsciiService
//{
//public:
//	char asciiKeyArray[19] = {
//		'`',
//			'^',
//			'\\',
//			'"',
//			',',
//			':',
//			';',
//			'~',
//			'+',
//			'_',
//			'-',
//			'?',
//			']',
//			'[',
//			'}',
//			'{',
//			')',
//			'|',
//			'$',
//	};
//	int range = 256 / 19;
//public:
//	char** ConvertBrightnessToAsciiArray(float** brightnessArray, int rows, int columns);
//};
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/opencv.hpp>
#pragma once
class AsciiService
{
private: 
	
	//int i = 0;
	cv::Mat asciImage = cv::Mat(1080,1920, CV_8UC3, cv::Scalar(0, 0, 0));
	void drawFilledRectangle(cv::Mat& image, cv::Point topLeft, cv::Point bottomRight, cv::Scalar color)
	{
		cv::rectangle(image, topLeft, bottomRight, color, -1); // Use a negative thickness to fill the rectangle
	}
public:
	char** convertBrightnessToPhoto(float** averageArray, cv::Mat image);
	void printArray(char** picArray, int row, int col);
		char asciiKeyArray[19] = {
		'`',
			'^',
			'\\',
			'"',
			',',
			':',
			';',
			'~',
			'+',
			'_',
			'-',
			'?',
			']',
			'[',
			'}',
			'{',
			')',
			'|',
			'$',
	};
	int range = 256 / 19;
private:

};

