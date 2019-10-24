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