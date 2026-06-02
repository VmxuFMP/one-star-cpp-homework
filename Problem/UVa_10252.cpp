#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		vector<int> count1(26, 0);
		vector<int> count2(26, 0);

		for (char c : s1) {
			if (c >= 'a' && c <= 'z') {
				count1[c - 'a']++;
			}
		}

		for (char c : s2) {
			if (c >= 'a' && c <= 'z') {
				count2[c - 'a']++;
			}
		}

		for (int i = 0; i < 26; i++) {
			int common_times = min(count1[i], count2[i]);
			
			for (int j = 0; j < common_times; j++) {
				cout << (char)('a' + i);
			}
		}

		cout << "\n";
	}
	return 0;
}


/*
UVa 10252 題目

給定兩個由小寫字母組成的字串a和b。
印出最長的小寫字串x，使得x經過重新排列後為a的子序列，且x經過重新排列後為b的子序列。

輸入說明：
輸入包含多行輸入。
連續的兩行為一組，第一行為字串a，第二行為字串b
1~2行為一組輸入，3~4行為一組輸入，依此類推。
每個字串最多包涵1000個小寫字母。

輸出說明：
對於每組輸入，輸出本題要求a和b的x
如果有多組符合的x
請印出字母順序由小到大排列的那一個。
*/
