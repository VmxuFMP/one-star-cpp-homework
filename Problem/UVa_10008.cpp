#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

typedef struct {
	char alphabet;
	int count;
} Node;

int compare(const void* a, const void* b) {
	Node* s1 = (Node*)a;
	Node* s2 = (Node*)b;

	// 優先比較次數 (由大到小)
	if (s1->count != s2->count) {
		return s2->count - s1->count;
	}
	// 次數相同則比較字母 (由小到大)
	return s1->alphabet - s2->alphabet;
}

int main() {
	int n;
	char crypt[1000];
	Node stats[26];

	for (int i = 0; i < 26; i++) {
		stats[i].alphabet = 'A' + i;
		stats[i].count = 0;
	}

	if (scanf("%d", &n) != 1) return 0;
	getchar();

	while (n--) {
		if (fgets(crypt, 1000, stdin) == NULL) break;
		for (int i = 0; crypt[i] != '\0'; i++) {
			if (isalpha(crypt[i])) {
				stats[toupper(crypt[i]) - 'A'].count++;
			}
		}
	}

	qsort(stats, 26, sizeof(Node), compare);

	for (int i = 0; i < 26; i++) {
		if (stats[i].count > 0) {
			printf("%c %d\n", stats[i].alphabet, stats[i].count);
		}
	}

	return 0;
}

/*

* UVa 10008 題目 *

密碼翻譯（cryptanalysis）是指把某個人寫的密文（cryptographic writing）加以分解。這個程序通常會對密文訊息做統計分析。你的任務就是寫一個程式來對密文作簡單的分析。

輸入說明：輸入的第1列有一個正整數n，代表以下有多少列需要作分析的密文。 接下來的n列，每列含有0或多個字元（可能包含空白字元）
輸出說明：每列包含一個大寫字元（A~Z）和一個正整數。這個正整數代表該字元在輸入中出現的次數。輸入中大小寫（例如：A及a）視為相同的字元。輸出時請按照字元出現的次數由大到小排列，如果有2個以上的字元出現次數相同的話，則按照字元的大小（例如：A在H之前）由小到大排列。 請注意：如果某一字元未出現在輸入中，那他也不應出現在輸出中。

*/