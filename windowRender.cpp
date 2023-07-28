//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<iostream>
//#include<vector>
//		using namespace cv;
//	using namespace std;
//
//	const char asciiKeyArray[] = {
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
//	int mainnn()
//	{
//		//VideoCapture(0);
//
//		Mat resizedImg;
//		string path = "./Resources/lambo.png";
//		Mat testImg = imread(path);
//
//		Mat image(cv::Size(1280, 720), CV_8UC3, cv::Scalar(0, 0, 0));
//
//		cv::Point position(0, 0);
//		int font = cv::FONT_HERSHEY_COMPLEX;
//		double font_scale = 0.5;
//		cv::Scalar color(255, 255, 255);  // White color
//		int thickness = 2;
//
//		std::vector<std::string> images;
//		std::string text;
//		/*imshow("Image", testImg);*/
//		float factor = testImg.rows /100;
//		resize(testImg, resizedImg, factor > 0 ? Size(testImg.rows/factor, testImg.cols/factor) : Size(testImg.rows, testImg.cols));
//		//imshow("ResizedImage", resizedImg);
//		//waitKey(27);
//
//		/*cout  <<resizedImg.size() << endl;*/
//		int rowPixelMatrix = resizedImg.rows;
//		int colPixelMatrix = resizedImg.cols;
//		cout << "rows:" << rowPixelMatrix << endl << "cols:" << colPixelMatrix << endl;
//		Vec3b** pixelArray = new Vec3b * [rowPixelMatrix];
//
//		for (int i = 0; i < rowPixelMatrix; ++i)
//		{
//			pixelArray[i] = new Vec3b[colPixelMatrix];
//
//
//		}
//		for (int i = 0; i < rowPixelMatrix; ++i)
//		{
//			for (int j = 0; j < colPixelMatrix; ++j)
//			{
//				pixelArray[i][j] = resizedImg.at<Vec3b>(i, j);
//			}
//		}
//
//		float** averageArray = new float* [rowPixelMatrix];
//		for (int i = 0; i < rowPixelMatrix; i++)
//		{
//			averageArray[i] = new float[colPixelMatrix];
//		}
//
//		for (int i = 0; i < rowPixelMatrix; i++)
//		{
//			for (int j = 0; j < colPixelMatrix; j++)
//			{
//				averageArray[i][j] = (pixelArray[i][j][0] + pixelArray[i][j][1] + pixelArray[i][j][2]) / 3.0;
//			}
//		}
//
//
//		int range = 256 / 19;
//		char** asciiArray = new char* [rowPixelMatrix];
//		for (int i = 0; i < rowPixelMatrix; i++)
//		{
//			asciiArray[i] = new char[colPixelMatrix];
//		}
//
//		for (int i = 0; i < rowPixelMatrix; i++)
//		{
//			for (int j = 0; j < colPixelMatrix; j++)
//			{
//				asciiArray[i][j] = asciiKeyArray[static_cast<int>(averageArray[i][j] / range)];
//				//cout << asciiArray[i][j]<<" ";
//				text.push_back(asciiArray[i][j]);
//				//text.push_back(' ');
//			}
//			//cout << "\n";
//			cv::putText(image, text, position, font, font_scale, color, thickness);
//			text.clear();
//			position.y += 5;
//		}
//
//		cv::imshow("Windowssss", image);
//		waitKey(0);
//
//		//cv::namedWindow("ASCII ART");
//
//
//		for (int i = 0; i < rowPixelMatrix; ++i)
//		{
//			delete[]pixelArray[i];
//		}
//		delete[]pixelArray;
//
//		/*int brightnessMat[467][700];
//		for (int i = 0; i < 467; i++) {
//			for (int j = 0; j < 700; j++) {
//
//			}
//		}*/
//
//		return 0;
//
//
//
//	}