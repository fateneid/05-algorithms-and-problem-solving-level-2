#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P28_CopyArray {

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

	void FillArrayWithRandomNumbers(int Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter the number of array elements:");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomNumberInRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void CopyArray(int Array[100], int Array2[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			Array2[i] = Array[i];
		}
	}

	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength, Array2[100];

		FillArrayWithRandomNumbers(Array, ArrayLength);
		cout << "\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);
		CopyArray(Array, Array2, ArrayLength);
		cout << "\n\nArray 2 elements after copy: \n";
		PrintArray(Array2, ArrayLength);
		cout << endl;

	}

	/*
	Read number to be length of array   done
	random number function   done
	fill array   done
	print array done
	copy array  done

	*/

}


