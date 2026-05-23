#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test_cases;
	if (cin >> test_cases) {
		string dummy;
		getline(cin, dummy);
		getline(cin, dummy);

		for (int i = 0; i < test_cases; i++) {
			if (i > 0) {
				cout << "\n";
			}
			map<string, int> tree_count;
			string tree_name;
			int total_trees = 0;

			while (getline(cin, tree_name) && !tree_name.empty()) {
				tree_count[tree_name]++;
				total_trees++;
			}

			cout << fixed << setprecision(4);

			for (auto const& p : tree_count) {
				double percentage = (double)p.second / total_trees * 100.0;
				cout << p.first << " " << percentage << "\n";
			}
		}
	}
	return 0;
}

/*
UVa 10226 題目

美國國家資源局使用衛星影像技術來調查森林中的樹種，你的任務就是根據輸入的樹木名稱，計算各樹種所佔的百分比。

輸入說明：
輸入的第1列有一個正整數n，代表以下有多少組測試資料。空一列之後才是測試資料。
每組測試資料含有一或多列（不會超過1000000列），每列有一樹木的名稱（最多30個字元）。測試資料間有一空白列。請參考Sample input

輸出說明：
對每一組測試資料，輸出各樹種名稱（樹種不會超過10000種，按數種名稱字典順序排列）及所佔的比例（到小數點後4位）。
測試資料間亦請空一列。參考Sample Output
*/
