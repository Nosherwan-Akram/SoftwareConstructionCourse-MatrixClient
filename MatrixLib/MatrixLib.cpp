// This is the main DLL file.

#include "stdafx.h"
#include <iostream>
#include "MatrixLib.h"
using namespace std;
int main() {
	int arr[2][5] =
	{
		{ 1, 8, 12, 20, 25 },
		{ 5, 9, 13, 24, 26 }
	};

	int rowMatrixA = sizeof(arr) / sizeof(*arr) +2;
	std::cout << rowMatrixA;
	

}
