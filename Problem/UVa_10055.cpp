#include <stdio.h>
#include <math.h>
#pragma warning (disable: 4996)

int main() {
	long long Hashmat, Enemy;

	while (scanf("%lld %lld", &Hashmat, &Enemy) == 2){
		if (Hashmat > Enemy) {
			printf("%lld", Hashmat - Enemy);
		}
		if (Enemy > Hashmat) {
			printf("%lld", Enemy - Hashmat);
		}
	}
	return 0;
}

/*

* UVa 10055 題目 *

Hashmat是一個勇敢的將領，他帶著年輕的士兵從這個城市移動到另一個城市與敵人對抗。在打仗之前他會計算己方與敵方士兵的數目差距，來決定是要開打或不開打。Hashmat的士兵數絕不會比敵人的士兵數大。

輸入說明：每組測試資料1列，有2個整數，代表Hashmat及敵人的士兵數或反之。這些數不會超過2^63。
輸出說明：對每組測試資料請輸出Hashmat與敵人士兵數目的差（正數）。

*/
