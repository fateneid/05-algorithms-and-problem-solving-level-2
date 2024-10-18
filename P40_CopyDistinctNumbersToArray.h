#pragma once

#include <iostream>
using namespace std;

namespace P40_CopyDistinctNumbersToArray {

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void AddArrayElement(int Number, int Array[100], int& ArrayLength) {
		Array[ArrayLength] = Number;
		ArrayLength++;
	}

	bool SearchInArray(int Array[100], int ArrayLength, int SearchFor) {
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] == SearchFor)
				return true;
		}
		return false;
	}

	void CopyArrayDistinctNumbers(int Array[100], int Array2[100], int ArrayLength, int& Array2Length) {
		for (int i = 0; i < ArrayLength; i++) {
			if (!SearchInArray(Array2, Array2Length, Array[i])) {
				AddArrayElement(Array[i], Array2, Array2Length);
			}
		}
	}


	void Task()
	{

		srand((unsigned)time(NULL));

		int Array[10] = { 10,10,10,50,50,70,70,70,70,90 };
		int ArrayLength = 10;
		int Array2[100], Array2Length = 0;

		CopyArrayDistinctNumbers(Array, Array2, ArrayLength, Array2Length);


		cout << "\n\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);
		cout << "\n\nArray 2 distinct elements: \n";
		PrintArray(Array2, Array2Length);
		cout << "\n";

	}

}


