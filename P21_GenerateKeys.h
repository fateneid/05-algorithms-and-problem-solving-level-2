#pragma once

#include <iostream>
#include<cstdlib>
using namespace std;

namespace P21_GenerateKeys {

	int ReadPositiveNumber() {
		int Number;
		do {
			cout << "Please enter how many keys to generate?" << endl;
			cin >> Number;
		} while (Number < 0);
		return Number;
	}

	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

	int RandomNumberInRange(int From, int To) {

		int RandomNumber = rand() % (To + 1 - From) + From;


		return RandomNumber;

	}

	char GetRandomCharacter(enCharType CharType) {

		switch (CharType)
		{
		case enCharType::SmallLetter:
			return char(RandomNumberInRange(97, 122));
			break;
		case enCharType::CapitalLetter:
			return char(RandomNumberInRange(65, 90));
			break;
		case enCharType::SpecialCharacter:
			return char(RandomNumberInRange(33, 47));
			break;
		case enCharType::Digit:
			return char(RandomNumberInRange(48, 57));
			break;
		}

	}

	string GetRandomKey(short WordLength, short WordRepeat) {
		string Randomkey = "";
		string Dash = "-";
		for (int i = 1; i <= WordRepeat; i++) {
			for (int k = 1; k <= WordLength; k++) {
				Randomkey += GetRandomCharacter(enCharType::CapitalLetter);
			}
			Randomkey += Dash;
			if (i == WordRepeat - 1) {
				Dash = "";
			}
		}
		return Randomkey;
	}

	void PrintRandomKeys(short Number, short WordLength, short WordRepeat) {
		cout << "\n";
		for (int i = 1; i <= Number; i++) {
			cout << "Key [" << i << "]: " << GetRandomKey(WordLength, WordRepeat) << endl;
		}
	}

	void Task()
	{
		srand((unsigned)time(NULL));

		PrintRandomKeys(ReadPositiveNumber(), 4, 4);


	}

	/*
	read number
	for randomfunction

	for loop for printing
	*/

}

