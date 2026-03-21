#include <stdio.h>
#include <math.h>
#pragma warning (disable: 4996)

int main() {
	int S;
	if (scanf("%d", &S) != 1) return 0;

	while (S--) {
		int N_playercount, i_player;
		double p_possiblity;

		if (scanf("%d %lf %d", &N_playercount, &p_possiblity, &i_player) != 3) return 0;

		if (p_possiblity < 1e-9) {
			printf("0.0000\n");
		}
		else {
			double q = 1.0 - p_possiblity;
			//首項
			double a = pow(q, i_player - 1) * p_possiblity;
			//公比
			double r = pow(q, N_playercount);
			//利用等比公式
			double ans = a / (1.0 - r);
			printf("%.4f\n", ans);
		}
	}
	return 0;
}

/*

* UVa 10056 題目 *

機率一直是電腦演算法不可或缺的一部分。
在確定性算法無法在短時間內解決問題的地方，概率性算法已應運而生。
在這個問題上，我們不處理任何概率算法。我們將僅嘗試確定某個玩家的獲勝機率。

我們透過類似擲骰子的方式來玩這個遊戲 (他不像普通骰子一樣有六個面)。
如果某個特定事件發生在玩家擲骰子時 (例如獲得數字3，獲得綠色的一面或其他任何東西)，則宣佈為獲勝者。

此遊戲可以有N個玩家。
第一個玩家將擲骰子，然後第二個玩家，最後是第N個玩家，再來是第一個玩家，依此類推。
當玩家獲得期望的結果時，宣佈為獲勝者，比賽停止。
您必須確定其中一名 (第i名) 的獲勝機率。

輸入說明：一開始有一個整數S (S ≤ 1000)，表示接下來有多少組輸入。接下來的S行。 每行包含一個整數N (N ≤ 1000)，一個浮點數p，一個整數i。N表示玩家數，p表示一次成功事件發生的機率，i (i ≤ N) 表示要確定獲勝機率的玩家的序列 (序列號碼從1到N)。(如果成功事件代表獲得數字3，則p是在一次投擲的獲得數字3的機率)。例如：一個正常骰子，獲得數字3的機率為1/6輸入不會有不合理的 p 值。
輸出說明：對於每組輸入，輸出第i個玩家獲勝的機率。機率精確到小數點後四位。

*/
