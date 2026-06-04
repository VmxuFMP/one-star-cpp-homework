#include <iostream>
#include <string>

using namespace std;

int sumofdigit(string a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum = sum + (a.at(i) - '0');
	}
	return sum;
}

int main() {
	string s;
	while (cin >> s && s != "0") {
		int sum = sumofdigit(s);

		if (sum % 9 != 0) {
			cout << s << " is not a multiple of 9." << "\n";
		}
		else {
			int degree = 1;
			while (sum > 9) {
				sum = sumofdigit(to_string(sum));
				degree++;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << degree << "." << "\n";
		}
	}
	return 0;
}

/*
UVa 10922 題目
 
A well-known trick to know if an integer N is a multiple of nine is to compute the sum S of its digits.
If S is a multiple of nine, then so is N . This is a recursive test, and the depth of the recursion needed
to obtain the answer on N is called the 9-degree of N .
Your job is, given a positive number N , determine if it is a multiple of nine and, if it is, its 9-degree.

輸入說明：
The input is a file such that each line contains a positive number. A line containing the number 0 is
the end of the input. The given numbers can contain up to 1000 digits.

輸出說明；
The output of the program shall indicate, for each input number, if it is a multiple of nine, and in case
it is, the value of its nine-degree. See the sample output for an example of the expected formatting of
the output.
*/
