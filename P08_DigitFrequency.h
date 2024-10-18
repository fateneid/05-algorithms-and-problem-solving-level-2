#pragma once

#include <iostream>
using namespace std;

namespace P08_DigitFrequency {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int FindDigitFrequency(int Number, int DigitToSearch) {
		int Remainder = 0, Counter = 0;
		while (Number > 0) {
			Remainder = Number % 10;
			Number = Number / 10;
			if (Remainder == DigitToSearch)
				Counter++;
		}
		return Counter;
	}

	void Task()
	{
		int Number = ReadPositiveNumber("Please enter the number?");
		short DigitToSearch = ReadPositiveNumber("Please enter one digit to search?");
		cout << "Digit " << DigitToSearch << " Frequency is " << FindDigitFrequency(Number, DigitToSearch) << " Time(s)." << endl;

	}

}

