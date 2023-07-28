#include<iostream>
int main() {
	int row = 3, col = 4;

	int* *arr = new int*[row];
	for(int i=0; i<row; i++)
	{
		arr[i] = new int[col];

	
	}
	for (int i = 0;i < row; i++) {
		for (int j = 0;i < col; j++) {
			arr[i][j] = 1;
		}
	}
	for (int i = 0;i < row; i++) {
		for (int j = 0;i < col; j++) {
			std::cout<<arr[i][j] <<std::endl;
		}
		std::cout << std::endl;
	}for (int i = 0;i < row; i++) {
		for (int j = 0;i < col; j++) {
			delete[]arr[j];
		}
		delete[]arr;
	}
	


	
	return 0;
}