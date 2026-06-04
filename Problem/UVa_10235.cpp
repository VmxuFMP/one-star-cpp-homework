#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	int sqrtN = sqrt(n);
	for (int i = 3; i <= sqrtN; i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int reverse_num(int n) {
	int rev = 0;
	while (n > 0) {
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	return rev;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	while (cin >> num) {
		if (!is_prime(num)) {
			cout << num << " is not prime." << "\n";
		}
		else {
			int revN = reverse_num(num);
			if (num != revN && is_prime(revN)) {
				cout << num << " is emirp." << "\n";
			}
			else {
				cout << num << " is prime." << "\n";
			}
		}
	}
	return 0;
}

/*
UVa 10235 題目

一個比 1 大的整數如果只有 1 和他本身自己共 2 個因數，我們稱這個數為質數（prime number）。多年來質數一直被數學家們研究著。
質數也常被應用在密碼學和編碼理論中。

那麼你曾經把質數倒轉過來嗎？對大部分的質數來說，你將會得到一個組合數（例如：43 變成 34）現在，我們要定義 Emirp（就是把 Prime 反過來拼）：
如果你把一個質數反過來之後，他仍然是一個質數，並且和原來那個質數不同，那我們就稱這個數為 emirp number。
例如：17 是一個emirp，因為 17 和 71 都是質數。
在這個問題中，你必須要決定某一個整數 N 是非質數，質數，或 emirp。你可以假設 1<N<1000000。

輸入說明：
輸入的每一行測試資料有 1 個整數 N

輸出說明
對每一輸入 N，輸出以下的訊息：
1. "N is not prime."，如果 N 不是一個質數
2. "N is prime."，如果 N 是一個質數，但是不是一個 Emirp
3. "N is emirp."，如果 N 是一個 emirp
*/
