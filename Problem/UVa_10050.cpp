#include <stdio.h>
#include <stdbool.h>
#pragma warning (disable: 4996)

int main() {
	int T;
	if (scanf("%d", &T) != 1) return 0; //總共T組測資

	for (int i = 0; i < T; i++) {
		int N;
		if (scanf("%d", &N) != 1) return 0; //模擬的天數

		int P;
		if (scanf("%d", &P) != 1) return 0; //政黨的數量

		int partyHartal[100];
		for (int i = 0; i < P; i++) {
			scanf("%d", &partyHartal[i]);
		}

		bool isHartal[3651] = { false };
		int hartalcount = 0;

		for (int i = 0; i < P; i++) {
			int gap = partyHartal[i];

			for (int day = gap; day <= N; day = day + gap) {
				if (day % 7 != 6 && day % 7 != 0) {
					if (!isHartal[day]) {
						isHartal[day] = true;
						hartalcount++;
					}
				}
			}
		}
		printf("%d\n", hartalcount);
	}
	return 0;
}

/*

* UVa 10050 題目 *

一個社會研究組織採用了一組簡單的參數來模擬我們國家政黨運作的行為。
參數之一是一個正整數h，h稱為罷會(hartal)參數，它表示同一個政黨連續兩次連續罷會的間隔天數。
儘管該參數有點過於簡單，但還是能用於預測政黨罷會造成的影響。

以下範例為您說明：
考慮現在有三個政黨。假設h1 = 3，h2 = 4，h3 = 8，其中hi是第i方的罷會參數。
現在，我們將模擬這三個方在N = 14天的罷會行為。
模擬的起始天一定是星期天，並假設在每週的假日(星期五和星期六)不會有任何罷會情形。

         1    2    3    4    5    6    7    8    9    10    11    12    13    14
Days
         Su   Mo   Tu   We   Th   Fr   Sa   Su   Mo   Tu    We    Th    Fr    Sa
Party 1             x              x              x                x
Party 2                  x                   x                     x
Party 3                                      x
Hartals             1    2                   3    4                5

上面的模擬顯示，在14天內將會罷會5天(分別在第3、4、8、9和12天)。
第6天沒有罷會，因為它屬於假日(星期五)。由此可知我們在2週內損失了5個工作天。

在這個問題中，考慮到多個政黨的罷會參數和天數N，您的工作是計算出這N天內我們因為罷會損失多少工作天。

輸入說明：輸入第一行有一個整數T，代表有T組測資。每組測資第一行包含一個整數N (7 ≤ N ≤ 3650)，N代表模擬的天數。下一行包含一個整數P (1 ≤ P ≤ 100)，表示有幾個政黨。接下來的P行，第i行包含一個正整數hi(永遠不會是7的倍數)，代表第i個政黨的罷會參數。
輸出說明：對於每組測資，輸出這N天內因為罷會損失多少工作天。

*/
