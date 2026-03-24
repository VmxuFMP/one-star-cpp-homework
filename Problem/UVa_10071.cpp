#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	int v, t;
	int dis;
	while (scanf("%d %d", &v, &t) == 2) {
		dis = v * 2 * t;
		printf("%d\n", dis);
	}
	return 0;
}

/*

* UVa 10071 題目 *

某一個粒子有一初速度和等加速度。假設在 t 秒後此粒子的速度為 v ，請問這個粒子在 2t 秒後所經過的位移是多少。

輸入說明：每組測試資料1列，有2個整數，分別代表 v（-100 <= v <=100）和 t（0 <= t <= 200）。
輸出說明：對每組測試資料請輸出這個粒子在 2t 秒後所經過的位移是多少。

*/
