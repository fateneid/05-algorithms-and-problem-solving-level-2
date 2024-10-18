#pragma once

#include <iostream>
using namespace std;

namespace P05_PrintDigitsInAReversedOrder {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Enter a positive number:" << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	void PrintDigits(int Number) {
		int Remainder = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			cout << Remainder << endl;
		}
	}

	void Task()
	{
		PrintDigits(ReadPositiveNumber());

	}

}



/*

read number


*/
