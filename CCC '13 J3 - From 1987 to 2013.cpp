/*
Canadian Computing Competition: 2013 Stage 1, Junior #3, Senior #1
You might be surprised to know that 2013 is the first year since 1987 with distinct digits. 
The years 2013, 2015, 2016, 2017, 2018, 2019 each have distinct digits. 2012 does not have distinct digits, 
since the digit 2 is repeated.

Given a year, what is the next year with distinct digits?

Input Specification
The input consists of one integer Y (0≤Y≤10000), representing the starting year.

Output Specification
The output will be the single integer D, which is the next year after Y with distinct digits.
*/

#include <iostream>
#include <string>

using namespace std;

bool has_multiple(string s, char c) {
	bool hasMultiple = false;
	
	if (s.find(c) != s.rfind(c)) {
		hasMultiple = true;
	}

	return hasMultiple;
}

bool distinct(int n) {
	string left_side, right_side, str_n = to_string(n);
	bool isDistinct = true;

	for (int i = 0; i < str_n.length() + 1; i++) {
		if (has_multiple(str_n, str_n[i])) {
			isDistinct = false;
		}

	}
	
	return isDistinct;
}

int main() {
	int start_yr;
	cin >> start_yr;

	while (true) {
		start_yr++;
		if (distinct(start_yr)) {
			break;
		}
		
	}

	cout << start_yr;

	return 0;
}
