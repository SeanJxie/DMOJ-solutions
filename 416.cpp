/*
2015 Mock CCC by Alex and Timothy
Area codes 416 and 647 are telephone area codes serving the single rate centre of 
Toronto, Ontario, Canada. However, as the city's people and organizations grow, these 
area codes are becoming exhausted. In 2011, the Canadian Radio-television and 
Telecommunications Commission (CRTC) have announced Toronto's new 437 area code.

As the years go by, the classic 416 area code is becoming more and more rare. In fact, 
416 phone numbers are being sold for hundreds, even thousands of dollars. Businesspeople
feel that a 647 or a 437 number gives customers a feeling that their business is not established.
A 416 number tells customers that they have been in business for a while.

We will consider a valid phone number to contain 10 numerical digits in total (3 digits for 
the area code and 7 digits for the local number). For this problem, we will always denote a 
phone number by the area code, followed by a space, followed by the local number. Furthermore, 
since we are only concerned with businesses in central Toronto, valid phone numbers must have 
the area codes 416, 647, or 437. An invalid phone number is one that does not follow these rules.
Examples of valid phone numbers are 416 1234567 and 437 9876543. Examples of invalid phone 
numbers are 647 12345678, 905 6413431 or 4161 596111.

Additionally, if a valid phone number has a 416 area code, then we will consider it to be valuable.
All other valid phone numbers are valueless. Part of your job as a vendor of fine 416 numbers
is to determine the value of a phone number. Of course, your life would be easier with the help 
of an automated program. So, write a program that when given a phone number, classifies it as 
either invalid, valuable, or valueless.

Input Format
The input will contain two sequences of digits separated by a single space, representing a 
phone number that you must classify. The first sequence will represent the area code and the 
second sequence will represent the local number. Neither of the sequences will exceed 9 digits in length.

Output Format
Output a single word (all lowercase), either invalid, valuable, or valueless.
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	string ac, lc, valid = "416 647 437";
	cin >> ac >> lc;
	if (lc.length() < 7 || valid.find(ac) == string::npos) {
		cout << "Invalid";
	}
	else if (ac == "416") {
		cout << "Valuable";
	}
	else {
		cout << "Invaluable";
	}

	return 0;
}
