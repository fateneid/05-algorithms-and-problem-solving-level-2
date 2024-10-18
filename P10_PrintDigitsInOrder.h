#pragma once

#include <iostream>
using namespace std;

namespace P10_PrintDigitsInOrder {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int ReverseNumber(int Number) {
		int Remainder = 0, Number2 = 0;
		while (Number > 0) {
			Remainder = Number % 10;
			Number = Number / 10;
			Number2 = Number2 * 10 + Remainder;
		}
		return Number2;
	}

	void PrintDigitsInOrder(int ReverseNumber) {
		int Remainder = 0;
		while (ReverseNumber > 0) {
			Remainder = ReverseNumber % 10;
			ReverseNumber = ReverseNumber / 10;
			cout << Remainder << endl;
		}

	}


	void Task()
	{
		PrintDigitsInOrder(ReverseNumber(ReadPositiveNumber("Please enter a number?")));
	}

}

