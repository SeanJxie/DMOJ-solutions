/*
Write a program that repeatedly reads a positive integer, determines if
the integer is deficient, perfect, or abundant, and outputs the number along 
with its classification.

A positive integer, n, is said to be perfect if the sum of its proper divisors
equals the number itself. (Proper divisors include 1 but not the number itself.) 
If this sum is less than n, the number is deficient, and if the sum is greater 
than n, the number is abundant.

The input starts with the number of integers that follow. For each of the following
integers, your program should output the classification, as given below. You may 
assume that the input integers are greater than 1 and less than 32500.
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	int a, n, sum = 0;
	string res, type;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> n;
		for (int j = 1; j < n; j++) {
			if (n % j == 0) {
				sum += j;
			}
		}

		if (sum < n) {
			type = " is a deficient number.";
		}
		else if (sum > n) {
			type = " is an abundant number.";
		}
		else {
			type = " is a perfect number.";
		}

		sum = 0;

		if (i != a - 1) {
			res += to_string(n) + type + '\n';
		}
		else {
			res += to_string(n) + type;
		}

	}

	cout << res;

	return 0;
}
