#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P43_CopyEvenNumbersInArray {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int RandomNumberIRange(int From, int To) {
		int RandomNumber = rand() % (To + 1 - From) + From;
		return RandomNumber;
	}

	void FillArrayWithRandomNumbers(int Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter number of elements?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomNumberIRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void AddArrayElement(int Number, int Array[100], int& ArrayLength) {
		Array[ArrayLength] = Number;
		ArrayLength++;
	}

	int CountEvenNumbersInArray(int Array[100], int ArrayLength) {
		int Count = 0;
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] % 2 == 0) {
				Count++;
			}
		}
		return Count;
	}


	void Task()
	{

		srand((unsigned)time(NULL));

		int Array[100], ArrayLength = 0;

		FillArrayWithRandomNumbers(Array, ArrayLength);

		cout << "\n\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);
		cout << "\n\nEven Numbers count is: " << CountEvenNumbersInArray(Array, ArrayLength) << endl;


	}

}

