#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P32_CopyArrayInReverseOrder {

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
		ArrayLength = ReadPositiveNumber("Enter how many elements?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomNumberInRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void CopyArrayInReversedOrder(int Array[100], int Array2[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			Array2[i] = Array[ArrayLength - 1 - i];
		}
	}


	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], Array2[100], ArrayLength;
		FillArrayWithRandomNumbers(Array, ArrayLength);

		cout << "\nArray 1 elements: \n" << endl;
		PrintArray(Array, ArrayLength);

		CopyArrayInReversedOrder(Array, Array2, ArrayLength);

		cout << "\n\nArray 2 elements after copying array1 in reversed order: \n" << endl;
		PrintArray(Array2, ArrayLength);
		cout << endl;

	}
	/*
	read number from user to be the lengrh of array   done

	random number function done

	for loop to fill array with random nummbers done

	print array function  done

	copy array function in reversed order

	*/

}



