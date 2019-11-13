#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	string sen, res, temp;
	int i1, i2 = -1;

	getline(cin, sen);

	for (int i = 0; i < sen.size(); i++) {
		if (sen[i] == ':' && i != i2) {
			i1 = i + 1;

			if (i != sen.size() - 1) {
				i2 = sen.substr(i1 + 1).find(':') + i1 + 1;
			}

			temp = sen.substr(i1, i2 - i1);
			
			if (i != sen.size() - 1) {
				res += temp + '\n';
				
			}
		}
	}

	cout << res.substr(0, res.size() - 1);
	return 0;
}
