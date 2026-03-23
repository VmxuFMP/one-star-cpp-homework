#include <stdio.h>
#pragma warning (disable: 4996)

int f(long long n) {
	if (n < 10) return n;

	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return f(sum); //再次對總和進行相同操作直到n<10
}

int main() {
	long long n;
	while (scanf("%lld", &n) == 1 && n != 0) {
		printf("%d\n", f(n));
	}
	return 0;
}

/*

* UVa 11332 題目 *
 
對於所有正整數n，我們定義一函數f(n)為n的每一個十進位數字的總和，若再把f(n)代入函數中可得最到n,f(n),f(f(n)),f(f(f(n)))...最後得到僅有一位數字的值，並定義該值為g(n)。
例如，當n = 1234567892，則：
f(n) = 1+2+3+4+5+6+7+8+9+2 = 47
f(f(n)) = 4+7 = 11
f(f(f(n))) = 1+1 = 2
所以g(1234567892) = 2

輸入說明：輸入的每一行會有一個正整數n，其值最大到2*10^9，你必須輸出g(n)。輸入是以0值做為結束，該值不需要輸出。
輸出說明：如輸入所述。

*/
