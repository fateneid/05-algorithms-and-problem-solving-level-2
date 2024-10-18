#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace P49_MyCeil {

	float ReadNumber() {
		float Number;
		cout << "Please enter a number" << endl;
		cin >> Number;
		return Number;
	}

	float MyCeil(float Number) {

		int IntPart = (int)Number;

		if (Number > 0 && Number != IntPart)
			return ++IntPart;
		else
			return IntPart;

	}

	void Task()
	{
		float MyNumber = ReadNumber();

		cout << "\n\nMy MyCeil Result: " << MyCeil(MyNumber) << endl;
		cout << "\nC++ Ceil Result: " << ceil(MyNumber) << endl;

	}

}

