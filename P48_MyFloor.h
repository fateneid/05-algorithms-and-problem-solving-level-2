#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace P48_MyFloor {

	float ReadNumber() {
		float Number;
		cout << "Please enter a number" << endl;
		cin >> Number;
		return Number;
	}

	float MyFloor(float Number) {

		int IntPart = (int)Number;

		if (Number >= 0)
			return IntPart;
		else
			return --IntPart;

	}

	void Task()
	{
		float MyNumber = ReadNumber();

		cout << "\n\nMy MyFloor Result: " << MyFloor(MyNumber) << endl;
		cout << "\nC++ floor Result: " << floor(MyNumber) << endl;

	}

}

