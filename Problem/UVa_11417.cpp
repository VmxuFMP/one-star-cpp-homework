#include <iostream>

using namespace std;

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int N;
	while (cin >> N && N != 0) {
		long long G = 0;
		for (int i = 1; i < N; i++){
			for (int j = i + 1; j <= N; j++) {
					G += GCD(i, j);
			}
		}
		cout << G << "\n";
	}
	return 0;
}

/*
UVa 11417 題目

Given the value of N , you will have to find the value of G. The definition of G is given below:
Here GCD(i, j) means the greatest common divisor of integer i and integer j.
For those who have trouble understanding summation notation, the meaning of G is given in the
following code:
G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}
Here GCD() is a function that finds
the greatest common divisor of the two
input numbers

輸入說明：
The input file contains at most 100 lines of inputs. Each line contains an integer N (1 < N < 501).
The meaning of N is given in the problem statement. Input is terminated by a line containing a single
zero. This zero should not be processed.

輸出說明：
For each line of input produce one line of output. This line contains the value of G for corresponding
N .
*/
