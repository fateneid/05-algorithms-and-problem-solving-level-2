#pragma once

#include <iostream>
using namespace std;

namespace P25_MinOfRandomArray {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int RndomNumberInRange(int From, int To) {
		int RandomNumber = rand() % (To + 1 - From) + From;
		return RandomNumber;
	}

	void FillArrayWithRandomNumbers(int Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter number of elements?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RndomNumberInRange(1, 100);
		}
	}

	void PrintArrayElements(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	int MinNumberInArray(int Array[100], int ArrayLength) {
		//int Min = 101;	Or
		int Min = Array[0];
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] <= Min) {
				Min = Array[i];
			}
		}
		return Min;
	}

	void Task()
	{
		srand((unsigned)time(NULL));
		int Array[100], ArrayLength;
		FillArrayWithRandomNumbers(Array, ArrayLength);
		cout << "\nArray Elements: ";
		PrintArrayElements(Array, ArrayLength);
		cout << "\n\nMin Number is: " << MinNumberInArray(Array, ArrayLength) << "\n";

	}

	/*
	read number to be length  done

	random number function  done

	forloop to fill array   done

	forloop print Array elements done

	forloop to get min of array  done

	*/

}


