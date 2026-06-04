#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int N, num, cases = 1;
	while (cin >> N) {
		bool is_b2 = true;
		vector<int> seq;
		set<int> existlist;

		for (int i = 1; i <= N; i++) {
			cin >> num;
			seq.push_back(num);
		}
		if (N > 0 && seq.at(0) < 1) {
			is_b2 = false;
		} //首相 不大於等於1

		for (int i = 0; i < N - 1; i++){
			if(seq.at(i + 1) <= seq.at(i)){
				is_b2 = false;
			}
		} //若不是從小排到大 則不是B2-Sequence

		for (int i = 0; i < N; i++) {
			for (int j = i; j < N; j++) {
				int pairwisesums = seq.at(i) + seq.at(j);
				if (existlist.count(pairwisesums)) {
					is_b2 = false;
					break;
				}
				existlist.insert(pairwisesums);
			}
		}
		if (is_b2) {
			cout << "Case #" << cases++ << ": It is a B2-Sequence.";
			cout << "\n";
			cout << "\n";
		}
		else {
			cout << "Case #" << cases++ << ": It is not a B2-Sequence.";
			cout << "\n";
			cout << "\n";
		}
	}
	return 0;
}

/*
UVa 11063 題目

A B2-Sequence is a sequence of positive integers 1 ≤ b1 < b2 < b3 . . . such that all pairwise sums bi + bj ,
where i ≤ j, are different.
Your task is to determine if a given sequence is a B2-Sequence or not.

輸入說明：
Each test case starts with 2 ≤ N ≤ 100, the number of elements in a sequence. Next line will have N
integers, representing the value of each element in the sequence. Each element bi is an integer such that
bi ≤ 10000. There is a blank line after each test case. The input is terminated by end of file (EOF).

輸出說明：
For each test case you must print the number of the test case, starting from 1, and a message indicating
if the corresponding sequence it is a B2-Sequence or not. See the sample output below. After each test
case you must print a blank line.
*/
