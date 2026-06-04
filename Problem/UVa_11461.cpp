#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b && (a != 0 || b != 0)) {
        int count = 0;

        for (int i = 1; i * i <= b; i++) {
            if (i * i >= a) {
                count++;
            }
        }
        cout << count << "\n";
	}
	return 0;
}

/*
UVa 11461 題目
A square number is an integer number whose square root is also an integer. For example 1, 4, 81 are
some square numbers. Given two numbers a and b you will have to find out how many square numbers
are there between a and b (inclusive).

輸入說明：
The input file contains at most 201 lines of inputs. Each line contains two integers a and b (0 < a ≤
b ≤ 100000). Input is terminated by a line containing two zeroes. This line should not be processed.

輸出說明：
For each line of input produce one line of output. This line contains an integer which denotes how
many square numbers are there between a and b (inclusive).
*/
