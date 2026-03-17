#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[3005];
		bool exists[3005] = { false };

		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}

		if (n == 1) {
			printf("Jolly\n");
			continue;
		}

		bool IsJolly = true;
		int count = 0;
		for (int i = 0; i < n - 1; i++) {
			int diff = abs(a[i] - a[i + 1]);

			if (diff >= 1 && diff <= n - 1 && !exists[diff]) {
				exists[diff] = true;
				count++;
			}
			else {
				IsJolly = false;
			}
		}

		if (IsJolly == true && count == n - 1) {
			printf("Jolly\n");
		}
		else {
			printf("Not jolly\n");
		}
	}
	return 0;
}

/*

* UVa 10038 題目 *

有n個整數的序列我們稱為jolly jumper，如果相鄰的2個數其差的絕對值恰好為1到n-1。例如：

1 4 2 3

就是jolly jumper（n=4）。因為相鄰2數的差的絕對值為3,2,1，就是1到n-1。但是

1 4 2 -1 6 

不是jolly jumper（n=5）。因為相鄰2數的差的絕對值為3,2,3,7，並非1到n-1。

你的任務是寫一個程式來判斷一個整數序列是否為jolly jumper。

輸入說明：每組測試資料一列，第一個正整數為 n（n < 3000），代表此整數序列的長度。接下來有n個整數，代表此整數序列。請參考Sample Input。
輸出說明：對每一組測試資料，輸出此整數序列是否為jolly jumper。請參考Sample Output。

*/
