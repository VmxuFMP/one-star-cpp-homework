#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable: 4996)

typedef struct {
	int ascii;
	int freq;
} Node;

int compare(const void* a, const void* b) {
	Node* n1 = (Node*)a;
	Node* n2 = (Node*)b;
	if (n1->freq != n2->freq)
		return n1->freq - n2->freq;
	return n2->ascii - n1->ascii;
} //次數升冪，ASCII 降冪

int main() {
	char sample[1005];
	int space = 1;
	while (fgets(sample, 1005, stdin)) {
		if (!space) printf("\n"); // 第一組之後，每組前印空行
		space = 0;

		Node data[256];
		for (int i = 0; i < 256; i++) {
			data[i].ascii = i;
			data[i].freq = 0;
		}

		int len = strlen(sample);
		for (int i = 0; i < len; i++) {
			if (sample[i] > 32 && sample[i] < 128) { // 統計範圍內的 ASCII
				data[(int)sample[i]].freq++;
			}
		}

		qsort(data, 256, sizeof(Node), compare);

		for (int i = 0; i < 256; i++) {
			if (data[i].freq > 0) {
				printf("%d %d\n", data[i].ascii, data[i].freq);
			}
		}
	}
	return 0;
}

/*

* UVa 10062 題目 *

給你一列文字，請你找出各字元出現的次數。

輸入說明：每筆測試資料一列。每列最大長度為1000。
輸出說明：對每一列輸入，請輸出各字元的ASCII值及其出現的次數。請根據出現的次數由小到大輸出。如果有2個以上的字元有相同的次數，則ASCII值較大的先輸出。 測試資料間請空一列，參考Sample Output

*/
