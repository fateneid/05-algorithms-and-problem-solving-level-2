#pragma once

#include <iostream>
using namespace std;

namespace P07_ReverseNumber {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Enter a positive number:" << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void ReverseNumber(int Number) {
		int Remainder = 0, Number2 = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			//cout << Remainder;
			Number2 = Number2 * 10 + Remainder;
		}
		cout << Number2 << endl;
	}

	void Task()
	{
		ReverseNumber(ReadPositiveNumber());

	}

}

