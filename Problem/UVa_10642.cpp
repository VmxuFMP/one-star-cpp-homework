#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	int T;
	if (scanf("%d", &T) != 1) return 0;

	for(int i = 1; i <= T; i++){
		long long x1, y1, x2, y2;
		scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

		long long S1 = x1 + y1;
		long long pos1 = S1 * (S1 + 1) / 2 + x1;

		long long S2 = x2 + y2;
		long long pos2 = S2 * (S2 + 1) / 2 + x2;

		printf("Case %d: %lld\n",i, pos2 - pos1);
	}
	return 0;
}

/*

* UVa 10642 題目 *

下面這張圖，每個圓都有一個坐標，根據笛卡爾坐標系，您可以按照以下所示的箭頭路徑從一個圓圈移動到另一個圓圈。

total_number_of_step(s)_needed = number_of_intermediate_circles_you_pass + 1

例如，要從 (0, 3) 到 (3, 0)，您必須經過兩個中間圓 (1, 2) 和 (2, 1)。 所以，
在這種情況下，所需的總步數是 2 + 1 = 3。

輸入說明：第一行為一個整數 n 代表測試資料數量接下來 n 行，每行包含 4 個整數 x1, y1, x2, y2 (0 ≤ x1, y1, x2, y2 ≤ 100000)，(x1, y1) 代表起始座標，(x2, y2) 代表目標座標
輸出說明：對於每筆測試資料，請照格式輸出是第幾筆。以及要花費的最小步數

*/
