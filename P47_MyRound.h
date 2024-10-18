#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace P47_MyRound {

	float ReadNumber() {
		float Number;
		cout << "Please enter a number" << endl;
		cin >> Number;
		return Number;
	}

	float GetFractionPart(float Number) {
		return Number - (int)Number;
	}

	float MyRound(float Number) {

		float FractionPart = GetFractionPart(Number);
		int IntPart = (int)Number;

		if (abs(FractionPart) >= 0.5) {
			if (Number > 0)
				return ++IntPart;
			else
				return --IntPart;
		}
		else {
			return IntPart;
		}
	}

	void Task()
	{
		float MyNumber = ReadNumber();

		cout << "\n\nMy Round Result: " << MyRound(MyNumber) << endl;
		cout << "\nC++ Round Result: " << round(MyNumber) << endl;

	}

}

