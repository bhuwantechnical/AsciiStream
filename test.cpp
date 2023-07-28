//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<iostream>
//#include<vector>
//using namespace cv;
//using namespace std;
//const char asciiKeyArray[] = {
//		'`',
//		'^',
//		'\\',
//		'"',
//		',',
//		':',
//		';',
//		'~',
//		'+',
//		'_',
//		'-',
//		'?',
//		']',
//		'[',
//		'}',
//		'{',
//		')',
//		'|',
//		'$',
//};
//
//int main()
//{
//	
//	string path = "./Resources/test.png";
//	Mat testImg = imread(path);
//	imshow("IMAGE", testImg);
//	waitKey(0);
//
//	int row = testImg.rows;
//	int col=  testImg.cols;
//	Vec3b*  *pixelArray = new Vec3b * [row]; 
//	for (int i = 0; i < row;i++)
//	{
//		pixelArray[i] = new Vec3b [col];
//
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			pixelArray[i][j] =testImg.at<Vec3b>(i, j);
//			
//		}
//
//
//	}
//	float* *avgBrightnness = new float* [row];
//	for (int i = 0; i < row; i++)
//	{	
//			avgBrightnness[i] = new float[col];
//		
//
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			avgBrightnness[i][j] = (pixelArray[i][j][0] + pixelArray[i][j][1] + pixelArray[i][j][2]) / 3.0;
//			
//		}
//
//
//	}
//	int range = 256 / 19;
//	char** asciiArray = new char* [row];
//	for (int i = 0; i < row; i++)
//	{
//		asciiArray[i] = new char[col];
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			asciiArray[i][j] = asciiKeyArray[static_cast<int>(avgBrightnness[i][j] / range)];
//
//		}
//
//
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cout << avgBrightnness[i][j];
//
//
//			}
//			cout << endl;
//
//
//
//		}
//
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				delete[]pixelArray[i];
//				delete[] avgBrightnness[i];
//			}
//			delete[]pixelArray;
//			delete[]avgBrightnness;
//
//		}
//
//
//
//
//
//		return 0;
//	}
//}