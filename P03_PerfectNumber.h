#pragma once

#include <iostream>
using namespace std;

namespace P03_PerfectNumber {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Please enter a positive number to check if it's perfect:" << endl;
			cin >> Number;
		} while (Number <= 0);
		return Number;
	}

	bool IsPerfect(int Number) {
		int Sum = 0;
		for (int Counter = 1; Counter < Number; Counter++) {
			if (Number % Counter == 0) {
				Sum += Counter;
			}
		}
		return(Sum == Number);
	}

	void PrintIsPerfectOrNot(int Number) {
		if (IsPerfect(Number))
			cout << Number << " is perfect" << endl;
		else
			cout << Number << " is not perfect" << endl;
	}

	void Task()
	{

		PrintIsPerfectOrNot(ReadPositiveNumber());


	}

}



/*

read number      done

find number's factors     done

sum the factors excluding the number itself   done

compare if it's equale to the number itself or not done

print the result  done


*/
