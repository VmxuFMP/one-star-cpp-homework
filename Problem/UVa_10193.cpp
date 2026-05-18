#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(const string& binStr) {
	int decimalValue = 0;
	for (char c : binStr) {
		decimalValue = decimalValue * 2 + (c - '0');
	}
	return decimalValue;
} //備用

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int N;
	if(!(cin >> N)) return 0;

	for(int i = 1; i <= N; i++) {
		string s1, s2;
		cin >> s1 >> s2;

		int num1 = stoi(s1, nullptr, 2);
		int num2 = stoi(s2, nullptr, 2);

		int g = gcd(num1, num2);

		cout << "Pair #" << i << ": ";
		if (g > 1) {
			cout << "All you need is love!" << endl;
		}
		else {
			cout << "Love is not all you need!" << endl;
		}
	}	
	return 0;
}
