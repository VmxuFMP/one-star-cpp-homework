#include <iostream>
#include <vector>

using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;

	for (int i = 1; i <= test_cases; i++) {
		char dummy1, dummy2;
		int N;
		cin >> dummy1 >> dummy2 >> N;

		bool is_symmetric = true;
		int total_elements = N * N;
		vector<long long> arr(total_elements);

		for (int j = 0; j < total_elements; j++) {
			cin >> arr[j];
			if (arr[j] < 0) {
				is_symmetric = false;
			}
		}

		for (int k = 0; k < total_elements / 2; k++) {
			if (arr[k] != arr[total_elements - 1 - k]) {
				is_symmetric = false;
				break;
			}
		}

		if (is_symmetric) {
			cout << "Test #" << i << ": Symmetric." << "\n";
		}
		else {
			cout << "Test #" << i << ": Non-symmetric." << "\n";
		}
	}
	return 0;
}

/*
UVa 11349 題目

You‘re given a square matrix M . Elements of this matrix are Mij : f0 < i < n, 0 < j < ng. In this
problem you’ll have to find out whether the given matrix is symmetric or not.
Definition: Symmetric matrix is such a matrix that all elements of it are non-negative and symmetric
with relation to the center of this matrix. Any other matrix is considered to be non-symmetric. For
example:
M =
5 1 3
2 0 2
3 1 5
is symmetric
M =
5 1 3
2 0 2
0 1 5
is not symmetric, because 3 != 0

All you have to do is to find whether the matrix is symmetric or not. Elements of a matrix given
in the input are 232  Mij  232 and 0 < n  100.

輸入說明：
First line of input contains number of test cases T <= 300. Then T test cases follow each described in
the following way. The first line of each test case contains n – the dimension of square matrix. Then
n lines follow each of then containing row i. Row contains exactly n elements separated by a space
character. j-th number in row i is the element Mij of matrix you have to process.

輸出說明：
For each test case output one line ‘Test #t: S’. Where t is the test number starting from 1. Line S
is equal to ‘Symmetric’ if matrix is symmetric and ‘Non-symmetric’ in any other case.
*/
