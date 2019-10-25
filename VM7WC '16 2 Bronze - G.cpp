/*
G is a good letter. Here is a 5x5 image of the letter G, made up of smaller G's:

GGGGG
G....
G..GG
G...G
GGGGG

Since G is such a good letter, we should make it very big. For example, we can increase it to three 
times the size:

GGGGGGGGGGGGGGG
GGGGGGGGGGGGGGG
GGGGGGGGGGGGGGG
GGG............
GGG............
GGG............
GGG......GGGGGG
GGG......GGGGGG
GGG......GGGGGG
GGG.........GGG
GGG.........GGG
GGG.........GGG
GGGGGGGGGGGGGGG
GGGGGGGGGGGGGGG
GGGGGGGGGGGGGGG

Even though G is such a good letter, we cannot spend time manually increasing the size of G. 
Write a program to magnify the given 5x5 image of G automatically.

Input Specification
On one line, the positive integer N(1≤N≤25), how much to magnify the image G. In the example 
given, N=3.

Output Specification
The output should be 5×N lines of 5×N characters each: the magnified image of G.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int multiplier;
	cin >> multiplier;

	string G5(5 * multiplier, 'G');
	string G1(multiplier, 'G');
	string G2(2 * multiplier, 'G');

	string D4(4 * multiplier, '.');
	string D2(2 * multiplier, '.');
	string D3(3 * multiplier, '.');


	for (int i = 0; i < multiplier; i++) {
		cout << G5 << endl;
	}
	for (int i = 0; i < multiplier; i++) {
		cout << G1 + D4 << endl;
	}
	for (int i = 0; i < multiplier; i++) {
		cout << G1 + D2 + G2 << endl;
	}
	for (int i = 0; i < multiplier; i++) {
		cout << G1 + D3 + G1 << endl;
	}
	for (int i = 0; i < multiplier; i++) {
		if (i != multiplier - 1) {
			cout << G5 << endl;
		}
		else {
			cout << G5;
		}
	}

	return 0;
}