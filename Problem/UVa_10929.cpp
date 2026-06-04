#include <iostream>
#include <string>

using namespace std;

bool multiple_of_11(string s) {
	int sum_odd_digit = 0, sum_even_digit = 0;

	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			sum_odd_digit += s.at(i) - '0';
		}
		else {
			sum_even_digit += s.at(i) - '0';
		}
	}

	return (sum_odd_digit - sum_even_digit) % 11 == 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	while (cin >> s && s != "0") {
		if (multiple_of_11(s)) {
			cout << s << " is a multiple of 11." << "\n";
		}
		else {
			cout << s << " is not a multiple of 11." << "\n";
		}
	}
	return 0;
}

/*
UVa 10929 題目

Your job is, given a positive number N , determine if it is a multiple of eleven.

輸入說明：
The input is a file such that each line contains a positive number. A line containing the number ‘0’ is
the end of the input. The given numbers can contain up to 1000 digits.

輸出說明：
The output of the program shall indicate, for each input number, if it is a multiple of eleven or not.
*/
