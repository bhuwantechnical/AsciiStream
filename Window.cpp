//#include "Window.h"
//
//void Window::Init()
//{
//	image = cv::Mat(cv::Size(1280, 720), CV_8UC3, cv::Scalar(0, 0, 0));
//	position = cv::Point(0, 0);
//	font = cv::FONT_HERSHEY_COMPLEX;
//	font_scale = 0.5;
//	color = cv::Scalar(255, 255, 255);  // White color
//	thickness = 2;
//}
//
//void Window::DisplayAscii(char** asciiArray, int rows, int columns)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			text.push_back(asciiArray[i][j]);
//		}
//		cv::putText(image, text, position, font, font_scale, color, thickness);
//		text.clear();
//		position.y += 5;
//	}
//	cv::imshow("ASKII", image);
//	cv::waitKey(0);
//}
