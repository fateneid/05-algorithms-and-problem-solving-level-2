#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace P46_MyABS {

	float ReadNumber() {
		float Number;
		cout << "Please enter a number" << endl;
		cin >> Number;
		return Number;
	}

	float MyAbs(float Number) {
		if (Number < 0) {
			return -1 * Number;
		}
		else
			return Number;
	}

	void Task()
	{
		float MyNumber = ReadNumber();

		cout << "\n\nMy abs Result: " << MyAbs(MyNumber) << endl;
		cout << "\nC++ abs Result: " << abs(MyNumber) << endl;


	}

}


