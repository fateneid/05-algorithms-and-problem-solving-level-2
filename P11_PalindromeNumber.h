#pragma once

#include <iostream>
using namespace std;

namespace P11_PalindromeNumber {

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

	bool IsPalindromeNumber(int Number) {

		return (Number == ReverseNumber(Number));

	}



	void Task()
	{
		if (IsPalindromeNumber(ReadPositiveNumber("Please enter a number?")))
			cout << "Yes, it is a Palindrome number." << endl;
		else
			cout << "No, it is NOT a Palindrome number." << endl;

	}

}


