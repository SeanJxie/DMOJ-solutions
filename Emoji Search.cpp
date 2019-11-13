/*
Emojis can be sent easily by formatting an emoji in form :x:, where x is a string 
containing alphanumeric characters and spaces that identifies the emoji, this is called 
an identifier. Emojis are always scanned left to right and terminate at the first colon. 
After an emoji is found, the identifier and the colons that surround it are replaced with 
a character that represents the specific emoji, called an emoji character. The scanning 
then continues at the emoji character until the end of the string.

Can you write a program that outputs a list of emoji identifiers in a sentence?

Input Specification
The first line will contain a sentence S (1≤|S|≤2 000), the sentence to check for emojis. 
Sentence S will only contain alphanumeric characters, colons, and spaces. It is guaranteed
there will be no adjacent spaces and colons, and no trailing/leading spaces.

Output Specification
Output the emoji names in the sentence S in the order they appear in the sentence, one 
emoji name per line. It is guaranteed there will be at least one emoji.
*/

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
