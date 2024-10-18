#pragma once

#include <iostream>
#include<cstdlib>
using namespace std;

namespace P20_RandomSmallLetterCapitalLetterSpecialCharacterDigit {

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
	void Task()
	{
		srand((unsigned)time(NULL));

		cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
		cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
		cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
		cout << GetRandomCharacter(enCharType::Digit) << endl;


	}

}

