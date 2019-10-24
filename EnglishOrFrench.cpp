#include <iostream>
#include <string>

using namespace std;

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
