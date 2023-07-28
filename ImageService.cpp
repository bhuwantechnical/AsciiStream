//#include "ImageService.h"
//
//cv::Mat ImageService::ReadImage(std::string path)
//{
//	cv::Mat image = cv::imread(path);
//	return image;
//}
//
//cv::Mat ImageService::Resize(cv::Mat image)
//{
//	cv::Mat resizedImg;
//	float factor = image.rows / 100;
//	resize(image, resizedImg, factor > 0 ? cv::Size(image.rows / factor, image.cols / factor) : cv::Size(image.rows, image.cols));
//	return resizedImg;
//}
//
//float** ImageService::ConvertToBrightnessArray(cv::Mat image, int rows, int columns)
//{
//	cv::Vec3b** pixelArray = new cv::Vec3b * [rows];
//
//	for (int i = 0; i < rows; ++i)
//	{
//		pixelArray[i] = new cv::Vec3b[columns];
//
//
//	}
//	for (int i = 0; i < rows; ++i)
//	{
//		for (int j = 0; j < columns; ++j)
//		{
//			pixelArray[i][j] = image.at<cv::Vec3b>(i, j);
//		}
//	}
//
//	float** averageArray = new float* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		averageArray[i] = new float[columns];
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			averageArray[i][j] = (pixelArray[i][j][0] + pixelArray[i][j][1] + pixelArray[i][j][2]) / 3.0;
//		}
//	}
//	for (int i = 0; i < rows; ++i)
//	{
//		delete[]pixelArray[i];
//	}
//	delete[]pixelArray;
//	return averageArray;
//
//}
#include"ImageService.h"
cv::Mat ImageService::imageReader( std::string path)
{
	cv::Mat image;
	image = cv::imread(path);
	/*if (image.empty())
	{
		cin=
	}*/
	return image;


}
cv::Mat ImageService::imageResizer(cv::Mat image)
{
	cv::Mat resizedImage;
	cv::resize(image, resizedImage, cv::Size(800,600));
	return resizedImage;



}
void  ImageService::loadImage(cv::Mat resizedImage)
{
	cv::imshow("Image", resizedImage);
	cv::waitKey(0);

}
cv::Vec3b** ImageService::convertImageToPixelArr(cv::Mat image)
{

	int row = image.rows;
	int col = image.cols;
	cv::Vec3b** pixelArray = new cv::Vec3b * [row];

	for (int i = 0; i < row; ++i)
	{
		pixelArray[i] = new cv::Vec3b[col];


	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			pixelArray[i][j] = image.at<cv::Vec3b>(i, j);
		}
	}
		/*for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				std::cout << pixelArray[i][j];

			}
			std::cout << std::endl;
		}*/
	return pixelArray;
		
	
}

double**  ImageService::convertToBrightnessMat(cv::Vec3b** pixelarr,cv::Mat image)
{    
	int row = image.rows;
	int col = image.cols;
	double  ** brightnessMat = new double* [row];
		for (int i = 0; i < row; i++)
		{
			 brightnessMat[i] = new double[col];
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; i < col;j++)
			{
				brightnessMat[i][j] = (0.21 * pixelarr[i][j][0]) + (0.72 * pixelarr[i][j][1] )+ (0.07 * pixelarr[i][j][2]);
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; i < col;j++)
			{
				std::cout << brightnessMat[i][j];
			}
		}
		return brightnessMat;
}


	void ImageService::deletePixelArray(cv::Vec3b** pixelArray, int rows)
	{
		for (int i = 0; i < rows; ++i)
		{
			delete[] pixelArray[i];
		}
		delete[] pixelArray;
	}
