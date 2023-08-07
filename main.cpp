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
#include "AsciiService.h"
#include "VideoService.h"

int  main()
{
	//auto path = "./Resources/test.png";
	cv::Mat frame;
	cv::VideoCapture cap(0);

	ImageService imageService;
	AsciiService asciiservice;
	cv::Mat image, resizedimage;
	cv::Vec3b** pixelarr;
	float** averageArray;
	char** picArray;
	/*VideoService videoService;*/
	
	/*std::string path = "./Resources/test_video.mp4";*/
	//std::string path = 0;
	/*image = imageService.imageReader(path);*/
   /*  videoService.videoCapture(path);*/
	while (true)
	{
		cap.read(frame);

		pixelarr = imageService.convertImageToPixelArr(frame);
		averageArray = imageService.convertToBrightnessArray(pixelarr, frame);
		picArray = asciiservice.convertBrightnessToPhoto(averageArray, frame);
		asciiservice.printArray(picArray, frame.rows, frame.cols);
		imageService.deletePixelArray(pixelarr, frame.rows);
		imageService.deleteAveragelArray(averageArray, frame.rows);

	}
	 
	 /*cv::imshow("video", image);*/
	 /*cv::waitKey(1);*/

	 //image = imageService.imageReader(path);
	 //resizedimage = imageService.imageResizer(image);
	 ////imageService.loadImage(resizedimage); // display live video
	 //pixelarr = imageService.convertImageToPixelArr(resizedimage);
	 //averageArray = imageService.convertToBrightnessArray(pixelarr, resizedimage);
	 //picArray = asciiservice.convertBrightnessToPhoto(averageArray, resizedimage);
	 //asciiservice.printArray(picArray, resizedimage.rows, resizedimage.cols);
	 //imageService.deletePixelArray(pixelarr, resizedimage.rows);
	 //imageService.deleteAveragelArray(averageArray, resizedimage.rows);
	
	return 0;

}
