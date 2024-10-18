#pragma once

#include <iostream>
using namespace std;

namespace P02_PrintAllPrimeNumbers1ToN {

	enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

	int ReadPositiveNumber() {
		int N = 0;
		do {
			cout << "Please enter a number?" << endl;
			cin >> N;
		} while (N <= 0);
		return N;
	}

	enPrimeOrNotPrime CheckPrime(int Number)
	{
		int M = round(Number / 2);

		//Counter < Number Or Counter <= M

		for (int Counter = 2; Counter <= M; Counter++)
		{
			if (Number % Counter == 0)
				return enPrimeOrNotPrime::NotPrime;
		}
		return  enPrimeOrNotPrime::Prime;
	}

	void PrintPrimeNumbersFrom1ToN(int Number)
	{
		for (int i = 2; i <= Number; i++) {

			if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
				cout << i << endl;

		}
	}
	void Task()
	{
		PrintPrimeNumbersFrom1ToN(ReadPositiveNumber());

	}

}



