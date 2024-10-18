#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

namespace P33_FillArrayWithKeys {

	enum enCharacterType { CapitalCharacter = 1, SmallCharacter = 2, SpecialCharacter = 3, Digits = 4 };

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

	char RandomCharacter(enCharacterType CharType) {
		switch (CharType)
		{
		case enCharacterType::CapitalCharacter:
			return char(RandomNumberInRange(65, 90));
			break;
		case enCharacterType::SmallCharacter:
			return char(RandomNumberInRange(97, 122));
			break;
		case enCharacterType::SpecialCharacter:
			return char(RandomNumberInRange(33, 47));
			break;
		case enCharacterType::Digits:
			return char(RandomNumberInRange(48, 57));
			break;
		}
	}

	string RandomKey(int WordLength, int WordRepeat) {
		string Key = "", Dash = "-";

		for (int i = 0; i < WordRepeat; i++) {
			for (int j = 0; j < WordLength; j++) {
				Key = Key + RandomCharacter(enCharacterType::CapitalCharacter);
			}
			if (i == WordRepeat - 1) {
				Dash = "";
			}
			Key += Dash;
		}
		return Key;
	}

	void FillArrayWithRandomNumbers(string Array[100], int& ArrayLength) {
		ArrayLength = ReadPositiveNumber("Enter how many elements?");
		for (int i = 0; i < ArrayLength; i++) {
			Array[i] = RandomKey(4, 4);
		}
	}

	void PrintArray(string Array[100], int ArrayLength) {
		for (int i = 0; i < ArrayLength; i++) {
			cout << "Array [" << i << "]: " << Array[i] << endl;
		}
	}


	void Task()
	{
		srand((unsigned)time(NULL));

		string Array[100];
		int ArrayLength;

		FillArrayWithRandomNumbers(Array, ArrayLength);

		cout << "\nArray Elements:\n\n\n";
		PrintArray(Array, ArrayLength);
		cout << "\n";

	}

	/*
	read number from user to be the lengrh of array   done

	random character function

	for loop to make random key   2

	for loop to fill array with random keys

	print array function

	*/

}
