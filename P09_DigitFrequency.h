#pragma once

#include <iostream>
using namespace std;

namespace P09_DigitFrequency {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int FindDigitFrequency(int Number, short DigitToSearch) {
		int Remainder = 0, Counter = 0;
		while (Number > 0) {
			Remainder = Number % 10;
			Number = Number / 10;
			if (Remainder == DigitToSearch)
				Counter++;
		}
		return Counter;
	}

	void PrintDigitsFrequency(int Number) {
		for (int i = 0; i < 10; i++) {
			short DigitFrequency = 0;
			DigitFrequency = FindDigitFrequency(Number, i);
			if (DigitFrequency > 0) {
				cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)." << endl;
			}
		}
	}

	void Task()
	{
		PrintDigitsFrequency(ReadPositiveNumber("Please enter the number?"));

	}

}

