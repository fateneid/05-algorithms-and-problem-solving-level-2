#pragma once

#include <iostream>
using namespace std;

namespace P15_LetterPattern {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void PrintLetterPattern(int Number) {
		cout << endl;

		for (int i = 65; i <= 65 + Number - 1; i++) {
			for (int j = 65; j <= i; j++) {
				cout << char(i);
			}
			cout << endl;
		}
	}

	//void PrintLetterPattern(int Number) {
	//	cout << endl;
	//	int ASCIIChar = 65;
	//	for (int i = 1; i <= Number; i++) {
	//		for (int j = 1; j <= i; j++) {
	//			cout << char(ASCIIChar);
	//		}
	//		cout << endl;
	//		ASCIIChar++;
	//	}
	//}

	void Task()
	{

		PrintLetterPattern(ReadPositiveNumber("Please enter a positive number?"));

	}

}



