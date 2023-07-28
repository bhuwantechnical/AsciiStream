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
