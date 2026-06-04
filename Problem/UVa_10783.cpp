#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int a, b;
		cin >> a >> b;
    
		if (a % 2 == 0) a++;
		if (b % 2 == 0) b--;

		int sum = 0;
		if (a <= b) {
			int oddcount = ((b - a) / 2) + 1;
			sum = ((a + b) * oddcount) / 2;
		}

		cout << "Case " << i << ": " << sum << "\n";
	}
	return 0;
}

/*
UVa 10783 題目

Given a range [a, b], you are to find the summation of all the odd integers in this range. For example,
the summation of all the odd integers in the range [3, 9] is 3 + 5 + 7 + 9 = 24.

輸入說明：
There can be at multiple test cases. The first line of input gives you the number of test cases, T
(1 ≤ T ≤ 100). Then T test cases follow. Each test case consists of 2 integers a and b (0 ≤ a ≤ b ≤ 100)
in two separate lines.

輸出說明：
For each test case you are to print one line of output – the serial number of the test case followed by
the summation of the odd integers in the range [a, b].
*/
