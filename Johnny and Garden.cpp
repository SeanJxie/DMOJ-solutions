/*
Jonathan Sinners is a 42 year-old gardener born on the 20th of April. He has a large garden in his backyard, 
currently making him hundreds of thousands of dollars. Having so much money, Johnny hires a file-saving servant
for the new advanced computer he uses to distribute his herbs, fungi and onions. Whenever Johnny saves a computer
file, the program detects the file format from the extension if it is included, and otherwise, it prompts it from 
the user. An extension consists of a string up to 5 letters which, if it appears in the file name, follows the 
first and only period.

Write a program for Johnny so he won't waste his money on servants for doing such simple tasks and he can save 
up to eventually expand his gardening empire.

Input
The first line of input is Johnny's file name, which may or may not include an extension and is at maximum 25 
characters in length.

There will be a second line of input if and only if the first line of input does not contain an extension, and 
will consist of the extension, without a period.

The file name may include any special characters (including spaces).

Output
The only line of output (which is case-sensitive) will be of the format "file name" - extension, where file 
name should be replaced with the file name and extension should be replaced by the lower-case form of the extension.
*/

#include <iostream>
#include <string>

using namespace std;

string str_tolower(string s) {
	string res;
	for (int i = 0; i < s.length(); i++) {
		res += tolower(s[i]);
	}

	return res;
}

int main() {
	string file, filename, ex;
	getline(cin, file);
	int iDot = file.find('.');

	if (iDot == string::npos) {
		cin >> ex;
		filename = file;
	}

	else {
		ex = file.substr(iDot + 1);
		filename = file.substr(0, file.length() - ex.length() - 1);
	}

	cout << '"' << filename << '"' << " - " << str_tolower(ex);

	return 0;
}