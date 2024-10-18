#pragma once

#include <iostream>
#include<cstdlib>
using namespace std;

namespace P19_Random3NumbersFrom1To10 {

	int ReadPositiveNumber(string Message) {
		int Number;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	int RandomNumberInRange(int From, int To) {
		int RandomNumber = rand() % (To + 1 - From) + From;
		return RandomNumber;
	}

	void Task()
	{
		srand((unsigned)time(NULL));

		int From = ReadPositiveNumber("Please enter a number to start the range?");
		int To = ReadPositiveNumber("Please enter a number to end the range?");

		cout << "\n" << RandomNumberInRange(From, To) << endl;
		cout << RandomNumberInRange(From, To) << endl;
		cout << RandomNumberInRange(From, To) << endl;


	}

}



