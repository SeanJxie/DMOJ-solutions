/*
Brute Force Practice 3
You love prime numbers. You own a number, but you suspect it might not be prime. 
You want a prime number, but it must be at least as large as the number you currently
own. Find the smallest number that satisfies those conditions.
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N) {
	bool yes = true;

	for (int i = 2; i < sqrt(N); i++) {
		if (N % i == 0) {
			yes = false;
		}
	}

	return yes;
}


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	int myNum;
	cin >> myNum;

	if (myNum != 1) {
		while (!isPrime(myNum)) {
			myNum++;
		}

		cout << myNum;
	}

	else { // Hardcode gang
		cout << 2;
	}

	return 0;
}
