#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

int main() {
	long long a, b;

	while (scanf("%lld %lld", &a, &b) == 2) {
		if (a == 0 && b == 0) {
			return 0;
		}
		int carry = 0;
		int c = 0; // 傳遞給下一位的進位值 (0 或 1)

		while (a > 0 || b > 0) {
			if ((a % 10) + (b % 10) + c >= 10) {
				carry++;
				c = 1; // 記錄有進位，下一位要加 1
			}
			else {
				c = 0; // 記錄沒進位
			}
			a = a / 10;
			b = b / 10;
		}
		if (carry == 0) {
			printf("No carry operation.\n");
		} //當carry是0輸出No carry operation
		else if (carry == 1) {
			printf("1 carry operation.\n");
		} //當carry是1輸出1 carry operation
		else {
			printf("%d carry operations.\n", carry);
		} //當carry不是0或1輸出 總個數的 carry operations
	}
	return 0;
}
