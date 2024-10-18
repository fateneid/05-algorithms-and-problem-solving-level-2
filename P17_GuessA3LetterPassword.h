#pragma once

#include <iostream>
using namespace std;

namespace P17_GuessA3LetterPassword {

	string ReadPassword() {
		string Password = "";
		cout << "Please enter a 3-Letter Password (all capital): " << endl;
		cin >> Password;
		return Password;
	}

	bool PrintResult(string Password) {
		string Guess = "";
		int Counter = 0;
		cout << "\n";
		for (int i = 65; i <= 90; i++) {
			for (int j = 65; j <= 90; j++) {
				for (int k = 65; k <= 90; k++) {
					Guess = Guess + char(i) + char(j) + char(k);
					Counter++;

					cout << "Trial [" << Counter << "]: " << Guess << endl;
					if (Guess == Password) {
						cout << "\nPassword is " << Password << endl;
						cout << "Found after " << Counter << " Trial(s)" << endl;
						return true;
					}
					Guess = "";


				}

			}

		}
		return false;

	}

	void Task()
	{
		PrintResult(ReadPassword());

	}


}

