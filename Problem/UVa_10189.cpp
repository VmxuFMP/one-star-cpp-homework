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
