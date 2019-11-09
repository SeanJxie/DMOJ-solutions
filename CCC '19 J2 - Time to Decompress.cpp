#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	int n, t;
	char c;
	string out;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t >> c;
		string r(t, c);
		if (i != n - 1) {
			out += r + '\n';
		}
		else {
			out += r;
		}
	}

	cout << out;

	return 0;
}
