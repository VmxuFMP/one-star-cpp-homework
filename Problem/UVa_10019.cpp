#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable: 4996)

int countOnes(int x) {
	int count = 0;
	while (x > 0) {
		if (x % 2 == 1) count++;
		x /= 2;
	}
	return count;
}

int main() {
	int T, N;
	if(scanf("%d", &T) != 1) return 0;

	while (T--) {
		scanf("%d", &N);
		
		int b1 = countOnes(N);
		
		int b2 = 0;
		int temp = N;
		while (temp > 0) {
			int digit = temp % 10;
			b2 += countOnes(digit);
			temp /= 10;
		}
		
		printf("%d %d\n", b1, b2);
	}
	return 0;
}

/* 

* UVa 10019 題目 *

一位來自墨西哥蒙特瑞技術研究學院(ITESM Campus Monterrey)的學生想發表一種新的數值加密演算法。
演算法步驟如下：

1. 讀入一個整數N，N為欲加密的數字：N = 265
2. 將N當作十進位的數值：X1 = 265(decimal)
3. 把X1由十進制轉為二進制：X1 = 100001001(binary)
4. 計算二進制的X1有幾個1：b1 = 3
5. 把N當作十六進位數值：X2 = 265(hexadecimal)
6. 把X2由十六進制轉為二進制：X2 = 1001100101(binary)
7. 計算二進制的X2有幾個1：b2 = 5
8. 最後的編碼為N xor (b1*b2)：265 xor (3*5) = 262

這位學生並未通過這次的計算機組識考試，所以他請求校方在ACM的試題上出一題計算共有幾個位元1的題目，好讓他能順利發表他的數值加密演算法。
你必須寫一個程式能讀入一個整數，然後輸出該整數的b1, b2值。

輸入說明：第一行包含一個數字T (0 < T ≤ 1000)，代表有幾組測資。接下來的T行，每行包含一個數字N (decimal)(0 < N ≤ 9999)，N代表學生要加密的數字。
輸出說明：對於每組測資，輸出數字b1和b2，b1和b2請用空白分隔。

*/
