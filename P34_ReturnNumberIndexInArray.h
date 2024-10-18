#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P34_ReturnNumberIndexInArray {

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

	short FindNumberPositionInArray(int Array[100], int ArrayLength, int SearchFor) {
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] == SearchFor) {
				return i;
			}
		}
		return -1;
	}

	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength, SearchFor;

		FillArrayWithRandomNumbers(Array, ArrayLength);

		cout << "\nArray 1 elements:\n";
		PrintArray(Array, ArrayLength);

		cout << "\n\n\nPlease enter a number to search for?\n";
		cin >> SearchFor;
		cout << "Number you are looking for is: " << SearchFor << endl;

		short NumberPosition = FindNumberPositionInArray(Array, ArrayLength, SearchFor);

		if (NumberPosition == -1) {
			cout << "The number is not found :-( " << endl;
		}
		else {
			cout << "The number found at position: " << NumberPosition << endl;
			cout << "The number found its order: " << NumberPosition + 1 << endl;
		}

	}


}


