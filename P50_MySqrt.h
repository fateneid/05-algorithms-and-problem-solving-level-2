#pragma once

#include <iostream>
#include <Cmath>
using namespace std;

namespace P50_MySqrt {

	float ReadNumber() {
		float Number;
		cout << "Please enter a number" << endl;
		cin >> Number;
		return Number;
	}

	float MySqrt(float Number) {


		float SqrtNumber = pow(Number, 0.5);

		return SqrtNumber;

	}

	void Task()
	{
		float MyNumber = ReadNumber();

		cout << "\n\nMy MySqrt Result: " << MySqrt(MyNumber) << endl;
		cout << "\nC++ sqrt Result: " << MySqrt(MyNumber) << endl;

	}

}

