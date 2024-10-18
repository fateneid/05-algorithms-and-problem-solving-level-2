#pragma once

#include <iostream>
#include<string>
using namespace std;

namespace P18_EncryptAndDecryptText {

	string ReadText() {
		string Text;
		cout << "Please enter the text:" << endl;
		getline(cin, Text);
		return Text;
	}

	string EncryptText(string Text, short EncryptionKey) {

		for (int i = 0; i <= Text.length(); i++) {
			Text[i] = char((int)Text[i] + EncryptionKey);
		}

		return Text;

	}

	string DecryptText(string Text, short EncryptionKey) {

		for (int i = 0; i <= Text.length(); i++) {
			Text[i] = char((int)Text[i] - EncryptionKey);
		}

		return Text;

	}


	void Task()
	{
		const short EncryptionKey = 2;
		string Text = ReadText();

		cout << "\nText before Encryption: " << Text << endl;
		cout << "Text After Encryption: " << EncryptText(Text, EncryptionKey) << endl;
		cout << "Text After Decryption: " << DecryptText(EncryptText(Text, EncryptionKey), EncryptionKey) << endl;


	}

}



