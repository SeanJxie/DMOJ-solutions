/*
You have a string (indexed from 0) with no more than 106 lowercase 
characters. Find the first occurrence of a string T (1≤|T|≤|S|≤106), or
print -1 if is not a substring of S.

Input Specification
The first line will have the string S.
The second line will have the string T.

Output Specification
Print the index of the first occurrence of the string T in S, or -1 if 
it is not a substring of S.
*/

#include <iostream>

using namespace std;

int find_substr(string str, string fstr) {
	int ind = 0, sameCount = 0, len = fstr.length();

	for (int i = 0; i < str.length(); ++i) {
		for (int j = 0; j < len; ++j) {
			if (str[i + j] == fstr[j]) {
				++sameCount;
			}

			else {
				sameCount = 0;
				break;
			}
		}

		if (sameCount == len) {
			break;
		}

		++ind;
	}

	if (sameCount == len){ return ind; }
	else { return -1; }
}

int main() {
	string s, f;
	cin >> s >> f;

	cout << find_substr(s, f);

	return 0;
}