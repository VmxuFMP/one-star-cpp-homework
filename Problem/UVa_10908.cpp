#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_Valid(const vector<string>& grid, int r, int c, int len, int M, int N) {
	int rad = len / 2;
	char target = grid[r][c];

	if (r - rad < 0 || r + rad >= M || c - rad < 0 || c + rad >= N) {
		return 0;
	} // 檢查邊界

	for (int i = r - rad; i <= r + rad; i++) {
		for (int j = c - rad; j <= c + rad; j++) {
			if (grid[i][j] != target) return 0;
		}
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	int M, N, Q;

	if (!(cin >> T)) return 0;

	for (int i = 0; i < T; i++) {
		if(!(cin >> M >> N >> Q)) break;
		vector<string> grid(M);

		for (int i = 0; i < M; i++) {
			cin >> grid[i];
		}

		cout << M << " " << N << " " << Q << "\n";

		while (Q--) {
			int r, c;
			cin >> r >> c;

			int maxLen = 1;
			for (int len = 3; ; len += 2) {
				if (is_Valid(grid, r, c, len, M, N)) {
					maxLen = len;
				}
				else {
					break;
				}
			}
			cout << maxLen << endl;
		}
	}
	return 0;
}

/*
UVa 10908 題目

Given a rectangular grid of characters you have to find out the length of a side of the largest square such
that all the characters of the square are same and the center [intersecting point of the two diagonals]
of the square is at location (r, c). The height and width of the grid is M and N respectively. Upper
left corner and lower right corner of the grid will be denoted by (0, 0) and (M − 1, N − 1) respectively.
Consider the grid of characters given below. Given the location (1, 2) the length of a side of the largest
square is 3.
abbbaaaaaa
abbbaaaaaa
abbbaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaccaaaaaa
aaccaaaaaa

輸入說明：
The input starts with a line containing a single integer T (< 21). This is followed by T test cases. The
first line of each of them will contain three integers M , N and Q (< 21) separated by a space where
M , N denotes the dimension of the grid. Next follows M lines each containing N characters. Finally,
there will be Q lines each containing two integers r and c. The value of M and N will be at most 100.

輸出說明：
For each test case in the input produce Q + 1 lines of output. In the first line print the value of M , N
and Q in that order separated by single space. In the next Q lines, output the length of a side of the
largest square in the corresponding grid for each (r, c) pair in the input.
*/
