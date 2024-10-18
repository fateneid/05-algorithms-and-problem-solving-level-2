#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P36_AddArrayElementSimiDynamic {

	int ReadNumber() {
		int Number;
		cout << "Please enter a number? ";
		cin >> Number;
		return Number;
	}

	void AddArrayElement(int Number, int Array[100], int& ArrayLength) {
		Array[ArrayLength] = Number;
		ArrayLength++;
	}

	void ReadNumbersInArray(int Array[100], int& ArrayLength) {
		bool AddMore = true;
		do {
			AddArrayElement(ReadNumber(), Array, ArrayLength);
			cout << "\nDo you want to add more numbers? [0]:No,[1]:Yes? ";
			cin >> AddMore;
			cout << "\n\n";
		} while (AddMore);
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	void Task()
	{
		int Array[100], ArrayLength = 0;

		ReadNumbersInArray(Array, ArrayLength);
		cout << "Array Length: " << ArrayLength;
		cout << "\n\nArray elements: ";
		PrintArray(Array, ArrayLength);
		cout << "\n";

	}

}


