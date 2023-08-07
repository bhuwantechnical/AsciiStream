#include "AsciiService.h"
//#include "AsciiService.h"
//
//char** AsciiService::ConvertBrightnessToAsciiArray(float** brightnessArray, int rows, int columns)
//{
//	char** asciiArray = new char* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		asciiArray[i] = new char[columns];
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			asciiArray[i][j] = asciiKeyArray[static_cast<int>(brightnessArray[i][j] / range)];
//		}
//	}
//    return asciiArray;
//}

char** AsciiService::convertBrightnessToPhoto(float** averageArray, cv::Mat image)
{
	int row = image.rows;
	int col = image.cols;
	char** picArray = new char* [row];
	for (int i = 0; i < row; i++)
	{
		 picArray[i] = new char[col];
	}
		for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			picArray[i][j] = asciiKeyArray[static_cast<int>(averageArray[i][j] / range)];
		}
	}
    return picArray;
}


void AsciiService::printArray(char** picArray, int row, int col)
{
	// clear screen
	cv::Point topLeft(0, 0);
	cv::Point bottomRight(1920, 1080);
	cv::Scalar fillColor(0, 0, 0); 
	drawFilledRectangle(asciImage, topLeft, bottomRight, fillColor);

	int x = 0;
	int y = 0;

	for (int i = 0;i < row;i++)
	{
	/*	cv::Mat asciiImage;*/
		std::string text;
		for (int j = 0;j < col; j++)
		{
			text += picArray[i][j];
			//std::cout << picArray[i][j];
			//char  string_to_be_put = picArray[i][j];
			//std::string str = "A";//std::string(1, string_to_be_put);
			//cv::putText(asciImage,str, cv::Point(x ,y), cv::FONT_HERSHEY_COMPLEX_SMALL, 0.5, cv::Scalar(255, 0, 0), 1);
			//x += 10;
		}
		cv::putText(asciImage,text, cv::Point(0 ,y), cv::FONT_HERSHEY_COMPLEX_SMALL, 0.2, cv::Scalar(255, 255, 255), 1);
		y += 10;

	}

	cv::imshow("ascivideo", asciImage);	

	cv::waitKey(1);
	

	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << picArray[i][j];
		}
		std::cout << std::endl;
	}*/
}
