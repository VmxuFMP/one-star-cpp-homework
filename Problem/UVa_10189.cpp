#include <iostream>
#include <string>	
#include <vector>

using namespace std;

int main() {
	int k = 1;
	int n, m;

	while (cin >> n >> m && (n != 0 && m != 0)) {
		if (k > 1) cout << endl;
		char grid[102][102];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> grid[i][j];
			}
		}

		int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
		int dy[] = { 1, 0, -1, 1, -1, 1, 0, -1 };

		cout << "Field #" << k << ":" << "\n";

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (grid[i][j] == '*') {
					cout << '*';
				}
				else {
					int count = 0;
					for (int d = 0; d < 8; d++) {
						int ni = i + dx[d];
						int nj = j + dy[d];
						if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*') {
							count++;
						}
					}
					cout << count;
				}
			}
			cout << endl;
		}
		k++;
	}
	return 0;
}

/*
UVa 10189 題目

您玩過《踩地雷》嗎？這是一款可愛的小遊戲，遊戲的目標是找到所有M×N地圖內的地雷。
為了幫助您，遊戲在一個正方形中顯示一個數字，告訴您該正方形附近有多少個地雷。

例如，假設下面的4×4的地圖內帶有2個地雷(以"*"字元表示)。

*	.	.	.
.	.	.	.
.	*	.	.
.	.	.	.
如果我們根據上述作法，將遊戲提示數字填入，則結果將為：

*	1	0	0
2	2	1	0
1	*	1	0
1	1	1	0
當然，您可能已經注意到，每個正方形內的數字最多為8(因為最多有8個正方形相鄰)。

輸入說明：
輸入將包含多組測資。
每組測資第一行包含兩個整數n和m (0 < n, m ≤ 100)，代表地圖大小。
如果n = m = 0代表輸入結束。
接下來的n行，每行m個字元，代表整張地圖。
每個安全方塊用"."字元表示，每個地雷方塊用"*"字元表示。

輸出說明：
對於每組測資。
輸出第一行為"Field #k:"，k代表測資編號。
接下來輸出題示後的遊戲地圖。
每筆測資間請用空白行分隔。
*/
