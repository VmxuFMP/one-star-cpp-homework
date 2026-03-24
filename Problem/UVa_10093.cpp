#include <stdio.h>
#pragma warning (disable: 4996)

int get_value(char c) {
	if (c >= '0' && c <= '9') return c - '0';
	if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
	if (c >= 'a' && c <= 'z') return c - 'a' + 36;
	return -1;
}
int main() {
	char str[10005];

	while (scanf("%s", str) == 1) {
		int sum = 0;
		int max_val = 1; //至少從 2 進位開始 (max_val + 1 = 2)

		for (int i = 0; str[i] != '\0'; i++) {
			int v = get_value(str[i]);
			if (v == -1) continue;

			sum = sum + v;
			if (v > max_val) max_val = v; //紀錄出現過最大的數字
		}

		int ans = -1;
		for (int R = max_val + 1; R <= 62; R++) {
			if (sum % (R - 1) == 0) {
				ans = R;
				break;
			}
		}

		if (ans != -1) printf("%d\n", ans);
		else printf("such number is impossible!\n");
	}
	return 0;
}

/*

* UVa 10093 題目 *
 
 你聽說過「每個正常數制的基數都是10」這個事實嗎？當然，我不是在談論像Stern-Brockot數制這樣的數制。這個問題與這個事實無關，但可能有一些相似之處。 給定一個基於N的整數R，並且保證R可被(N-1)整除。你需要打印出最小可能的N值。N的範圍為2 ≤ N ≤ 62，62進制數字系統的數字符號為(0..9和A..Z和a..z)。類似地，61進制數字系統的數字符號為0..9和A..Z和a..y，以此類推。

 輸入說明：輸入文件中的每一行都將包含一個任意整數基數（2..62）的整數（根據數學定義）。你需要確定在給定條件下該數字的最小可能基數是多少。不會給出無效的數字作為輸入。
 輸出說明：如果不可能滿足這樣的條件，輸出"such number is impossible!"對於每一行輸入，輸出只會有單獨的一行。輸出將始終以十進制數字系統呈現。

*/
