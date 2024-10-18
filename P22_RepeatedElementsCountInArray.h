#pragma once

#include <iostream>
using namespace std;

namespace P22_RepeatedElementsCountInArray {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void ReadArray(int Array[100], int& arrLength) {

		arrLength = ReadPositiveNumber("Enter number of elements: ");
		cout << "\nEnter array elements:\n";
		for (int i = 0; i < arrLength; i++) {
			cout << "Element [" << i + 1 << "]: ";
			cin >> Array[i];

		}
		cout << endl;
	}

	void PrintArray(int Array[100], int& arrLength) {

		for (int i = 0; i < arrLength; i++) {
			cout << Array[i] << " ";
		}
	}

	int  TimesRepeated(int Array[100], int& arrLength, int NumberToCheck) {
		int Counter = 0;
		for (int i = 0; i < arrLength; i++) {
			if (Array[i] == NumberToCheck) {
				Counter++;
			}
		}
		return Counter;
	}


	void Task() {

		int Array[100], arrLength, NumberToCheck;

		ReadArray(Array, arrLength);

		NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

		cout << "\nOriginal array: ";
		PrintArray(Array, arrLength);

		cout << "\n" << NumberToCheck << " is repeated " << TimesRepeated(Array, arrLength, NumberToCheck) << " Time(s)\n";

	}

	/*

	Read array
	print array
	read number to check
	print timesRepeated

	*/

}

