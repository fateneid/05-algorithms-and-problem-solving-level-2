#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P23_FillArrayWithRandomNumbersFrom1To100 {

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

	void FillArrayWithRandomNumbers(int Array[100], int ArrayLenght) {

		for (int i = 0; i < ArrayLenght; i++) {
			Array[i] = RandomNumberInRange(1, 100);
		}
	}

	void PrintArray(int Array[100], int ArrayLenght) {
		for (int i = 0; i < ArrayLenght; i++) {
			cout << Array[i] << " ";
		}
	}



	void Task()
	{
		srand((unsigned)time(NULL));
		int Array[100];

		int ArrayLenght = ReadPositiveNumber("Please enter a number?");

		FillArrayWithRandomNumbers(Array, ArrayLenght);

		cout << "Array Elements: ";
		PrintArray(Array, ArrayLenght);

	}

	/*

	read number to be the arraylength   done

	radom numbers   done

	for loop to fill array with radom numbers  done

	for loop to print array  done

	*/

}

