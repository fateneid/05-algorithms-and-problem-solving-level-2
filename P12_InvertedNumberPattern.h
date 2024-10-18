#pragma once

#include <iostream>
using namespace std;

namespace P12_InvertedNumberPattern {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void PrintInvertedPattern(int Number) {
		for (int i = Number; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				cout << i;
			}
			cout << endl;
		}
	}


	void Task()
	{
		PrintInvertedPattern(ReadPositiveNumber("Please enter a number?"));
	}

}


