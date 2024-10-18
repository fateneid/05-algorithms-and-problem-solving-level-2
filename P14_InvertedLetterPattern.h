#pragma once

#include <iostream>
using namespace std;

namespace P14_InvertedLetterPattern {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	//void PrintInvertedLetter(int Number) {
	//	// A : Z  --->  65 : 90
	//
	//	int ASCIIChar = Number + 65 -1;
	//	for (int i = Number; i >= 1; i--) {
	//		for (int j = 1; j <= i; j++) {
	//			cout << char(ASCIIChar);	
	//
	//		}
	//		cout << endl;
	//		ASCIIChar--;
	//	}
	//}

	void PrintInvertedLetter(int Number) {
		// A : Z  --->  65 : 90


		for (int i = Number + 65 - 1; i >= 65; i--) {
			for (int j = 65; j <= i; j++) {
				cout << char(i);
			}
			cout << endl;
		}
	}

	void Task()
	{

		PrintInvertedLetter(ReadPositiveNumber("Please enter a positive number?"));

	}

}

