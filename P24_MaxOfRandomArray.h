#pragma once

#include <iostream>
using namespace std;

namespace P24_MaxOfRandomArray {

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
		ArrayLength = ReadPositiveNumber("Please enter a positive number?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RndomNumberInRange(1, 100);
		}
	}

	void PrintArrayElements(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	int MaxOfArray(int Array[100], int ArrayLength) {
		int Max = 0;
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] >= Max) {
				Max = Array[i];
			}
		}
		return Max;
	}

	void Task()
	{
		srand((unsigned)time(NULL));
		int Array[100], ArrayLength;
		FillArrayWithRandomNumbers(Array, ArrayLength);
		cout << "\nArray Elements: ";
		PrintArrayElements(Array, ArrayLength);
		cout << "\n\nMax Number is: " << MaxOfArray(Array, ArrayLength) << "\n";

	}

	/*
	read number to be length  done

	random number function  done

	forloop to fill array   done

	forloop print Array elements done

	forloop to get max of array  done

	*/

}



