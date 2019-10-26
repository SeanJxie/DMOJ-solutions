/*
When a credit card number is sent through the Internet it must be protected so that other 
people cannot see it. Many web browsers use a protection based on "RSA Numbers."

A number is an RSA number if it has exactly four divisors. In other words, there are 
exactly four numbers that divide into it evenly. For example, 10 is an RSA number because 
it has exactly four divisors (1,2,5,10). 12 is not an RSA number because it has too many divisors 
(1,2,3,4,6,12). 11 is not an RSA number either. There is only one RSA number in the range 10…12.

Write a program that inputs a range of numbers and then counts how many numbers from that range 
are RSA numbers. You may assume that the numbers in the range are less than 1000.
*/

#include <iostream>

using namespace std;

int main() {
	int lowerBound, upperBound, divCount = 1, rsaCount = 0;
	cin >> lowerBound;
	cin >> upperBound;

	for (int n = lowerBound; n <= upperBound; n++) {
		for (int k = 1; k <= n; k++) {

			if (n % k == 0) {
				cout << n << ' ' << k << ' ' << divCount << endl;
				divCount++;
			}

		}
		cout << "End Loop" << endl;
		cout << "Div = " << divCount << endl;
		if (divCount == 5) {
			cout << n << " is RSA" << endl;
			rsaCount++;

		}

		cout << "Reset div" << endl;
		divCount = 1;

	}

	cout << "The number of RSA numbers between " << lowerBound << " and " << upperBound << " is " << rsaCount;

	return 0;
}