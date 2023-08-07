//#pragma once
//#include "VideoService.h"
//#include "ImageService.h"
//
//
//cv::Mat VideoService::videoCapture(int path)
//{
//	cv::VideoCapture cap(path);
//	ImageService imageService;
//	AsciiService asciiservice;
//	cv::Mat image, resizedimage;
//	cv::Vec3b** pixelarr;
//	float** averageArray;
//	char** picArray;
//	if (!cap.isOpened())
//	{
//		std::cout << "Cant initialise video";
//	}
//	else
//	{
//
//
//		while (cap.read(image))
//		{
//			cap.read(image);
//			/*cv::imshow("video", image);*/
//			/*cv::waitKey(1);*/
//			resizedimage = imageService.imageResizer(image);
//			//imageService.loadImage(resizedimage); // display live video
//			pixelarr = imageService.convertImageToPixelArr(resizedimage);
//			averageArray = imageService.convertToBrightnessArray(pixelarr, resizedimage);
//			picArray = asciiservice.convertBrightnessToPhoto(averageArray, resizedimage);
//			asciiservice.printArray(picArray, resizedimage.rows, resizedimage.cols);
//			imageService.deletePixelArray(pixelarr, resizedimage.rows);
//			imageService.deleteAveragelArray(averageArray, resizedimage.rows);
//	}
//		}
//	return image;
//}
