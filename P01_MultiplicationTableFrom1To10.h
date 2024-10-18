#pragma once

#include <iostream>
using namespace std;

namespace P01_MultiplicationTableFrom1To10 {

	void PrintTableHeader(int From, int To) {

		cout << "\n\n\t\t\tMultiplication Table From " << From << " to " << To << "\n\n";
		for (int i = From; i <= To; i++) {
			cout << "\t" << i;

		}
		cout << "\n_____________________________________________________________________________________________________\n";
	}

	string ColumnSperator(int i) {

		if (i < 10)
			return "    |";
		else
			return "   |";

	}

	void PrintMultiplicationTable(int From, int To) {

		PrintTableHeader(From, To);

		for (int i = From; i <= To; i++) {
			cout << " " << i << ColumnSperator(i) << "\t";

			for (int j = From; j <= To; j++) {
				cout << i * j << "\t";

			}
			cout << endl;
		}
	}

	void Task()
	{
		PrintMultiplicationTable(1, 10);
	}

}




