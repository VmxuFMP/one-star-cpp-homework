#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int I;
	while (cin >> I && I != 0) {
		int P = 0;
		string binary = "";
		while (I > 0) {
			binary += to_string(I % 2);
			I /= 2;
		}
		reverse(binary.begin(), binary.end());

		for (int i = 0; i < binary.size(); i++) {
			if (binary.at(i) == '1') {
				P++;
			}
		}

		cout << "The parity of " << binary << " is " << P << " (mod 2)." "\n";
	}
}

/*
UVa 10931 題目

We define the parity of an integer n as the sum of the bits in binary representation computed modulo
two. As an example, the number 21 = 101012 has three 1s in its binary representation so it has parity
3(mod2), or 1.
In this problem you have to calculate the parity of an integer 1 ≤ I ≤ 2147483647.

輸入說明：
Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that
should not be processed.

輸出說明：
For each integer I in the inputt you should print a line ‘The parity of B is P (mod 2).’, where B
is the binary representation of I.
*/
