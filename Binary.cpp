/*
Your computer science teacher has kindly requested that you write a program to convert a number, inputted 
in decimal, to binary to help in teaching students about binary. Also to aid in human processing of numbers, 
you should group every four bits and separate the groups by space.

Input Specification
The first line will be integer N (1≤N≤20), the number of numbers to convert to binary. The next N lines 
will be i such that (i∈Z,0≤i≤109).

Output Specification
For every integer i, output the binary representation, grouped into four bit groups, separated by spaces.
If necessary, you must pad the first group to have exactly four bits.
*/

#include <iostream>
#include <string>

using namespace std;

string strbinary(int n) {
	string rev_final, final;
	int remain, count = 0, ideal_groups = 1;

	while (n > 0) {
		remain = n % 2;
		rev_final += to_string(remain);
		n = n / 2;

		if (count == 4) {
			count = 0;
			ideal_groups++;
		}

		count++;

	}

	// TODO: Group digits into 4 in a group.
	if (long unsigned int(rev_final.length()) < 4 * ideal_groups) {
		string padding(4 * ideal_groups - rev_final.length(), '0');
		rev_final += padding;
	}

	int bit_count = 0;
	for (int i = rev_final.length() - 1; i > -1; i--) {
		if (bit_count == 4) {
			final += ' ';
			bit_count = 0;
		}

		final += rev_final[i];

		bit_count++;

	}	

	return final;

}

int main() {
	int amount, input;
	cin >> amount;

	string to_print;

	for (int i = 0; i < amount; i++) {
		cin >> input;
		if (i != amount - 1) {
			to_print += strbinary(input) + '\n';
		}

		else {
			to_print += strbinary(input);
		}

	}

	cout << to_print;

	return 0;
}