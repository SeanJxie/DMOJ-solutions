/*
A boolean value can be either True or False. Given a string with less than 1000 characters
with a number of space-separated not directives terminated by a True or False value, evaluate the boolean expression.
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string boolean, res = "True";
	int notCount = 0;

	getline(cin, boolean);

		for (int i = 0; i < boolean.size(); i += 4) {
			if (boolean[i] == 'n') {
				notCount++;
			}

			else if (boolean[i] == 'T' && notCount % 2 != 0 || boolean[i] == 'F' && notCount % 2 == 0) {
				res = "False";
				break;
			}

		}

	cout << res;
	return 0;
}
