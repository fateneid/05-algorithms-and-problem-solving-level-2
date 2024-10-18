#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P30_SumOf2ArraysToAThirdOne {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int RandomNumberInRange(int From, int To) {
		int RandomNumber = rand() % (To + 1 - From) + From;
		return RandomNumber;
	}

	void FillArrayWithRandomNumbers(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomNumberInRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void SumOfTwoArrays(int Array[100], int Array2[100], int Array3[100], int ArrayLength) {

		for (int i = 0; i < ArrayLength; i++) {
			Array3[i] = Array[i] + Array2[i];
		}
	}


	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength, Array2[100], Array3[100];

		ArrayLength = ReadPositiveNumber("Enter the number of array elements:");

		FillArrayWithRandomNumbers(Array, ArrayLength);
		FillArrayWithRandomNumbers(Array2, ArrayLength);

		SumOfTwoArrays(Array, Array2, Array3, ArrayLength);


		cout << "\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);

		cout << "\n\nArray 2 elements: \n";
		PrintArray(Array2, ArrayLength);

		cout << "\n\nSum of array1 and array2 elements:\n";
		PrintArray(Array3, ArrayLength);

		cout << endl;

	}

}



