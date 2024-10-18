#pragma once

#include <iostream>
using namespace std;

namespace P41_IsPalindromArray {

	void FillArray(int Array[100], int ArrayLength) {
		cout << "Enter array elements:" << endl;
		for (int i = 0; i < ArrayLength; i++) {
			cin >> Array[i];
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	bool IsArrayPalindrome(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			if (Array[i] != Array[ArrayLength - 1 - i]) {
				return false;
			}
		}
		return true;
	}

	void Task()
	{


		int Array[100], ArrayLength = 6, Array2[100], Array2Length = 0;

		FillArray(Array, ArrayLength);
		cout << "\n\nArray Elements:" << endl;
		PrintArray(Array, ArrayLength);

		if (IsArrayPalindrome(Array, ArrayLength))
			cout << "\n\nYes, array is Palindrome" << endl;
		else
			cout << "\n\nNo, array is not Palindrome" << endl;

	}

}


