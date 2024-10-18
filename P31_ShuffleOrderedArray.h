#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P31_ShuffleOrderedArray {

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

	void FillAraayWithNumbersFrom1toN(int Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter how many elements?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = i + 1;
		}
	}

	void PrintAraay(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void Swap(int& A, int& B) {
		int Temp = A;
		A = B;
		B = Temp;
	}

	void ShuffleAraay(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			Swap(Array[RandomNumberInRange(0, ArrayLength - 1)], Array[RandomNumberInRange(0, ArrayLength - 1)]);
		}
	}


	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength, Array2[100];

		FillAraayWithNumbersFrom1toN(Array, ArrayLength);
		cout << "\nArray elements before shuffle:\n";
		PrintAraay(Array, ArrayLength);
		ShuffleAraay(Array, ArrayLength);
		cout << "\n\nArray elements after shuffle:\n";
		PrintAraay(Array, ArrayLength);
		cout << "\n";

	}


}

