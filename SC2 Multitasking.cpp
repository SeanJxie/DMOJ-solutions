/*
Last night, Henning was playing Starcraft 2 while simultaneously attempting 
to finish his English essay. Because he is such a grandmaster at the game, he
can in fact do such a thing - but he only has a single keyboard. Henning has to
reserve two thirds of his keyboard to play Starcraft 2; given a list of N words 
in his English essay (1≤N≤100000) each one of them less than or equal to 10 letters
long, how many of them can be typed exclusively using one row of his QWERTY keyboard?

Input Specification
On the first line, the number N. On the next N lines, a single string of lowercase letters.

Output Specification
A single line containing the number of strings that can be typed exclusively using a 
single row of the QWERTY keyboard.
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	string word, mode, f = "qwertyuiop", s = "asdfghjkl", t = "zxcvbnm";
	int n, count = 0;
	bool valid = false;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;

		if (f.find(word[0]) != string::npos) {
			mode = f;
		}
		else if (s.find(word[0]) != string::npos) {
			mode = s;
		}
		else {
			mode = t;
		}

		for (int j = 0; j < word.size(); j++) {
			if (mode.find(word[j]) == string::npos) {
				valid = false;
				break;
			}

			else {
				valid = true;
			}
		}

		if (valid) {
			count++;
		}
	}

	cout << count;
	return 0;
}
