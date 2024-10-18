#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace  P29_CopyOnlyPrimeNumbers {

	enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

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

	void FillArrayWithRandomNumbers(int Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter the number of array elements:");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomNumberInRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << Array[i] << " ";
		}
	}

	enPrimeOrNotPrime IsPrimeOrNot(int Number) {
		if (Number < 2) {
			return enPrimeOrNotPrime::NotPrime;
		}
		int M = round(Number / 2);

		for (int Counter = 2; Counter <= M; Counter++) {
			if (Number % Counter == 0) {
				return enPrimeOrNotPrime::NotPrime;
			}
		}
		return enPrimeOrNotPrime::Prime;
	}

	void CopyArrayOnlyPrime(int Array[100], int Array2[100], int ArrayLength, int& ArrayLength2) {
		ArrayLength2 = 0;
		for (int i = 0; i < ArrayLength; i++) {
			if (IsPrimeOrNot(Array[i]) == enPrimeOrNotPrime::Prime) {
				Array2[ArrayLength2] = Array[i];
				ArrayLength2++;
			}
		}
	}


	void Task()
	{
		srand((unsigned)time(NULL));

		int Array[100], ArrayLength, Array2[100], ArrayLength2;

		FillArrayWithRandomNumbers(Array, ArrayLength);
		cout << "\nArray 1 elements: \n";
		PrintArray(Array, ArrayLength);
		CopyArrayOnlyPrime(Array, Array2, ArrayLength, ArrayLength2);
		cout << "\n\nPrime Numbers in Array2: \n";
		PrintArray(Array2, ArrayLength2);
		cout << endl;
		cout << ArrayLength2;

	}

	/*
	Read number to be length of array   done
	random number function   done
	fill array   done
	print array done
	copy array  done

	*/

}


