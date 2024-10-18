#pragma once

#include <iostream>
using namespace std;

namespace P06_SumOfDigits {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Enter a positive number:" << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int SumOfDigits(int Number) {
		int Remainder = 0, Sum = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Sum += Remainder;
		}
		return Sum;
	}

	void Task()
	{
		cout << "Sum Of Digits = " << SumOfDigits(ReadPositiveNumber()) << endl;

	}

}


