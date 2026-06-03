#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int s, d;
		cin >> s >> d;

		int a, b;
		a = (s + d) / 2;
		b = s - a;

		if (s < d || (s + d) % 2 != 0) {
			cout << "impossible" << "\n";
		}
		else {
			cout << a << " " << b << "\n";
		}
	}
	return 0;
}

/*
UVa 10812 題目

Superbowl Sunday is nearly here. In order to pass the time waiting
for the half-time commercials and wardrobe malfunctions, the local
hackers have organized a betting pool on the game. Members place
their bets on the sum of the two nal scores, or on the absolute
difference between the two scores.
Given the winning numbers for each type of bet, can you deduce
the nal scores?

輸入說明：
The rst line of input contains n, the number of test cases. n lines
follow, each representing a test case. Each test case gives s and d,
non-negative integers representing the sum and (absolute) difference between the two final scores.

輸出說明：
For each test case, output a line giving the two final scores, largest first. If there are no such scores,
output a line containing \impossible". Recall that football scores are always non-negative integers.
*/
