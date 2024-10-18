#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P37_CopyArrayUsingAddArrayElement {

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

	void CopyArray(int Array[100], int Array2[100], int ArrayLength, int& Array2Length) {
		for (int i = 0; i < ArrayLength; i++) {
			AddArrayElement(Array[i], Array2, Array2Length);
		}
	}


	void Task()
	{

		srand((unsigned)time(NULL));

		int Array[100], Array2[100], ArrayLength = 0, Array2Length = 0;

		FillArrayWithRandomNumbers(Array, ArrayLength);
		CopyArray(Array, Array2, ArrayLength, Array2Length);


		cout << "\n\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);
		cout << "\n\nArray 2 elements after copy: \n";
		PrintArray(Array2, Array2Length);
		cout << "\n";

	}
	/*
	read random number    done

	for loop to fill array with random numbers  done

	print array  done

	copy array

	addarray element


	*/

}

