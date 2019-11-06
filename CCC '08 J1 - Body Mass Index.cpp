/*
The Body Mass Index (BMI) is one of the calculations used by doctors to assess an adult's health. The doctor measures the patient's height (in metres) and weight (in kilograms), then calculates the BMI using the formula:

BMI=weight/height×height

Write a program which takes the patient's weight and height as input, calculates the BMI, and displays the corresponding message from the table below.

BMI Category	Message
More than 25	Overweight
Between 18.5 and 25.0 (inclusive)	Normal weight
Less than 18.5	Underweight
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	float w, h, bmi;
	cin >> w >> h;
	bmi = w / (h * h);

	if (bmi > 25) {
		cout << "Overweight";
	}
	else if (bmi < 18.5) {
		cout << "Underweight";
	}
	else {
		cout << "Normal weight";
	}


	return 0;
}
