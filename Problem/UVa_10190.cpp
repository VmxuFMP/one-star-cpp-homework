#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long n, m;

	while (cin >> n >> m) {
		vector<long long> a;
		bool isBoring = false;

		if (m < 2 || n < 2 || n < m) {
			isBoring = true;
		}
		else {
			a.push_back(n);
			while (n > 1) {
				if (n % m != 0) {
					isBoring = true;
					break;
				}
				n = n / m;
				a.push_back(n);
			}
		}

		if (isBoring || a.back() != 1) {
			cout << "Boring!" << endl;
		}
		else {
			for (int i = 0; i < a.size(); i++) {
				cout << a[i] << (i == a.size() - 1 ? "" : " ");
			}
			cout << "\n";
		}
	}
	return 0;
}
