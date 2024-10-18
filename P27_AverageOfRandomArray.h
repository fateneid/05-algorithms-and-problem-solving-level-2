#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P27_AverageOfRandomArray {

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

	void PrintArrayElements(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	int SumOfArray(int Array[100], int ArrayLength) {
		int Sum = 0;
		for (int i = 0; i < ArrayLength; i++) {
			Sum += Array[i];
		}
		return Sum;
	}

	float AverageOfArray(int Array[100], int ArrayLength) {
		return (float)SumOfArray(Array, ArrayLength) / ArrayLength;

	}

	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength;

		FillArrayWithRandomNumbers(Array, ArrayLength);
		cout << "\nArray Elements: ";
		PrintArrayElements(Array, ArrayLength);
		cout << "\n\nAverage of all numbers is: " << AverageOfArray(Array, ArrayLength) << "\n";

	}

	/*
	read number to be array length   done
	random number function   done
	forloop to fill the array with random numbers  done
	forloop to Print the array  done
	forloop to sum the array  done
	divide the sum function by the array length
	*/

}

