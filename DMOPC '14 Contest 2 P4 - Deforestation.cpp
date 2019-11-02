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