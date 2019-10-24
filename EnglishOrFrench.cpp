#include <iostream>
#include <string>

using namespace std;

/*
You would like to do some experiments in natural language processing. Natural language processing (NLP) involves using machines to recognize human languages.

Your first idea is to write a program that can distinguish English text from French text.

After some analysis, you have concluded that a very reasonable way of distinguishing these two languages is to compare the 
occurrences of the letters t and T to the occurrences of the letters s and S. Specifically:

if the given text has more t and T characters than s and S characters, we will say that it is (probably) English text;
if the given text has more s and S characters than t and T characters, we will say that it is (probably) French text;
if the number of t and T characters is the same as the number of s and S characters, we will say that it is (probably) French text.
Input Specification
The input will contain the number N (0<N<10000) followed by N lines of text, where each line has at least one character and no 
more than 100 characters.

Output Specification
Your output will be one line. This line will either consist of the word English (indicating the text is probably English) or 
French (indicating the text is probably French).
*/

int main()
{
	int num_lines;
	int en_count = 0;
	int fr_count = 0;

	cin >> num_lines;

	string text;
	for (int i = 0; i <= num_lines; i++) {
		getline(cin, text);

		for (int i = 0; i < text.length(); i++) {
			if (tolower(text[i]) == 't') {
				en_count++;
			}

			if (tolower(text[i]) == 's') {
				fr_count++;
			}

		}

	}

	if (en_count > fr_count) {
		cout << "English";
	}
	else {
		cout << "French";
	}

	return 0;
}
