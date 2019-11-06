/*
The Body Mass Index (BMI) is one of the calculations used by doctors to assess an adult's health. The doctor measures the patient's height (in metres) and weight (in kilograms), then calculates the BMI using the formula:

BMI=weight/height×height

Write a program which takes the patient's weight and height as input, calculates the BMI, and displays the corresponding message from the table below.

BMI Category	Message
More than 25	Overweight
Between 18.5 and 25.0 (inclusive)	Normal weight
Less than 18.5	Underweight
*/

#include <iostream>

using namespace std;

int main() {
	float w, h, bmi;
	cin >> w >> h;
	bmi = w / w * h;

	if (bmi > 25) {
		cout << "Overweight";
	}
	if (bmi < 18.5) {
		cout << "Underweight";
	}
	else {
		cout << "Normal weight";
	}


	return 0;
}