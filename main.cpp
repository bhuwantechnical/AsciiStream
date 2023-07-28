//#include "Window.h"
//#include "ImageService.h"
//#include "AsciiService.h"
//
//int main()
//{
//	Window window;
//	ImageService imageService;
//	AsciiService asciiService;
//
//	window.Init();
//
//	cv::Mat image = imageService.ReadImage("./Resources/lambo.png");
//
//	cv::Mat resizedImage = imageService.Resize(image);
//	float** brightessArray = imageService.ConvertToBrightnessArray(resizedImage, resizedImage.rows, resizedImage.cols);
//
//	char** asciiArray = asciiService.ConvertBrightnessToAsciiArray(brightessArray, resizedImage.rows, resizedImage.cols);
//
//	window.DisplayAscii(asciiArray, resizedImage.rows, resizedImage.cols);
//
//	return 0;
//}
#include "ImageService.h"

int  main()
{
	ImageService imageService;
	cv::Mat image, resizedimage;
	cv::Vec3b** pixelarr;
	std::string path = "./Resources/lambo.png";
	image = imageService.imageReader(path);
	resizedimage = imageService.imageResizer(image);
	imageService.loadImage(resizedimage);
	pixelarr=imageService.convertImageToPixelArr(resizedimage);
	imageService.deletePixelArray(pixelarr, resizedimage.rows);
	return 0;

}
