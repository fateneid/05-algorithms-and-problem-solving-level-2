#pragma once

#include <iostream>
using namespace std;

namespace P04_PerfectNumberFrom1ToN {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Please enter a positive number?" << endl;
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

	void PrintPerfectNumbersFrom1ToN(int Number) {

		for (int i = 1; i <= Number; i++) {

			if (IsPerfect(i))
				cout << i << endl;
		}
	}

	void Task()
	{

		PrintPerfectNumbersFrom1ToN(ReadPositiveNumber());


	}

}


/*

read number      done

find number's factors     done

sum the factors excluding the number itself   done

compare if it's equale to the number itself or not done

print the result  done


*/
