/*
Canadian Computing Competition: 2014 Stage 1, Junior #1
You have trouble remembering which type of triangle is which. You write a program to help. 
Your program reads in three angles (in degrees).

If all three angles are 60, output Equilateral.
If the three angles add up to 180 and exactly two of the angles are the same, output Isosceles.
If the three angles add up to 180 and no two angles are the same, output Scalene.
If the three angles do not add up to 180, output Error.
Input Specification
The input consists of three integers, each on a separate line. Each integer will be greater than 
0 and less than 180.

Output Specification
Exactly one of Equilateral, Isosceles, Scalene or Error will be printed on one line.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int one, two, three, prev, curr = 0, eqAng = 0;
	string type = "Error";
	vector<int> ang;

	cin >> one >> two >> three;
	ang.push_back(one);
	ang.push_back(two);
	ang.push_back(three);

	prev = ang[2];
	for (int i = 0; i < 3; i++) {
		curr = ang[i];

		if (curr == prev) {
			eqAng++;
		}
		
		prev = ang[i];
		
	}

	if (one + two + three == 180) {
		if (eqAng == 3) {
			type = "Equilateral";
		}
		if (eqAng == 1) {
			type = "Isosceles";
		}
		if (eqAng == 0){
			type = "Scalene";
		}
	}

	cout << type;

	return 0;
}