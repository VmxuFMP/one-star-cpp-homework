#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long x;
	while (cin >> x) {
		cin.ignore();

		string line;
		getline(cin, line);

		stringstream ss1(line);
		long long temp;
		int count = 0;
		while (ss1 >> temp) {
			count++;
		}

		int n = count - 1; //最高次

		stringstream ss2(line);
		long long coef;
		long long ans = 0;

		for (int i = 0; i < n; i++) {
			ss2 >> coef;
			ans = ans * x + coef * (n - i);
		}

		cout << ans << "\n";
	}
	return 0;
}

/*
UVa 10268 題目

Looking throw the “Online Judge’s Problem Set Archive” I found a very interesting problem number 498, titled “Polly the Polynomial”. 
Frankly speaking, I did not solve it, but I derived from it this problem.
Everything in this problem is a derivative of something from 498. 
In particular, 498 was “... designed to help you remember ... basic algebra skills, make the world a better place, etc., etc.”. 
This problem is designed to help you remember basic derivation algebra skills, 
increase the speed in which world becomes a better place, etc., etc.
In 498 you had to evaluate the values of polynomial

a0x^n + a1x^n−1 + . . . + an−1x + an.

In this problem you should evaluate its derivative. Remember that derivative is defined as

a0nx^n−1 + a1(n − 1)x^n−2 + . . . + an−1.

All the input and output data will fit into integer, i.e. its absolute value will be less than 2^31.

輸入說明：
Your program should accept an even number of lines of text. Each pair of lines will represent one
problem. The first line will contain one integer - a value for x. The second line will contain a list of
integers a0, a1, ..., an−1, an, which represent a set of polynomial coefficients.
Input is terminated by EOF.

輸出說明：
For each pair of lines, your program should evaluate the derivative of polynomial for the given value x
and output it in a single line.
*/
