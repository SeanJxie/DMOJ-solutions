/*
The Logging Company has a long line of N (1≤N≤1000000) trees numbered from 0 to N−1.
Each tree i has a mass mi (0≤mi≤2000). The Company wants to cut some of the trees, so
they hired you to calculate the mass of all the wood they would get from cutting all 
the trees between positions a and b inclusive (0≤a,b<N). In particular, they want you 
to answer Q (1≤Q≤1000000) such queries.

Input Specification
First line: N.
Lines 2 to N+1: line i+2 is the mass of tree i, mi.
The line N+2 will contain the integer Q, the number of queries the logging company wants answered.
The next Q lines will contain the integers a and b.
Output Specification
For each query, print the total mass of the trees at position i such that a≤i≤b.

Scoring
For 30% of the points, N,Q≤1000.
For 50% of the points, N,Q≤10000.
For the rest, N,Q≤1000000.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N, temp, queries, lower, upper, sum = 0;
	string res, to_add;
	cin >> N;

	vector<int> psum;
	psum.push_back(0);

	for (int i = 0; i < N; i++) {
		cin >> temp;
		sum += temp;
		psum.push_back(sum);
	}

	cin >> queries;
	for (int j = 0; j < queries; j++) {
		cin >> lower >> upper;

		to_add = to_string(psum[upper + 1] - psum[lower]);

		if (j < queries - 1) {
			res += to_add + '\n';
		}
		
		else {
			res += to_add;
		}
	}

	cout << res;
	return 0;

}